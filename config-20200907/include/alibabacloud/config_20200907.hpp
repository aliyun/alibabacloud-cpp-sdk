// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CONFIG20200907_H_
#define ALIBABACLOUD_CONFIG20200907_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Config20200907 {
class ResourceDirectoryFolderNode : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<vector<ResourceDirectoryFolderNode>> children{};
  shared_ptr<string> displayName{};
  shared_ptr<string> folderId{};
  shared_ptr<string> folderName{};
  shared_ptr<string> parentFolderId{};

  ResourceDirectoryFolderNode() {}

  explicit ResourceDirectoryFolderNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (children) {
      vector<boost::any> temp1;
      for(auto item1:*children){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Children"] = boost::any(temp1);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (folderName) {
      res["FolderName"] = boost::any(*folderName);
    }
    if (parentFolderId) {
      res["ParentFolderId"] = boost::any(*parentFolderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("Children") != m.end() && !m["Children"].empty()) {
      if (typeid(vector<boost::any>) == m["Children"].type()) {
        vector<ResourceDirectoryFolderNode> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Children"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ResourceDirectoryFolderNode model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        children = make_shared<vector<ResourceDirectoryFolderNode>>(expect1);
      }
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("FolderName") != m.end() && !m["FolderName"].empty()) {
      folderName = make_shared<string>(boost::any_cast<string>(m["FolderName"]));
    }
    if (m.find("ParentFolderId") != m.end() && !m["ParentFolderId"].empty()) {
      parentFolderId = make_shared<string>(boost::any_cast<string>(m["ParentFolderId"]));
    }
  }


  virtual ~ResourceDirectoryFolderNode() = default;
};
class ActiveAggregateConfigRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> configRuleIds{};

  ActiveAggregateConfigRulesRequest() {}

  explicit ActiveAggregateConfigRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (configRuleIds) {
      res["ConfigRuleIds"] = boost::any(*configRuleIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("ConfigRuleIds") != m.end() && !m["ConfigRuleIds"].empty()) {
      configRuleIds = make_shared<string>(boost::any_cast<string>(m["ConfigRuleIds"]));
    }
  }


  virtual ~ActiveAggregateConfigRulesRequest() = default;
};
class ActiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList : public Darabonba::Model {
public:
  shared_ptr<string> configRuleId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  ActiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList() {}

  explicit ActiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ActiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList() = default;
};
class ActiveAggregateConfigRulesResponseBodyOperateRuleResult : public Darabonba::Model {
public:
  shared_ptr<vector<ActiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList>> operateRuleItemList{};

  ActiveAggregateConfigRulesResponseBodyOperateRuleResult() {}

  explicit ActiveAggregateConfigRulesResponseBodyOperateRuleResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateRuleItemList) {
      vector<boost::any> temp1;
      for(auto item1:*operateRuleItemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OperateRuleItemList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperateRuleItemList") != m.end() && !m["OperateRuleItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["OperateRuleItemList"].type()) {
        vector<ActiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OperateRuleItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ActiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operateRuleItemList = make_shared<vector<ActiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList>>(expect1);
      }
    }
  }


  virtual ~ActiveAggregateConfigRulesResponseBodyOperateRuleResult() = default;
};
class ActiveAggregateConfigRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ActiveAggregateConfigRulesResponseBodyOperateRuleResult> operateRuleResult{};
  shared_ptr<string> requestId{};

  ActiveAggregateConfigRulesResponseBody() {}

  explicit ActiveAggregateConfigRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateRuleResult) {
      res["OperateRuleResult"] = operateRuleResult ? boost::any(operateRuleResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperateRuleResult") != m.end() && !m["OperateRuleResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["OperateRuleResult"].type()) {
        ActiveAggregateConfigRulesResponseBodyOperateRuleResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OperateRuleResult"]));
        operateRuleResult = make_shared<ActiveAggregateConfigRulesResponseBodyOperateRuleResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ActiveAggregateConfigRulesResponseBody() = default;
};
class ActiveAggregateConfigRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ActiveAggregateConfigRulesResponseBody> body{};

  ActiveAggregateConfigRulesResponse() {}

  explicit ActiveAggregateConfigRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ActiveAggregateConfigRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ActiveAggregateConfigRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ActiveAggregateConfigRulesResponse() = default;
};
class AttachAggregateConfigRuleToCompliancePackRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> compliancePackId{};
  shared_ptr<string> configRuleIds{};

  AttachAggregateConfigRuleToCompliancePackRequest() {}

  explicit AttachAggregateConfigRuleToCompliancePackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (configRuleIds) {
      res["ConfigRuleIds"] = boost::any(*configRuleIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("ConfigRuleIds") != m.end() && !m["ConfigRuleIds"].empty()) {
      configRuleIds = make_shared<string>(boost::any_cast<string>(m["ConfigRuleIds"]));
    }
  }


  virtual ~AttachAggregateConfigRuleToCompliancePackRequest() = default;
};
class AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList : public Darabonba::Model {
public:
  shared_ptr<string> configRuleId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList() {}

  explicit AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList() = default;
};
class AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult : public Darabonba::Model {
public:
  shared_ptr<vector<AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList>> operateRuleItemList{};

  AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult() {}

  explicit AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateRuleItemList) {
      vector<boost::any> temp1;
      for(auto item1:*operateRuleItemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OperateRuleItemList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperateRuleItemList") != m.end() && !m["OperateRuleItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["OperateRuleItemList"].type()) {
        vector<AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OperateRuleItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operateRuleItemList = make_shared<vector<AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList>>(expect1);
      }
    }
  }


  virtual ~AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult() = default;
};
class AttachAggregateConfigRuleToCompliancePackResponseBody : public Darabonba::Model {
public:
  shared_ptr<AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult> operateRuleResult{};
  shared_ptr<string> requestId{};

  AttachAggregateConfigRuleToCompliancePackResponseBody() {}

  explicit AttachAggregateConfigRuleToCompliancePackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateRuleResult) {
      res["OperateRuleResult"] = operateRuleResult ? boost::any(operateRuleResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperateRuleResult") != m.end() && !m["OperateRuleResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["OperateRuleResult"].type()) {
        AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OperateRuleResult"]));
        operateRuleResult = make_shared<AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AttachAggregateConfigRuleToCompliancePackResponseBody() = default;
};
class AttachAggregateConfigRuleToCompliancePackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AttachAggregateConfigRuleToCompliancePackResponseBody> body{};

  AttachAggregateConfigRuleToCompliancePackResponse() {}

  explicit AttachAggregateConfigRuleToCompliancePackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachAggregateConfigRuleToCompliancePackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachAggregateConfigRuleToCompliancePackResponseBody>(model1);
      }
    }
  }


  virtual ~AttachAggregateConfigRuleToCompliancePackResponse() = default;
};
class AttachConfigRuleToCompliancePackRequest : public Darabonba::Model {
public:
  shared_ptr<string> compliancePackId{};
  shared_ptr<string> configRuleIds{};

  AttachConfigRuleToCompliancePackRequest() {}

  explicit AttachConfigRuleToCompliancePackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (configRuleIds) {
      res["ConfigRuleIds"] = boost::any(*configRuleIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("ConfigRuleIds") != m.end() && !m["ConfigRuleIds"].empty()) {
      configRuleIds = make_shared<string>(boost::any_cast<string>(m["ConfigRuleIds"]));
    }
  }


  virtual ~AttachConfigRuleToCompliancePackRequest() = default;
};
class AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList : public Darabonba::Model {
public:
  shared_ptr<string> configRuleId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList() {}

  explicit AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList() = default;
};
class AttachConfigRuleToCompliancePackResponseBodyOperateRuleResult : public Darabonba::Model {
public:
  shared_ptr<vector<AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList>> operateRuleItemList{};

  AttachConfigRuleToCompliancePackResponseBodyOperateRuleResult() {}

  explicit AttachConfigRuleToCompliancePackResponseBodyOperateRuleResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateRuleItemList) {
      vector<boost::any> temp1;
      for(auto item1:*operateRuleItemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OperateRuleItemList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperateRuleItemList") != m.end() && !m["OperateRuleItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["OperateRuleItemList"].type()) {
        vector<AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OperateRuleItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operateRuleItemList = make_shared<vector<AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList>>(expect1);
      }
    }
  }


  virtual ~AttachConfigRuleToCompliancePackResponseBodyOperateRuleResult() = default;
};
class AttachConfigRuleToCompliancePackResponseBody : public Darabonba::Model {
public:
  shared_ptr<AttachConfigRuleToCompliancePackResponseBodyOperateRuleResult> operateRuleResult{};
  shared_ptr<string> requestId{};

  AttachConfigRuleToCompliancePackResponseBody() {}

  explicit AttachConfigRuleToCompliancePackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateRuleResult) {
      res["OperateRuleResult"] = operateRuleResult ? boost::any(operateRuleResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperateRuleResult") != m.end() && !m["OperateRuleResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["OperateRuleResult"].type()) {
        AttachConfigRuleToCompliancePackResponseBodyOperateRuleResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OperateRuleResult"]));
        operateRuleResult = make_shared<AttachConfigRuleToCompliancePackResponseBodyOperateRuleResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AttachConfigRuleToCompliancePackResponseBody() = default;
};
class AttachConfigRuleToCompliancePackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AttachConfigRuleToCompliancePackResponseBody> body{};

  AttachConfigRuleToCompliancePackResponse() {}

  explicit AttachConfigRuleToCompliancePackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachConfigRuleToCompliancePackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachConfigRuleToCompliancePackResponseBody>(model1);
      }
    }
  }


  virtual ~AttachConfigRuleToCompliancePackResponse() = default;
};
class CreateAggregateCompliancePackRequestConfigRulesConfigRuleParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterName{};
  shared_ptr<string> parameterValue{};

  CreateAggregateCompliancePackRequestConfigRulesConfigRuleParameters() {}

  explicit CreateAggregateCompliancePackRequestConfigRulesConfigRuleParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterName) {
      res["ParameterName"] = boost::any(*parameterName);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterName") != m.end() && !m["ParameterName"].empty()) {
      parameterName = make_shared<string>(boost::any_cast<string>(m["ParameterName"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~CreateAggregateCompliancePackRequestConfigRulesConfigRuleParameters() = default;
};
class CreateAggregateCompliancePackRequestConfigRules : public Darabonba::Model {
public:
  shared_ptr<string> configRuleId{};
  shared_ptr<string> configRuleName{};
  shared_ptr<vector<CreateAggregateCompliancePackRequestConfigRulesConfigRuleParameters>> configRuleParameters{};
  shared_ptr<string> description{};
  shared_ptr<string> managedRuleIdentifier{};
  shared_ptr<long> riskLevel{};

  CreateAggregateCompliancePackRequestConfigRules() {}

  explicit CreateAggregateCompliancePackRequestConfigRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (configRuleName) {
      res["ConfigRuleName"] = boost::any(*configRuleName);
    }
    if (configRuleParameters) {
      vector<boost::any> temp1;
      for(auto item1:*configRuleParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigRuleParameters"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (managedRuleIdentifier) {
      res["ManagedRuleIdentifier"] = boost::any(*managedRuleIdentifier);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("ConfigRuleName") != m.end() && !m["ConfigRuleName"].empty()) {
      configRuleName = make_shared<string>(boost::any_cast<string>(m["ConfigRuleName"]));
    }
    if (m.find("ConfigRuleParameters") != m.end() && !m["ConfigRuleParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigRuleParameters"].type()) {
        vector<CreateAggregateCompliancePackRequestConfigRulesConfigRuleParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigRuleParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAggregateCompliancePackRequestConfigRulesConfigRuleParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configRuleParameters = make_shared<vector<CreateAggregateCompliancePackRequestConfigRulesConfigRuleParameters>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ManagedRuleIdentifier") != m.end() && !m["ManagedRuleIdentifier"].empty()) {
      managedRuleIdentifier = make_shared<string>(boost::any_cast<string>(m["ManagedRuleIdentifier"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
  }


  virtual ~CreateAggregateCompliancePackRequestConfigRules() = default;
};
class CreateAggregateCompliancePackRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> compliancePackName{};
  shared_ptr<string> compliancePackTemplateId{};
  shared_ptr<vector<CreateAggregateCompliancePackRequestConfigRules>> configRules{};
  shared_ptr<string> description{};
  shared_ptr<long> riskLevel{};

  CreateAggregateCompliancePackRequest() {}

  explicit CreateAggregateCompliancePackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (compliancePackName) {
      res["CompliancePackName"] = boost::any(*compliancePackName);
    }
    if (compliancePackTemplateId) {
      res["CompliancePackTemplateId"] = boost::any(*compliancePackTemplateId);
    }
    if (configRules) {
      vector<boost::any> temp1;
      for(auto item1:*configRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigRules"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CompliancePackName") != m.end() && !m["CompliancePackName"].empty()) {
      compliancePackName = make_shared<string>(boost::any_cast<string>(m["CompliancePackName"]));
    }
    if (m.find("CompliancePackTemplateId") != m.end() && !m["CompliancePackTemplateId"].empty()) {
      compliancePackTemplateId = make_shared<string>(boost::any_cast<string>(m["CompliancePackTemplateId"]));
    }
    if (m.find("ConfigRules") != m.end() && !m["ConfigRules"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigRules"].type()) {
        vector<CreateAggregateCompliancePackRequestConfigRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAggregateCompliancePackRequestConfigRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configRules = make_shared<vector<CreateAggregateCompliancePackRequestConfigRules>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
  }


  virtual ~CreateAggregateCompliancePackRequest() = default;
};
class CreateAggregateCompliancePackShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> compliancePackName{};
  shared_ptr<string> compliancePackTemplateId{};
  shared_ptr<string> configRulesShrink{};
  shared_ptr<string> description{};
  shared_ptr<long> riskLevel{};

  CreateAggregateCompliancePackShrinkRequest() {}

  explicit CreateAggregateCompliancePackShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (compliancePackName) {
      res["CompliancePackName"] = boost::any(*compliancePackName);
    }
    if (compliancePackTemplateId) {
      res["CompliancePackTemplateId"] = boost::any(*compliancePackTemplateId);
    }
    if (configRulesShrink) {
      res["ConfigRules"] = boost::any(*configRulesShrink);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CompliancePackName") != m.end() && !m["CompliancePackName"].empty()) {
      compliancePackName = make_shared<string>(boost::any_cast<string>(m["CompliancePackName"]));
    }
    if (m.find("CompliancePackTemplateId") != m.end() && !m["CompliancePackTemplateId"].empty()) {
      compliancePackTemplateId = make_shared<string>(boost::any_cast<string>(m["CompliancePackTemplateId"]));
    }
    if (m.find("ConfigRules") != m.end() && !m["ConfigRules"].empty()) {
      configRulesShrink = make_shared<string>(boost::any_cast<string>(m["ConfigRules"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
  }


  virtual ~CreateAggregateCompliancePackShrinkRequest() = default;
};
class CreateAggregateCompliancePackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> compliancePackId{};
  shared_ptr<string> requestId{};

  CreateAggregateCompliancePackResponseBody() {}

  explicit CreateAggregateCompliancePackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAggregateCompliancePackResponseBody() = default;
};
class CreateAggregateCompliancePackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateAggregateCompliancePackResponseBody> body{};

  CreateAggregateCompliancePackResponse() {}

  explicit CreateAggregateCompliancePackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAggregateCompliancePackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAggregateCompliancePackResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAggregateCompliancePackResponse() = default;
};
class CreateAggregateConfigRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> configRuleName{};
  shared_ptr<string> configRuleTriggerTypes{};
  shared_ptr<string> description{};
  shared_ptr<string> excludeResourceIdsScope{};
  shared_ptr<map<string, boost::any>> inputParameters{};
  shared_ptr<string> maximumExecutionFrequency{};
  shared_ptr<string> regionIdsScope{};
  shared_ptr<string> resourceGroupIdsScope{};
  shared_ptr<vector<string>> resourceTypesScope{};
  shared_ptr<long> riskLevel{};
  shared_ptr<string> sourceIdentifier{};
  shared_ptr<string> sourceOwner{};
  shared_ptr<string> tagKeyScope{};
  shared_ptr<string> tagValueScope{};

  CreateAggregateConfigRuleRequest() {}

  explicit CreateAggregateConfigRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (configRuleName) {
      res["ConfigRuleName"] = boost::any(*configRuleName);
    }
    if (configRuleTriggerTypes) {
      res["ConfigRuleTriggerTypes"] = boost::any(*configRuleTriggerTypes);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (excludeResourceIdsScope) {
      res["ExcludeResourceIdsScope"] = boost::any(*excludeResourceIdsScope);
    }
    if (inputParameters) {
      res["InputParameters"] = boost::any(*inputParameters);
    }
    if (maximumExecutionFrequency) {
      res["MaximumExecutionFrequency"] = boost::any(*maximumExecutionFrequency);
    }
    if (regionIdsScope) {
      res["RegionIdsScope"] = boost::any(*regionIdsScope);
    }
    if (resourceGroupIdsScope) {
      res["ResourceGroupIdsScope"] = boost::any(*resourceGroupIdsScope);
    }
    if (resourceTypesScope) {
      res["ResourceTypesScope"] = boost::any(*resourceTypesScope);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (sourceIdentifier) {
      res["SourceIdentifier"] = boost::any(*sourceIdentifier);
    }
    if (sourceOwner) {
      res["SourceOwner"] = boost::any(*sourceOwner);
    }
    if (tagKeyScope) {
      res["TagKeyScope"] = boost::any(*tagKeyScope);
    }
    if (tagValueScope) {
      res["TagValueScope"] = boost::any(*tagValueScope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ConfigRuleName") != m.end() && !m["ConfigRuleName"].empty()) {
      configRuleName = make_shared<string>(boost::any_cast<string>(m["ConfigRuleName"]));
    }
    if (m.find("ConfigRuleTriggerTypes") != m.end() && !m["ConfigRuleTriggerTypes"].empty()) {
      configRuleTriggerTypes = make_shared<string>(boost::any_cast<string>(m["ConfigRuleTriggerTypes"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExcludeResourceIdsScope") != m.end() && !m["ExcludeResourceIdsScope"].empty()) {
      excludeResourceIdsScope = make_shared<string>(boost::any_cast<string>(m["ExcludeResourceIdsScope"]));
    }
    if (m.find("InputParameters") != m.end() && !m["InputParameters"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["InputParameters"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      inputParameters = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("MaximumExecutionFrequency") != m.end() && !m["MaximumExecutionFrequency"].empty()) {
      maximumExecutionFrequency = make_shared<string>(boost::any_cast<string>(m["MaximumExecutionFrequency"]));
    }
    if (m.find("RegionIdsScope") != m.end() && !m["RegionIdsScope"].empty()) {
      regionIdsScope = make_shared<string>(boost::any_cast<string>(m["RegionIdsScope"]));
    }
    if (m.find("ResourceGroupIdsScope") != m.end() && !m["ResourceGroupIdsScope"].empty()) {
      resourceGroupIdsScope = make_shared<string>(boost::any_cast<string>(m["ResourceGroupIdsScope"]));
    }
    if (m.find("ResourceTypesScope") != m.end() && !m["ResourceTypesScope"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceTypesScope"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceTypesScope"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceTypesScope = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
    if (m.find("SourceIdentifier") != m.end() && !m["SourceIdentifier"].empty()) {
      sourceIdentifier = make_shared<string>(boost::any_cast<string>(m["SourceIdentifier"]));
    }
    if (m.find("SourceOwner") != m.end() && !m["SourceOwner"].empty()) {
      sourceOwner = make_shared<string>(boost::any_cast<string>(m["SourceOwner"]));
    }
    if (m.find("TagKeyScope") != m.end() && !m["TagKeyScope"].empty()) {
      tagKeyScope = make_shared<string>(boost::any_cast<string>(m["TagKeyScope"]));
    }
    if (m.find("TagValueScope") != m.end() && !m["TagValueScope"].empty()) {
      tagValueScope = make_shared<string>(boost::any_cast<string>(m["TagValueScope"]));
    }
  }


  virtual ~CreateAggregateConfigRuleRequest() = default;
};
class CreateAggregateConfigRuleShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> configRuleName{};
  shared_ptr<string> configRuleTriggerTypes{};
  shared_ptr<string> description{};
  shared_ptr<string> excludeResourceIdsScope{};
  shared_ptr<string> inputParametersShrink{};
  shared_ptr<string> maximumExecutionFrequency{};
  shared_ptr<string> regionIdsScope{};
  shared_ptr<string> resourceGroupIdsScope{};
  shared_ptr<string> resourceTypesScopeShrink{};
  shared_ptr<long> riskLevel{};
  shared_ptr<string> sourceIdentifier{};
  shared_ptr<string> sourceOwner{};
  shared_ptr<string> tagKeyScope{};
  shared_ptr<string> tagValueScope{};

  CreateAggregateConfigRuleShrinkRequest() {}

  explicit CreateAggregateConfigRuleShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (configRuleName) {
      res["ConfigRuleName"] = boost::any(*configRuleName);
    }
    if (configRuleTriggerTypes) {
      res["ConfigRuleTriggerTypes"] = boost::any(*configRuleTriggerTypes);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (excludeResourceIdsScope) {
      res["ExcludeResourceIdsScope"] = boost::any(*excludeResourceIdsScope);
    }
    if (inputParametersShrink) {
      res["InputParameters"] = boost::any(*inputParametersShrink);
    }
    if (maximumExecutionFrequency) {
      res["MaximumExecutionFrequency"] = boost::any(*maximumExecutionFrequency);
    }
    if (regionIdsScope) {
      res["RegionIdsScope"] = boost::any(*regionIdsScope);
    }
    if (resourceGroupIdsScope) {
      res["ResourceGroupIdsScope"] = boost::any(*resourceGroupIdsScope);
    }
    if (resourceTypesScopeShrink) {
      res["ResourceTypesScope"] = boost::any(*resourceTypesScopeShrink);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (sourceIdentifier) {
      res["SourceIdentifier"] = boost::any(*sourceIdentifier);
    }
    if (sourceOwner) {
      res["SourceOwner"] = boost::any(*sourceOwner);
    }
    if (tagKeyScope) {
      res["TagKeyScope"] = boost::any(*tagKeyScope);
    }
    if (tagValueScope) {
      res["TagValueScope"] = boost::any(*tagValueScope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ConfigRuleName") != m.end() && !m["ConfigRuleName"].empty()) {
      configRuleName = make_shared<string>(boost::any_cast<string>(m["ConfigRuleName"]));
    }
    if (m.find("ConfigRuleTriggerTypes") != m.end() && !m["ConfigRuleTriggerTypes"].empty()) {
      configRuleTriggerTypes = make_shared<string>(boost::any_cast<string>(m["ConfigRuleTriggerTypes"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExcludeResourceIdsScope") != m.end() && !m["ExcludeResourceIdsScope"].empty()) {
      excludeResourceIdsScope = make_shared<string>(boost::any_cast<string>(m["ExcludeResourceIdsScope"]));
    }
    if (m.find("InputParameters") != m.end() && !m["InputParameters"].empty()) {
      inputParametersShrink = make_shared<string>(boost::any_cast<string>(m["InputParameters"]));
    }
    if (m.find("MaximumExecutionFrequency") != m.end() && !m["MaximumExecutionFrequency"].empty()) {
      maximumExecutionFrequency = make_shared<string>(boost::any_cast<string>(m["MaximumExecutionFrequency"]));
    }
    if (m.find("RegionIdsScope") != m.end() && !m["RegionIdsScope"].empty()) {
      regionIdsScope = make_shared<string>(boost::any_cast<string>(m["RegionIdsScope"]));
    }
    if (m.find("ResourceGroupIdsScope") != m.end() && !m["ResourceGroupIdsScope"].empty()) {
      resourceGroupIdsScope = make_shared<string>(boost::any_cast<string>(m["ResourceGroupIdsScope"]));
    }
    if (m.find("ResourceTypesScope") != m.end() && !m["ResourceTypesScope"].empty()) {
      resourceTypesScopeShrink = make_shared<string>(boost::any_cast<string>(m["ResourceTypesScope"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
    if (m.find("SourceIdentifier") != m.end() && !m["SourceIdentifier"].empty()) {
      sourceIdentifier = make_shared<string>(boost::any_cast<string>(m["SourceIdentifier"]));
    }
    if (m.find("SourceOwner") != m.end() && !m["SourceOwner"].empty()) {
      sourceOwner = make_shared<string>(boost::any_cast<string>(m["SourceOwner"]));
    }
    if (m.find("TagKeyScope") != m.end() && !m["TagKeyScope"].empty()) {
      tagKeyScope = make_shared<string>(boost::any_cast<string>(m["TagKeyScope"]));
    }
    if (m.find("TagValueScope") != m.end() && !m["TagValueScope"].empty()) {
      tagValueScope = make_shared<string>(boost::any_cast<string>(m["TagValueScope"]));
    }
  }


  virtual ~CreateAggregateConfigRuleShrinkRequest() = default;
};
class CreateAggregateConfigRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> configRuleId{};
  shared_ptr<string> requestId{};

  CreateAggregateConfigRuleResponseBody() {}

  explicit CreateAggregateConfigRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAggregateConfigRuleResponseBody() = default;
};
class CreateAggregateConfigRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateAggregateConfigRuleResponseBody> body{};

  CreateAggregateConfigRuleResponse() {}

  explicit CreateAggregateConfigRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAggregateConfigRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAggregateConfigRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAggregateConfigRuleResponse() = default;
};
class CreateAggregatorRequestAggregatorAccounts : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountType{};

  CreateAggregatorRequestAggregatorAccounts() {}

  explicit CreateAggregatorRequestAggregatorAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
  }


  virtual ~CreateAggregatorRequestAggregatorAccounts() = default;
};
class CreateAggregatorRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateAggregatorRequestAggregatorAccounts>> aggregatorAccounts{};
  shared_ptr<string> aggregatorName{};
  shared_ptr<string> aggregatorType{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};

  CreateAggregatorRequest() {}

  explicit CreateAggregatorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorAccounts) {
      vector<boost::any> temp1;
      for(auto item1:*aggregatorAccounts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AggregatorAccounts"] = boost::any(temp1);
    }
    if (aggregatorName) {
      res["AggregatorName"] = boost::any(*aggregatorName);
    }
    if (aggregatorType) {
      res["AggregatorType"] = boost::any(*aggregatorType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorAccounts") != m.end() && !m["AggregatorAccounts"].empty()) {
      if (typeid(vector<boost::any>) == m["AggregatorAccounts"].type()) {
        vector<CreateAggregatorRequestAggregatorAccounts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AggregatorAccounts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAggregatorRequestAggregatorAccounts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aggregatorAccounts = make_shared<vector<CreateAggregatorRequestAggregatorAccounts>>(expect1);
      }
    }
    if (m.find("AggregatorName") != m.end() && !m["AggregatorName"].empty()) {
      aggregatorName = make_shared<string>(boost::any_cast<string>(m["AggregatorName"]));
    }
    if (m.find("AggregatorType") != m.end() && !m["AggregatorType"].empty()) {
      aggregatorType = make_shared<string>(boost::any_cast<string>(m["AggregatorType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~CreateAggregatorRequest() = default;
};
class CreateAggregatorShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorAccountsShrink{};
  shared_ptr<string> aggregatorName{};
  shared_ptr<string> aggregatorType{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};

  CreateAggregatorShrinkRequest() {}

  explicit CreateAggregatorShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorAccountsShrink) {
      res["AggregatorAccounts"] = boost::any(*aggregatorAccountsShrink);
    }
    if (aggregatorName) {
      res["AggregatorName"] = boost::any(*aggregatorName);
    }
    if (aggregatorType) {
      res["AggregatorType"] = boost::any(*aggregatorType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorAccounts") != m.end() && !m["AggregatorAccounts"].empty()) {
      aggregatorAccountsShrink = make_shared<string>(boost::any_cast<string>(m["AggregatorAccounts"]));
    }
    if (m.find("AggregatorName") != m.end() && !m["AggregatorName"].empty()) {
      aggregatorName = make_shared<string>(boost::any_cast<string>(m["AggregatorName"]));
    }
    if (m.find("AggregatorType") != m.end() && !m["AggregatorType"].empty()) {
      aggregatorType = make_shared<string>(boost::any_cast<string>(m["AggregatorType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~CreateAggregatorShrinkRequest() = default;
};
class CreateAggregatorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> requestId{};

  CreateAggregatorResponseBody() {}

  explicit CreateAggregatorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAggregatorResponseBody() = default;
};
class CreateAggregatorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateAggregatorResponseBody> body{};

  CreateAggregatorResponse() {}

  explicit CreateAggregatorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAggregatorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAggregatorResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAggregatorResponse() = default;
};
class CreateCompliancePackRequestConfigRulesConfigRuleParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterName{};
  shared_ptr<string> parameterValue{};

  CreateCompliancePackRequestConfigRulesConfigRuleParameters() {}

  explicit CreateCompliancePackRequestConfigRulesConfigRuleParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterName) {
      res["ParameterName"] = boost::any(*parameterName);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterName") != m.end() && !m["ParameterName"].empty()) {
      parameterName = make_shared<string>(boost::any_cast<string>(m["ParameterName"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~CreateCompliancePackRequestConfigRulesConfigRuleParameters() = default;
};
class CreateCompliancePackRequestConfigRules : public Darabonba::Model {
public:
  shared_ptr<string> configRuleId{};
  shared_ptr<string> configRuleName{};
  shared_ptr<vector<CreateCompliancePackRequestConfigRulesConfigRuleParameters>> configRuleParameters{};
  shared_ptr<string> description{};
  shared_ptr<string> managedRuleIdentifier{};
  shared_ptr<long> riskLevel{};

  CreateCompliancePackRequestConfigRules() {}

  explicit CreateCompliancePackRequestConfigRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (configRuleName) {
      res["ConfigRuleName"] = boost::any(*configRuleName);
    }
    if (configRuleParameters) {
      vector<boost::any> temp1;
      for(auto item1:*configRuleParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigRuleParameters"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (managedRuleIdentifier) {
      res["ManagedRuleIdentifier"] = boost::any(*managedRuleIdentifier);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("ConfigRuleName") != m.end() && !m["ConfigRuleName"].empty()) {
      configRuleName = make_shared<string>(boost::any_cast<string>(m["ConfigRuleName"]));
    }
    if (m.find("ConfigRuleParameters") != m.end() && !m["ConfigRuleParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigRuleParameters"].type()) {
        vector<CreateCompliancePackRequestConfigRulesConfigRuleParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigRuleParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateCompliancePackRequestConfigRulesConfigRuleParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configRuleParameters = make_shared<vector<CreateCompliancePackRequestConfigRulesConfigRuleParameters>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ManagedRuleIdentifier") != m.end() && !m["ManagedRuleIdentifier"].empty()) {
      managedRuleIdentifier = make_shared<string>(boost::any_cast<string>(m["ManagedRuleIdentifier"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
  }


  virtual ~CreateCompliancePackRequestConfigRules() = default;
};
class CreateCompliancePackRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> compliancePackName{};
  shared_ptr<string> compliancePackTemplateId{};
  shared_ptr<vector<CreateCompliancePackRequestConfigRules>> configRules{};
  shared_ptr<string> description{};
  shared_ptr<long> riskLevel{};

  CreateCompliancePackRequest() {}

  explicit CreateCompliancePackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (compliancePackName) {
      res["CompliancePackName"] = boost::any(*compliancePackName);
    }
    if (compliancePackTemplateId) {
      res["CompliancePackTemplateId"] = boost::any(*compliancePackTemplateId);
    }
    if (configRules) {
      vector<boost::any> temp1;
      for(auto item1:*configRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigRules"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CompliancePackName") != m.end() && !m["CompliancePackName"].empty()) {
      compliancePackName = make_shared<string>(boost::any_cast<string>(m["CompliancePackName"]));
    }
    if (m.find("CompliancePackTemplateId") != m.end() && !m["CompliancePackTemplateId"].empty()) {
      compliancePackTemplateId = make_shared<string>(boost::any_cast<string>(m["CompliancePackTemplateId"]));
    }
    if (m.find("ConfigRules") != m.end() && !m["ConfigRules"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigRules"].type()) {
        vector<CreateCompliancePackRequestConfigRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateCompliancePackRequestConfigRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configRules = make_shared<vector<CreateCompliancePackRequestConfigRules>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
  }


  virtual ~CreateCompliancePackRequest() = default;
};
class CreateCompliancePackShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> compliancePackName{};
  shared_ptr<string> compliancePackTemplateId{};
  shared_ptr<string> configRulesShrink{};
  shared_ptr<string> description{};
  shared_ptr<long> riskLevel{};

  CreateCompliancePackShrinkRequest() {}

  explicit CreateCompliancePackShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (compliancePackName) {
      res["CompliancePackName"] = boost::any(*compliancePackName);
    }
    if (compliancePackTemplateId) {
      res["CompliancePackTemplateId"] = boost::any(*compliancePackTemplateId);
    }
    if (configRulesShrink) {
      res["ConfigRules"] = boost::any(*configRulesShrink);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CompliancePackName") != m.end() && !m["CompliancePackName"].empty()) {
      compliancePackName = make_shared<string>(boost::any_cast<string>(m["CompliancePackName"]));
    }
    if (m.find("CompliancePackTemplateId") != m.end() && !m["CompliancePackTemplateId"].empty()) {
      compliancePackTemplateId = make_shared<string>(boost::any_cast<string>(m["CompliancePackTemplateId"]));
    }
    if (m.find("ConfigRules") != m.end() && !m["ConfigRules"].empty()) {
      configRulesShrink = make_shared<string>(boost::any_cast<string>(m["ConfigRules"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
  }


  virtual ~CreateCompliancePackShrinkRequest() = default;
};
class CreateCompliancePackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> compliancePackId{};
  shared_ptr<string> requestId{};

  CreateCompliancePackResponseBody() {}

  explicit CreateCompliancePackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCompliancePackResponseBody() = default;
};
class CreateCompliancePackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateCompliancePackResponseBody> body{};

  CreateCompliancePackResponse() {}

  explicit CreateCompliancePackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCompliancePackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCompliancePackResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCompliancePackResponse() = default;
};
class CreateConfigRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> configRuleName{};
  shared_ptr<string> configRuleTriggerTypes{};
  shared_ptr<string> description{};
  shared_ptr<string> excludeResourceIdsScope{};
  shared_ptr<map<string, boost::any>> inputParameters{};
  shared_ptr<string> maximumExecutionFrequency{};
  shared_ptr<string> regionIdsScope{};
  shared_ptr<string> resourceGroupIdsScope{};
  shared_ptr<vector<string>> resourceTypesScope{};
  shared_ptr<long> riskLevel{};
  shared_ptr<string> sourceIdentifier{};
  shared_ptr<string> sourceOwner{};
  shared_ptr<string> tagKeyScope{};
  shared_ptr<string> tagValueScope{};

  CreateConfigRuleRequest() {}

  explicit CreateConfigRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (configRuleName) {
      res["ConfigRuleName"] = boost::any(*configRuleName);
    }
    if (configRuleTriggerTypes) {
      res["ConfigRuleTriggerTypes"] = boost::any(*configRuleTriggerTypes);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (excludeResourceIdsScope) {
      res["ExcludeResourceIdsScope"] = boost::any(*excludeResourceIdsScope);
    }
    if (inputParameters) {
      res["InputParameters"] = boost::any(*inputParameters);
    }
    if (maximumExecutionFrequency) {
      res["MaximumExecutionFrequency"] = boost::any(*maximumExecutionFrequency);
    }
    if (regionIdsScope) {
      res["RegionIdsScope"] = boost::any(*regionIdsScope);
    }
    if (resourceGroupIdsScope) {
      res["ResourceGroupIdsScope"] = boost::any(*resourceGroupIdsScope);
    }
    if (resourceTypesScope) {
      res["ResourceTypesScope"] = boost::any(*resourceTypesScope);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (sourceIdentifier) {
      res["SourceIdentifier"] = boost::any(*sourceIdentifier);
    }
    if (sourceOwner) {
      res["SourceOwner"] = boost::any(*sourceOwner);
    }
    if (tagKeyScope) {
      res["TagKeyScope"] = boost::any(*tagKeyScope);
    }
    if (tagValueScope) {
      res["TagValueScope"] = boost::any(*tagValueScope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ConfigRuleName") != m.end() && !m["ConfigRuleName"].empty()) {
      configRuleName = make_shared<string>(boost::any_cast<string>(m["ConfigRuleName"]));
    }
    if (m.find("ConfigRuleTriggerTypes") != m.end() && !m["ConfigRuleTriggerTypes"].empty()) {
      configRuleTriggerTypes = make_shared<string>(boost::any_cast<string>(m["ConfigRuleTriggerTypes"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExcludeResourceIdsScope") != m.end() && !m["ExcludeResourceIdsScope"].empty()) {
      excludeResourceIdsScope = make_shared<string>(boost::any_cast<string>(m["ExcludeResourceIdsScope"]));
    }
    if (m.find("InputParameters") != m.end() && !m["InputParameters"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["InputParameters"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      inputParameters = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("MaximumExecutionFrequency") != m.end() && !m["MaximumExecutionFrequency"].empty()) {
      maximumExecutionFrequency = make_shared<string>(boost::any_cast<string>(m["MaximumExecutionFrequency"]));
    }
    if (m.find("RegionIdsScope") != m.end() && !m["RegionIdsScope"].empty()) {
      regionIdsScope = make_shared<string>(boost::any_cast<string>(m["RegionIdsScope"]));
    }
    if (m.find("ResourceGroupIdsScope") != m.end() && !m["ResourceGroupIdsScope"].empty()) {
      resourceGroupIdsScope = make_shared<string>(boost::any_cast<string>(m["ResourceGroupIdsScope"]));
    }
    if (m.find("ResourceTypesScope") != m.end() && !m["ResourceTypesScope"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceTypesScope"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceTypesScope"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceTypesScope = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
    if (m.find("SourceIdentifier") != m.end() && !m["SourceIdentifier"].empty()) {
      sourceIdentifier = make_shared<string>(boost::any_cast<string>(m["SourceIdentifier"]));
    }
    if (m.find("SourceOwner") != m.end() && !m["SourceOwner"].empty()) {
      sourceOwner = make_shared<string>(boost::any_cast<string>(m["SourceOwner"]));
    }
    if (m.find("TagKeyScope") != m.end() && !m["TagKeyScope"].empty()) {
      tagKeyScope = make_shared<string>(boost::any_cast<string>(m["TagKeyScope"]));
    }
    if (m.find("TagValueScope") != m.end() && !m["TagValueScope"].empty()) {
      tagValueScope = make_shared<string>(boost::any_cast<string>(m["TagValueScope"]));
    }
  }


  virtual ~CreateConfigRuleRequest() = default;
};
class CreateConfigRuleShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> configRuleName{};
  shared_ptr<string> configRuleTriggerTypes{};
  shared_ptr<string> description{};
  shared_ptr<string> excludeResourceIdsScope{};
  shared_ptr<string> inputParametersShrink{};
  shared_ptr<string> maximumExecutionFrequency{};
  shared_ptr<string> regionIdsScope{};
  shared_ptr<string> resourceGroupIdsScope{};
  shared_ptr<string> resourceTypesScopeShrink{};
  shared_ptr<long> riskLevel{};
  shared_ptr<string> sourceIdentifier{};
  shared_ptr<string> sourceOwner{};
  shared_ptr<string> tagKeyScope{};
  shared_ptr<string> tagValueScope{};

  CreateConfigRuleShrinkRequest() {}

  explicit CreateConfigRuleShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (configRuleName) {
      res["ConfigRuleName"] = boost::any(*configRuleName);
    }
    if (configRuleTriggerTypes) {
      res["ConfigRuleTriggerTypes"] = boost::any(*configRuleTriggerTypes);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (excludeResourceIdsScope) {
      res["ExcludeResourceIdsScope"] = boost::any(*excludeResourceIdsScope);
    }
    if (inputParametersShrink) {
      res["InputParameters"] = boost::any(*inputParametersShrink);
    }
    if (maximumExecutionFrequency) {
      res["MaximumExecutionFrequency"] = boost::any(*maximumExecutionFrequency);
    }
    if (regionIdsScope) {
      res["RegionIdsScope"] = boost::any(*regionIdsScope);
    }
    if (resourceGroupIdsScope) {
      res["ResourceGroupIdsScope"] = boost::any(*resourceGroupIdsScope);
    }
    if (resourceTypesScopeShrink) {
      res["ResourceTypesScope"] = boost::any(*resourceTypesScopeShrink);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (sourceIdentifier) {
      res["SourceIdentifier"] = boost::any(*sourceIdentifier);
    }
    if (sourceOwner) {
      res["SourceOwner"] = boost::any(*sourceOwner);
    }
    if (tagKeyScope) {
      res["TagKeyScope"] = boost::any(*tagKeyScope);
    }
    if (tagValueScope) {
      res["TagValueScope"] = boost::any(*tagValueScope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ConfigRuleName") != m.end() && !m["ConfigRuleName"].empty()) {
      configRuleName = make_shared<string>(boost::any_cast<string>(m["ConfigRuleName"]));
    }
    if (m.find("ConfigRuleTriggerTypes") != m.end() && !m["ConfigRuleTriggerTypes"].empty()) {
      configRuleTriggerTypes = make_shared<string>(boost::any_cast<string>(m["ConfigRuleTriggerTypes"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExcludeResourceIdsScope") != m.end() && !m["ExcludeResourceIdsScope"].empty()) {
      excludeResourceIdsScope = make_shared<string>(boost::any_cast<string>(m["ExcludeResourceIdsScope"]));
    }
    if (m.find("InputParameters") != m.end() && !m["InputParameters"].empty()) {
      inputParametersShrink = make_shared<string>(boost::any_cast<string>(m["InputParameters"]));
    }
    if (m.find("MaximumExecutionFrequency") != m.end() && !m["MaximumExecutionFrequency"].empty()) {
      maximumExecutionFrequency = make_shared<string>(boost::any_cast<string>(m["MaximumExecutionFrequency"]));
    }
    if (m.find("RegionIdsScope") != m.end() && !m["RegionIdsScope"].empty()) {
      regionIdsScope = make_shared<string>(boost::any_cast<string>(m["RegionIdsScope"]));
    }
    if (m.find("ResourceGroupIdsScope") != m.end() && !m["ResourceGroupIdsScope"].empty()) {
      resourceGroupIdsScope = make_shared<string>(boost::any_cast<string>(m["ResourceGroupIdsScope"]));
    }
    if (m.find("ResourceTypesScope") != m.end() && !m["ResourceTypesScope"].empty()) {
      resourceTypesScopeShrink = make_shared<string>(boost::any_cast<string>(m["ResourceTypesScope"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
    if (m.find("SourceIdentifier") != m.end() && !m["SourceIdentifier"].empty()) {
      sourceIdentifier = make_shared<string>(boost::any_cast<string>(m["SourceIdentifier"]));
    }
    if (m.find("SourceOwner") != m.end() && !m["SourceOwner"].empty()) {
      sourceOwner = make_shared<string>(boost::any_cast<string>(m["SourceOwner"]));
    }
    if (m.find("TagKeyScope") != m.end() && !m["TagKeyScope"].empty()) {
      tagKeyScope = make_shared<string>(boost::any_cast<string>(m["TagKeyScope"]));
    }
    if (m.find("TagValueScope") != m.end() && !m["TagValueScope"].empty()) {
      tagValueScope = make_shared<string>(boost::any_cast<string>(m["TagValueScope"]));
    }
  }


  virtual ~CreateConfigRuleShrinkRequest() = default;
};
class CreateConfigRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> configRuleId{};
  shared_ptr<string> requestId{};

  CreateConfigRuleResponseBody() {}

  explicit CreateConfigRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateConfigRuleResponseBody() = default;
};
class CreateConfigRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateConfigRuleResponseBody> body{};

  CreateConfigRuleResponse() {}

  explicit CreateConfigRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateConfigRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateConfigRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateConfigRuleResponse() = default;
};
class DeactiveAggregateConfigRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> configRuleIds{};

  DeactiveAggregateConfigRulesRequest() {}

  explicit DeactiveAggregateConfigRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (configRuleIds) {
      res["ConfigRuleIds"] = boost::any(*configRuleIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("ConfigRuleIds") != m.end() && !m["ConfigRuleIds"].empty()) {
      configRuleIds = make_shared<string>(boost::any_cast<string>(m["ConfigRuleIds"]));
    }
  }


  virtual ~DeactiveAggregateConfigRulesRequest() = default;
};
class DeactiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList : public Darabonba::Model {
public:
  shared_ptr<string> configRuleId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  DeactiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList() {}

  explicit DeactiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeactiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList() = default;
};
class DeactiveAggregateConfigRulesResponseBodyOperateRuleResult : public Darabonba::Model {
public:
  shared_ptr<vector<DeactiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList>> operateRuleItemList{};

  DeactiveAggregateConfigRulesResponseBodyOperateRuleResult() {}

  explicit DeactiveAggregateConfigRulesResponseBodyOperateRuleResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateRuleItemList) {
      vector<boost::any> temp1;
      for(auto item1:*operateRuleItemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OperateRuleItemList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperateRuleItemList") != m.end() && !m["OperateRuleItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["OperateRuleItemList"].type()) {
        vector<DeactiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OperateRuleItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeactiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operateRuleItemList = make_shared<vector<DeactiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList>>(expect1);
      }
    }
  }


  virtual ~DeactiveAggregateConfigRulesResponseBodyOperateRuleResult() = default;
};
class DeactiveAggregateConfigRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeactiveAggregateConfigRulesResponseBodyOperateRuleResult> operateRuleResult{};
  shared_ptr<string> requestId{};

  DeactiveAggregateConfigRulesResponseBody() {}

  explicit DeactiveAggregateConfigRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateRuleResult) {
      res["OperateRuleResult"] = operateRuleResult ? boost::any(operateRuleResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperateRuleResult") != m.end() && !m["OperateRuleResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["OperateRuleResult"].type()) {
        DeactiveAggregateConfigRulesResponseBodyOperateRuleResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OperateRuleResult"]));
        operateRuleResult = make_shared<DeactiveAggregateConfigRulesResponseBodyOperateRuleResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeactiveAggregateConfigRulesResponseBody() = default;
};
class DeactiveAggregateConfigRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeactiveAggregateConfigRulesResponseBody> body{};

  DeactiveAggregateConfigRulesResponse() {}

  explicit DeactiveAggregateConfigRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeactiveAggregateConfigRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeactiveAggregateConfigRulesResponseBody>(model1);
      }
    }
  }


  virtual ~DeactiveAggregateConfigRulesResponse() = default;
};
class DeactiveConfigRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> configRuleIds{};

  DeactiveConfigRulesRequest() {}

  explicit DeactiveConfigRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleIds) {
      res["ConfigRuleIds"] = boost::any(*configRuleIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleIds") != m.end() && !m["ConfigRuleIds"].empty()) {
      configRuleIds = make_shared<string>(boost::any_cast<string>(m["ConfigRuleIds"]));
    }
  }


  virtual ~DeactiveConfigRulesRequest() = default;
};
class DeactiveConfigRulesResponseBodyOperateRuleResultOperateRuleItemList : public Darabonba::Model {
public:
  shared_ptr<string> configRuleId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  DeactiveConfigRulesResponseBodyOperateRuleResultOperateRuleItemList() {}

  explicit DeactiveConfigRulesResponseBodyOperateRuleResultOperateRuleItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeactiveConfigRulesResponseBodyOperateRuleResultOperateRuleItemList() = default;
};
class DeactiveConfigRulesResponseBodyOperateRuleResult : public Darabonba::Model {
public:
  shared_ptr<vector<DeactiveConfigRulesResponseBodyOperateRuleResultOperateRuleItemList>> operateRuleItemList{};

  DeactiveConfigRulesResponseBodyOperateRuleResult() {}

  explicit DeactiveConfigRulesResponseBodyOperateRuleResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateRuleItemList) {
      vector<boost::any> temp1;
      for(auto item1:*operateRuleItemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OperateRuleItemList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperateRuleItemList") != m.end() && !m["OperateRuleItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["OperateRuleItemList"].type()) {
        vector<DeactiveConfigRulesResponseBodyOperateRuleResultOperateRuleItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OperateRuleItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeactiveConfigRulesResponseBodyOperateRuleResultOperateRuleItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operateRuleItemList = make_shared<vector<DeactiveConfigRulesResponseBodyOperateRuleResultOperateRuleItemList>>(expect1);
      }
    }
  }


  virtual ~DeactiveConfigRulesResponseBodyOperateRuleResult() = default;
};
class DeactiveConfigRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeactiveConfigRulesResponseBodyOperateRuleResult> operateRuleResult{};
  shared_ptr<string> requestId{};

  DeactiveConfigRulesResponseBody() {}

  explicit DeactiveConfigRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateRuleResult) {
      res["OperateRuleResult"] = operateRuleResult ? boost::any(operateRuleResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperateRuleResult") != m.end() && !m["OperateRuleResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["OperateRuleResult"].type()) {
        DeactiveConfigRulesResponseBodyOperateRuleResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OperateRuleResult"]));
        operateRuleResult = make_shared<DeactiveConfigRulesResponseBodyOperateRuleResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeactiveConfigRulesResponseBody() = default;
};
class DeactiveConfigRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeactiveConfigRulesResponseBody> body{};

  DeactiveConfigRulesResponse() {}

  explicit DeactiveConfigRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeactiveConfigRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeactiveConfigRulesResponseBody>(model1);
      }
    }
  }


  virtual ~DeactiveConfigRulesResponse() = default;
};
class DeleteAggregateCompliancePacksRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> compliancePackIds{};
  shared_ptr<bool> deleteRule{};

  DeleteAggregateCompliancePacksRequest() {}

  explicit DeleteAggregateCompliancePacksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (compliancePackIds) {
      res["CompliancePackIds"] = boost::any(*compliancePackIds);
    }
    if (deleteRule) {
      res["DeleteRule"] = boost::any(*deleteRule);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CompliancePackIds") != m.end() && !m["CompliancePackIds"].empty()) {
      compliancePackIds = make_shared<string>(boost::any_cast<string>(m["CompliancePackIds"]));
    }
    if (m.find("DeleteRule") != m.end() && !m["DeleteRule"].empty()) {
      deleteRule = make_shared<bool>(boost::any_cast<bool>(m["DeleteRule"]));
    }
  }


  virtual ~DeleteAggregateCompliancePacksRequest() = default;
};
class DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks : public Darabonba::Model {
public:
  shared_ptr<string> compliancePackId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks() {}

  explicit DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks() = default;
};
class DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult : public Darabonba::Model {
public:
  shared_ptr<vector<DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks>> operateCompliancePacks{};

  DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult() {}

  explicit DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateCompliancePacks) {
      vector<boost::any> temp1;
      for(auto item1:*operateCompliancePacks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OperateCompliancePacks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperateCompliancePacks") != m.end() && !m["OperateCompliancePacks"].empty()) {
      if (typeid(vector<boost::any>) == m["OperateCompliancePacks"].type()) {
        vector<DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OperateCompliancePacks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operateCompliancePacks = make_shared<vector<DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks>>(expect1);
      }
    }
  }


  virtual ~DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult() = default;
};
class DeleteAggregateCompliancePacksResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult> operateCompliancePacksResult{};
  shared_ptr<string> requestId{};

  DeleteAggregateCompliancePacksResponseBody() {}

  explicit DeleteAggregateCompliancePacksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateCompliancePacksResult) {
      res["OperateCompliancePacksResult"] = operateCompliancePacksResult ? boost::any(operateCompliancePacksResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperateCompliancePacksResult") != m.end() && !m["OperateCompliancePacksResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["OperateCompliancePacksResult"].type()) {
        DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OperateCompliancePacksResult"]));
        operateCompliancePacksResult = make_shared<DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteAggregateCompliancePacksResponseBody() = default;
};
class DeleteAggregateCompliancePacksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteAggregateCompliancePacksResponseBody> body{};

  DeleteAggregateCompliancePacksResponse() {}

  explicit DeleteAggregateCompliancePacksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAggregateCompliancePacksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAggregateCompliancePacksResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAggregateCompliancePacksResponse() = default;
};
class DeleteAggregateConfigRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> configRuleIds{};

  DeleteAggregateConfigRulesRequest() {}

  explicit DeleteAggregateConfigRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (configRuleIds) {
      res["ConfigRuleIds"] = boost::any(*configRuleIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("ConfigRuleIds") != m.end() && !m["ConfigRuleIds"].empty()) {
      configRuleIds = make_shared<string>(boost::any_cast<string>(m["ConfigRuleIds"]));
    }
  }


  virtual ~DeleteAggregateConfigRulesRequest() = default;
};
class DeleteAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList : public Darabonba::Model {
public:
  shared_ptr<string> configRuleId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  DeleteAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList() {}

  explicit DeleteAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList() = default;
};
class DeleteAggregateConfigRulesResponseBodyOperateRuleResult : public Darabonba::Model {
public:
  shared_ptr<vector<DeleteAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList>> operateRuleItemList{};

  DeleteAggregateConfigRulesResponseBodyOperateRuleResult() {}

  explicit DeleteAggregateConfigRulesResponseBodyOperateRuleResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateRuleItemList) {
      vector<boost::any> temp1;
      for(auto item1:*operateRuleItemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OperateRuleItemList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperateRuleItemList") != m.end() && !m["OperateRuleItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["OperateRuleItemList"].type()) {
        vector<DeleteAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OperateRuleItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeleteAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operateRuleItemList = make_shared<vector<DeleteAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList>>(expect1);
      }
    }
  }


  virtual ~DeleteAggregateConfigRulesResponseBodyOperateRuleResult() = default;
};
class DeleteAggregateConfigRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeleteAggregateConfigRulesResponseBodyOperateRuleResult> operateRuleResult{};
  shared_ptr<string> requestId{};

  DeleteAggregateConfigRulesResponseBody() {}

  explicit DeleteAggregateConfigRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateRuleResult) {
      res["OperateRuleResult"] = operateRuleResult ? boost::any(operateRuleResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperateRuleResult") != m.end() && !m["OperateRuleResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["OperateRuleResult"].type()) {
        DeleteAggregateConfigRulesResponseBodyOperateRuleResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OperateRuleResult"]));
        operateRuleResult = make_shared<DeleteAggregateConfigRulesResponseBodyOperateRuleResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteAggregateConfigRulesResponseBody() = default;
};
class DeleteAggregateConfigRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteAggregateConfigRulesResponseBody> body{};

  DeleteAggregateConfigRulesResponse() {}

  explicit DeleteAggregateConfigRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAggregateConfigRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAggregateConfigRulesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAggregateConfigRulesResponse() = default;
};
class DeleteAggregatorsRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorIds{};
  shared_ptr<string> clientToken{};

  DeleteAggregatorsRequest() {}

  explicit DeleteAggregatorsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorIds) {
      res["AggregatorIds"] = boost::any(*aggregatorIds);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorIds") != m.end() && !m["AggregatorIds"].empty()) {
      aggregatorIds = make_shared<string>(boost::any_cast<string>(m["AggregatorIds"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~DeleteAggregatorsRequest() = default;
};
class DeleteAggregatorsResponseBodyOperateAggregatorsResultOperateAggregators : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  DeleteAggregatorsResponseBodyOperateAggregatorsResultOperateAggregators() {}

  explicit DeleteAggregatorsResponseBodyOperateAggregatorsResultOperateAggregators(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteAggregatorsResponseBodyOperateAggregatorsResultOperateAggregators() = default;
};
class DeleteAggregatorsResponseBodyOperateAggregatorsResult : public Darabonba::Model {
public:
  shared_ptr<vector<DeleteAggregatorsResponseBodyOperateAggregatorsResultOperateAggregators>> operateAggregators{};

  DeleteAggregatorsResponseBodyOperateAggregatorsResult() {}

  explicit DeleteAggregatorsResponseBodyOperateAggregatorsResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateAggregators) {
      vector<boost::any> temp1;
      for(auto item1:*operateAggregators){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OperateAggregators"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperateAggregators") != m.end() && !m["OperateAggregators"].empty()) {
      if (typeid(vector<boost::any>) == m["OperateAggregators"].type()) {
        vector<DeleteAggregatorsResponseBodyOperateAggregatorsResultOperateAggregators> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OperateAggregators"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeleteAggregatorsResponseBodyOperateAggregatorsResultOperateAggregators model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operateAggregators = make_shared<vector<DeleteAggregatorsResponseBodyOperateAggregatorsResultOperateAggregators>>(expect1);
      }
    }
  }


  virtual ~DeleteAggregatorsResponseBodyOperateAggregatorsResult() = default;
};
class DeleteAggregatorsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeleteAggregatorsResponseBodyOperateAggregatorsResult> operateAggregatorsResult{};
  shared_ptr<string> requestId{};

  DeleteAggregatorsResponseBody() {}

  explicit DeleteAggregatorsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateAggregatorsResult) {
      res["OperateAggregatorsResult"] = operateAggregatorsResult ? boost::any(operateAggregatorsResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperateAggregatorsResult") != m.end() && !m["OperateAggregatorsResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["OperateAggregatorsResult"].type()) {
        DeleteAggregatorsResponseBodyOperateAggregatorsResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OperateAggregatorsResult"]));
        operateAggregatorsResult = make_shared<DeleteAggregatorsResponseBodyOperateAggregatorsResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteAggregatorsResponseBody() = default;
};
class DeleteAggregatorsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteAggregatorsResponseBody> body{};

  DeleteAggregatorsResponse() {}

  explicit DeleteAggregatorsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAggregatorsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAggregatorsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAggregatorsResponse() = default;
};
class DeleteCompliancePacksRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> compliancePackIds{};
  shared_ptr<bool> deleteRule{};

  DeleteCompliancePacksRequest() {}

  explicit DeleteCompliancePacksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (compliancePackIds) {
      res["CompliancePackIds"] = boost::any(*compliancePackIds);
    }
    if (deleteRule) {
      res["DeleteRule"] = boost::any(*deleteRule);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CompliancePackIds") != m.end() && !m["CompliancePackIds"].empty()) {
      compliancePackIds = make_shared<string>(boost::any_cast<string>(m["CompliancePackIds"]));
    }
    if (m.find("DeleteRule") != m.end() && !m["DeleteRule"].empty()) {
      deleteRule = make_shared<bool>(boost::any_cast<bool>(m["DeleteRule"]));
    }
  }


  virtual ~DeleteCompliancePacksRequest() = default;
};
class DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks : public Darabonba::Model {
public:
  shared_ptr<string> compliancePackId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks() {}

  explicit DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks() = default;
};
class DeleteCompliancePacksResponseBodyOperateCompliancePacksResult : public Darabonba::Model {
public:
  shared_ptr<vector<DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks>> operateCompliancePacks{};

  DeleteCompliancePacksResponseBodyOperateCompliancePacksResult() {}

  explicit DeleteCompliancePacksResponseBodyOperateCompliancePacksResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateCompliancePacks) {
      vector<boost::any> temp1;
      for(auto item1:*operateCompliancePacks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OperateCompliancePacks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperateCompliancePacks") != m.end() && !m["OperateCompliancePacks"].empty()) {
      if (typeid(vector<boost::any>) == m["OperateCompliancePacks"].type()) {
        vector<DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OperateCompliancePacks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operateCompliancePacks = make_shared<vector<DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks>>(expect1);
      }
    }
  }


  virtual ~DeleteCompliancePacksResponseBodyOperateCompliancePacksResult() = default;
};
class DeleteCompliancePacksResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeleteCompliancePacksResponseBodyOperateCompliancePacksResult> operateCompliancePacksResult{};
  shared_ptr<string> requestId{};

  DeleteCompliancePacksResponseBody() {}

  explicit DeleteCompliancePacksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateCompliancePacksResult) {
      res["OperateCompliancePacksResult"] = operateCompliancePacksResult ? boost::any(operateCompliancePacksResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperateCompliancePacksResult") != m.end() && !m["OperateCompliancePacksResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["OperateCompliancePacksResult"].type()) {
        DeleteCompliancePacksResponseBodyOperateCompliancePacksResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OperateCompliancePacksResult"]));
        operateCompliancePacksResult = make_shared<DeleteCompliancePacksResponseBodyOperateCompliancePacksResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteCompliancePacksResponseBody() = default;
};
class DeleteCompliancePacksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteCompliancePacksResponseBody> body{};

  DeleteCompliancePacksResponse() {}

  explicit DeleteCompliancePacksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCompliancePacksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCompliancePacksResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCompliancePacksResponse() = default;
};
class DetachAggregateConfigRuleToCompliancePackRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> compliancePackId{};
  shared_ptr<string> configRuleIds{};

  DetachAggregateConfigRuleToCompliancePackRequest() {}

  explicit DetachAggregateConfigRuleToCompliancePackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (configRuleIds) {
      res["ConfigRuleIds"] = boost::any(*configRuleIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("ConfigRuleIds") != m.end() && !m["ConfigRuleIds"].empty()) {
      configRuleIds = make_shared<string>(boost::any_cast<string>(m["ConfigRuleIds"]));
    }
  }


  virtual ~DetachAggregateConfigRuleToCompliancePackRequest() = default;
};
class DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList : public Darabonba::Model {
public:
  shared_ptr<string> configRuleId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList() {}

  explicit DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList() = default;
};
class DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult : public Darabonba::Model {
public:
  shared_ptr<vector<DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList>> operateRuleItemList{};

  DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult() {}

  explicit DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateRuleItemList) {
      vector<boost::any> temp1;
      for(auto item1:*operateRuleItemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OperateRuleItemList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperateRuleItemList") != m.end() && !m["OperateRuleItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["OperateRuleItemList"].type()) {
        vector<DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OperateRuleItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operateRuleItemList = make_shared<vector<DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList>>(expect1);
      }
    }
  }


  virtual ~DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult() = default;
};
class DetachAggregateConfigRuleToCompliancePackResponseBody : public Darabonba::Model {
public:
  shared_ptr<DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult> operateRuleResult{};
  shared_ptr<string> requestId{};

  DetachAggregateConfigRuleToCompliancePackResponseBody() {}

  explicit DetachAggregateConfigRuleToCompliancePackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateRuleResult) {
      res["OperateRuleResult"] = operateRuleResult ? boost::any(operateRuleResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperateRuleResult") != m.end() && !m["OperateRuleResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["OperateRuleResult"].type()) {
        DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OperateRuleResult"]));
        operateRuleResult = make_shared<DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetachAggregateConfigRuleToCompliancePackResponseBody() = default;
};
class DetachAggregateConfigRuleToCompliancePackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetachAggregateConfigRuleToCompliancePackResponseBody> body{};

  DetachAggregateConfigRuleToCompliancePackResponse() {}

  explicit DetachAggregateConfigRuleToCompliancePackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachAggregateConfigRuleToCompliancePackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachAggregateConfigRuleToCompliancePackResponseBody>(model1);
      }
    }
  }


  virtual ~DetachAggregateConfigRuleToCompliancePackResponse() = default;
};
class DetachConfigRuleToCompliancePackRequest : public Darabonba::Model {
public:
  shared_ptr<string> compliancePackId{};
  shared_ptr<string> configRuleIds{};

  DetachConfigRuleToCompliancePackRequest() {}

  explicit DetachConfigRuleToCompliancePackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (configRuleIds) {
      res["ConfigRuleIds"] = boost::any(*configRuleIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("ConfigRuleIds") != m.end() && !m["ConfigRuleIds"].empty()) {
      configRuleIds = make_shared<string>(boost::any_cast<string>(m["ConfigRuleIds"]));
    }
  }


  virtual ~DetachConfigRuleToCompliancePackRequest() = default;
};
class DetachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList : public Darabonba::Model {
public:
  shared_ptr<string> configRuleId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  DetachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList() {}

  explicit DetachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DetachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList() = default;
};
class DetachConfigRuleToCompliancePackResponseBodyOperateRuleResult : public Darabonba::Model {
public:
  shared_ptr<vector<DetachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList>> operateRuleItemList{};

  DetachConfigRuleToCompliancePackResponseBodyOperateRuleResult() {}

  explicit DetachConfigRuleToCompliancePackResponseBodyOperateRuleResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateRuleItemList) {
      vector<boost::any> temp1;
      for(auto item1:*operateRuleItemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OperateRuleItemList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperateRuleItemList") != m.end() && !m["OperateRuleItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["OperateRuleItemList"].type()) {
        vector<DetachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OperateRuleItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operateRuleItemList = make_shared<vector<DetachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList>>(expect1);
      }
    }
  }


  virtual ~DetachConfigRuleToCompliancePackResponseBodyOperateRuleResult() = default;
};
class DetachConfigRuleToCompliancePackResponseBody : public Darabonba::Model {
public:
  shared_ptr<DetachConfigRuleToCompliancePackResponseBodyOperateRuleResult> operateRuleResult{};
  shared_ptr<string> requestId{};

  DetachConfigRuleToCompliancePackResponseBody() {}

  explicit DetachConfigRuleToCompliancePackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateRuleResult) {
      res["OperateRuleResult"] = operateRuleResult ? boost::any(operateRuleResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperateRuleResult") != m.end() && !m["OperateRuleResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["OperateRuleResult"].type()) {
        DetachConfigRuleToCompliancePackResponseBodyOperateRuleResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OperateRuleResult"]));
        operateRuleResult = make_shared<DetachConfigRuleToCompliancePackResponseBodyOperateRuleResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetachConfigRuleToCompliancePackResponseBody() = default;
};
class DetachConfigRuleToCompliancePackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetachConfigRuleToCompliancePackResponseBody> body{};

  DetachConfigRuleToCompliancePackResponse() {}

  explicit DetachConfigRuleToCompliancePackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachConfigRuleToCompliancePackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachConfigRuleToCompliancePackResponseBody>(model1);
      }
    }
  }


  virtual ~DetachConfigRuleToCompliancePackResponse() = default;
};
class GenerateAggregateCompliancePackReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> compliancePackId{};

  GenerateAggregateCompliancePackReportRequest() {}

  explicit GenerateAggregateCompliancePackReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
  }


  virtual ~GenerateAggregateCompliancePackReportRequest() = default;
};
class GenerateAggregateCompliancePackReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> compliancePackId{};
  shared_ptr<string> requestId{};

  GenerateAggregateCompliancePackReportResponseBody() {}

  explicit GenerateAggregateCompliancePackReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GenerateAggregateCompliancePackReportResponseBody() = default;
};
class GenerateAggregateCompliancePackReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GenerateAggregateCompliancePackReportResponseBody> body{};

  GenerateAggregateCompliancePackReportResponse() {}

  explicit GenerateAggregateCompliancePackReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateAggregateCompliancePackReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateAggregateCompliancePackReportResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateAggregateCompliancePackReportResponse() = default;
};
class GenerateAggregateConfigRulesReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> clientToken{};

  GenerateAggregateConfigRulesReportRequest() {}

  explicit GenerateAggregateConfigRulesReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~GenerateAggregateConfigRulesReportRequest() = default;
};
class GenerateAggregateConfigRulesReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> requestId{};

  GenerateAggregateConfigRulesReportResponseBody() {}

  explicit GenerateAggregateConfigRulesReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GenerateAggregateConfigRulesReportResponseBody() = default;
};
class GenerateAggregateConfigRulesReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GenerateAggregateConfigRulesReportResponseBody> body{};

  GenerateAggregateConfigRulesReportResponse() {}

  explicit GenerateAggregateConfigRulesReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateAggregateConfigRulesReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateAggregateConfigRulesReportResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateAggregateConfigRulesReportResponse() = default;
};
class GenerateCompliancePackReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> compliancePackId{};

  GenerateCompliancePackReportRequest() {}

  explicit GenerateCompliancePackReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
  }


  virtual ~GenerateCompliancePackReportRequest() = default;
};
class GenerateCompliancePackReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> compliancePackId{};
  shared_ptr<string> requestId{};

  GenerateCompliancePackReportResponseBody() {}

  explicit GenerateCompliancePackReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GenerateCompliancePackReportResponseBody() = default;
};
class GenerateCompliancePackReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GenerateCompliancePackReportResponseBody> body{};

  GenerateCompliancePackReportResponse() {}

  explicit GenerateCompliancePackReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateCompliancePackReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateCompliancePackReportResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateCompliancePackReportResponse() = default;
};
class GenerateConfigRulesReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};

  GenerateConfigRulesReportRequest() {}

  explicit GenerateConfigRulesReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~GenerateConfigRulesReportRequest() = default;
};
class GenerateConfigRulesReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  GenerateConfigRulesReportResponseBody() {}

  explicit GenerateConfigRulesReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GenerateConfigRulesReportResponseBody() = default;
};
class GenerateConfigRulesReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GenerateConfigRulesReportResponseBody> body{};

  GenerateConfigRulesReportResponse() {}

  explicit GenerateConfigRulesReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateConfigRulesReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateConfigRulesReportResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateConfigRulesReportResponse() = default;
};
class GetAggregateAccountComplianceByPackRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> compliancePackId{};

  GetAggregateAccountComplianceByPackRequest() {}

  explicit GetAggregateAccountComplianceByPackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
  }


  virtual ~GetAggregateAccountComplianceByPackRequest() = default;
};
class GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> complianceType{};

  GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances() {}

  explicit GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (complianceType) {
      res["ComplianceType"] = boost::any(*complianceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("ComplianceType") != m.end() && !m["ComplianceType"].empty()) {
      complianceType = make_shared<string>(boost::any_cast<string>(m["ComplianceType"]));
    }
  }


  virtual ~GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances() = default;
};
class GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult : public Darabonba::Model {
public:
  shared_ptr<vector<GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances>> accountCompliances{};
  shared_ptr<string> compliancePackId{};
  shared_ptr<long> nonCompliantCount{};
  shared_ptr<long> totalCount{};

  GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult() {}

  explicit GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountCompliances) {
      vector<boost::any> temp1;
      for(auto item1:*accountCompliances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AccountCompliances"] = boost::any(temp1);
    }
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (nonCompliantCount) {
      res["NonCompliantCount"] = boost::any(*nonCompliantCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountCompliances") != m.end() && !m["AccountCompliances"].empty()) {
      if (typeid(vector<boost::any>) == m["AccountCompliances"].type()) {
        vector<GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AccountCompliances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accountCompliances = make_shared<vector<GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResultAccountCompliances>>(expect1);
      }
    }
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("NonCompliantCount") != m.end() && !m["NonCompliantCount"].empty()) {
      nonCompliantCount = make_shared<long>(boost::any_cast<long>(m["NonCompliantCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult() = default;
};
class GetAggregateAccountComplianceByPackResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult> accountComplianceResult{};
  shared_ptr<string> requestId{};

  GetAggregateAccountComplianceByPackResponseBody() {}

  explicit GetAggregateAccountComplianceByPackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountComplianceResult) {
      res["AccountComplianceResult"] = accountComplianceResult ? boost::any(accountComplianceResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountComplianceResult") != m.end() && !m["AccountComplianceResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccountComplianceResult"].type()) {
        GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccountComplianceResult"]));
        accountComplianceResult = make_shared<GetAggregateAccountComplianceByPackResponseBodyAccountComplianceResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAggregateAccountComplianceByPackResponseBody() = default;
};
class GetAggregateAccountComplianceByPackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAggregateAccountComplianceByPackResponseBody> body{};

  GetAggregateAccountComplianceByPackResponse() {}

  explicit GetAggregateAccountComplianceByPackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAggregateAccountComplianceByPackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAggregateAccountComplianceByPackResponseBody>(model1);
      }
    }
  }


  virtual ~GetAggregateAccountComplianceByPackResponse() = default;
};
class GetAggregateCompliancePackRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> compliancePackId{};

  GetAggregateCompliancePackRequest() {}

  explicit GetAggregateCompliancePackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
  }


  virtual ~GetAggregateCompliancePackRequest() = default;
};
class GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterName{};
  shared_ptr<string> parameterValue{};
  shared_ptr<bool> required{};

  GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters() {}

  explicit GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterName) {
      res["ParameterName"] = boost::any(*parameterName);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterName") != m.end() && !m["ParameterName"].empty()) {
      parameterName = make_shared<string>(boost::any_cast<string>(m["ParameterName"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["Required"]));
    }
  }


  virtual ~GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters() = default;
};
class GetAggregateCompliancePackResponseBodyCompliancePackConfigRules : public Darabonba::Model {
public:
  shared_ptr<string> configRuleId{};
  shared_ptr<string> configRuleName{};
  shared_ptr<vector<GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters>> configRuleParameters{};
  shared_ptr<string> description{};
  shared_ptr<string> managedRuleIdentifier{};
  shared_ptr<long> riskLevel{};

  GetAggregateCompliancePackResponseBodyCompliancePackConfigRules() {}

  explicit GetAggregateCompliancePackResponseBodyCompliancePackConfigRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (configRuleName) {
      res["ConfigRuleName"] = boost::any(*configRuleName);
    }
    if (configRuleParameters) {
      vector<boost::any> temp1;
      for(auto item1:*configRuleParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigRuleParameters"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (managedRuleIdentifier) {
      res["ManagedRuleIdentifier"] = boost::any(*managedRuleIdentifier);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("ConfigRuleName") != m.end() && !m["ConfigRuleName"].empty()) {
      configRuleName = make_shared<string>(boost::any_cast<string>(m["ConfigRuleName"]));
    }
    if (m.find("ConfigRuleParameters") != m.end() && !m["ConfigRuleParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigRuleParameters"].type()) {
        vector<GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigRuleParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configRuleParameters = make_shared<vector<GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ManagedRuleIdentifier") != m.end() && !m["ManagedRuleIdentifier"].empty()) {
      managedRuleIdentifier = make_shared<string>(boost::any_cast<string>(m["ManagedRuleIdentifier"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
  }


  virtual ~GetAggregateCompliancePackResponseBodyCompliancePackConfigRules() = default;
};
class GetAggregateCompliancePackResponseBodyCompliancePack : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> compliancePackId{};
  shared_ptr<string> compliancePackName{};
  shared_ptr<string> compliancePackTemplateId{};
  shared_ptr<vector<GetAggregateCompliancePackResponseBodyCompliancePackConfigRules>> configRules{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<string> description{};
  shared_ptr<long> riskLevel{};
  shared_ptr<string> status{};

  GetAggregateCompliancePackResponseBodyCompliancePack() {}

  explicit GetAggregateCompliancePackResponseBodyCompliancePack(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (compliancePackName) {
      res["CompliancePackName"] = boost::any(*compliancePackName);
    }
    if (compliancePackTemplateId) {
      res["CompliancePackTemplateId"] = boost::any(*compliancePackTemplateId);
    }
    if (configRules) {
      vector<boost::any> temp1;
      for(auto item1:*configRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigRules"] = boost::any(temp1);
    }
    if (createTimestamp) {
      res["CreateTimestamp"] = boost::any(*createTimestamp);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("CompliancePackName") != m.end() && !m["CompliancePackName"].empty()) {
      compliancePackName = make_shared<string>(boost::any_cast<string>(m["CompliancePackName"]));
    }
    if (m.find("CompliancePackTemplateId") != m.end() && !m["CompliancePackTemplateId"].empty()) {
      compliancePackTemplateId = make_shared<string>(boost::any_cast<string>(m["CompliancePackTemplateId"]));
    }
    if (m.find("ConfigRules") != m.end() && !m["ConfigRules"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigRules"].type()) {
        vector<GetAggregateCompliancePackResponseBodyCompliancePackConfigRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAggregateCompliancePackResponseBodyCompliancePackConfigRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configRules = make_shared<vector<GetAggregateCompliancePackResponseBodyCompliancePackConfigRules>>(expect1);
      }
    }
    if (m.find("CreateTimestamp") != m.end() && !m["CreateTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["CreateTimestamp"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetAggregateCompliancePackResponseBodyCompliancePack() = default;
};
class GetAggregateCompliancePackResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAggregateCompliancePackResponseBodyCompliancePack> compliancePack{};
  shared_ptr<string> requestId{};

  GetAggregateCompliancePackResponseBody() {}

  explicit GetAggregateCompliancePackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePack) {
      res["CompliancePack"] = compliancePack ? boost::any(compliancePack->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePack") != m.end() && !m["CompliancePack"].empty()) {
      if (typeid(map<string, boost::any>) == m["CompliancePack"].type()) {
        GetAggregateCompliancePackResponseBodyCompliancePack model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CompliancePack"]));
        compliancePack = make_shared<GetAggregateCompliancePackResponseBodyCompliancePack>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAggregateCompliancePackResponseBody() = default;
};
class GetAggregateCompliancePackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAggregateCompliancePackResponseBody> body{};

  GetAggregateCompliancePackResponse() {}

  explicit GetAggregateCompliancePackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAggregateCompliancePackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAggregateCompliancePackResponseBody>(model1);
      }
    }
  }


  virtual ~GetAggregateCompliancePackResponse() = default;
};
class GetAggregateCompliancePackReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> compliancePackId{};

  GetAggregateCompliancePackReportRequest() {}

  explicit GetAggregateCompliancePackReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
  }


  virtual ~GetAggregateCompliancePackReportRequest() = default;
};
class GetAggregateCompliancePackReportResponseBodyCompliancePackReport : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<string> compliancePackId{};
  shared_ptr<long> reportCreateTimestamp{};
  shared_ptr<string> reportStatus{};
  shared_ptr<string> reportUrl{};

  GetAggregateCompliancePackReportResponseBodyCompliancePackReport() {}

  explicit GetAggregateCompliancePackReportResponseBodyCompliancePackReport(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (reportCreateTimestamp) {
      res["ReportCreateTimestamp"] = boost::any(*reportCreateTimestamp);
    }
    if (reportStatus) {
      res["ReportStatus"] = boost::any(*reportStatus);
    }
    if (reportUrl) {
      res["ReportUrl"] = boost::any(*reportUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("ReportCreateTimestamp") != m.end() && !m["ReportCreateTimestamp"].empty()) {
      reportCreateTimestamp = make_shared<long>(boost::any_cast<long>(m["ReportCreateTimestamp"]));
    }
    if (m.find("ReportStatus") != m.end() && !m["ReportStatus"].empty()) {
      reportStatus = make_shared<string>(boost::any_cast<string>(m["ReportStatus"]));
    }
    if (m.find("ReportUrl") != m.end() && !m["ReportUrl"].empty()) {
      reportUrl = make_shared<string>(boost::any_cast<string>(m["ReportUrl"]));
    }
  }


  virtual ~GetAggregateCompliancePackReportResponseBodyCompliancePackReport() = default;
};
class GetAggregateCompliancePackReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAggregateCompliancePackReportResponseBodyCompliancePackReport> compliancePackReport{};
  shared_ptr<string> requestId{};

  GetAggregateCompliancePackReportResponseBody() {}

  explicit GetAggregateCompliancePackReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePackReport) {
      res["CompliancePackReport"] = compliancePackReport ? boost::any(compliancePackReport->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePackReport") != m.end() && !m["CompliancePackReport"].empty()) {
      if (typeid(map<string, boost::any>) == m["CompliancePackReport"].type()) {
        GetAggregateCompliancePackReportResponseBodyCompliancePackReport model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CompliancePackReport"]));
        compliancePackReport = make_shared<GetAggregateCompliancePackReportResponseBodyCompliancePackReport>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAggregateCompliancePackReportResponseBody() = default;
};
class GetAggregateCompliancePackReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAggregateCompliancePackReportResponseBody> body{};

  GetAggregateCompliancePackReportResponse() {}

  explicit GetAggregateCompliancePackReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAggregateCompliancePackReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAggregateCompliancePackReportResponseBody>(model1);
      }
    }
  }


  virtual ~GetAggregateCompliancePackReportResponse() = default;
};
class GetAggregateConfigRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> configRuleId{};

  GetAggregateConfigRuleRequest() {}

  explicit GetAggregateConfigRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
  }


  virtual ~GetAggregateConfigRuleRequest() = default;
};
class GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus : public Darabonba::Model {
public:
  shared_ptr<long> firstActivatedTimestamp{};
  shared_ptr<bool> firstEvaluationStarted{};
  shared_ptr<string> lastErrorCode{};
  shared_ptr<string> lastErrorMessage{};
  shared_ptr<long> lastFailedEvaluationTimestamp{};
  shared_ptr<long> lastFailedInvocationTimestamp{};
  shared_ptr<long> lastSuccessfulEvaluationTimestamp{};
  shared_ptr<long> lastSuccessfulInvocationTimestamp{};

  GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus() {}

  explicit GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (firstActivatedTimestamp) {
      res["FirstActivatedTimestamp"] = boost::any(*firstActivatedTimestamp);
    }
    if (firstEvaluationStarted) {
      res["FirstEvaluationStarted"] = boost::any(*firstEvaluationStarted);
    }
    if (lastErrorCode) {
      res["LastErrorCode"] = boost::any(*lastErrorCode);
    }
    if (lastErrorMessage) {
      res["LastErrorMessage"] = boost::any(*lastErrorMessage);
    }
    if (lastFailedEvaluationTimestamp) {
      res["LastFailedEvaluationTimestamp"] = boost::any(*lastFailedEvaluationTimestamp);
    }
    if (lastFailedInvocationTimestamp) {
      res["LastFailedInvocationTimestamp"] = boost::any(*lastFailedInvocationTimestamp);
    }
    if (lastSuccessfulEvaluationTimestamp) {
      res["LastSuccessfulEvaluationTimestamp"] = boost::any(*lastSuccessfulEvaluationTimestamp);
    }
    if (lastSuccessfulInvocationTimestamp) {
      res["LastSuccessfulInvocationTimestamp"] = boost::any(*lastSuccessfulInvocationTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FirstActivatedTimestamp") != m.end() && !m["FirstActivatedTimestamp"].empty()) {
      firstActivatedTimestamp = make_shared<long>(boost::any_cast<long>(m["FirstActivatedTimestamp"]));
    }
    if (m.find("FirstEvaluationStarted") != m.end() && !m["FirstEvaluationStarted"].empty()) {
      firstEvaluationStarted = make_shared<bool>(boost::any_cast<bool>(m["FirstEvaluationStarted"]));
    }
    if (m.find("LastErrorCode") != m.end() && !m["LastErrorCode"].empty()) {
      lastErrorCode = make_shared<string>(boost::any_cast<string>(m["LastErrorCode"]));
    }
    if (m.find("LastErrorMessage") != m.end() && !m["LastErrorMessage"].empty()) {
      lastErrorMessage = make_shared<string>(boost::any_cast<string>(m["LastErrorMessage"]));
    }
    if (m.find("LastFailedEvaluationTimestamp") != m.end() && !m["LastFailedEvaluationTimestamp"].empty()) {
      lastFailedEvaluationTimestamp = make_shared<long>(boost::any_cast<long>(m["LastFailedEvaluationTimestamp"]));
    }
    if (m.find("LastFailedInvocationTimestamp") != m.end() && !m["LastFailedInvocationTimestamp"].empty()) {
      lastFailedInvocationTimestamp = make_shared<long>(boost::any_cast<long>(m["LastFailedInvocationTimestamp"]));
    }
    if (m.find("LastSuccessfulEvaluationTimestamp") != m.end() && !m["LastSuccessfulEvaluationTimestamp"].empty()) {
      lastSuccessfulEvaluationTimestamp = make_shared<long>(boost::any_cast<long>(m["LastSuccessfulEvaluationTimestamp"]));
    }
    if (m.find("LastSuccessfulInvocationTimestamp") != m.end() && !m["LastSuccessfulInvocationTimestamp"].empty()) {
      lastSuccessfulInvocationTimestamp = make_shared<long>(boost::any_cast<long>(m["LastSuccessfulInvocationTimestamp"]));
    }
  }


  virtual ~GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus() = default;
};
class GetAggregateConfigRuleResponseBodyConfigRuleCreateBy : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> aggregatorName{};
  shared_ptr<string> compliancePackId{};
  shared_ptr<string> compliancePackName{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> creatorName{};
  shared_ptr<string> creatorType{};

  GetAggregateConfigRuleResponseBodyConfigRuleCreateBy() {}

  explicit GetAggregateConfigRuleResponseBodyConfigRuleCreateBy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (aggregatorName) {
      res["AggregatorName"] = boost::any(*aggregatorName);
    }
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (compliancePackName) {
      res["CompliancePackName"] = boost::any(*compliancePackName);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (creatorName) {
      res["CreatorName"] = boost::any(*creatorName);
    }
    if (creatorType) {
      res["CreatorType"] = boost::any(*creatorType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("AggregatorName") != m.end() && !m["AggregatorName"].empty()) {
      aggregatorName = make_shared<string>(boost::any_cast<string>(m["AggregatorName"]));
    }
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("CompliancePackName") != m.end() && !m["CompliancePackName"].empty()) {
      compliancePackName = make_shared<string>(boost::any_cast<string>(m["CompliancePackName"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["CreatorId"]));
    }
    if (m.find("CreatorName") != m.end() && !m["CreatorName"].empty()) {
      creatorName = make_shared<string>(boost::any_cast<string>(m["CreatorName"]));
    }
    if (m.find("CreatorType") != m.end() && !m["CreatorType"].empty()) {
      creatorType = make_shared<string>(boost::any_cast<string>(m["CreatorType"]));
    }
  }


  virtual ~GetAggregateConfigRuleResponseBodyConfigRuleCreateBy() = default;
};
class GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails : public Darabonba::Model {
public:
  shared_ptr<string> eventSource{};
  shared_ptr<string> maximumExecutionFrequency{};
  shared_ptr<string> messageType{};

  GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails() {}

  explicit GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventSource) {
      res["EventSource"] = boost::any(*eventSource);
    }
    if (maximumExecutionFrequency) {
      res["MaximumExecutionFrequency"] = boost::any(*maximumExecutionFrequency);
    }
    if (messageType) {
      res["MessageType"] = boost::any(*messageType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventSource") != m.end() && !m["EventSource"].empty()) {
      eventSource = make_shared<string>(boost::any_cast<string>(m["EventSource"]));
    }
    if (m.find("MaximumExecutionFrequency") != m.end() && !m["MaximumExecutionFrequency"].empty()) {
      maximumExecutionFrequency = make_shared<string>(boost::any_cast<string>(m["MaximumExecutionFrequency"]));
    }
    if (m.find("MessageType") != m.end() && !m["MessageType"].empty()) {
      messageType = make_shared<string>(boost::any_cast<string>(m["MessageType"]));
    }
  }


  virtual ~GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails() = default;
};
class GetAggregateConfigRuleResponseBodyConfigRuleManagedRule : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> compulsoryInputParameterDetails{};
  shared_ptr<string> description{};
  shared_ptr<string> identifier{};
  shared_ptr<vector<string>> labels{};
  shared_ptr<string> managedRuleName{};
  shared_ptr<map<string, boost::any>> optionalInputParameterDetails{};
  shared_ptr<vector<GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails>> sourceDetails{};

  GetAggregateConfigRuleResponseBodyConfigRuleManagedRule() {}

  explicit GetAggregateConfigRuleResponseBodyConfigRuleManagedRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compulsoryInputParameterDetails) {
      res["CompulsoryInputParameterDetails"] = boost::any(*compulsoryInputParameterDetails);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (managedRuleName) {
      res["ManagedRuleName"] = boost::any(*managedRuleName);
    }
    if (optionalInputParameterDetails) {
      res["OptionalInputParameterDetails"] = boost::any(*optionalInputParameterDetails);
    }
    if (sourceDetails) {
      vector<boost::any> temp1;
      for(auto item1:*sourceDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceDetails"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompulsoryInputParameterDetails") != m.end() && !m["CompulsoryInputParameterDetails"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["CompulsoryInputParameterDetails"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      compulsoryInputParameterDetails = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Labels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      labels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ManagedRuleName") != m.end() && !m["ManagedRuleName"].empty()) {
      managedRuleName = make_shared<string>(boost::any_cast<string>(m["ManagedRuleName"]));
    }
    if (m.find("OptionalInputParameterDetails") != m.end() && !m["OptionalInputParameterDetails"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["OptionalInputParameterDetails"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      optionalInputParameterDetails = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("SourceDetails") != m.end() && !m["SourceDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceDetails"].type()) {
        vector<GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceDetails = make_shared<vector<GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails>>(expect1);
      }
    }
  }


  virtual ~GetAggregateConfigRuleResponseBodyConfigRuleManagedRule() = default;
};
class GetAggregateConfigRuleResponseBodyConfigRuleSourceSourceDetails : public Darabonba::Model {
public:
  shared_ptr<string> eventSource{};
  shared_ptr<string> maximumExecutionFrequency{};
  shared_ptr<string> messageType{};

  GetAggregateConfigRuleResponseBodyConfigRuleSourceSourceDetails() {}

  explicit GetAggregateConfigRuleResponseBodyConfigRuleSourceSourceDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventSource) {
      res["EventSource"] = boost::any(*eventSource);
    }
    if (maximumExecutionFrequency) {
      res["MaximumExecutionFrequency"] = boost::any(*maximumExecutionFrequency);
    }
    if (messageType) {
      res["MessageType"] = boost::any(*messageType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventSource") != m.end() && !m["EventSource"].empty()) {
      eventSource = make_shared<string>(boost::any_cast<string>(m["EventSource"]));
    }
    if (m.find("MaximumExecutionFrequency") != m.end() && !m["MaximumExecutionFrequency"].empty()) {
      maximumExecutionFrequency = make_shared<string>(boost::any_cast<string>(m["MaximumExecutionFrequency"]));
    }
    if (m.find("MessageType") != m.end() && !m["MessageType"].empty()) {
      messageType = make_shared<string>(boost::any_cast<string>(m["MessageType"]));
    }
  }


  virtual ~GetAggregateConfigRuleResponseBodyConfigRuleSourceSourceDetails() = default;
};
class GetAggregateConfigRuleResponseBodyConfigRuleSource : public Darabonba::Model {
public:
  shared_ptr<string> identifier{};
  shared_ptr<string> owner{};
  shared_ptr<vector<GetAggregateConfigRuleResponseBodyConfigRuleSourceSourceDetails>> sourceDetails{};

  GetAggregateConfigRuleResponseBodyConfigRuleSource() {}

  explicit GetAggregateConfigRuleResponseBodyConfigRuleSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (sourceDetails) {
      vector<boost::any> temp1;
      for(auto item1:*sourceDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceDetails"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("SourceDetails") != m.end() && !m["SourceDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceDetails"].type()) {
        vector<GetAggregateConfigRuleResponseBodyConfigRuleSourceSourceDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAggregateConfigRuleResponseBodyConfigRuleSourceSourceDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceDetails = make_shared<vector<GetAggregateConfigRuleResponseBodyConfigRuleSourceSourceDetails>>(expect1);
      }
    }
  }


  virtual ~GetAggregateConfigRuleResponseBodyConfigRuleSource() = default;
};
class GetAggregateConfigRuleResponseBodyConfigRule : public Darabonba::Model {
public:
  shared_ptr<string> configRuleArn{};
  shared_ptr<GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus> configRuleEvaluationStatus{};
  shared_ptr<string> configRuleId{};
  shared_ptr<string> configRuleName{};
  shared_ptr<string> configRuleState{};
  shared_ptr<string> configRuleTriggerTypes{};
  shared_ptr<GetAggregateConfigRuleResponseBodyConfigRuleCreateBy> createBy{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<string> description{};
  shared_ptr<string> excludeResourceIdsScope{};
  shared_ptr<map<string, boost::any>> inputParameters{};
  shared_ptr<GetAggregateConfigRuleResponseBodyConfigRuleManagedRule> managedRule{};
  shared_ptr<string> maximumExecutionFrequency{};
  shared_ptr<long> modifiedTimestamp{};
  shared_ptr<string> regionIdsScope{};
  shared_ptr<string> resourceGroupIdsScope{};
  shared_ptr<string> resourceTypesScope{};
  shared_ptr<long> riskLevel{};
  shared_ptr<GetAggregateConfigRuleResponseBodyConfigRuleSource> source{};
  shared_ptr<string> tagKeyScope{};
  shared_ptr<string> tagValueScope{};

  GetAggregateConfigRuleResponseBodyConfigRule() {}

  explicit GetAggregateConfigRuleResponseBodyConfigRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleArn) {
      res["ConfigRuleArn"] = boost::any(*configRuleArn);
    }
    if (configRuleEvaluationStatus) {
      res["ConfigRuleEvaluationStatus"] = configRuleEvaluationStatus ? boost::any(configRuleEvaluationStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (configRuleName) {
      res["ConfigRuleName"] = boost::any(*configRuleName);
    }
    if (configRuleState) {
      res["ConfigRuleState"] = boost::any(*configRuleState);
    }
    if (configRuleTriggerTypes) {
      res["ConfigRuleTriggerTypes"] = boost::any(*configRuleTriggerTypes);
    }
    if (createBy) {
      res["CreateBy"] = createBy ? boost::any(createBy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTimestamp) {
      res["CreateTimestamp"] = boost::any(*createTimestamp);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (excludeResourceIdsScope) {
      res["ExcludeResourceIdsScope"] = boost::any(*excludeResourceIdsScope);
    }
    if (inputParameters) {
      res["InputParameters"] = boost::any(*inputParameters);
    }
    if (managedRule) {
      res["ManagedRule"] = managedRule ? boost::any(managedRule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (maximumExecutionFrequency) {
      res["MaximumExecutionFrequency"] = boost::any(*maximumExecutionFrequency);
    }
    if (modifiedTimestamp) {
      res["ModifiedTimestamp"] = boost::any(*modifiedTimestamp);
    }
    if (regionIdsScope) {
      res["RegionIdsScope"] = boost::any(*regionIdsScope);
    }
    if (resourceGroupIdsScope) {
      res["ResourceGroupIdsScope"] = boost::any(*resourceGroupIdsScope);
    }
    if (resourceTypesScope) {
      res["ResourceTypesScope"] = boost::any(*resourceTypesScope);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (source) {
      res["Source"] = source ? boost::any(source->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tagKeyScope) {
      res["TagKeyScope"] = boost::any(*tagKeyScope);
    }
    if (tagValueScope) {
      res["TagValueScope"] = boost::any(*tagValueScope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleArn") != m.end() && !m["ConfigRuleArn"].empty()) {
      configRuleArn = make_shared<string>(boost::any_cast<string>(m["ConfigRuleArn"]));
    }
    if (m.find("ConfigRuleEvaluationStatus") != m.end() && !m["ConfigRuleEvaluationStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigRuleEvaluationStatus"].type()) {
        GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigRuleEvaluationStatus"]));
        configRuleEvaluationStatus = make_shared<GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus>(model1);
      }
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("ConfigRuleName") != m.end() && !m["ConfigRuleName"].empty()) {
      configRuleName = make_shared<string>(boost::any_cast<string>(m["ConfigRuleName"]));
    }
    if (m.find("ConfigRuleState") != m.end() && !m["ConfigRuleState"].empty()) {
      configRuleState = make_shared<string>(boost::any_cast<string>(m["ConfigRuleState"]));
    }
    if (m.find("ConfigRuleTriggerTypes") != m.end() && !m["ConfigRuleTriggerTypes"].empty()) {
      configRuleTriggerTypes = make_shared<string>(boost::any_cast<string>(m["ConfigRuleTriggerTypes"]));
    }
    if (m.find("CreateBy") != m.end() && !m["CreateBy"].empty()) {
      if (typeid(map<string, boost::any>) == m["CreateBy"].type()) {
        GetAggregateConfigRuleResponseBodyConfigRuleCreateBy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CreateBy"]));
        createBy = make_shared<GetAggregateConfigRuleResponseBodyConfigRuleCreateBy>(model1);
      }
    }
    if (m.find("CreateTimestamp") != m.end() && !m["CreateTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["CreateTimestamp"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExcludeResourceIdsScope") != m.end() && !m["ExcludeResourceIdsScope"].empty()) {
      excludeResourceIdsScope = make_shared<string>(boost::any_cast<string>(m["ExcludeResourceIdsScope"]));
    }
    if (m.find("InputParameters") != m.end() && !m["InputParameters"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["InputParameters"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      inputParameters = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ManagedRule") != m.end() && !m["ManagedRule"].empty()) {
      if (typeid(map<string, boost::any>) == m["ManagedRule"].type()) {
        GetAggregateConfigRuleResponseBodyConfigRuleManagedRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ManagedRule"]));
        managedRule = make_shared<GetAggregateConfigRuleResponseBodyConfigRuleManagedRule>(model1);
      }
    }
    if (m.find("MaximumExecutionFrequency") != m.end() && !m["MaximumExecutionFrequency"].empty()) {
      maximumExecutionFrequency = make_shared<string>(boost::any_cast<string>(m["MaximumExecutionFrequency"]));
    }
    if (m.find("ModifiedTimestamp") != m.end() && !m["ModifiedTimestamp"].empty()) {
      modifiedTimestamp = make_shared<long>(boost::any_cast<long>(m["ModifiedTimestamp"]));
    }
    if (m.find("RegionIdsScope") != m.end() && !m["RegionIdsScope"].empty()) {
      regionIdsScope = make_shared<string>(boost::any_cast<string>(m["RegionIdsScope"]));
    }
    if (m.find("ResourceGroupIdsScope") != m.end() && !m["ResourceGroupIdsScope"].empty()) {
      resourceGroupIdsScope = make_shared<string>(boost::any_cast<string>(m["ResourceGroupIdsScope"]));
    }
    if (m.find("ResourceTypesScope") != m.end() && !m["ResourceTypesScope"].empty()) {
      resourceTypesScope = make_shared<string>(boost::any_cast<string>(m["ResourceTypesScope"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      if (typeid(map<string, boost::any>) == m["Source"].type()) {
        GetAggregateConfigRuleResponseBodyConfigRuleSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Source"]));
        source = make_shared<GetAggregateConfigRuleResponseBodyConfigRuleSource>(model1);
      }
    }
    if (m.find("TagKeyScope") != m.end() && !m["TagKeyScope"].empty()) {
      tagKeyScope = make_shared<string>(boost::any_cast<string>(m["TagKeyScope"]));
    }
    if (m.find("TagValueScope") != m.end() && !m["TagValueScope"].empty()) {
      tagValueScope = make_shared<string>(boost::any_cast<string>(m["TagValueScope"]));
    }
  }


  virtual ~GetAggregateConfigRuleResponseBodyConfigRule() = default;
};
class GetAggregateConfigRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAggregateConfigRuleResponseBodyConfigRule> configRule{};
  shared_ptr<string> requestId{};

  GetAggregateConfigRuleResponseBody() {}

  explicit GetAggregateConfigRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRule) {
      res["ConfigRule"] = configRule ? boost::any(configRule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRule") != m.end() && !m["ConfigRule"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigRule"].type()) {
        GetAggregateConfigRuleResponseBodyConfigRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigRule"]));
        configRule = make_shared<GetAggregateConfigRuleResponseBodyConfigRule>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAggregateConfigRuleResponseBody() = default;
};
class GetAggregateConfigRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAggregateConfigRuleResponseBody> body{};

  GetAggregateConfigRuleResponse() {}

  explicit GetAggregateConfigRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAggregateConfigRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAggregateConfigRuleResponseBody>(model1);
      }
    }
  }


  virtual ~GetAggregateConfigRuleResponse() = default;
};
class GetAggregateConfigRuleComplianceByPackRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> compliancePackId{};

  GetAggregateConfigRuleComplianceByPackRequest() {}

  explicit GetAggregateConfigRuleComplianceByPackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
  }


  virtual ~GetAggregateConfigRuleComplianceByPackRequest() = default;
};
class GetAggregateConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances : public Darabonba::Model {
public:
  shared_ptr<string> complianceType{};
  shared_ptr<string> configRuleId{};
  shared_ptr<string> configRuleName{};

  GetAggregateConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances() {}

  explicit GetAggregateConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (complianceType) {
      res["ComplianceType"] = boost::any(*complianceType);
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (configRuleName) {
      res["ConfigRuleName"] = boost::any(*configRuleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComplianceType") != m.end() && !m["ComplianceType"].empty()) {
      complianceType = make_shared<string>(boost::any_cast<string>(m["ComplianceType"]));
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("ConfigRuleName") != m.end() && !m["ConfigRuleName"].empty()) {
      configRuleName = make_shared<string>(boost::any_cast<string>(m["ConfigRuleName"]));
    }
  }


  virtual ~GetAggregateConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances() = default;
};
class GetAggregateConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult : public Darabonba::Model {
public:
  shared_ptr<string> compliancePackId{};
  shared_ptr<vector<GetAggregateConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances>> configRuleCompliances{};
  shared_ptr<long> nonCompliantCount{};
  shared_ptr<long> totalCount{};

  GetAggregateConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult() {}

  explicit GetAggregateConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (configRuleCompliances) {
      vector<boost::any> temp1;
      for(auto item1:*configRuleCompliances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigRuleCompliances"] = boost::any(temp1);
    }
    if (nonCompliantCount) {
      res["NonCompliantCount"] = boost::any(*nonCompliantCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("ConfigRuleCompliances") != m.end() && !m["ConfigRuleCompliances"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigRuleCompliances"].type()) {
        vector<GetAggregateConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigRuleCompliances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAggregateConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configRuleCompliances = make_shared<vector<GetAggregateConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances>>(expect1);
      }
    }
    if (m.find("NonCompliantCount") != m.end() && !m["NonCompliantCount"].empty()) {
      nonCompliantCount = make_shared<long>(boost::any_cast<long>(m["NonCompliantCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetAggregateConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult() = default;
};
class GetAggregateConfigRuleComplianceByPackResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAggregateConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult> configRuleComplianceResult{};
  shared_ptr<string> requestId{};

  GetAggregateConfigRuleComplianceByPackResponseBody() {}

  explicit GetAggregateConfigRuleComplianceByPackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleComplianceResult) {
      res["ConfigRuleComplianceResult"] = configRuleComplianceResult ? boost::any(configRuleComplianceResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleComplianceResult") != m.end() && !m["ConfigRuleComplianceResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigRuleComplianceResult"].type()) {
        GetAggregateConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigRuleComplianceResult"]));
        configRuleComplianceResult = make_shared<GetAggregateConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAggregateConfigRuleComplianceByPackResponseBody() = default;
};
class GetAggregateConfigRuleComplianceByPackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAggregateConfigRuleComplianceByPackResponseBody> body{};

  GetAggregateConfigRuleComplianceByPackResponse() {}

  explicit GetAggregateConfigRuleComplianceByPackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAggregateConfigRuleComplianceByPackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAggregateConfigRuleComplianceByPackResponseBody>(model1);
      }
    }
  }


  virtual ~GetAggregateConfigRuleComplianceByPackResponse() = default;
};
class GetAggregateConfigRuleSummaryByRiskLevelRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};

  GetAggregateConfigRuleSummaryByRiskLevelRequest() {}

  explicit GetAggregateConfigRuleSummaryByRiskLevelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
  }


  virtual ~GetAggregateConfigRuleSummaryByRiskLevelRequest() = default;
};
class GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries : public Darabonba::Model {
public:
  shared_ptr<long> compliantCount{};
  shared_ptr<long> nonCompliantCount{};
  shared_ptr<long> riskLevel{};

  GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries() {}

  explicit GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliantCount) {
      res["CompliantCount"] = boost::any(*compliantCount);
    }
    if (nonCompliantCount) {
      res["NonCompliantCount"] = boost::any(*nonCompliantCount);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliantCount") != m.end() && !m["CompliantCount"].empty()) {
      compliantCount = make_shared<long>(boost::any_cast<long>(m["CompliantCount"]));
    }
    if (m.find("NonCompliantCount") != m.end() && !m["NonCompliantCount"].empty()) {
      nonCompliantCount = make_shared<long>(boost::any_cast<long>(m["NonCompliantCount"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
  }


  virtual ~GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries() = default;
};
class GetAggregateConfigRuleSummaryByRiskLevelResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries>> configRuleSummaries{};
  shared_ptr<string> requestId{};

  GetAggregateConfigRuleSummaryByRiskLevelResponseBody() {}

  explicit GetAggregateConfigRuleSummaryByRiskLevelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleSummaries) {
      vector<boost::any> temp1;
      for(auto item1:*configRuleSummaries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigRuleSummaries"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleSummaries") != m.end() && !m["ConfigRuleSummaries"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigRuleSummaries"].type()) {
        vector<GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigRuleSummaries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configRuleSummaries = make_shared<vector<GetAggregateConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAggregateConfigRuleSummaryByRiskLevelResponseBody() = default;
};
class GetAggregateConfigRuleSummaryByRiskLevelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAggregateConfigRuleSummaryByRiskLevelResponseBody> body{};

  GetAggregateConfigRuleSummaryByRiskLevelResponse() {}

  explicit GetAggregateConfigRuleSummaryByRiskLevelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAggregateConfigRuleSummaryByRiskLevelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAggregateConfigRuleSummaryByRiskLevelResponseBody>(model1);
      }
    }
  }


  virtual ~GetAggregateConfigRuleSummaryByRiskLevelResponse() = default;
};
class GetAggregateConfigRulesReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};

  GetAggregateConfigRulesReportRequest() {}

  explicit GetAggregateConfigRulesReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
  }


  virtual ~GetAggregateConfigRulesReportRequest() = default;
};
class GetAggregateConfigRulesReportResponseBodyConfigRulesReport : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<string> aggregatorId{};
  shared_ptr<long> reportCreateTimestamp{};
  shared_ptr<string> reportStatus{};
  shared_ptr<string> reportUrl{};

  GetAggregateConfigRulesReportResponseBodyConfigRulesReport() {}

  explicit GetAggregateConfigRulesReportResponseBodyConfigRulesReport(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (reportCreateTimestamp) {
      res["ReportCreateTimestamp"] = boost::any(*reportCreateTimestamp);
    }
    if (reportStatus) {
      res["ReportStatus"] = boost::any(*reportStatus);
    }
    if (reportUrl) {
      res["ReportUrl"] = boost::any(*reportUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("ReportCreateTimestamp") != m.end() && !m["ReportCreateTimestamp"].empty()) {
      reportCreateTimestamp = make_shared<long>(boost::any_cast<long>(m["ReportCreateTimestamp"]));
    }
    if (m.find("ReportStatus") != m.end() && !m["ReportStatus"].empty()) {
      reportStatus = make_shared<string>(boost::any_cast<string>(m["ReportStatus"]));
    }
    if (m.find("ReportUrl") != m.end() && !m["ReportUrl"].empty()) {
      reportUrl = make_shared<string>(boost::any_cast<string>(m["ReportUrl"]));
    }
  }


  virtual ~GetAggregateConfigRulesReportResponseBodyConfigRulesReport() = default;
};
class GetAggregateConfigRulesReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAggregateConfigRulesReportResponseBodyConfigRulesReport> configRulesReport{};
  shared_ptr<string> requestId{};

  GetAggregateConfigRulesReportResponseBody() {}

  explicit GetAggregateConfigRulesReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRulesReport) {
      res["ConfigRulesReport"] = configRulesReport ? boost::any(configRulesReport->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRulesReport") != m.end() && !m["ConfigRulesReport"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigRulesReport"].type()) {
        GetAggregateConfigRulesReportResponseBodyConfigRulesReport model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigRulesReport"]));
        configRulesReport = make_shared<GetAggregateConfigRulesReportResponseBodyConfigRulesReport>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAggregateConfigRulesReportResponseBody() = default;
};
class GetAggregateConfigRulesReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAggregateConfigRulesReportResponseBody> body{};

  GetAggregateConfigRulesReportResponse() {}

  explicit GetAggregateConfigRulesReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAggregateConfigRulesReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAggregateConfigRulesReportResponseBody>(model1);
      }
    }
  }


  virtual ~GetAggregateConfigRulesReportResponse() = default;
};
class GetAggregateResourceComplianceByConfigRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> complianceType{};
  shared_ptr<string> configRuleId{};

  GetAggregateResourceComplianceByConfigRuleRequest() {}

  explicit GetAggregateResourceComplianceByConfigRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (complianceType) {
      res["ComplianceType"] = boost::any(*complianceType);
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("ComplianceType") != m.end() && !m["ComplianceType"].empty()) {
      complianceType = make_shared<string>(boost::any_cast<string>(m["ComplianceType"]));
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
  }


  virtual ~GetAggregateResourceComplianceByConfigRuleRequest() = default;
};
class GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances : public Darabonba::Model {
public:
  shared_ptr<string> complianceType{};
  shared_ptr<long> count{};

  GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances() {}

  explicit GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (complianceType) {
      res["ComplianceType"] = boost::any(*complianceType);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComplianceType") != m.end() && !m["ComplianceType"].empty()) {
      complianceType = make_shared<string>(boost::any_cast<string>(m["ComplianceType"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
  }


  virtual ~GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances() = default;
};
class GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult : public Darabonba::Model {
public:
  shared_ptr<vector<GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances>> compliances{};
  shared_ptr<long> totalCount{};

  GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult() {}

  explicit GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliances) {
      vector<boost::any> temp1;
      for(auto item1:*compliances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Compliances"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Compliances") != m.end() && !m["Compliances"].empty()) {
      if (typeid(vector<boost::any>) == m["Compliances"].type()) {
        vector<GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Compliances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        compliances = make_shared<vector<GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult() = default;
};
class GetAggregateResourceComplianceByConfigRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult> complianceResult{};
  shared_ptr<string> requestId{};

  GetAggregateResourceComplianceByConfigRuleResponseBody() {}

  explicit GetAggregateResourceComplianceByConfigRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (complianceResult) {
      res["ComplianceResult"] = complianceResult ? boost::any(complianceResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComplianceResult") != m.end() && !m["ComplianceResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["ComplianceResult"].type()) {
        GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ComplianceResult"]));
        complianceResult = make_shared<GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAggregateResourceComplianceByConfigRuleResponseBody() = default;
};
class GetAggregateResourceComplianceByConfigRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAggregateResourceComplianceByConfigRuleResponseBody> body{};

  GetAggregateResourceComplianceByConfigRuleResponse() {}

  explicit GetAggregateResourceComplianceByConfigRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAggregateResourceComplianceByConfigRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAggregateResourceComplianceByConfigRuleResponseBody>(model1);
      }
    }
  }


  virtual ~GetAggregateResourceComplianceByConfigRuleResponse() = default;
};
class GetAggregateResourceComplianceByPackRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> compliancePackId{};

  GetAggregateResourceComplianceByPackRequest() {}

  explicit GetAggregateResourceComplianceByPackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
  }


  virtual ~GetAggregateResourceComplianceByPackRequest() = default;
};
class GetAggregateResourceComplianceByPackResponseBodyResourceComplianceResult : public Darabonba::Model {
public:
  shared_ptr<string> compliancePackId{};
  shared_ptr<long> nonCompliantCount{};
  shared_ptr<long> totalCount{};

  GetAggregateResourceComplianceByPackResponseBodyResourceComplianceResult() {}

  explicit GetAggregateResourceComplianceByPackResponseBodyResourceComplianceResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (nonCompliantCount) {
      res["NonCompliantCount"] = boost::any(*nonCompliantCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("NonCompliantCount") != m.end() && !m["NonCompliantCount"].empty()) {
      nonCompliantCount = make_shared<long>(boost::any_cast<long>(m["NonCompliantCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetAggregateResourceComplianceByPackResponseBodyResourceComplianceResult() = default;
};
class GetAggregateResourceComplianceByPackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetAggregateResourceComplianceByPackResponseBodyResourceComplianceResult> resourceComplianceResult{};

  GetAggregateResourceComplianceByPackResponseBody() {}

  explicit GetAggregateResourceComplianceByPackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceComplianceResult) {
      res["ResourceComplianceResult"] = resourceComplianceResult ? boost::any(resourceComplianceResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceComplianceResult") != m.end() && !m["ResourceComplianceResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceComplianceResult"].type()) {
        GetAggregateResourceComplianceByPackResponseBodyResourceComplianceResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceComplianceResult"]));
        resourceComplianceResult = make_shared<GetAggregateResourceComplianceByPackResponseBodyResourceComplianceResult>(model1);
      }
    }
  }


  virtual ~GetAggregateResourceComplianceByPackResponseBody() = default;
};
class GetAggregateResourceComplianceByPackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAggregateResourceComplianceByPackResponseBody> body{};

  GetAggregateResourceComplianceByPackResponse() {}

  explicit GetAggregateResourceComplianceByPackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAggregateResourceComplianceByPackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAggregateResourceComplianceByPackResponseBody>(model1);
      }
    }
  }


  virtual ~GetAggregateResourceComplianceByPackResponse() = default;
};
class GetAggregateResourceComplianceTimelineRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<long> endTime{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceId{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> startTime{};

  GetAggregateResourceComplianceTimelineRequest() {}

  explicit GetAggregateResourceComplianceTimelineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~GetAggregateResourceComplianceTimelineRequest() = default;
};
class GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> availabilityZone{};
  shared_ptr<long> captureTime{};
  shared_ptr<string> configuration{};
  shared_ptr<string> configurationDiff{};
  shared_ptr<string> region{};
  shared_ptr<long> resourceCreateTime{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceStatus{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tags{};

  GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList() {}

  explicit GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (availabilityZone) {
      res["AvailabilityZone"] = boost::any(*availabilityZone);
    }
    if (captureTime) {
      res["CaptureTime"] = boost::any(*captureTime);
    }
    if (configuration) {
      res["Configuration"] = boost::any(*configuration);
    }
    if (configurationDiff) {
      res["ConfigurationDiff"] = boost::any(*configurationDiff);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceCreateTime) {
      res["ResourceCreateTime"] = boost::any(*resourceCreateTime);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceStatus) {
      res["ResourceStatus"] = boost::any(*resourceStatus);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AvailabilityZone") != m.end() && !m["AvailabilityZone"].empty()) {
      availabilityZone = make_shared<string>(boost::any_cast<string>(m["AvailabilityZone"]));
    }
    if (m.find("CaptureTime") != m.end() && !m["CaptureTime"].empty()) {
      captureTime = make_shared<long>(boost::any_cast<long>(m["CaptureTime"]));
    }
    if (m.find("Configuration") != m.end() && !m["Configuration"].empty()) {
      configuration = make_shared<string>(boost::any_cast<string>(m["Configuration"]));
    }
    if (m.find("ConfigurationDiff") != m.end() && !m["ConfigurationDiff"].empty()) {
      configurationDiff = make_shared<string>(boost::any_cast<string>(m["ConfigurationDiff"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceCreateTime") != m.end() && !m["ResourceCreateTime"].empty()) {
      resourceCreateTime = make_shared<long>(boost::any_cast<long>(m["ResourceCreateTime"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceStatus") != m.end() && !m["ResourceStatus"].empty()) {
      resourceStatus = make_shared<string>(boost::any_cast<string>(m["ResourceStatus"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList() = default;
};
class GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline : public Darabonba::Model {
public:
  shared_ptr<vector<GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList>> complianceList{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline() {}

  explicit GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (complianceList) {
      vector<boost::any> temp1;
      for(auto item1:*complianceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ComplianceList"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComplianceList") != m.end() && !m["ComplianceList"].empty()) {
      if (typeid(vector<boost::any>) == m["ComplianceList"].type()) {
        vector<GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ComplianceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        complianceList = make_shared<vector<GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline() = default;
};
class GetAggregateResourceComplianceTimelineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline> resourceComplianceTimeline{};

  GetAggregateResourceComplianceTimelineResponseBody() {}

  explicit GetAggregateResourceComplianceTimelineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceComplianceTimeline) {
      res["ResourceComplianceTimeline"] = resourceComplianceTimeline ? boost::any(resourceComplianceTimeline->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceComplianceTimeline") != m.end() && !m["ResourceComplianceTimeline"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceComplianceTimeline"].type()) {
        GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceComplianceTimeline"]));
        resourceComplianceTimeline = make_shared<GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline>(model1);
      }
    }
  }


  virtual ~GetAggregateResourceComplianceTimelineResponseBody() = default;
};
class GetAggregateResourceComplianceTimelineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAggregateResourceComplianceTimelineResponseBody> body{};

  GetAggregateResourceComplianceTimelineResponse() {}

  explicit GetAggregateResourceComplianceTimelineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAggregateResourceComplianceTimelineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAggregateResourceComplianceTimelineResponseBody>(model1);
      }
    }
  }


  virtual ~GetAggregateResourceComplianceTimelineResponse() = default;
};
class GetAggregateResourceConfigurationTimelineRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<long> endTime{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceId{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> startTime{};

  GetAggregateResourceConfigurationTimelineRequest() {}

  explicit GetAggregateResourceConfigurationTimelineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~GetAggregateResourceConfigurationTimelineRequest() = default;
};
class GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<string> availabilityZone{};
  shared_ptr<string> captureTime{};
  shared_ptr<string> configurationDiff{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceCreateTime{};
  shared_ptr<string> resourceEventType{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tags{};

  GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList() {}

  explicit GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (availabilityZone) {
      res["AvailabilityZone"] = boost::any(*availabilityZone);
    }
    if (captureTime) {
      res["CaptureTime"] = boost::any(*captureTime);
    }
    if (configurationDiff) {
      res["ConfigurationDiff"] = boost::any(*configurationDiff);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceCreateTime) {
      res["ResourceCreateTime"] = boost::any(*resourceCreateTime);
    }
    if (resourceEventType) {
      res["ResourceEventType"] = boost::any(*resourceEventType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("AvailabilityZone") != m.end() && !m["AvailabilityZone"].empty()) {
      availabilityZone = make_shared<string>(boost::any_cast<string>(m["AvailabilityZone"]));
    }
    if (m.find("CaptureTime") != m.end() && !m["CaptureTime"].empty()) {
      captureTime = make_shared<string>(boost::any_cast<string>(m["CaptureTime"]));
    }
    if (m.find("ConfigurationDiff") != m.end() && !m["ConfigurationDiff"].empty()) {
      configurationDiff = make_shared<string>(boost::any_cast<string>(m["ConfigurationDiff"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceCreateTime") != m.end() && !m["ResourceCreateTime"].empty()) {
      resourceCreateTime = make_shared<string>(boost::any_cast<string>(m["ResourceCreateTime"]));
    }
    if (m.find("ResourceEventType") != m.end() && !m["ResourceEventType"].empty()) {
      resourceEventType = make_shared<string>(boost::any_cast<string>(m["ResourceEventType"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList() = default;
};
class GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline : public Darabonba::Model {
public:
  shared_ptr<vector<GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList>> configurationList{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline() {}

  explicit GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configurationList) {
      vector<boost::any> temp1;
      for(auto item1:*configurationList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigurationList"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigurationList") != m.end() && !m["ConfigurationList"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigurationList"].type()) {
        vector<GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigurationList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configurationList = make_shared<vector<GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline() = default;
};
class GetAggregateResourceConfigurationTimelineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline> resourceConfigurationTimeline{};

  GetAggregateResourceConfigurationTimelineResponseBody() {}

  explicit GetAggregateResourceConfigurationTimelineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceConfigurationTimeline) {
      res["ResourceConfigurationTimeline"] = resourceConfigurationTimeline ? boost::any(resourceConfigurationTimeline->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceConfigurationTimeline") != m.end() && !m["ResourceConfigurationTimeline"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceConfigurationTimeline"].type()) {
        GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceConfigurationTimeline"]));
        resourceConfigurationTimeline = make_shared<GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline>(model1);
      }
    }
  }


  virtual ~GetAggregateResourceConfigurationTimelineResponseBody() = default;
};
class GetAggregateResourceConfigurationTimelineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAggregateResourceConfigurationTimelineResponseBody> body{};

  GetAggregateResourceConfigurationTimelineResponse() {}

  explicit GetAggregateResourceConfigurationTimelineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAggregateResourceConfigurationTimelineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAggregateResourceConfigurationTimelineResponseBody>(model1);
      }
    }
  }


  virtual ~GetAggregateResourceConfigurationTimelineResponse() = default;
};
class GetAggregateResourceCountsGroupByRegionRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> folderId{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};

  GetAggregateResourceCountsGroupByRegionRequest() {}

  explicit GetAggregateResourceCountsGroupByRegionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~GetAggregateResourceCountsGroupByRegionRequest() = default;
};
class GetAggregateResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<long> resourceCount{};

  GetAggregateResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary() {}

  explicit GetAggregateResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceCount) {
      res["ResourceCount"] = boost::any(*resourceCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceCount") != m.end() && !m["ResourceCount"].empty()) {
      resourceCount = make_shared<long>(boost::any_cast<long>(m["ResourceCount"]));
    }
  }


  virtual ~GetAggregateResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary() = default;
};
class GetAggregateResourceCountsGroupByRegionResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetAggregateResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary>> discoveredResourceCountsSummary{};
  shared_ptr<string> requestId{};

  GetAggregateResourceCountsGroupByRegionResponseBody() {}

  explicit GetAggregateResourceCountsGroupByRegionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (discoveredResourceCountsSummary) {
      vector<boost::any> temp1;
      for(auto item1:*discoveredResourceCountsSummary){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DiscoveredResourceCountsSummary"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiscoveredResourceCountsSummary") != m.end() && !m["DiscoveredResourceCountsSummary"].empty()) {
      if (typeid(vector<boost::any>) == m["DiscoveredResourceCountsSummary"].type()) {
        vector<GetAggregateResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DiscoveredResourceCountsSummary"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAggregateResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        discoveredResourceCountsSummary = make_shared<vector<GetAggregateResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAggregateResourceCountsGroupByRegionResponseBody() = default;
};
class GetAggregateResourceCountsGroupByRegionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAggregateResourceCountsGroupByRegionResponseBody> body{};

  GetAggregateResourceCountsGroupByRegionResponse() {}

  explicit GetAggregateResourceCountsGroupByRegionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAggregateResourceCountsGroupByRegionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAggregateResourceCountsGroupByRegionResponseBody>(model1);
      }
    }
  }


  virtual ~GetAggregateResourceCountsGroupByRegionResponse() = default;
};
class GetAggregateResourceCountsGroupByResourceTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> folderId{};
  shared_ptr<string> region{};
  shared_ptr<long> resourceOwnerId{};

  GetAggregateResourceCountsGroupByResourceTypeRequest() {}

  explicit GetAggregateResourceCountsGroupByResourceTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~GetAggregateResourceCountsGroupByResourceTypeRequest() = default;
};
class GetAggregateResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary : public Darabonba::Model {
public:
  shared_ptr<long> resourceCount{};
  shared_ptr<string> resourceType{};

  GetAggregateResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary() {}

  explicit GetAggregateResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceCount) {
      res["ResourceCount"] = boost::any(*resourceCount);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceCount") != m.end() && !m["ResourceCount"].empty()) {
      resourceCount = make_shared<long>(boost::any_cast<long>(m["ResourceCount"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~GetAggregateResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary() = default;
};
class GetAggregateResourceCountsGroupByResourceTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetAggregateResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary>> discoveredResourceCountsSummary{};
  shared_ptr<string> requestId{};

  GetAggregateResourceCountsGroupByResourceTypeResponseBody() {}

  explicit GetAggregateResourceCountsGroupByResourceTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (discoveredResourceCountsSummary) {
      vector<boost::any> temp1;
      for(auto item1:*discoveredResourceCountsSummary){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DiscoveredResourceCountsSummary"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiscoveredResourceCountsSummary") != m.end() && !m["DiscoveredResourceCountsSummary"].empty()) {
      if (typeid(vector<boost::any>) == m["DiscoveredResourceCountsSummary"].type()) {
        vector<GetAggregateResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DiscoveredResourceCountsSummary"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAggregateResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        discoveredResourceCountsSummary = make_shared<vector<GetAggregateResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAggregateResourceCountsGroupByResourceTypeResponseBody() = default;
};
class GetAggregateResourceCountsGroupByResourceTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAggregateResourceCountsGroupByResourceTypeResponseBody> body{};

  GetAggregateResourceCountsGroupByResourceTypeResponse() {}

  explicit GetAggregateResourceCountsGroupByResourceTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAggregateResourceCountsGroupByResourceTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAggregateResourceCountsGroupByResourceTypeResponseBody>(model1);
      }
    }
  }


  virtual ~GetAggregateResourceCountsGroupByResourceTypeResponse() = default;
};
class GetAggregatorRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};

  GetAggregatorRequest() {}

  explicit GetAggregatorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
  }


  virtual ~GetAggregatorRequest() = default;
};
class GetAggregatorResponseBodyAggregatorAggregatorAccounts : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountType{};
  shared_ptr<string> recorderStatus{};

  GetAggregatorResponseBodyAggregatorAggregatorAccounts() {}

  explicit GetAggregatorResponseBodyAggregatorAggregatorAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (recorderStatus) {
      res["RecorderStatus"] = boost::any(*recorderStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("RecorderStatus") != m.end() && !m["RecorderStatus"].empty()) {
      recorderStatus = make_shared<string>(boost::any_cast<string>(m["RecorderStatus"]));
    }
  }


  virtual ~GetAggregatorResponseBodyAggregatorAggregatorAccounts() = default;
};
class GetAggregatorResponseBodyAggregator : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<long> aggregatorAccountCount{};
  shared_ptr<vector<GetAggregatorResponseBodyAggregatorAggregatorAccounts>> aggregatorAccounts{};
  shared_ptr<string> aggregatorCreateTimestamp{};
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> aggregatorName{};
  shared_ptr<long> aggregatorStatus{};
  shared_ptr<string> aggregatorType{};
  shared_ptr<string> description{};

  GetAggregatorResponseBodyAggregator() {}

  explicit GetAggregatorResponseBodyAggregator(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (aggregatorAccountCount) {
      res["AggregatorAccountCount"] = boost::any(*aggregatorAccountCount);
    }
    if (aggregatorAccounts) {
      vector<boost::any> temp1;
      for(auto item1:*aggregatorAccounts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AggregatorAccounts"] = boost::any(temp1);
    }
    if (aggregatorCreateTimestamp) {
      res["AggregatorCreateTimestamp"] = boost::any(*aggregatorCreateTimestamp);
    }
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (aggregatorName) {
      res["AggregatorName"] = boost::any(*aggregatorName);
    }
    if (aggregatorStatus) {
      res["AggregatorStatus"] = boost::any(*aggregatorStatus);
    }
    if (aggregatorType) {
      res["AggregatorType"] = boost::any(*aggregatorType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("AggregatorAccountCount") != m.end() && !m["AggregatorAccountCount"].empty()) {
      aggregatorAccountCount = make_shared<long>(boost::any_cast<long>(m["AggregatorAccountCount"]));
    }
    if (m.find("AggregatorAccounts") != m.end() && !m["AggregatorAccounts"].empty()) {
      if (typeid(vector<boost::any>) == m["AggregatorAccounts"].type()) {
        vector<GetAggregatorResponseBodyAggregatorAggregatorAccounts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AggregatorAccounts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAggregatorResponseBodyAggregatorAggregatorAccounts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aggregatorAccounts = make_shared<vector<GetAggregatorResponseBodyAggregatorAggregatorAccounts>>(expect1);
      }
    }
    if (m.find("AggregatorCreateTimestamp") != m.end() && !m["AggregatorCreateTimestamp"].empty()) {
      aggregatorCreateTimestamp = make_shared<string>(boost::any_cast<string>(m["AggregatorCreateTimestamp"]));
    }
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("AggregatorName") != m.end() && !m["AggregatorName"].empty()) {
      aggregatorName = make_shared<string>(boost::any_cast<string>(m["AggregatorName"]));
    }
    if (m.find("AggregatorStatus") != m.end() && !m["AggregatorStatus"].empty()) {
      aggregatorStatus = make_shared<long>(boost::any_cast<long>(m["AggregatorStatus"]));
    }
    if (m.find("AggregatorType") != m.end() && !m["AggregatorType"].empty()) {
      aggregatorType = make_shared<string>(boost::any_cast<string>(m["AggregatorType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~GetAggregatorResponseBodyAggregator() = default;
};
class GetAggregatorResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAggregatorResponseBodyAggregator> aggregator{};
  shared_ptr<string> requestId{};

  GetAggregatorResponseBody() {}

  explicit GetAggregatorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregator) {
      res["Aggregator"] = aggregator ? boost::any(aggregator->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Aggregator") != m.end() && !m["Aggregator"].empty()) {
      if (typeid(map<string, boost::any>) == m["Aggregator"].type()) {
        GetAggregatorResponseBodyAggregator model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Aggregator"]));
        aggregator = make_shared<GetAggregatorResponseBodyAggregator>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAggregatorResponseBody() = default;
};
class GetAggregatorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAggregatorResponseBody> body{};

  GetAggregatorResponse() {}

  explicit GetAggregatorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAggregatorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAggregatorResponseBody>(model1);
      }
    }
  }


  virtual ~GetAggregatorResponse() = default;
};
class GetCompliancePackRequest : public Darabonba::Model {
public:
  shared_ptr<string> compliancePackId{};

  GetCompliancePackRequest() {}

  explicit GetCompliancePackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
  }


  virtual ~GetCompliancePackRequest() = default;
};
class GetCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterName{};
  shared_ptr<string> parameterValue{};
  shared_ptr<bool> required{};

  GetCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters() {}

  explicit GetCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterName) {
      res["ParameterName"] = boost::any(*parameterName);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterName") != m.end() && !m["ParameterName"].empty()) {
      parameterName = make_shared<string>(boost::any_cast<string>(m["ParameterName"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["Required"]));
    }
  }


  virtual ~GetCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters() = default;
};
class GetCompliancePackResponseBodyCompliancePackConfigRules : public Darabonba::Model {
public:
  shared_ptr<string> configRuleId{};
  shared_ptr<string> configRuleName{};
  shared_ptr<vector<GetCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters>> configRuleParameters{};
  shared_ptr<string> description{};
  shared_ptr<string> managedRuleIdentifier{};
  shared_ptr<long> riskLevel{};

  GetCompliancePackResponseBodyCompliancePackConfigRules() {}

  explicit GetCompliancePackResponseBodyCompliancePackConfigRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (configRuleName) {
      res["ConfigRuleName"] = boost::any(*configRuleName);
    }
    if (configRuleParameters) {
      vector<boost::any> temp1;
      for(auto item1:*configRuleParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigRuleParameters"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (managedRuleIdentifier) {
      res["ManagedRuleIdentifier"] = boost::any(*managedRuleIdentifier);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("ConfigRuleName") != m.end() && !m["ConfigRuleName"].empty()) {
      configRuleName = make_shared<string>(boost::any_cast<string>(m["ConfigRuleName"]));
    }
    if (m.find("ConfigRuleParameters") != m.end() && !m["ConfigRuleParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigRuleParameters"].type()) {
        vector<GetCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigRuleParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configRuleParameters = make_shared<vector<GetCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ManagedRuleIdentifier") != m.end() && !m["ManagedRuleIdentifier"].empty()) {
      managedRuleIdentifier = make_shared<string>(boost::any_cast<string>(m["ManagedRuleIdentifier"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
  }


  virtual ~GetCompliancePackResponseBodyCompliancePackConfigRules() = default;
};
class GetCompliancePackResponseBodyCompliancePack : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<string> compliancePackId{};
  shared_ptr<string> compliancePackName{};
  shared_ptr<string> compliancePackTemplateId{};
  shared_ptr<vector<GetCompliancePackResponseBodyCompliancePackConfigRules>> configRules{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<string> description{};
  shared_ptr<long> riskLevel{};
  shared_ptr<string> status{};

  GetCompliancePackResponseBodyCompliancePack() {}

  explicit GetCompliancePackResponseBodyCompliancePack(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (compliancePackName) {
      res["CompliancePackName"] = boost::any(*compliancePackName);
    }
    if (compliancePackTemplateId) {
      res["CompliancePackTemplateId"] = boost::any(*compliancePackTemplateId);
    }
    if (configRules) {
      vector<boost::any> temp1;
      for(auto item1:*configRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigRules"] = boost::any(temp1);
    }
    if (createTimestamp) {
      res["CreateTimestamp"] = boost::any(*createTimestamp);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("CompliancePackName") != m.end() && !m["CompliancePackName"].empty()) {
      compliancePackName = make_shared<string>(boost::any_cast<string>(m["CompliancePackName"]));
    }
    if (m.find("CompliancePackTemplateId") != m.end() && !m["CompliancePackTemplateId"].empty()) {
      compliancePackTemplateId = make_shared<string>(boost::any_cast<string>(m["CompliancePackTemplateId"]));
    }
    if (m.find("ConfigRules") != m.end() && !m["ConfigRules"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigRules"].type()) {
        vector<GetCompliancePackResponseBodyCompliancePackConfigRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCompliancePackResponseBodyCompliancePackConfigRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configRules = make_shared<vector<GetCompliancePackResponseBodyCompliancePackConfigRules>>(expect1);
      }
    }
    if (m.find("CreateTimestamp") != m.end() && !m["CreateTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["CreateTimestamp"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetCompliancePackResponseBodyCompliancePack() = default;
};
class GetCompliancePackResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetCompliancePackResponseBodyCompliancePack> compliancePack{};
  shared_ptr<string> requestId{};

  GetCompliancePackResponseBody() {}

  explicit GetCompliancePackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePack) {
      res["CompliancePack"] = compliancePack ? boost::any(compliancePack->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePack") != m.end() && !m["CompliancePack"].empty()) {
      if (typeid(map<string, boost::any>) == m["CompliancePack"].type()) {
        GetCompliancePackResponseBodyCompliancePack model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CompliancePack"]));
        compliancePack = make_shared<GetCompliancePackResponseBodyCompliancePack>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetCompliancePackResponseBody() = default;
};
class GetCompliancePackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetCompliancePackResponseBody> body{};

  GetCompliancePackResponse() {}

  explicit GetCompliancePackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCompliancePackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCompliancePackResponseBody>(model1);
      }
    }
  }


  virtual ~GetCompliancePackResponse() = default;
};
class GetCompliancePackReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> compliancePackId{};

  GetCompliancePackReportRequest() {}

  explicit GetCompliancePackReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
  }


  virtual ~GetCompliancePackReportRequest() = default;
};
class GetCompliancePackReportResponseBodyCompliancePackReport : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<string> compliancePackId{};
  shared_ptr<long> reportCreateTimestamp{};
  shared_ptr<string> reportStatus{};
  shared_ptr<string> reportUrl{};

  GetCompliancePackReportResponseBodyCompliancePackReport() {}

  explicit GetCompliancePackReportResponseBodyCompliancePackReport(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (reportCreateTimestamp) {
      res["ReportCreateTimestamp"] = boost::any(*reportCreateTimestamp);
    }
    if (reportStatus) {
      res["ReportStatus"] = boost::any(*reportStatus);
    }
    if (reportUrl) {
      res["ReportUrl"] = boost::any(*reportUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("ReportCreateTimestamp") != m.end() && !m["ReportCreateTimestamp"].empty()) {
      reportCreateTimestamp = make_shared<long>(boost::any_cast<long>(m["ReportCreateTimestamp"]));
    }
    if (m.find("ReportStatus") != m.end() && !m["ReportStatus"].empty()) {
      reportStatus = make_shared<string>(boost::any_cast<string>(m["ReportStatus"]));
    }
    if (m.find("ReportUrl") != m.end() && !m["ReportUrl"].empty()) {
      reportUrl = make_shared<string>(boost::any_cast<string>(m["ReportUrl"]));
    }
  }


  virtual ~GetCompliancePackReportResponseBodyCompliancePackReport() = default;
};
class GetCompliancePackReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetCompliancePackReportResponseBodyCompliancePackReport> compliancePackReport{};
  shared_ptr<string> requestId{};

  GetCompliancePackReportResponseBody() {}

  explicit GetCompliancePackReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePackReport) {
      res["CompliancePackReport"] = compliancePackReport ? boost::any(compliancePackReport->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePackReport") != m.end() && !m["CompliancePackReport"].empty()) {
      if (typeid(map<string, boost::any>) == m["CompliancePackReport"].type()) {
        GetCompliancePackReportResponseBodyCompliancePackReport model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CompliancePackReport"]));
        compliancePackReport = make_shared<GetCompliancePackReportResponseBodyCompliancePackReport>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetCompliancePackReportResponseBody() = default;
};
class GetCompliancePackReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetCompliancePackReportResponseBody> body{};

  GetCompliancePackReportResponse() {}

  explicit GetCompliancePackReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCompliancePackReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCompliancePackReportResponseBody>(model1);
      }
    }
  }


  virtual ~GetCompliancePackReportResponse() = default;
};
class GetConfigRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> configRuleId{};

  GetConfigRuleRequest() {}

  explicit GetConfigRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
  }


  virtual ~GetConfigRuleRequest() = default;
};
class GetConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus : public Darabonba::Model {
public:
  shared_ptr<long> firstActivatedTimestamp{};
  shared_ptr<bool> firstEvaluationStarted{};
  shared_ptr<string> lastErrorCode{};
  shared_ptr<string> lastErrorMessage{};
  shared_ptr<long> lastFailedEvaluationTimestamp{};
  shared_ptr<long> lastFailedInvocationTimestamp{};
  shared_ptr<long> lastSuccessfulEvaluationTimestamp{};
  shared_ptr<long> lastSuccessfulInvocationTimestamp{};

  GetConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus() {}

  explicit GetConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (firstActivatedTimestamp) {
      res["FirstActivatedTimestamp"] = boost::any(*firstActivatedTimestamp);
    }
    if (firstEvaluationStarted) {
      res["FirstEvaluationStarted"] = boost::any(*firstEvaluationStarted);
    }
    if (lastErrorCode) {
      res["LastErrorCode"] = boost::any(*lastErrorCode);
    }
    if (lastErrorMessage) {
      res["LastErrorMessage"] = boost::any(*lastErrorMessage);
    }
    if (lastFailedEvaluationTimestamp) {
      res["LastFailedEvaluationTimestamp"] = boost::any(*lastFailedEvaluationTimestamp);
    }
    if (lastFailedInvocationTimestamp) {
      res["LastFailedInvocationTimestamp"] = boost::any(*lastFailedInvocationTimestamp);
    }
    if (lastSuccessfulEvaluationTimestamp) {
      res["LastSuccessfulEvaluationTimestamp"] = boost::any(*lastSuccessfulEvaluationTimestamp);
    }
    if (lastSuccessfulInvocationTimestamp) {
      res["LastSuccessfulInvocationTimestamp"] = boost::any(*lastSuccessfulInvocationTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FirstActivatedTimestamp") != m.end() && !m["FirstActivatedTimestamp"].empty()) {
      firstActivatedTimestamp = make_shared<long>(boost::any_cast<long>(m["FirstActivatedTimestamp"]));
    }
    if (m.find("FirstEvaluationStarted") != m.end() && !m["FirstEvaluationStarted"].empty()) {
      firstEvaluationStarted = make_shared<bool>(boost::any_cast<bool>(m["FirstEvaluationStarted"]));
    }
    if (m.find("LastErrorCode") != m.end() && !m["LastErrorCode"].empty()) {
      lastErrorCode = make_shared<string>(boost::any_cast<string>(m["LastErrorCode"]));
    }
    if (m.find("LastErrorMessage") != m.end() && !m["LastErrorMessage"].empty()) {
      lastErrorMessage = make_shared<string>(boost::any_cast<string>(m["LastErrorMessage"]));
    }
    if (m.find("LastFailedEvaluationTimestamp") != m.end() && !m["LastFailedEvaluationTimestamp"].empty()) {
      lastFailedEvaluationTimestamp = make_shared<long>(boost::any_cast<long>(m["LastFailedEvaluationTimestamp"]));
    }
    if (m.find("LastFailedInvocationTimestamp") != m.end() && !m["LastFailedInvocationTimestamp"].empty()) {
      lastFailedInvocationTimestamp = make_shared<long>(boost::any_cast<long>(m["LastFailedInvocationTimestamp"]));
    }
    if (m.find("LastSuccessfulEvaluationTimestamp") != m.end() && !m["LastSuccessfulEvaluationTimestamp"].empty()) {
      lastSuccessfulEvaluationTimestamp = make_shared<long>(boost::any_cast<long>(m["LastSuccessfulEvaluationTimestamp"]));
    }
    if (m.find("LastSuccessfulInvocationTimestamp") != m.end() && !m["LastSuccessfulInvocationTimestamp"].empty()) {
      lastSuccessfulInvocationTimestamp = make_shared<long>(boost::any_cast<long>(m["LastSuccessfulInvocationTimestamp"]));
    }
  }


  virtual ~GetConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus() = default;
};
class GetConfigRuleResponseBodyConfigRuleCreateBy : public Darabonba::Model {
public:
  shared_ptr<string> compliancePackId{};
  shared_ptr<string> compliancePackName{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> creatorName{};

  GetConfigRuleResponseBodyConfigRuleCreateBy() {}

  explicit GetConfigRuleResponseBodyConfigRuleCreateBy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (compliancePackName) {
      res["CompliancePackName"] = boost::any(*compliancePackName);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (creatorName) {
      res["CreatorName"] = boost::any(*creatorName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("CompliancePackName") != m.end() && !m["CompliancePackName"].empty()) {
      compliancePackName = make_shared<string>(boost::any_cast<string>(m["CompliancePackName"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["CreatorId"]));
    }
    if (m.find("CreatorName") != m.end() && !m["CreatorName"].empty()) {
      creatorName = make_shared<string>(boost::any_cast<string>(m["CreatorName"]));
    }
  }


  virtual ~GetConfigRuleResponseBodyConfigRuleCreateBy() = default;
};
class GetConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails : public Darabonba::Model {
public:
  shared_ptr<string> eventSource{};
  shared_ptr<string> maximumExecutionFrequency{};
  shared_ptr<string> messageType{};

  GetConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails() {}

  explicit GetConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventSource) {
      res["EventSource"] = boost::any(*eventSource);
    }
    if (maximumExecutionFrequency) {
      res["MaximumExecutionFrequency"] = boost::any(*maximumExecutionFrequency);
    }
    if (messageType) {
      res["MessageType"] = boost::any(*messageType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventSource") != m.end() && !m["EventSource"].empty()) {
      eventSource = make_shared<string>(boost::any_cast<string>(m["EventSource"]));
    }
    if (m.find("MaximumExecutionFrequency") != m.end() && !m["MaximumExecutionFrequency"].empty()) {
      maximumExecutionFrequency = make_shared<string>(boost::any_cast<string>(m["MaximumExecutionFrequency"]));
    }
    if (m.find("MessageType") != m.end() && !m["MessageType"].empty()) {
      messageType = make_shared<string>(boost::any_cast<string>(m["MessageType"]));
    }
  }


  virtual ~GetConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails() = default;
};
class GetConfigRuleResponseBodyConfigRuleManagedRule : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> compulsoryInputParameterDetails{};
  shared_ptr<string> description{};
  shared_ptr<string> identifier{};
  shared_ptr<vector<string>> labels{};
  shared_ptr<string> managedRuleName{};
  shared_ptr<map<string, boost::any>> optionalInputParameterDetails{};
  shared_ptr<vector<GetConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails>> sourceDetails{};

  GetConfigRuleResponseBodyConfigRuleManagedRule() {}

  explicit GetConfigRuleResponseBodyConfigRuleManagedRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compulsoryInputParameterDetails) {
      res["CompulsoryInputParameterDetails"] = boost::any(*compulsoryInputParameterDetails);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (managedRuleName) {
      res["ManagedRuleName"] = boost::any(*managedRuleName);
    }
    if (optionalInputParameterDetails) {
      res["OptionalInputParameterDetails"] = boost::any(*optionalInputParameterDetails);
    }
    if (sourceDetails) {
      vector<boost::any> temp1;
      for(auto item1:*sourceDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceDetails"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompulsoryInputParameterDetails") != m.end() && !m["CompulsoryInputParameterDetails"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["CompulsoryInputParameterDetails"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      compulsoryInputParameterDetails = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Labels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      labels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ManagedRuleName") != m.end() && !m["ManagedRuleName"].empty()) {
      managedRuleName = make_shared<string>(boost::any_cast<string>(m["ManagedRuleName"]));
    }
    if (m.find("OptionalInputParameterDetails") != m.end() && !m["OptionalInputParameterDetails"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["OptionalInputParameterDetails"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      optionalInputParameterDetails = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("SourceDetails") != m.end() && !m["SourceDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceDetails"].type()) {
        vector<GetConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceDetails = make_shared<vector<GetConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails>>(expect1);
      }
    }
  }


  virtual ~GetConfigRuleResponseBodyConfigRuleManagedRule() = default;
};
class GetConfigRuleResponseBodyConfigRuleSourceSourceDetails : public Darabonba::Model {
public:
  shared_ptr<string> eventSource{};
  shared_ptr<string> maximumExecutionFrequency{};
  shared_ptr<string> messageType{};

  GetConfigRuleResponseBodyConfigRuleSourceSourceDetails() {}

  explicit GetConfigRuleResponseBodyConfigRuleSourceSourceDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventSource) {
      res["EventSource"] = boost::any(*eventSource);
    }
    if (maximumExecutionFrequency) {
      res["MaximumExecutionFrequency"] = boost::any(*maximumExecutionFrequency);
    }
    if (messageType) {
      res["MessageType"] = boost::any(*messageType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventSource") != m.end() && !m["EventSource"].empty()) {
      eventSource = make_shared<string>(boost::any_cast<string>(m["EventSource"]));
    }
    if (m.find("MaximumExecutionFrequency") != m.end() && !m["MaximumExecutionFrequency"].empty()) {
      maximumExecutionFrequency = make_shared<string>(boost::any_cast<string>(m["MaximumExecutionFrequency"]));
    }
    if (m.find("MessageType") != m.end() && !m["MessageType"].empty()) {
      messageType = make_shared<string>(boost::any_cast<string>(m["MessageType"]));
    }
  }


  virtual ~GetConfigRuleResponseBodyConfigRuleSourceSourceDetails() = default;
};
class GetConfigRuleResponseBodyConfigRuleSource : public Darabonba::Model {
public:
  shared_ptr<string> identifier{};
  shared_ptr<string> owner{};
  shared_ptr<vector<GetConfigRuleResponseBodyConfigRuleSourceSourceDetails>> sourceDetails{};

  GetConfigRuleResponseBodyConfigRuleSource() {}

  explicit GetConfigRuleResponseBodyConfigRuleSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (sourceDetails) {
      vector<boost::any> temp1;
      for(auto item1:*sourceDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceDetails"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("SourceDetails") != m.end() && !m["SourceDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceDetails"].type()) {
        vector<GetConfigRuleResponseBodyConfigRuleSourceSourceDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetConfigRuleResponseBodyConfigRuleSourceSourceDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceDetails = make_shared<vector<GetConfigRuleResponseBodyConfigRuleSourceSourceDetails>>(expect1);
      }
    }
  }


  virtual ~GetConfigRuleResponseBodyConfigRuleSource() = default;
};
class GetConfigRuleResponseBodyConfigRule : public Darabonba::Model {
public:
  shared_ptr<string> configRuleArn{};
  shared_ptr<GetConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus> configRuleEvaluationStatus{};
  shared_ptr<string> configRuleId{};
  shared_ptr<string> configRuleName{};
  shared_ptr<string> configRuleState{};
  shared_ptr<string> configRuleTriggerTypes{};
  shared_ptr<GetConfigRuleResponseBodyConfigRuleCreateBy> createBy{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<string> description{};
  shared_ptr<string> excludeResourceIdsScope{};
  shared_ptr<map<string, boost::any>> inputParameters{};
  shared_ptr<GetConfigRuleResponseBodyConfigRuleManagedRule> managedRule{};
  shared_ptr<string> maximumExecutionFrequency{};
  shared_ptr<long> modifiedTimestamp{};
  shared_ptr<string> regionIdsScope{};
  shared_ptr<string> resourceGroupIdsScope{};
  shared_ptr<string> resourceTypesScope{};
  shared_ptr<long> riskLevel{};
  shared_ptr<GetConfigRuleResponseBodyConfigRuleSource> source{};
  shared_ptr<string> tagKeyScope{};
  shared_ptr<string> tagValueScope{};

  GetConfigRuleResponseBodyConfigRule() {}

  explicit GetConfigRuleResponseBodyConfigRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleArn) {
      res["ConfigRuleArn"] = boost::any(*configRuleArn);
    }
    if (configRuleEvaluationStatus) {
      res["ConfigRuleEvaluationStatus"] = configRuleEvaluationStatus ? boost::any(configRuleEvaluationStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (configRuleName) {
      res["ConfigRuleName"] = boost::any(*configRuleName);
    }
    if (configRuleState) {
      res["ConfigRuleState"] = boost::any(*configRuleState);
    }
    if (configRuleTriggerTypes) {
      res["ConfigRuleTriggerTypes"] = boost::any(*configRuleTriggerTypes);
    }
    if (createBy) {
      res["CreateBy"] = createBy ? boost::any(createBy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTimestamp) {
      res["CreateTimestamp"] = boost::any(*createTimestamp);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (excludeResourceIdsScope) {
      res["ExcludeResourceIdsScope"] = boost::any(*excludeResourceIdsScope);
    }
    if (inputParameters) {
      res["InputParameters"] = boost::any(*inputParameters);
    }
    if (managedRule) {
      res["ManagedRule"] = managedRule ? boost::any(managedRule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (maximumExecutionFrequency) {
      res["MaximumExecutionFrequency"] = boost::any(*maximumExecutionFrequency);
    }
    if (modifiedTimestamp) {
      res["ModifiedTimestamp"] = boost::any(*modifiedTimestamp);
    }
    if (regionIdsScope) {
      res["RegionIdsScope"] = boost::any(*regionIdsScope);
    }
    if (resourceGroupIdsScope) {
      res["ResourceGroupIdsScope"] = boost::any(*resourceGroupIdsScope);
    }
    if (resourceTypesScope) {
      res["ResourceTypesScope"] = boost::any(*resourceTypesScope);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (source) {
      res["Source"] = source ? boost::any(source->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tagKeyScope) {
      res["TagKeyScope"] = boost::any(*tagKeyScope);
    }
    if (tagValueScope) {
      res["TagValueScope"] = boost::any(*tagValueScope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleArn") != m.end() && !m["ConfigRuleArn"].empty()) {
      configRuleArn = make_shared<string>(boost::any_cast<string>(m["ConfigRuleArn"]));
    }
    if (m.find("ConfigRuleEvaluationStatus") != m.end() && !m["ConfigRuleEvaluationStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigRuleEvaluationStatus"].type()) {
        GetConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigRuleEvaluationStatus"]));
        configRuleEvaluationStatus = make_shared<GetConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus>(model1);
      }
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("ConfigRuleName") != m.end() && !m["ConfigRuleName"].empty()) {
      configRuleName = make_shared<string>(boost::any_cast<string>(m["ConfigRuleName"]));
    }
    if (m.find("ConfigRuleState") != m.end() && !m["ConfigRuleState"].empty()) {
      configRuleState = make_shared<string>(boost::any_cast<string>(m["ConfigRuleState"]));
    }
    if (m.find("ConfigRuleTriggerTypes") != m.end() && !m["ConfigRuleTriggerTypes"].empty()) {
      configRuleTriggerTypes = make_shared<string>(boost::any_cast<string>(m["ConfigRuleTriggerTypes"]));
    }
    if (m.find("CreateBy") != m.end() && !m["CreateBy"].empty()) {
      if (typeid(map<string, boost::any>) == m["CreateBy"].type()) {
        GetConfigRuleResponseBodyConfigRuleCreateBy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CreateBy"]));
        createBy = make_shared<GetConfigRuleResponseBodyConfigRuleCreateBy>(model1);
      }
    }
    if (m.find("CreateTimestamp") != m.end() && !m["CreateTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["CreateTimestamp"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExcludeResourceIdsScope") != m.end() && !m["ExcludeResourceIdsScope"].empty()) {
      excludeResourceIdsScope = make_shared<string>(boost::any_cast<string>(m["ExcludeResourceIdsScope"]));
    }
    if (m.find("InputParameters") != m.end() && !m["InputParameters"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["InputParameters"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      inputParameters = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ManagedRule") != m.end() && !m["ManagedRule"].empty()) {
      if (typeid(map<string, boost::any>) == m["ManagedRule"].type()) {
        GetConfigRuleResponseBodyConfigRuleManagedRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ManagedRule"]));
        managedRule = make_shared<GetConfigRuleResponseBodyConfigRuleManagedRule>(model1);
      }
    }
    if (m.find("MaximumExecutionFrequency") != m.end() && !m["MaximumExecutionFrequency"].empty()) {
      maximumExecutionFrequency = make_shared<string>(boost::any_cast<string>(m["MaximumExecutionFrequency"]));
    }
    if (m.find("ModifiedTimestamp") != m.end() && !m["ModifiedTimestamp"].empty()) {
      modifiedTimestamp = make_shared<long>(boost::any_cast<long>(m["ModifiedTimestamp"]));
    }
    if (m.find("RegionIdsScope") != m.end() && !m["RegionIdsScope"].empty()) {
      regionIdsScope = make_shared<string>(boost::any_cast<string>(m["RegionIdsScope"]));
    }
    if (m.find("ResourceGroupIdsScope") != m.end() && !m["ResourceGroupIdsScope"].empty()) {
      resourceGroupIdsScope = make_shared<string>(boost::any_cast<string>(m["ResourceGroupIdsScope"]));
    }
    if (m.find("ResourceTypesScope") != m.end() && !m["ResourceTypesScope"].empty()) {
      resourceTypesScope = make_shared<string>(boost::any_cast<string>(m["ResourceTypesScope"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      if (typeid(map<string, boost::any>) == m["Source"].type()) {
        GetConfigRuleResponseBodyConfigRuleSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Source"]));
        source = make_shared<GetConfigRuleResponseBodyConfigRuleSource>(model1);
      }
    }
    if (m.find("TagKeyScope") != m.end() && !m["TagKeyScope"].empty()) {
      tagKeyScope = make_shared<string>(boost::any_cast<string>(m["TagKeyScope"]));
    }
    if (m.find("TagValueScope") != m.end() && !m["TagValueScope"].empty()) {
      tagValueScope = make_shared<string>(boost::any_cast<string>(m["TagValueScope"]));
    }
  }


  virtual ~GetConfigRuleResponseBodyConfigRule() = default;
};
class GetConfigRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetConfigRuleResponseBodyConfigRule> configRule{};
  shared_ptr<string> requestId{};

  GetConfigRuleResponseBody() {}

  explicit GetConfigRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRule) {
      res["ConfigRule"] = configRule ? boost::any(configRule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRule") != m.end() && !m["ConfigRule"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigRule"].type()) {
        GetConfigRuleResponseBodyConfigRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigRule"]));
        configRule = make_shared<GetConfigRuleResponseBodyConfigRule>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetConfigRuleResponseBody() = default;
};
class GetConfigRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetConfigRuleResponseBody> body{};

  GetConfigRuleResponse() {}

  explicit GetConfigRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetConfigRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConfigRuleResponseBody>(model1);
      }
    }
  }


  virtual ~GetConfigRuleResponse() = default;
};
class GetConfigRuleComplianceByPackRequest : public Darabonba::Model {
public:
  shared_ptr<string> compliancePackId{};

  GetConfigRuleComplianceByPackRequest() {}

  explicit GetConfigRuleComplianceByPackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
  }


  virtual ~GetConfigRuleComplianceByPackRequest() = default;
};
class GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances : public Darabonba::Model {
public:
  shared_ptr<string> complianceType{};
  shared_ptr<string> configRuleId{};
  shared_ptr<string> configRuleName{};

  GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances() {}

  explicit GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (complianceType) {
      res["ComplianceType"] = boost::any(*complianceType);
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (configRuleName) {
      res["ConfigRuleName"] = boost::any(*configRuleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComplianceType") != m.end() && !m["ComplianceType"].empty()) {
      complianceType = make_shared<string>(boost::any_cast<string>(m["ComplianceType"]));
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("ConfigRuleName") != m.end() && !m["ConfigRuleName"].empty()) {
      configRuleName = make_shared<string>(boost::any_cast<string>(m["ConfigRuleName"]));
    }
  }


  virtual ~GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances() = default;
};
class GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult : public Darabonba::Model {
public:
  shared_ptr<string> compliancePackId{};
  shared_ptr<vector<GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances>> configRuleCompliances{};
  shared_ptr<long> nonCompliantCount{};
  shared_ptr<long> totalCount{};

  GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult() {}

  explicit GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (configRuleCompliances) {
      vector<boost::any> temp1;
      for(auto item1:*configRuleCompliances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigRuleCompliances"] = boost::any(temp1);
    }
    if (nonCompliantCount) {
      res["NonCompliantCount"] = boost::any(*nonCompliantCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("ConfigRuleCompliances") != m.end() && !m["ConfigRuleCompliances"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigRuleCompliances"].type()) {
        vector<GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigRuleCompliances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configRuleCompliances = make_shared<vector<GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances>>(expect1);
      }
    }
    if (m.find("NonCompliantCount") != m.end() && !m["NonCompliantCount"].empty()) {
      nonCompliantCount = make_shared<long>(boost::any_cast<long>(m["NonCompliantCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult() = default;
};
class GetConfigRuleComplianceByPackResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult> configRuleComplianceResult{};
  shared_ptr<string> requestId{};

  GetConfigRuleComplianceByPackResponseBody() {}

  explicit GetConfigRuleComplianceByPackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleComplianceResult) {
      res["ConfigRuleComplianceResult"] = configRuleComplianceResult ? boost::any(configRuleComplianceResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleComplianceResult") != m.end() && !m["ConfigRuleComplianceResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigRuleComplianceResult"].type()) {
        GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigRuleComplianceResult"]));
        configRuleComplianceResult = make_shared<GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetConfigRuleComplianceByPackResponseBody() = default;
};
class GetConfigRuleComplianceByPackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetConfigRuleComplianceByPackResponseBody> body{};

  GetConfigRuleComplianceByPackResponse() {}

  explicit GetConfigRuleComplianceByPackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetConfigRuleComplianceByPackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConfigRuleComplianceByPackResponseBody>(model1);
      }
    }
  }


  virtual ~GetConfigRuleComplianceByPackResponse() = default;
};
class GetConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries : public Darabonba::Model {
public:
  shared_ptr<long> compliantCount{};
  shared_ptr<long> nonCompliantCount{};
  shared_ptr<long> riskLevel{};

  GetConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries() {}

  explicit GetConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliantCount) {
      res["CompliantCount"] = boost::any(*compliantCount);
    }
    if (nonCompliantCount) {
      res["NonCompliantCount"] = boost::any(*nonCompliantCount);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliantCount") != m.end() && !m["CompliantCount"].empty()) {
      compliantCount = make_shared<long>(boost::any_cast<long>(m["CompliantCount"]));
    }
    if (m.find("NonCompliantCount") != m.end() && !m["NonCompliantCount"].empty()) {
      nonCompliantCount = make_shared<long>(boost::any_cast<long>(m["NonCompliantCount"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
  }


  virtual ~GetConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries() = default;
};
class GetConfigRuleSummaryByRiskLevelResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries>> configRuleSummaries{};
  shared_ptr<string> requestId{};

  GetConfigRuleSummaryByRiskLevelResponseBody() {}

  explicit GetConfigRuleSummaryByRiskLevelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleSummaries) {
      vector<boost::any> temp1;
      for(auto item1:*configRuleSummaries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigRuleSummaries"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleSummaries") != m.end() && !m["ConfigRuleSummaries"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigRuleSummaries"].type()) {
        vector<GetConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigRuleSummaries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configRuleSummaries = make_shared<vector<GetConfigRuleSummaryByRiskLevelResponseBodyConfigRuleSummaries>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetConfigRuleSummaryByRiskLevelResponseBody() = default;
};
class GetConfigRuleSummaryByRiskLevelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetConfigRuleSummaryByRiskLevelResponseBody> body{};

  GetConfigRuleSummaryByRiskLevelResponse() {}

  explicit GetConfigRuleSummaryByRiskLevelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetConfigRuleSummaryByRiskLevelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConfigRuleSummaryByRiskLevelResponseBody>(model1);
      }
    }
  }


  virtual ~GetConfigRuleSummaryByRiskLevelResponse() = default;
};
class GetConfigRulesReportResponseBodyConfigRulesReport : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<long> reportCreateTimestamp{};
  shared_ptr<string> reportStatus{};
  shared_ptr<string> reportUrl{};

  GetConfigRulesReportResponseBodyConfigRulesReport() {}

  explicit GetConfigRulesReportResponseBodyConfigRulesReport(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (reportCreateTimestamp) {
      res["ReportCreateTimestamp"] = boost::any(*reportCreateTimestamp);
    }
    if (reportStatus) {
      res["ReportStatus"] = boost::any(*reportStatus);
    }
    if (reportUrl) {
      res["ReportUrl"] = boost::any(*reportUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("ReportCreateTimestamp") != m.end() && !m["ReportCreateTimestamp"].empty()) {
      reportCreateTimestamp = make_shared<long>(boost::any_cast<long>(m["ReportCreateTimestamp"]));
    }
    if (m.find("ReportStatus") != m.end() && !m["ReportStatus"].empty()) {
      reportStatus = make_shared<string>(boost::any_cast<string>(m["ReportStatus"]));
    }
    if (m.find("ReportUrl") != m.end() && !m["ReportUrl"].empty()) {
      reportUrl = make_shared<string>(boost::any_cast<string>(m["ReportUrl"]));
    }
  }


  virtual ~GetConfigRulesReportResponseBodyConfigRulesReport() = default;
};
class GetConfigRulesReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetConfigRulesReportResponseBodyConfigRulesReport> configRulesReport{};
  shared_ptr<string> requestId{};

  GetConfigRulesReportResponseBody() {}

  explicit GetConfigRulesReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRulesReport) {
      res["ConfigRulesReport"] = configRulesReport ? boost::any(configRulesReport->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRulesReport") != m.end() && !m["ConfigRulesReport"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigRulesReport"].type()) {
        GetConfigRulesReportResponseBodyConfigRulesReport model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigRulesReport"]));
        configRulesReport = make_shared<GetConfigRulesReportResponseBodyConfigRulesReport>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetConfigRulesReportResponseBody() = default;
};
class GetConfigRulesReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetConfigRulesReportResponseBody> body{};

  GetConfigRulesReportResponse() {}

  explicit GetConfigRulesReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetConfigRulesReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConfigRulesReportResponseBody>(model1);
      }
    }
  }


  virtual ~GetConfigRulesReportResponse() = default;
};
class GetDiscoveredResourceCountsGroupByRegionRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceType{};

  GetDiscoveredResourceCountsGroupByRegionRequest() {}

  explicit GetDiscoveredResourceCountsGroupByRegionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~GetDiscoveredResourceCountsGroupByRegionRequest() = default;
};
class GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<long> resourceCount{};

  GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary() {}

  explicit GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceCount) {
      res["ResourceCount"] = boost::any(*resourceCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceCount") != m.end() && !m["ResourceCount"].empty()) {
      resourceCount = make_shared<long>(boost::any_cast<long>(m["ResourceCount"]));
    }
  }


  virtual ~GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary() = default;
};
class GetDiscoveredResourceCountsGroupByRegionResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary>> discoveredResourceCountsSummary{};
  shared_ptr<string> requestId{};

  GetDiscoveredResourceCountsGroupByRegionResponseBody() {}

  explicit GetDiscoveredResourceCountsGroupByRegionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (discoveredResourceCountsSummary) {
      vector<boost::any> temp1;
      for(auto item1:*discoveredResourceCountsSummary){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DiscoveredResourceCountsSummary"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiscoveredResourceCountsSummary") != m.end() && !m["DiscoveredResourceCountsSummary"].empty()) {
      if (typeid(vector<boost::any>) == m["DiscoveredResourceCountsSummary"].type()) {
        vector<GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DiscoveredResourceCountsSummary"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        discoveredResourceCountsSummary = make_shared<vector<GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDiscoveredResourceCountsGroupByRegionResponseBody() = default;
};
class GetDiscoveredResourceCountsGroupByRegionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDiscoveredResourceCountsGroupByRegionResponseBody> body{};

  GetDiscoveredResourceCountsGroupByRegionResponse() {}

  explicit GetDiscoveredResourceCountsGroupByRegionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDiscoveredResourceCountsGroupByRegionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDiscoveredResourceCountsGroupByRegionResponseBody>(model1);
      }
    }
  }


  virtual ~GetDiscoveredResourceCountsGroupByRegionResponse() = default;
};
class GetDiscoveredResourceCountsGroupByResourceTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> region{};

  GetDiscoveredResourceCountsGroupByResourceTypeRequest() {}

  explicit GetDiscoveredResourceCountsGroupByResourceTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~GetDiscoveredResourceCountsGroupByResourceTypeRequest() = default;
};
class GetDiscoveredResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary : public Darabonba::Model {
public:
  shared_ptr<long> resourceCount{};
  shared_ptr<string> resourceType{};

  GetDiscoveredResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary() {}

  explicit GetDiscoveredResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceCount) {
      res["ResourceCount"] = boost::any(*resourceCount);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceCount") != m.end() && !m["ResourceCount"].empty()) {
      resourceCount = make_shared<long>(boost::any_cast<long>(m["ResourceCount"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~GetDiscoveredResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary() = default;
};
class GetDiscoveredResourceCountsGroupByResourceTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetDiscoveredResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary>> discoveredResourceCountsSummary{};
  shared_ptr<string> requestId{};

  GetDiscoveredResourceCountsGroupByResourceTypeResponseBody() {}

  explicit GetDiscoveredResourceCountsGroupByResourceTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (discoveredResourceCountsSummary) {
      vector<boost::any> temp1;
      for(auto item1:*discoveredResourceCountsSummary){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DiscoveredResourceCountsSummary"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiscoveredResourceCountsSummary") != m.end() && !m["DiscoveredResourceCountsSummary"].empty()) {
      if (typeid(vector<boost::any>) == m["DiscoveredResourceCountsSummary"].type()) {
        vector<GetDiscoveredResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DiscoveredResourceCountsSummary"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDiscoveredResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        discoveredResourceCountsSummary = make_shared<vector<GetDiscoveredResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDiscoveredResourceCountsGroupByResourceTypeResponseBody() = default;
};
class GetDiscoveredResourceCountsGroupByResourceTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDiscoveredResourceCountsGroupByResourceTypeResponseBody> body{};

  GetDiscoveredResourceCountsGroupByResourceTypeResponse() {}

  explicit GetDiscoveredResourceCountsGroupByResourceTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDiscoveredResourceCountsGroupByResourceTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDiscoveredResourceCountsGroupByResourceTypeResponseBody>(model1);
      }
    }
  }


  virtual ~GetDiscoveredResourceCountsGroupByResourceTypeResponse() = default;
};
class GetResourceComplianceByConfigRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> complianceType{};
  shared_ptr<string> configRuleId{};

  GetResourceComplianceByConfigRuleRequest() {}

  explicit GetResourceComplianceByConfigRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (complianceType) {
      res["ComplianceType"] = boost::any(*complianceType);
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComplianceType") != m.end() && !m["ComplianceType"].empty()) {
      complianceType = make_shared<string>(boost::any_cast<string>(m["ComplianceType"]));
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
  }


  virtual ~GetResourceComplianceByConfigRuleRequest() = default;
};
class GetResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances : public Darabonba::Model {
public:
  shared_ptr<string> complianceType{};
  shared_ptr<long> count{};

  GetResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances() {}

  explicit GetResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (complianceType) {
      res["ComplianceType"] = boost::any(*complianceType);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComplianceType") != m.end() && !m["ComplianceType"].empty()) {
      complianceType = make_shared<string>(boost::any_cast<string>(m["ComplianceType"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
  }


  virtual ~GetResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances() = default;
};
class GetResourceComplianceByConfigRuleResponseBodyComplianceResult : public Darabonba::Model {
public:
  shared_ptr<vector<GetResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances>> compliances{};
  shared_ptr<long> totalCount{};

  GetResourceComplianceByConfigRuleResponseBodyComplianceResult() {}

  explicit GetResourceComplianceByConfigRuleResponseBodyComplianceResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliances) {
      vector<boost::any> temp1;
      for(auto item1:*compliances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Compliances"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Compliances") != m.end() && !m["Compliances"].empty()) {
      if (typeid(vector<boost::any>) == m["Compliances"].type()) {
        vector<GetResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Compliances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        compliances = make_shared<vector<GetResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetResourceComplianceByConfigRuleResponseBodyComplianceResult() = default;
};
class GetResourceComplianceByConfigRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetResourceComplianceByConfigRuleResponseBodyComplianceResult> complianceResult{};
  shared_ptr<string> requestId{};

  GetResourceComplianceByConfigRuleResponseBody() {}

  explicit GetResourceComplianceByConfigRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (complianceResult) {
      res["ComplianceResult"] = complianceResult ? boost::any(complianceResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComplianceResult") != m.end() && !m["ComplianceResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["ComplianceResult"].type()) {
        GetResourceComplianceByConfigRuleResponseBodyComplianceResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ComplianceResult"]));
        complianceResult = make_shared<GetResourceComplianceByConfigRuleResponseBodyComplianceResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetResourceComplianceByConfigRuleResponseBody() = default;
};
class GetResourceComplianceByConfigRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetResourceComplianceByConfigRuleResponseBody> body{};

  GetResourceComplianceByConfigRuleResponse() {}

  explicit GetResourceComplianceByConfigRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourceComplianceByConfigRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceComplianceByConfigRuleResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceComplianceByConfigRuleResponse() = default;
};
class GetResourceComplianceByPackRequest : public Darabonba::Model {
public:
  shared_ptr<string> compliancePackId{};

  GetResourceComplianceByPackRequest() {}

  explicit GetResourceComplianceByPackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
  }


  virtual ~GetResourceComplianceByPackRequest() = default;
};
class GetResourceComplianceByPackResponseBodyResourceComplianceResult : public Darabonba::Model {
public:
  shared_ptr<string> compliancePackId{};
  shared_ptr<long> nonCompliantCount{};
  shared_ptr<long> totalCount{};

  GetResourceComplianceByPackResponseBodyResourceComplianceResult() {}

  explicit GetResourceComplianceByPackResponseBodyResourceComplianceResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (nonCompliantCount) {
      res["NonCompliantCount"] = boost::any(*nonCompliantCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("NonCompliantCount") != m.end() && !m["NonCompliantCount"].empty()) {
      nonCompliantCount = make_shared<long>(boost::any_cast<long>(m["NonCompliantCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetResourceComplianceByPackResponseBodyResourceComplianceResult() = default;
};
class GetResourceComplianceByPackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetResourceComplianceByPackResponseBodyResourceComplianceResult> resourceComplianceResult{};

  GetResourceComplianceByPackResponseBody() {}

  explicit GetResourceComplianceByPackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceComplianceResult) {
      res["ResourceComplianceResult"] = resourceComplianceResult ? boost::any(resourceComplianceResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceComplianceResult") != m.end() && !m["ResourceComplianceResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceComplianceResult"].type()) {
        GetResourceComplianceByPackResponseBodyResourceComplianceResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceComplianceResult"]));
        resourceComplianceResult = make_shared<GetResourceComplianceByPackResponseBodyResourceComplianceResult>(model1);
      }
    }
  }


  virtual ~GetResourceComplianceByPackResponseBody() = default;
};
class GetResourceComplianceByPackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetResourceComplianceByPackResponseBody> body{};

  GetResourceComplianceByPackResponse() {}

  explicit GetResourceComplianceByPackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourceComplianceByPackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceComplianceByPackResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceComplianceByPackResponse() = default;
};
class GetResourceComplianceTimelineRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> startTime{};

  GetResourceComplianceTimelineRequest() {}

  explicit GetResourceComplianceTimelineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~GetResourceComplianceTimelineRequest() = default;
};
class GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> availabilityZone{};
  shared_ptr<long> captureTime{};
  shared_ptr<string> configuration{};
  shared_ptr<string> configurationDiff{};
  shared_ptr<string> region{};
  shared_ptr<long> resourceCreateTime{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceStatus{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tags{};

  GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList() {}

  explicit GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (availabilityZone) {
      res["AvailabilityZone"] = boost::any(*availabilityZone);
    }
    if (captureTime) {
      res["CaptureTime"] = boost::any(*captureTime);
    }
    if (configuration) {
      res["Configuration"] = boost::any(*configuration);
    }
    if (configurationDiff) {
      res["ConfigurationDiff"] = boost::any(*configurationDiff);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceCreateTime) {
      res["ResourceCreateTime"] = boost::any(*resourceCreateTime);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceStatus) {
      res["ResourceStatus"] = boost::any(*resourceStatus);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AvailabilityZone") != m.end() && !m["AvailabilityZone"].empty()) {
      availabilityZone = make_shared<string>(boost::any_cast<string>(m["AvailabilityZone"]));
    }
    if (m.find("CaptureTime") != m.end() && !m["CaptureTime"].empty()) {
      captureTime = make_shared<long>(boost::any_cast<long>(m["CaptureTime"]));
    }
    if (m.find("Configuration") != m.end() && !m["Configuration"].empty()) {
      configuration = make_shared<string>(boost::any_cast<string>(m["Configuration"]));
    }
    if (m.find("ConfigurationDiff") != m.end() && !m["ConfigurationDiff"].empty()) {
      configurationDiff = make_shared<string>(boost::any_cast<string>(m["ConfigurationDiff"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceCreateTime") != m.end() && !m["ResourceCreateTime"].empty()) {
      resourceCreateTime = make_shared<long>(boost::any_cast<long>(m["ResourceCreateTime"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceStatus") != m.end() && !m["ResourceStatus"].empty()) {
      resourceStatus = make_shared<string>(boost::any_cast<string>(m["ResourceStatus"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList() = default;
};
class GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline : public Darabonba::Model {
public:
  shared_ptr<vector<GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList>> complianceList{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline() {}

  explicit GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (complianceList) {
      vector<boost::any> temp1;
      for(auto item1:*complianceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ComplianceList"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComplianceList") != m.end() && !m["ComplianceList"].empty()) {
      if (typeid(vector<boost::any>) == m["ComplianceList"].type()) {
        vector<GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ComplianceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        complianceList = make_shared<vector<GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline() = default;
};
class GetResourceComplianceTimelineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline> resourceComplianceTimeline{};

  GetResourceComplianceTimelineResponseBody() {}

  explicit GetResourceComplianceTimelineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceComplianceTimeline) {
      res["ResourceComplianceTimeline"] = resourceComplianceTimeline ? boost::any(resourceComplianceTimeline->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceComplianceTimeline") != m.end() && !m["ResourceComplianceTimeline"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceComplianceTimeline"].type()) {
        GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceComplianceTimeline"]));
        resourceComplianceTimeline = make_shared<GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline>(model1);
      }
    }
  }


  virtual ~GetResourceComplianceTimelineResponseBody() = default;
};
class GetResourceComplianceTimelineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetResourceComplianceTimelineResponseBody> body{};

  GetResourceComplianceTimelineResponse() {}

  explicit GetResourceComplianceTimelineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourceComplianceTimelineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceComplianceTimelineResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceComplianceTimelineResponse() = default;
};
class GetResourceConfigurationTimelineRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> startTime{};

  GetResourceConfigurationTimelineRequest() {}

  explicit GetResourceConfigurationTimelineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~GetResourceConfigurationTimelineRequest() = default;
};
class GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<string> availabilityZone{};
  shared_ptr<string> captureTime{};
  shared_ptr<string> configurationDiff{};
  shared_ptr<string> region{};
  shared_ptr<string> relationship{};
  shared_ptr<string> relationshipDiff{};
  shared_ptr<string> resourceCreateTime{};
  shared_ptr<string> resourceEventType{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tags{};

  GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList() {}

  explicit GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (availabilityZone) {
      res["AvailabilityZone"] = boost::any(*availabilityZone);
    }
    if (captureTime) {
      res["CaptureTime"] = boost::any(*captureTime);
    }
    if (configurationDiff) {
      res["ConfigurationDiff"] = boost::any(*configurationDiff);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (relationship) {
      res["Relationship"] = boost::any(*relationship);
    }
    if (relationshipDiff) {
      res["RelationshipDiff"] = boost::any(*relationshipDiff);
    }
    if (resourceCreateTime) {
      res["ResourceCreateTime"] = boost::any(*resourceCreateTime);
    }
    if (resourceEventType) {
      res["ResourceEventType"] = boost::any(*resourceEventType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("AvailabilityZone") != m.end() && !m["AvailabilityZone"].empty()) {
      availabilityZone = make_shared<string>(boost::any_cast<string>(m["AvailabilityZone"]));
    }
    if (m.find("CaptureTime") != m.end() && !m["CaptureTime"].empty()) {
      captureTime = make_shared<string>(boost::any_cast<string>(m["CaptureTime"]));
    }
    if (m.find("ConfigurationDiff") != m.end() && !m["ConfigurationDiff"].empty()) {
      configurationDiff = make_shared<string>(boost::any_cast<string>(m["ConfigurationDiff"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Relationship") != m.end() && !m["Relationship"].empty()) {
      relationship = make_shared<string>(boost::any_cast<string>(m["Relationship"]));
    }
    if (m.find("RelationshipDiff") != m.end() && !m["RelationshipDiff"].empty()) {
      relationshipDiff = make_shared<string>(boost::any_cast<string>(m["RelationshipDiff"]));
    }
    if (m.find("ResourceCreateTime") != m.end() && !m["ResourceCreateTime"].empty()) {
      resourceCreateTime = make_shared<string>(boost::any_cast<string>(m["ResourceCreateTime"]));
    }
    if (m.find("ResourceEventType") != m.end() && !m["ResourceEventType"].empty()) {
      resourceEventType = make_shared<string>(boost::any_cast<string>(m["ResourceEventType"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList() = default;
};
class GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline : public Darabonba::Model {
public:
  shared_ptr<vector<GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList>> configurationList{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline() {}

  explicit GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configurationList) {
      vector<boost::any> temp1;
      for(auto item1:*configurationList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigurationList"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigurationList") != m.end() && !m["ConfigurationList"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigurationList"].type()) {
        vector<GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigurationList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configurationList = make_shared<vector<GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline() = default;
};
class GetResourceConfigurationTimelineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline> resourceConfigurationTimeline{};

  GetResourceConfigurationTimelineResponseBody() {}

  explicit GetResourceConfigurationTimelineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceConfigurationTimeline) {
      res["ResourceConfigurationTimeline"] = resourceConfigurationTimeline ? boost::any(resourceConfigurationTimeline->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceConfigurationTimeline") != m.end() && !m["ResourceConfigurationTimeline"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceConfigurationTimeline"].type()) {
        GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceConfigurationTimeline"]));
        resourceConfigurationTimeline = make_shared<GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline>(model1);
      }
    }
  }


  virtual ~GetResourceConfigurationTimelineResponseBody() = default;
};
class GetResourceConfigurationTimelineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetResourceConfigurationTimelineResponseBody> body{};

  GetResourceConfigurationTimelineResponse() {}

  explicit GetResourceConfigurationTimelineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourceConfigurationTimelineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceConfigurationTimelineResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceConfigurationTimelineResponse() = default;
};
class IgnoreAggregateEvaluationResultsRequestResources : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<long> resourceAccountId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  IgnoreAggregateEvaluationResultsRequestResources() {}

  explicit IgnoreAggregateEvaluationResultsRequestResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceAccountId) {
      res["ResourceAccountId"] = boost::any(*resourceAccountId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceAccountId") != m.end() && !m["ResourceAccountId"].empty()) {
      resourceAccountId = make_shared<long>(boost::any_cast<long>(m["ResourceAccountId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~IgnoreAggregateEvaluationResultsRequestResources() = default;
};
class IgnoreAggregateEvaluationResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> configRuleId{};
  shared_ptr<string> reason{};
  shared_ptr<vector<IgnoreAggregateEvaluationResultsRequestResources>> resources{};

  IgnoreAggregateEvaluationResultsRequest() {}

  explicit IgnoreAggregateEvaluationResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
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
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<IgnoreAggregateEvaluationResultsRequestResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            IgnoreAggregateEvaluationResultsRequestResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<IgnoreAggregateEvaluationResultsRequestResources>>(expect1);
      }
    }
  }


  virtual ~IgnoreAggregateEvaluationResultsRequest() = default;
};
class IgnoreAggregateEvaluationResultsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> configRuleId{};
  shared_ptr<string> reason{};
  shared_ptr<string> resourcesShrink{};

  IgnoreAggregateEvaluationResultsShrinkRequest() {}

  explicit IgnoreAggregateEvaluationResultsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (resourcesShrink) {
      res["Resources"] = boost::any(*resourcesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      resourcesShrink = make_shared<string>(boost::any_cast<string>(m["Resources"]));
    }
  }


  virtual ~IgnoreAggregateEvaluationResultsShrinkRequest() = default;
};
class IgnoreAggregateEvaluationResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  IgnoreAggregateEvaluationResultsResponseBody() {}

  explicit IgnoreAggregateEvaluationResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~IgnoreAggregateEvaluationResultsResponseBody() = default;
};
class IgnoreAggregateEvaluationResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<IgnoreAggregateEvaluationResultsResponseBody> body{};

  IgnoreAggregateEvaluationResultsResponse() {}

  explicit IgnoreAggregateEvaluationResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        IgnoreAggregateEvaluationResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<IgnoreAggregateEvaluationResultsResponseBody>(model1);
      }
    }
  }


  virtual ~IgnoreAggregateEvaluationResultsResponse() = default;
};
class IgnoreEvaluationResultsRequestResources : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<long> resourceAccountId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  IgnoreEvaluationResultsRequestResources() {}

  explicit IgnoreEvaluationResultsRequestResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceAccountId) {
      res["ResourceAccountId"] = boost::any(*resourceAccountId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceAccountId") != m.end() && !m["ResourceAccountId"].empty()) {
      resourceAccountId = make_shared<long>(boost::any_cast<long>(m["ResourceAccountId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~IgnoreEvaluationResultsRequestResources() = default;
};
class IgnoreEvaluationResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> configRuleId{};
  shared_ptr<string> reason{};
  shared_ptr<vector<IgnoreEvaluationResultsRequestResources>> resources{};

  IgnoreEvaluationResultsRequest() {}

  explicit IgnoreEvaluationResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
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
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<IgnoreEvaluationResultsRequestResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            IgnoreEvaluationResultsRequestResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<IgnoreEvaluationResultsRequestResources>>(expect1);
      }
    }
  }


  virtual ~IgnoreEvaluationResultsRequest() = default;
};
class IgnoreEvaluationResultsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> configRuleId{};
  shared_ptr<string> reason{};
  shared_ptr<string> resourcesShrink{};

  IgnoreEvaluationResultsShrinkRequest() {}

  explicit IgnoreEvaluationResultsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (resourcesShrink) {
      res["Resources"] = boost::any(*resourcesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      resourcesShrink = make_shared<string>(boost::any_cast<string>(m["Resources"]));
    }
  }


  virtual ~IgnoreEvaluationResultsShrinkRequest() = default;
};
class IgnoreEvaluationResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  IgnoreEvaluationResultsResponseBody() {}

  explicit IgnoreEvaluationResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~IgnoreEvaluationResultsResponseBody() = default;
};
class IgnoreEvaluationResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<IgnoreEvaluationResultsResponseBody> body{};

  IgnoreEvaluationResultsResponse() {}

  explicit IgnoreEvaluationResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        IgnoreEvaluationResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<IgnoreEvaluationResultsResponseBody>(model1);
      }
    }
  }


  virtual ~IgnoreEvaluationResultsResponse() = default;
};
class ListAggregateCompliancePacksRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};

  ListAggregateCompliancePacksRequest() {}

  explicit ListAggregateCompliancePacksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListAggregateCompliancePacksRequest() = default;
};
class ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> compliancePackId{};
  shared_ptr<string> compliancePackName{};
  shared_ptr<string> compliancePackTemplateId{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<string> description{};
  shared_ptr<long> riskLevel{};
  shared_ptr<string> status{};

  ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks() {}

  explicit ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (compliancePackName) {
      res["CompliancePackName"] = boost::any(*compliancePackName);
    }
    if (compliancePackTemplateId) {
      res["CompliancePackTemplateId"] = boost::any(*compliancePackTemplateId);
    }
    if (createTimestamp) {
      res["CreateTimestamp"] = boost::any(*createTimestamp);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("CompliancePackName") != m.end() && !m["CompliancePackName"].empty()) {
      compliancePackName = make_shared<string>(boost::any_cast<string>(m["CompliancePackName"]));
    }
    if (m.find("CompliancePackTemplateId") != m.end() && !m["CompliancePackTemplateId"].empty()) {
      compliancePackTemplateId = make_shared<string>(boost::any_cast<string>(m["CompliancePackTemplateId"]));
    }
    if (m.find("CreateTimestamp") != m.end() && !m["CreateTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["CreateTimestamp"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks() = default;
};
class ListAggregateCompliancePacksResponseBodyCompliancePacksResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks>> compliancePacks{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListAggregateCompliancePacksResponseBodyCompliancePacksResult() {}

  explicit ListAggregateCompliancePacksResponseBodyCompliancePacksResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePacks) {
      vector<boost::any> temp1;
      for(auto item1:*compliancePacks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CompliancePacks"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePacks") != m.end() && !m["CompliancePacks"].empty()) {
      if (typeid(vector<boost::any>) == m["CompliancePacks"].type()) {
        vector<ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CompliancePacks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        compliancePacks = make_shared<vector<ListAggregateCompliancePacksResponseBodyCompliancePacksResultCompliancePacks>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAggregateCompliancePacksResponseBodyCompliancePacksResult() = default;
};
class ListAggregateCompliancePacksResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListAggregateCompliancePacksResponseBodyCompliancePacksResult> compliancePacksResult{};
  shared_ptr<string> requestId{};

  ListAggregateCompliancePacksResponseBody() {}

  explicit ListAggregateCompliancePacksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePacksResult) {
      res["CompliancePacksResult"] = compliancePacksResult ? boost::any(compliancePacksResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePacksResult") != m.end() && !m["CompliancePacksResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["CompliancePacksResult"].type()) {
        ListAggregateCompliancePacksResponseBodyCompliancePacksResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CompliancePacksResult"]));
        compliancePacksResult = make_shared<ListAggregateCompliancePacksResponseBodyCompliancePacksResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAggregateCompliancePacksResponseBody() = default;
};
class ListAggregateCompliancePacksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAggregateCompliancePacksResponseBody> body{};

  ListAggregateCompliancePacksResponse() {}

  explicit ListAggregateCompliancePacksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAggregateCompliancePacksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAggregateCompliancePacksResponseBody>(model1);
      }
    }
  }


  virtual ~ListAggregateCompliancePacksResponse() = default;
};
class ListAggregateConfigRuleEvaluationResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> compliancePackId{};
  shared_ptr<string> complianceType{};
  shared_ptr<string> configRuleId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> resourceOwnerId{};

  ListAggregateConfigRuleEvaluationResultsRequest() {}

  explicit ListAggregateConfigRuleEvaluationResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (complianceType) {
      res["ComplianceType"] = boost::any(*complianceType);
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("ComplianceType") != m.end() && !m["ComplianceType"].empty()) {
      complianceType = make_shared<string>(boost::any_cast<string>(m["ComplianceType"]));
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ListAggregateConfigRuleEvaluationResultsRequest() = default;
};
class ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier : public Darabonba::Model {
public:
  shared_ptr<string> compliancePackId{};
  shared_ptr<string> configRuleArn{};
  shared_ptr<string> configRuleId{};
  shared_ptr<string> configRuleName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};

  ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier() {}

  explicit ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (configRuleArn) {
      res["ConfigRuleArn"] = boost::any(*configRuleArn);
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (configRuleName) {
      res["ConfigRuleName"] = boost::any(*configRuleName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("ConfigRuleArn") != m.end() && !m["ConfigRuleArn"].empty()) {
      configRuleArn = make_shared<string>(boost::any_cast<string>(m["ConfigRuleArn"]));
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("ConfigRuleName") != m.end() && !m["ConfigRuleName"].empty()) {
      configRuleName = make_shared<string>(boost::any_cast<string>(m["ConfigRuleName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier() = default;
};
class ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier : public Darabonba::Model {
public:
  shared_ptr<ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier> evaluationResultQualifier{};
  shared_ptr<long> orderingTimestamp{};

  ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier() {}

  explicit ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (evaluationResultQualifier) {
      res["EvaluationResultQualifier"] = evaluationResultQualifier ? boost::any(evaluationResultQualifier->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (orderingTimestamp) {
      res["OrderingTimestamp"] = boost::any(*orderingTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EvaluationResultQualifier") != m.end() && !m["EvaluationResultQualifier"].empty()) {
      if (typeid(map<string, boost::any>) == m["EvaluationResultQualifier"].type()) {
        ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EvaluationResultQualifier"]));
        evaluationResultQualifier = make_shared<ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier>(model1);
      }
    }
    if (m.find("OrderingTimestamp") != m.end() && !m["OrderingTimestamp"].empty()) {
      orderingTimestamp = make_shared<long>(boost::any_cast<long>(m["OrderingTimestamp"]));
    }
  }


  virtual ~ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier() = default;
};
class ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList : public Darabonba::Model {
public:
  shared_ptr<string> annotation{};
  shared_ptr<string> complianceType{};
  shared_ptr<long> configRuleInvokedTimestamp{};
  shared_ptr<ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier> evaluationResultIdentifier{};
  shared_ptr<string> invokingEventMessageType{};
  shared_ptr<bool> remediationEnabled{};
  shared_ptr<long> resultRecordedTimestamp{};
  shared_ptr<long> riskLevel{};

  ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList() {}

  explicit ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (annotation) {
      res["Annotation"] = boost::any(*annotation);
    }
    if (complianceType) {
      res["ComplianceType"] = boost::any(*complianceType);
    }
    if (configRuleInvokedTimestamp) {
      res["ConfigRuleInvokedTimestamp"] = boost::any(*configRuleInvokedTimestamp);
    }
    if (evaluationResultIdentifier) {
      res["EvaluationResultIdentifier"] = evaluationResultIdentifier ? boost::any(evaluationResultIdentifier->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (invokingEventMessageType) {
      res["InvokingEventMessageType"] = boost::any(*invokingEventMessageType);
    }
    if (remediationEnabled) {
      res["RemediationEnabled"] = boost::any(*remediationEnabled);
    }
    if (resultRecordedTimestamp) {
      res["ResultRecordedTimestamp"] = boost::any(*resultRecordedTimestamp);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Annotation") != m.end() && !m["Annotation"].empty()) {
      annotation = make_shared<string>(boost::any_cast<string>(m["Annotation"]));
    }
    if (m.find("ComplianceType") != m.end() && !m["ComplianceType"].empty()) {
      complianceType = make_shared<string>(boost::any_cast<string>(m["ComplianceType"]));
    }
    if (m.find("ConfigRuleInvokedTimestamp") != m.end() && !m["ConfigRuleInvokedTimestamp"].empty()) {
      configRuleInvokedTimestamp = make_shared<long>(boost::any_cast<long>(m["ConfigRuleInvokedTimestamp"]));
    }
    if (m.find("EvaluationResultIdentifier") != m.end() && !m["EvaluationResultIdentifier"].empty()) {
      if (typeid(map<string, boost::any>) == m["EvaluationResultIdentifier"].type()) {
        ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EvaluationResultIdentifier"]));
        evaluationResultIdentifier = make_shared<ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier>(model1);
      }
    }
    if (m.find("InvokingEventMessageType") != m.end() && !m["InvokingEventMessageType"].empty()) {
      invokingEventMessageType = make_shared<string>(boost::any_cast<string>(m["InvokingEventMessageType"]));
    }
    if (m.find("RemediationEnabled") != m.end() && !m["RemediationEnabled"].empty()) {
      remediationEnabled = make_shared<bool>(boost::any_cast<bool>(m["RemediationEnabled"]));
    }
    if (m.find("ResultRecordedTimestamp") != m.end() && !m["ResultRecordedTimestamp"].empty()) {
      resultRecordedTimestamp = make_shared<long>(boost::any_cast<long>(m["ResultRecordedTimestamp"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
  }


  virtual ~ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList() = default;
};
class ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults : public Darabonba::Model {
public:
  shared_ptr<vector<ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList>> evaluationResultList{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults() {}

  explicit ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (evaluationResultList) {
      vector<boost::any> temp1;
      for(auto item1:*evaluationResultList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EvaluationResultList"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EvaluationResultList") != m.end() && !m["EvaluationResultList"].empty()) {
      if (typeid(vector<boost::any>) == m["EvaluationResultList"].type()) {
        vector<ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EvaluationResultList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        evaluationResultList = make_shared<vector<ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults() = default;
};
class ListAggregateConfigRuleEvaluationResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults> evaluationResults{};
  shared_ptr<string> requestId{};

  ListAggregateConfigRuleEvaluationResultsResponseBody() {}

  explicit ListAggregateConfigRuleEvaluationResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (evaluationResults) {
      res["EvaluationResults"] = evaluationResults ? boost::any(evaluationResults->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EvaluationResults") != m.end() && !m["EvaluationResults"].empty()) {
      if (typeid(map<string, boost::any>) == m["EvaluationResults"].type()) {
        ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EvaluationResults"]));
        evaluationResults = make_shared<ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAggregateConfigRuleEvaluationResultsResponseBody() = default;
};
class ListAggregateConfigRuleEvaluationResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAggregateConfigRuleEvaluationResultsResponseBody> body{};

  ListAggregateConfigRuleEvaluationResultsResponse() {}

  explicit ListAggregateConfigRuleEvaluationResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAggregateConfigRuleEvaluationResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAggregateConfigRuleEvaluationResultsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAggregateConfigRuleEvaluationResultsResponse() = default;
};
class ListAggregateConfigRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> complianceType{};
  shared_ptr<string> configRuleName{};
  shared_ptr<string> configRuleState{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> riskLevel{};

  ListAggregateConfigRulesRequest() {}

  explicit ListAggregateConfigRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (complianceType) {
      res["ComplianceType"] = boost::any(*complianceType);
    }
    if (configRuleName) {
      res["ConfigRuleName"] = boost::any(*configRuleName);
    }
    if (configRuleState) {
      res["ConfigRuleState"] = boost::any(*configRuleState);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("ComplianceType") != m.end() && !m["ComplianceType"].empty()) {
      complianceType = make_shared<string>(boost::any_cast<string>(m["ComplianceType"]));
    }
    if (m.find("ConfigRuleName") != m.end() && !m["ConfigRuleName"].empty()) {
      configRuleName = make_shared<string>(boost::any_cast<string>(m["ConfigRuleName"]));
    }
    if (m.find("ConfigRuleState") != m.end() && !m["ConfigRuleState"].empty()) {
      configRuleState = make_shared<string>(boost::any_cast<string>(m["ConfigRuleState"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
  }


  virtual ~ListAggregateConfigRulesRequest() = default;
};
class ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListCompliance : public Darabonba::Model {
public:
  shared_ptr<string> complianceType{};
  shared_ptr<long> count{};

  ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListCompliance() {}

  explicit ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListCompliance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (complianceType) {
      res["ComplianceType"] = boost::any(*complianceType);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComplianceType") != m.end() && !m["ComplianceType"].empty()) {
      complianceType = make_shared<string>(boost::any_cast<string>(m["ComplianceType"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
  }


  virtual ~ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListCompliance() = default;
};
class ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> aggregatorName{};
  shared_ptr<string> compliancePackId{};
  shared_ptr<string> compliancePackName{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> creatorName{};
  shared_ptr<string> creatorType{};

  ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy() {}

  explicit ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (aggregatorName) {
      res["AggregatorName"] = boost::any(*aggregatorName);
    }
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (compliancePackName) {
      res["CompliancePackName"] = boost::any(*compliancePackName);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (creatorName) {
      res["CreatorName"] = boost::any(*creatorName);
    }
    if (creatorType) {
      res["CreatorType"] = boost::any(*creatorType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("AggregatorName") != m.end() && !m["AggregatorName"].empty()) {
      aggregatorName = make_shared<string>(boost::any_cast<string>(m["AggregatorName"]));
    }
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("CompliancePackName") != m.end() && !m["CompliancePackName"].empty()) {
      compliancePackName = make_shared<string>(boost::any_cast<string>(m["CompliancePackName"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["CreatorId"]));
    }
    if (m.find("CreatorName") != m.end() && !m["CreatorName"].empty()) {
      creatorName = make_shared<string>(boost::any_cast<string>(m["CreatorName"]));
    }
    if (m.find("CreatorType") != m.end() && !m["CreatorType"].empty()) {
      creatorType = make_shared<string>(boost::any_cast<string>(m["CreatorType"]));
    }
  }


  virtual ~ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy() = default;
};
class ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<string> automationType{};
  shared_ptr<ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListCompliance> compliance{};
  shared_ptr<string> configRuleArn{};
  shared_ptr<string> configRuleId{};
  shared_ptr<string> configRuleName{};
  shared_ptr<string> configRuleState{};
  shared_ptr<ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy> createBy{};
  shared_ptr<string> description{};
  shared_ptr<long> riskLevel{};
  shared_ptr<string> sourceIdentifier{};
  shared_ptr<string> sourceOwner{};

  ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList() {}

  explicit ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (automationType) {
      res["AutomationType"] = boost::any(*automationType);
    }
    if (compliance) {
      res["Compliance"] = compliance ? boost::any(compliance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (configRuleArn) {
      res["ConfigRuleArn"] = boost::any(*configRuleArn);
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (configRuleName) {
      res["ConfigRuleName"] = boost::any(*configRuleName);
    }
    if (configRuleState) {
      res["ConfigRuleState"] = boost::any(*configRuleState);
    }
    if (createBy) {
      res["CreateBy"] = createBy ? boost::any(createBy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (sourceIdentifier) {
      res["SourceIdentifier"] = boost::any(*sourceIdentifier);
    }
    if (sourceOwner) {
      res["SourceOwner"] = boost::any(*sourceOwner);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("AutomationType") != m.end() && !m["AutomationType"].empty()) {
      automationType = make_shared<string>(boost::any_cast<string>(m["AutomationType"]));
    }
    if (m.find("Compliance") != m.end() && !m["Compliance"].empty()) {
      if (typeid(map<string, boost::any>) == m["Compliance"].type()) {
        ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListCompliance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Compliance"]));
        compliance = make_shared<ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListCompliance>(model1);
      }
    }
    if (m.find("ConfigRuleArn") != m.end() && !m["ConfigRuleArn"].empty()) {
      configRuleArn = make_shared<string>(boost::any_cast<string>(m["ConfigRuleArn"]));
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("ConfigRuleName") != m.end() && !m["ConfigRuleName"].empty()) {
      configRuleName = make_shared<string>(boost::any_cast<string>(m["ConfigRuleName"]));
    }
    if (m.find("ConfigRuleState") != m.end() && !m["ConfigRuleState"].empty()) {
      configRuleState = make_shared<string>(boost::any_cast<string>(m["ConfigRuleState"]));
    }
    if (m.find("CreateBy") != m.end() && !m["CreateBy"].empty()) {
      if (typeid(map<string, boost::any>) == m["CreateBy"].type()) {
        ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CreateBy"]));
        createBy = make_shared<ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
    if (m.find("SourceIdentifier") != m.end() && !m["SourceIdentifier"].empty()) {
      sourceIdentifier = make_shared<string>(boost::any_cast<string>(m["SourceIdentifier"]));
    }
    if (m.find("SourceOwner") != m.end() && !m["SourceOwner"].empty()) {
      sourceOwner = make_shared<string>(boost::any_cast<string>(m["SourceOwner"]));
    }
  }


  virtual ~ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList() = default;
};
class ListAggregateConfigRulesResponseBodyConfigRules : public Darabonba::Model {
public:
  shared_ptr<vector<ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList>> configRuleList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListAggregateConfigRulesResponseBodyConfigRules() {}

  explicit ListAggregateConfigRulesResponseBodyConfigRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleList) {
      vector<boost::any> temp1;
      for(auto item1:*configRuleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigRuleList"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleList") != m.end() && !m["ConfigRuleList"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigRuleList"].type()) {
        vector<ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigRuleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configRuleList = make_shared<vector<ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAggregateConfigRulesResponseBodyConfigRules() = default;
};
class ListAggregateConfigRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListAggregateConfigRulesResponseBodyConfigRules> configRules{};
  shared_ptr<string> requestId{};

  ListAggregateConfigRulesResponseBody() {}

  explicit ListAggregateConfigRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRules) {
      res["ConfigRules"] = configRules ? boost::any(configRules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRules") != m.end() && !m["ConfigRules"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigRules"].type()) {
        ListAggregateConfigRulesResponseBodyConfigRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigRules"]));
        configRules = make_shared<ListAggregateConfigRulesResponseBodyConfigRules>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAggregateConfigRulesResponseBody() = default;
};
class ListAggregateConfigRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAggregateConfigRulesResponseBody> body{};

  ListAggregateConfigRulesResponse() {}

  explicit ListAggregateConfigRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAggregateConfigRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAggregateConfigRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAggregateConfigRulesResponse() = default;
};
class ListAggregateResourceEvaluationResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> complianceType{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  ListAggregateResourceEvaluationResultsRequest() {}

  explicit ListAggregateResourceEvaluationResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (complianceType) {
      res["ComplianceType"] = boost::any(*complianceType);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("ComplianceType") != m.end() && !m["ComplianceType"].empty()) {
      complianceType = make_shared<string>(boost::any_cast<string>(m["ComplianceType"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ListAggregateResourceEvaluationResultsRequest() = default;
};
class ListAggregateResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier : public Darabonba::Model {
public:
  shared_ptr<string> configRuleArn{};
  shared_ptr<string> configRuleId{};
  shared_ptr<string> configRuleName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};

  ListAggregateResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier() {}

  explicit ListAggregateResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleArn) {
      res["ConfigRuleArn"] = boost::any(*configRuleArn);
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (configRuleName) {
      res["ConfigRuleName"] = boost::any(*configRuleName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleArn") != m.end() && !m["ConfigRuleArn"].empty()) {
      configRuleArn = make_shared<string>(boost::any_cast<string>(m["ConfigRuleArn"]));
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("ConfigRuleName") != m.end() && !m["ConfigRuleName"].empty()) {
      configRuleName = make_shared<string>(boost::any_cast<string>(m["ConfigRuleName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ListAggregateResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier() = default;
};
class ListAggregateResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier : public Darabonba::Model {
public:
  shared_ptr<ListAggregateResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier> evaluationResultQualifier{};
  shared_ptr<long> orderingTimestamp{};

  ListAggregateResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier() {}

  explicit ListAggregateResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (evaluationResultQualifier) {
      res["EvaluationResultQualifier"] = evaluationResultQualifier ? boost::any(evaluationResultQualifier->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (orderingTimestamp) {
      res["OrderingTimestamp"] = boost::any(*orderingTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EvaluationResultQualifier") != m.end() && !m["EvaluationResultQualifier"].empty()) {
      if (typeid(map<string, boost::any>) == m["EvaluationResultQualifier"].type()) {
        ListAggregateResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EvaluationResultQualifier"]));
        evaluationResultQualifier = make_shared<ListAggregateResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier>(model1);
      }
    }
    if (m.find("OrderingTimestamp") != m.end() && !m["OrderingTimestamp"].empty()) {
      orderingTimestamp = make_shared<long>(boost::any_cast<long>(m["OrderingTimestamp"]));
    }
  }


  virtual ~ListAggregateResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier() = default;
};
class ListAggregateResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList : public Darabonba::Model {
public:
  shared_ptr<string> annotation{};
  shared_ptr<string> complianceType{};
  shared_ptr<long> configRuleInvokedTimestamp{};
  shared_ptr<ListAggregateResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier> evaluationResultIdentifier{};
  shared_ptr<string> invokingEventMessageType{};
  shared_ptr<bool> remediationEnabled{};
  shared_ptr<long> resultRecordedTimestamp{};
  shared_ptr<long> riskLevel{};

  ListAggregateResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList() {}

  explicit ListAggregateResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (annotation) {
      res["Annotation"] = boost::any(*annotation);
    }
    if (complianceType) {
      res["ComplianceType"] = boost::any(*complianceType);
    }
    if (configRuleInvokedTimestamp) {
      res["ConfigRuleInvokedTimestamp"] = boost::any(*configRuleInvokedTimestamp);
    }
    if (evaluationResultIdentifier) {
      res["EvaluationResultIdentifier"] = evaluationResultIdentifier ? boost::any(evaluationResultIdentifier->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (invokingEventMessageType) {
      res["InvokingEventMessageType"] = boost::any(*invokingEventMessageType);
    }
    if (remediationEnabled) {
      res["RemediationEnabled"] = boost::any(*remediationEnabled);
    }
    if (resultRecordedTimestamp) {
      res["ResultRecordedTimestamp"] = boost::any(*resultRecordedTimestamp);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Annotation") != m.end() && !m["Annotation"].empty()) {
      annotation = make_shared<string>(boost::any_cast<string>(m["Annotation"]));
    }
    if (m.find("ComplianceType") != m.end() && !m["ComplianceType"].empty()) {
      complianceType = make_shared<string>(boost::any_cast<string>(m["ComplianceType"]));
    }
    if (m.find("ConfigRuleInvokedTimestamp") != m.end() && !m["ConfigRuleInvokedTimestamp"].empty()) {
      configRuleInvokedTimestamp = make_shared<long>(boost::any_cast<long>(m["ConfigRuleInvokedTimestamp"]));
    }
    if (m.find("EvaluationResultIdentifier") != m.end() && !m["EvaluationResultIdentifier"].empty()) {
      if (typeid(map<string, boost::any>) == m["EvaluationResultIdentifier"].type()) {
        ListAggregateResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EvaluationResultIdentifier"]));
        evaluationResultIdentifier = make_shared<ListAggregateResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier>(model1);
      }
    }
    if (m.find("InvokingEventMessageType") != m.end() && !m["InvokingEventMessageType"].empty()) {
      invokingEventMessageType = make_shared<string>(boost::any_cast<string>(m["InvokingEventMessageType"]));
    }
    if (m.find("RemediationEnabled") != m.end() && !m["RemediationEnabled"].empty()) {
      remediationEnabled = make_shared<bool>(boost::any_cast<bool>(m["RemediationEnabled"]));
    }
    if (m.find("ResultRecordedTimestamp") != m.end() && !m["ResultRecordedTimestamp"].empty()) {
      resultRecordedTimestamp = make_shared<long>(boost::any_cast<long>(m["ResultRecordedTimestamp"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
  }


  virtual ~ListAggregateResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList() = default;
};
class ListAggregateResourceEvaluationResultsResponseBodyEvaluationResults : public Darabonba::Model {
public:
  shared_ptr<vector<ListAggregateResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList>> evaluationResultList{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListAggregateResourceEvaluationResultsResponseBodyEvaluationResults() {}

  explicit ListAggregateResourceEvaluationResultsResponseBodyEvaluationResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (evaluationResultList) {
      vector<boost::any> temp1;
      for(auto item1:*evaluationResultList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EvaluationResultList"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EvaluationResultList") != m.end() && !m["EvaluationResultList"].empty()) {
      if (typeid(vector<boost::any>) == m["EvaluationResultList"].type()) {
        vector<ListAggregateResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EvaluationResultList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAggregateResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        evaluationResultList = make_shared<vector<ListAggregateResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListAggregateResourceEvaluationResultsResponseBodyEvaluationResults() = default;
};
class ListAggregateResourceEvaluationResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListAggregateResourceEvaluationResultsResponseBodyEvaluationResults> evaluationResults{};
  shared_ptr<string> requestId{};

  ListAggregateResourceEvaluationResultsResponseBody() {}

  explicit ListAggregateResourceEvaluationResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (evaluationResults) {
      res["EvaluationResults"] = evaluationResults ? boost::any(evaluationResults->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EvaluationResults") != m.end() && !m["EvaluationResults"].empty()) {
      if (typeid(map<string, boost::any>) == m["EvaluationResults"].type()) {
        ListAggregateResourceEvaluationResultsResponseBodyEvaluationResults model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EvaluationResults"]));
        evaluationResults = make_shared<ListAggregateResourceEvaluationResultsResponseBodyEvaluationResults>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAggregateResourceEvaluationResultsResponseBody() = default;
};
class ListAggregateResourceEvaluationResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAggregateResourceEvaluationResultsResponseBody> body{};

  ListAggregateResourceEvaluationResultsResponse() {}

  explicit ListAggregateResourceEvaluationResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAggregateResourceEvaluationResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAggregateResourceEvaluationResultsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAggregateResourceEvaluationResultsResponse() = default;
};
class ListAggregatorsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListAggregatorsRequest() {}

  explicit ListAggregatorsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListAggregatorsRequest() = default;
};
class ListAggregatorsResponseBodyAggregatorsResultAggregators : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<long> aggregatorAccountCount{};
  shared_ptr<long> aggregatorCreateTimestamp{};
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> aggregatorName{};
  shared_ptr<long> aggregatorStatus{};
  shared_ptr<string> aggregatorType{};
  shared_ptr<string> description{};

  ListAggregatorsResponseBodyAggregatorsResultAggregators() {}

  explicit ListAggregatorsResponseBodyAggregatorsResultAggregators(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (aggregatorAccountCount) {
      res["AggregatorAccountCount"] = boost::any(*aggregatorAccountCount);
    }
    if (aggregatorCreateTimestamp) {
      res["AggregatorCreateTimestamp"] = boost::any(*aggregatorCreateTimestamp);
    }
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (aggregatorName) {
      res["AggregatorName"] = boost::any(*aggregatorName);
    }
    if (aggregatorStatus) {
      res["AggregatorStatus"] = boost::any(*aggregatorStatus);
    }
    if (aggregatorType) {
      res["AggregatorType"] = boost::any(*aggregatorType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("AggregatorAccountCount") != m.end() && !m["AggregatorAccountCount"].empty()) {
      aggregatorAccountCount = make_shared<long>(boost::any_cast<long>(m["AggregatorAccountCount"]));
    }
    if (m.find("AggregatorCreateTimestamp") != m.end() && !m["AggregatorCreateTimestamp"].empty()) {
      aggregatorCreateTimestamp = make_shared<long>(boost::any_cast<long>(m["AggregatorCreateTimestamp"]));
    }
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("AggregatorName") != m.end() && !m["AggregatorName"].empty()) {
      aggregatorName = make_shared<string>(boost::any_cast<string>(m["AggregatorName"]));
    }
    if (m.find("AggregatorStatus") != m.end() && !m["AggregatorStatus"].empty()) {
      aggregatorStatus = make_shared<long>(boost::any_cast<long>(m["AggregatorStatus"]));
    }
    if (m.find("AggregatorType") != m.end() && !m["AggregatorType"].empty()) {
      aggregatorType = make_shared<string>(boost::any_cast<string>(m["AggregatorType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~ListAggregatorsResponseBodyAggregatorsResultAggregators() = default;
};
class ListAggregatorsResponseBodyAggregatorsResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListAggregatorsResponseBodyAggregatorsResultAggregators>> aggregators{};
  shared_ptr<string> nextToken{};

  ListAggregatorsResponseBodyAggregatorsResult() {}

  explicit ListAggregatorsResponseBodyAggregatorsResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregators) {
      vector<boost::any> temp1;
      for(auto item1:*aggregators){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Aggregators"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Aggregators") != m.end() && !m["Aggregators"].empty()) {
      if (typeid(vector<boost::any>) == m["Aggregators"].type()) {
        vector<ListAggregatorsResponseBodyAggregatorsResultAggregators> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Aggregators"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAggregatorsResponseBodyAggregatorsResultAggregators model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aggregators = make_shared<vector<ListAggregatorsResponseBodyAggregatorsResultAggregators>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListAggregatorsResponseBodyAggregatorsResult() = default;
};
class ListAggregatorsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListAggregatorsResponseBodyAggregatorsResult> aggregatorsResult{};
  shared_ptr<string> requestId{};

  ListAggregatorsResponseBody() {}

  explicit ListAggregatorsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorsResult) {
      res["AggregatorsResult"] = aggregatorsResult ? boost::any(aggregatorsResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorsResult") != m.end() && !m["AggregatorsResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["AggregatorsResult"].type()) {
        ListAggregatorsResponseBodyAggregatorsResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AggregatorsResult"]));
        aggregatorsResult = make_shared<ListAggregatorsResponseBodyAggregatorsResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAggregatorsResponseBody() = default;
};
class ListAggregatorsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAggregatorsResponseBody> body{};

  ListAggregatorsResponse() {}

  explicit ListAggregatorsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAggregatorsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAggregatorsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAggregatorsResponse() = default;
};
class ListCompliancePackTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> compliancePackTemplateId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListCompliancePackTemplatesRequest() {}

  explicit ListCompliancePackTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePackTemplateId) {
      res["CompliancePackTemplateId"] = boost::any(*compliancePackTemplateId);
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
    if (m.find("CompliancePackTemplateId") != m.end() && !m["CompliancePackTemplateId"].empty()) {
      compliancePackTemplateId = make_shared<string>(boost::any_cast<string>(m["CompliancePackTemplateId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListCompliancePackTemplatesRequest() = default;
};
class ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplatesConfigRulesConfigRuleParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterName{};
  shared_ptr<string> parameterValue{};
  shared_ptr<bool> required{};

  ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplatesConfigRulesConfigRuleParameters() {}

  explicit ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplatesConfigRulesConfigRuleParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterName) {
      res["ParameterName"] = boost::any(*parameterName);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterName") != m.end() && !m["ParameterName"].empty()) {
      parameterName = make_shared<string>(boost::any_cast<string>(m["ParameterName"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["Required"]));
    }
  }


  virtual ~ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplatesConfigRulesConfigRuleParameters() = default;
};
class ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplatesConfigRules : public Darabonba::Model {
public:
  shared_ptr<vector<ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplatesConfigRulesConfigRuleParameters>> configRuleParameters{};
  shared_ptr<string> description{};
  shared_ptr<string> managedRuleIdentifier{};
  shared_ptr<string> managedRuleName{};
  shared_ptr<long> riskLevel{};

  ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplatesConfigRules() {}

  explicit ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplatesConfigRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleParameters) {
      vector<boost::any> temp1;
      for(auto item1:*configRuleParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigRuleParameters"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (managedRuleIdentifier) {
      res["ManagedRuleIdentifier"] = boost::any(*managedRuleIdentifier);
    }
    if (managedRuleName) {
      res["ManagedRuleName"] = boost::any(*managedRuleName);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleParameters") != m.end() && !m["ConfigRuleParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigRuleParameters"].type()) {
        vector<ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplatesConfigRulesConfigRuleParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigRuleParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplatesConfigRulesConfigRuleParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configRuleParameters = make_shared<vector<ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplatesConfigRulesConfigRuleParameters>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ManagedRuleIdentifier") != m.end() && !m["ManagedRuleIdentifier"].empty()) {
      managedRuleIdentifier = make_shared<string>(boost::any_cast<string>(m["ManagedRuleIdentifier"]));
    }
    if (m.find("ManagedRuleName") != m.end() && !m["ManagedRuleName"].empty()) {
      managedRuleName = make_shared<string>(boost::any_cast<string>(m["ManagedRuleName"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
  }


  virtual ~ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplatesConfigRules() = default;
};
class ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates : public Darabonba::Model {
public:
  shared_ptr<string> compliancePackTemplateId{};
  shared_ptr<string> compliancePackTemplateName{};
  shared_ptr<vector<ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplatesConfigRules>> configRules{};
  shared_ptr<string> description{};
  shared_ptr<long> riskLevel{};

  ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates() {}

  explicit ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePackTemplateId) {
      res["CompliancePackTemplateId"] = boost::any(*compliancePackTemplateId);
    }
    if (compliancePackTemplateName) {
      res["CompliancePackTemplateName"] = boost::any(*compliancePackTemplateName);
    }
    if (configRules) {
      vector<boost::any> temp1;
      for(auto item1:*configRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigRules"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePackTemplateId") != m.end() && !m["CompliancePackTemplateId"].empty()) {
      compliancePackTemplateId = make_shared<string>(boost::any_cast<string>(m["CompliancePackTemplateId"]));
    }
    if (m.find("CompliancePackTemplateName") != m.end() && !m["CompliancePackTemplateName"].empty()) {
      compliancePackTemplateName = make_shared<string>(boost::any_cast<string>(m["CompliancePackTemplateName"]));
    }
    if (m.find("ConfigRules") != m.end() && !m["ConfigRules"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigRules"].type()) {
        vector<ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplatesConfigRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplatesConfigRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configRules = make_shared<vector<ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplatesConfigRules>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
  }


  virtual ~ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates() = default;
};
class ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates>> compliancePackTemplates{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult() {}

  explicit ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePackTemplates) {
      vector<boost::any> temp1;
      for(auto item1:*compliancePackTemplates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CompliancePackTemplates"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePackTemplates") != m.end() && !m["CompliancePackTemplates"].empty()) {
      if (typeid(vector<boost::any>) == m["CompliancePackTemplates"].type()) {
        vector<ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CompliancePackTemplates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        compliancePackTemplates = make_shared<vector<ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult() = default;
};
class ListCompliancePackTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult> compliancePackTemplatesResult{};
  shared_ptr<string> requestId{};

  ListCompliancePackTemplatesResponseBody() {}

  explicit ListCompliancePackTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePackTemplatesResult) {
      res["CompliancePackTemplatesResult"] = compliancePackTemplatesResult ? boost::any(compliancePackTemplatesResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePackTemplatesResult") != m.end() && !m["CompliancePackTemplatesResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["CompliancePackTemplatesResult"].type()) {
        ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CompliancePackTemplatesResult"]));
        compliancePackTemplatesResult = make_shared<ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListCompliancePackTemplatesResponseBody() = default;
};
class ListCompliancePackTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListCompliancePackTemplatesResponseBody> body{};

  ListCompliancePackTemplatesResponse() {}

  explicit ListCompliancePackTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCompliancePackTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCompliancePackTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListCompliancePackTemplatesResponse() = default;
};
class ListCompliancePacksRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};

  ListCompliancePacksRequest() {}

  explicit ListCompliancePacksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListCompliancePacksRequest() = default;
};
class ListCompliancePacksResponseBodyCompliancePacksResultCompliancePacks : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<string> compliancePackId{};
  shared_ptr<string> compliancePackName{};
  shared_ptr<string> compliancePackTemplateId{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<string> description{};
  shared_ptr<long> riskLevel{};
  shared_ptr<string> status{};

  ListCompliancePacksResponseBodyCompliancePacksResultCompliancePacks() {}

  explicit ListCompliancePacksResponseBodyCompliancePacksResultCompliancePacks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (compliancePackName) {
      res["CompliancePackName"] = boost::any(*compliancePackName);
    }
    if (compliancePackTemplateId) {
      res["CompliancePackTemplateId"] = boost::any(*compliancePackTemplateId);
    }
    if (createTimestamp) {
      res["CreateTimestamp"] = boost::any(*createTimestamp);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("CompliancePackName") != m.end() && !m["CompliancePackName"].empty()) {
      compliancePackName = make_shared<string>(boost::any_cast<string>(m["CompliancePackName"]));
    }
    if (m.find("CompliancePackTemplateId") != m.end() && !m["CompliancePackTemplateId"].empty()) {
      compliancePackTemplateId = make_shared<string>(boost::any_cast<string>(m["CompliancePackTemplateId"]));
    }
    if (m.find("CreateTimestamp") != m.end() && !m["CreateTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["CreateTimestamp"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListCompliancePacksResponseBodyCompliancePacksResultCompliancePacks() = default;
};
class ListCompliancePacksResponseBodyCompliancePacksResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListCompliancePacksResponseBodyCompliancePacksResultCompliancePacks>> compliancePacks{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListCompliancePacksResponseBodyCompliancePacksResult() {}

  explicit ListCompliancePacksResponseBodyCompliancePacksResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePacks) {
      vector<boost::any> temp1;
      for(auto item1:*compliancePacks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CompliancePacks"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePacks") != m.end() && !m["CompliancePacks"].empty()) {
      if (typeid(vector<boost::any>) == m["CompliancePacks"].type()) {
        vector<ListCompliancePacksResponseBodyCompliancePacksResultCompliancePacks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CompliancePacks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCompliancePacksResponseBodyCompliancePacksResultCompliancePacks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        compliancePacks = make_shared<vector<ListCompliancePacksResponseBodyCompliancePacksResultCompliancePacks>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListCompliancePacksResponseBodyCompliancePacksResult() = default;
};
class ListCompliancePacksResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListCompliancePacksResponseBodyCompliancePacksResult> compliancePacksResult{};
  shared_ptr<string> requestId{};

  ListCompliancePacksResponseBody() {}

  explicit ListCompliancePacksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePacksResult) {
      res["CompliancePacksResult"] = compliancePacksResult ? boost::any(compliancePacksResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePacksResult") != m.end() && !m["CompliancePacksResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["CompliancePacksResult"].type()) {
        ListCompliancePacksResponseBodyCompliancePacksResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CompliancePacksResult"]));
        compliancePacksResult = make_shared<ListCompliancePacksResponseBodyCompliancePacksResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListCompliancePacksResponseBody() = default;
};
class ListCompliancePacksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListCompliancePacksResponseBody> body{};

  ListCompliancePacksResponse() {}

  explicit ListCompliancePacksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCompliancePacksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCompliancePacksResponseBody>(model1);
      }
    }
  }


  virtual ~ListCompliancePacksResponse() = default;
};
class ListConfigRuleEvaluationResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> compliancePackId{};
  shared_ptr<string> complianceType{};
  shared_ptr<string> configRuleId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListConfigRuleEvaluationResultsRequest() {}

  explicit ListConfigRuleEvaluationResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (complianceType) {
      res["ComplianceType"] = boost::any(*complianceType);
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("ComplianceType") != m.end() && !m["ComplianceType"].empty()) {
      complianceType = make_shared<string>(boost::any_cast<string>(m["ComplianceType"]));
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListConfigRuleEvaluationResultsRequest() = default;
};
class ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier : public Darabonba::Model {
public:
  shared_ptr<string> compliancePackId{};
  shared_ptr<string> configRuleArn{};
  shared_ptr<string> configRuleId{};
  shared_ptr<string> configRuleName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};

  ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier() {}

  explicit ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (configRuleArn) {
      res["ConfigRuleArn"] = boost::any(*configRuleArn);
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (configRuleName) {
      res["ConfigRuleName"] = boost::any(*configRuleName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("ConfigRuleArn") != m.end() && !m["ConfigRuleArn"].empty()) {
      configRuleArn = make_shared<string>(boost::any_cast<string>(m["ConfigRuleArn"]));
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("ConfigRuleName") != m.end() && !m["ConfigRuleName"].empty()) {
      configRuleName = make_shared<string>(boost::any_cast<string>(m["ConfigRuleName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier() = default;
};
class ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier : public Darabonba::Model {
public:
  shared_ptr<ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier> evaluationResultQualifier{};
  shared_ptr<long> orderingTimestamp{};

  ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier() {}

  explicit ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (evaluationResultQualifier) {
      res["EvaluationResultQualifier"] = evaluationResultQualifier ? boost::any(evaluationResultQualifier->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (orderingTimestamp) {
      res["OrderingTimestamp"] = boost::any(*orderingTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EvaluationResultQualifier") != m.end() && !m["EvaluationResultQualifier"].empty()) {
      if (typeid(map<string, boost::any>) == m["EvaluationResultQualifier"].type()) {
        ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EvaluationResultQualifier"]));
        evaluationResultQualifier = make_shared<ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier>(model1);
      }
    }
    if (m.find("OrderingTimestamp") != m.end() && !m["OrderingTimestamp"].empty()) {
      orderingTimestamp = make_shared<long>(boost::any_cast<long>(m["OrderingTimestamp"]));
    }
  }


  virtual ~ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier() = default;
};
class ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList : public Darabonba::Model {
public:
  shared_ptr<string> annotation{};
  shared_ptr<string> complianceType{};
  shared_ptr<long> configRuleInvokedTimestamp{};
  shared_ptr<ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier> evaluationResultIdentifier{};
  shared_ptr<string> invokingEventMessageType{};
  shared_ptr<bool> remediationEnabled{};
  shared_ptr<long> resultRecordedTimestamp{};
  shared_ptr<long> riskLevel{};

  ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList() {}

  explicit ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (annotation) {
      res["Annotation"] = boost::any(*annotation);
    }
    if (complianceType) {
      res["ComplianceType"] = boost::any(*complianceType);
    }
    if (configRuleInvokedTimestamp) {
      res["ConfigRuleInvokedTimestamp"] = boost::any(*configRuleInvokedTimestamp);
    }
    if (evaluationResultIdentifier) {
      res["EvaluationResultIdentifier"] = evaluationResultIdentifier ? boost::any(evaluationResultIdentifier->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (invokingEventMessageType) {
      res["InvokingEventMessageType"] = boost::any(*invokingEventMessageType);
    }
    if (remediationEnabled) {
      res["RemediationEnabled"] = boost::any(*remediationEnabled);
    }
    if (resultRecordedTimestamp) {
      res["ResultRecordedTimestamp"] = boost::any(*resultRecordedTimestamp);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Annotation") != m.end() && !m["Annotation"].empty()) {
      annotation = make_shared<string>(boost::any_cast<string>(m["Annotation"]));
    }
    if (m.find("ComplianceType") != m.end() && !m["ComplianceType"].empty()) {
      complianceType = make_shared<string>(boost::any_cast<string>(m["ComplianceType"]));
    }
    if (m.find("ConfigRuleInvokedTimestamp") != m.end() && !m["ConfigRuleInvokedTimestamp"].empty()) {
      configRuleInvokedTimestamp = make_shared<long>(boost::any_cast<long>(m["ConfigRuleInvokedTimestamp"]));
    }
    if (m.find("EvaluationResultIdentifier") != m.end() && !m["EvaluationResultIdentifier"].empty()) {
      if (typeid(map<string, boost::any>) == m["EvaluationResultIdentifier"].type()) {
        ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EvaluationResultIdentifier"]));
        evaluationResultIdentifier = make_shared<ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier>(model1);
      }
    }
    if (m.find("InvokingEventMessageType") != m.end() && !m["InvokingEventMessageType"].empty()) {
      invokingEventMessageType = make_shared<string>(boost::any_cast<string>(m["InvokingEventMessageType"]));
    }
    if (m.find("RemediationEnabled") != m.end() && !m["RemediationEnabled"].empty()) {
      remediationEnabled = make_shared<bool>(boost::any_cast<bool>(m["RemediationEnabled"]));
    }
    if (m.find("ResultRecordedTimestamp") != m.end() && !m["ResultRecordedTimestamp"].empty()) {
      resultRecordedTimestamp = make_shared<long>(boost::any_cast<long>(m["ResultRecordedTimestamp"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
  }


  virtual ~ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList() = default;
};
class ListConfigRuleEvaluationResultsResponseBodyEvaluationResults : public Darabonba::Model {
public:
  shared_ptr<vector<ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList>> evaluationResultList{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListConfigRuleEvaluationResultsResponseBodyEvaluationResults() {}

  explicit ListConfigRuleEvaluationResultsResponseBodyEvaluationResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (evaluationResultList) {
      vector<boost::any> temp1;
      for(auto item1:*evaluationResultList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EvaluationResultList"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EvaluationResultList") != m.end() && !m["EvaluationResultList"].empty()) {
      if (typeid(vector<boost::any>) == m["EvaluationResultList"].type()) {
        vector<ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EvaluationResultList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        evaluationResultList = make_shared<vector<ListConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListConfigRuleEvaluationResultsResponseBodyEvaluationResults() = default;
};
class ListConfigRuleEvaluationResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListConfigRuleEvaluationResultsResponseBodyEvaluationResults> evaluationResults{};
  shared_ptr<string> requestId{};

  ListConfigRuleEvaluationResultsResponseBody() {}

  explicit ListConfigRuleEvaluationResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (evaluationResults) {
      res["EvaluationResults"] = evaluationResults ? boost::any(evaluationResults->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EvaluationResults") != m.end() && !m["EvaluationResults"].empty()) {
      if (typeid(map<string, boost::any>) == m["EvaluationResults"].type()) {
        ListConfigRuleEvaluationResultsResponseBodyEvaluationResults model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EvaluationResults"]));
        evaluationResults = make_shared<ListConfigRuleEvaluationResultsResponseBodyEvaluationResults>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListConfigRuleEvaluationResultsResponseBody() = default;
};
class ListConfigRuleEvaluationResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListConfigRuleEvaluationResultsResponseBody> body{};

  ListConfigRuleEvaluationResultsResponse() {}

  explicit ListConfigRuleEvaluationResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListConfigRuleEvaluationResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListConfigRuleEvaluationResultsResponseBody>(model1);
      }
    }
  }


  virtual ~ListConfigRuleEvaluationResultsResponse() = default;
};
class ListResourceEvaluationResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> complianceType{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  ListResourceEvaluationResultsRequest() {}

  explicit ListResourceEvaluationResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (complianceType) {
      res["ComplianceType"] = boost::any(*complianceType);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ListResourceEvaluationResultsRequest() = default;
};
class ListResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier : public Darabonba::Model {
public:
  shared_ptr<string> configRuleArn{};
  shared_ptr<string> configRuleId{};
  shared_ptr<string> configRuleName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};

  ListResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier() {}

  explicit ListResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleArn) {
      res["ConfigRuleArn"] = boost::any(*configRuleArn);
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (configRuleName) {
      res["ConfigRuleName"] = boost::any(*configRuleName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleArn") != m.end() && !m["ConfigRuleArn"].empty()) {
      configRuleArn = make_shared<string>(boost::any_cast<string>(m["ConfigRuleArn"]));
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("ConfigRuleName") != m.end() && !m["ConfigRuleName"].empty()) {
      configRuleName = make_shared<string>(boost::any_cast<string>(m["ConfigRuleName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ListResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier() = default;
};
class ListResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier : public Darabonba::Model {
public:
  shared_ptr<ListResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier> evaluationResultQualifier{};
  shared_ptr<long> orderingTimestamp{};

  ListResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier() {}

  explicit ListResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (evaluationResultQualifier) {
      res["EvaluationResultQualifier"] = evaluationResultQualifier ? boost::any(evaluationResultQualifier->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (orderingTimestamp) {
      res["OrderingTimestamp"] = boost::any(*orderingTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EvaluationResultQualifier") != m.end() && !m["EvaluationResultQualifier"].empty()) {
      if (typeid(map<string, boost::any>) == m["EvaluationResultQualifier"].type()) {
        ListResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EvaluationResultQualifier"]));
        evaluationResultQualifier = make_shared<ListResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier>(model1);
      }
    }
    if (m.find("OrderingTimestamp") != m.end() && !m["OrderingTimestamp"].empty()) {
      orderingTimestamp = make_shared<long>(boost::any_cast<long>(m["OrderingTimestamp"]));
    }
  }


  virtual ~ListResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier() = default;
};
class ListResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList : public Darabonba::Model {
public:
  shared_ptr<string> annotation{};
  shared_ptr<string> complianceType{};
  shared_ptr<long> configRuleInvokedTimestamp{};
  shared_ptr<ListResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier> evaluationResultIdentifier{};
  shared_ptr<string> invokingEventMessageType{};
  shared_ptr<bool> remediationEnabled{};
  shared_ptr<long> resultRecordedTimestamp{};
  shared_ptr<long> riskLevel{};

  ListResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList() {}

  explicit ListResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (annotation) {
      res["Annotation"] = boost::any(*annotation);
    }
    if (complianceType) {
      res["ComplianceType"] = boost::any(*complianceType);
    }
    if (configRuleInvokedTimestamp) {
      res["ConfigRuleInvokedTimestamp"] = boost::any(*configRuleInvokedTimestamp);
    }
    if (evaluationResultIdentifier) {
      res["EvaluationResultIdentifier"] = evaluationResultIdentifier ? boost::any(evaluationResultIdentifier->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (invokingEventMessageType) {
      res["InvokingEventMessageType"] = boost::any(*invokingEventMessageType);
    }
    if (remediationEnabled) {
      res["RemediationEnabled"] = boost::any(*remediationEnabled);
    }
    if (resultRecordedTimestamp) {
      res["ResultRecordedTimestamp"] = boost::any(*resultRecordedTimestamp);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Annotation") != m.end() && !m["Annotation"].empty()) {
      annotation = make_shared<string>(boost::any_cast<string>(m["Annotation"]));
    }
    if (m.find("ComplianceType") != m.end() && !m["ComplianceType"].empty()) {
      complianceType = make_shared<string>(boost::any_cast<string>(m["ComplianceType"]));
    }
    if (m.find("ConfigRuleInvokedTimestamp") != m.end() && !m["ConfigRuleInvokedTimestamp"].empty()) {
      configRuleInvokedTimestamp = make_shared<long>(boost::any_cast<long>(m["ConfigRuleInvokedTimestamp"]));
    }
    if (m.find("EvaluationResultIdentifier") != m.end() && !m["EvaluationResultIdentifier"].empty()) {
      if (typeid(map<string, boost::any>) == m["EvaluationResultIdentifier"].type()) {
        ListResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EvaluationResultIdentifier"]));
        evaluationResultIdentifier = make_shared<ListResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier>(model1);
      }
    }
    if (m.find("InvokingEventMessageType") != m.end() && !m["InvokingEventMessageType"].empty()) {
      invokingEventMessageType = make_shared<string>(boost::any_cast<string>(m["InvokingEventMessageType"]));
    }
    if (m.find("RemediationEnabled") != m.end() && !m["RemediationEnabled"].empty()) {
      remediationEnabled = make_shared<bool>(boost::any_cast<bool>(m["RemediationEnabled"]));
    }
    if (m.find("ResultRecordedTimestamp") != m.end() && !m["ResultRecordedTimestamp"].empty()) {
      resultRecordedTimestamp = make_shared<long>(boost::any_cast<long>(m["ResultRecordedTimestamp"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
  }


  virtual ~ListResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList() = default;
};
class ListResourceEvaluationResultsResponseBodyEvaluationResults : public Darabonba::Model {
public:
  shared_ptr<vector<ListResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList>> evaluationResultList{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListResourceEvaluationResultsResponseBodyEvaluationResults() {}

  explicit ListResourceEvaluationResultsResponseBodyEvaluationResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (evaluationResultList) {
      vector<boost::any> temp1;
      for(auto item1:*evaluationResultList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EvaluationResultList"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EvaluationResultList") != m.end() && !m["EvaluationResultList"].empty()) {
      if (typeid(vector<boost::any>) == m["EvaluationResultList"].type()) {
        vector<ListResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EvaluationResultList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        evaluationResultList = make_shared<vector<ListResourceEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListResourceEvaluationResultsResponseBodyEvaluationResults() = default;
};
class ListResourceEvaluationResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListResourceEvaluationResultsResponseBodyEvaluationResults> evaluationResults{};
  shared_ptr<string> requestId{};

  ListResourceEvaluationResultsResponseBody() {}

  explicit ListResourceEvaluationResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (evaluationResults) {
      res["EvaluationResults"] = evaluationResults ? boost::any(evaluationResults->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EvaluationResults") != m.end() && !m["EvaluationResults"].empty()) {
      if (typeid(map<string, boost::any>) == m["EvaluationResults"].type()) {
        ListResourceEvaluationResultsResponseBodyEvaluationResults model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EvaluationResults"]));
        evaluationResults = make_shared<ListResourceEvaluationResultsResponseBodyEvaluationResults>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListResourceEvaluationResultsResponseBody() = default;
};
class ListResourceEvaluationResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListResourceEvaluationResultsResponseBody> body{};

  ListResourceEvaluationResultsResponse() {}

  explicit ListResourceEvaluationResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListResourceEvaluationResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourceEvaluationResultsResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourceEvaluationResultsResponse() = default;
};
class RevertAggregateEvaluationResultsRequestResources : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<long> resourceAccountId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  RevertAggregateEvaluationResultsRequestResources() {}

  explicit RevertAggregateEvaluationResultsRequestResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceAccountId) {
      res["ResourceAccountId"] = boost::any(*resourceAccountId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceAccountId") != m.end() && !m["ResourceAccountId"].empty()) {
      resourceAccountId = make_shared<long>(boost::any_cast<long>(m["ResourceAccountId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~RevertAggregateEvaluationResultsRequestResources() = default;
};
class RevertAggregateEvaluationResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> configRuleId{};
  shared_ptr<vector<RevertAggregateEvaluationResultsRequestResources>> resources{};

  RevertAggregateEvaluationResultsRequest() {}

  explicit RevertAggregateEvaluationResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
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
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<RevertAggregateEvaluationResultsRequestResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RevertAggregateEvaluationResultsRequestResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<RevertAggregateEvaluationResultsRequestResources>>(expect1);
      }
    }
  }


  virtual ~RevertAggregateEvaluationResultsRequest() = default;
};
class RevertAggregateEvaluationResultsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> configRuleId{};
  shared_ptr<string> resourcesShrink{};

  RevertAggregateEvaluationResultsShrinkRequest() {}

  explicit RevertAggregateEvaluationResultsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (resourcesShrink) {
      res["Resources"] = boost::any(*resourcesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      resourcesShrink = make_shared<string>(boost::any_cast<string>(m["Resources"]));
    }
  }


  virtual ~RevertAggregateEvaluationResultsShrinkRequest() = default;
};
class RevertAggregateEvaluationResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RevertAggregateEvaluationResultsResponseBody() {}

  explicit RevertAggregateEvaluationResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RevertAggregateEvaluationResultsResponseBody() = default;
};
class RevertAggregateEvaluationResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RevertAggregateEvaluationResultsResponseBody> body{};

  RevertAggregateEvaluationResultsResponse() {}

  explicit RevertAggregateEvaluationResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RevertAggregateEvaluationResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RevertAggregateEvaluationResultsResponseBody>(model1);
      }
    }
  }


  virtual ~RevertAggregateEvaluationResultsResponse() = default;
};
class RevertEvaluationResultsRequestResources : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<long> resourceAccountId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  RevertEvaluationResultsRequestResources() {}

  explicit RevertEvaluationResultsRequestResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceAccountId) {
      res["ResourceAccountId"] = boost::any(*resourceAccountId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceAccountId") != m.end() && !m["ResourceAccountId"].empty()) {
      resourceAccountId = make_shared<long>(boost::any_cast<long>(m["ResourceAccountId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~RevertEvaluationResultsRequestResources() = default;
};
class RevertEvaluationResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> configRuleId{};
  shared_ptr<vector<RevertEvaluationResultsRequestResources>> resources{};

  RevertEvaluationResultsRequest() {}

  explicit RevertEvaluationResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
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
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<RevertEvaluationResultsRequestResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RevertEvaluationResultsRequestResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<RevertEvaluationResultsRequestResources>>(expect1);
      }
    }
  }


  virtual ~RevertEvaluationResultsRequest() = default;
};
class RevertEvaluationResultsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> configRuleId{};
  shared_ptr<string> resourcesShrink{};

  RevertEvaluationResultsShrinkRequest() {}

  explicit RevertEvaluationResultsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (resourcesShrink) {
      res["Resources"] = boost::any(*resourcesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      resourcesShrink = make_shared<string>(boost::any_cast<string>(m["Resources"]));
    }
  }


  virtual ~RevertEvaluationResultsShrinkRequest() = default;
};
class RevertEvaluationResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RevertEvaluationResultsResponseBody() {}

  explicit RevertEvaluationResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RevertEvaluationResultsResponseBody() = default;
};
class RevertEvaluationResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RevertEvaluationResultsResponseBody> body{};

  RevertEvaluationResultsResponse() {}

  explicit RevertEvaluationResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RevertEvaluationResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RevertEvaluationResultsResponseBody>(model1);
      }
    }
  }


  virtual ~RevertEvaluationResultsResponse() = default;
};
class StartAggregateConfigRuleEvaluationRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> compliancePackId{};
  shared_ptr<string> configRuleId{};
  shared_ptr<bool> revertEvaluation{};

  StartAggregateConfigRuleEvaluationRequest() {}

  explicit StartAggregateConfigRuleEvaluationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (revertEvaluation) {
      res["RevertEvaluation"] = boost::any(*revertEvaluation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("RevertEvaluation") != m.end() && !m["RevertEvaluation"].empty()) {
      revertEvaluation = make_shared<bool>(boost::any_cast<bool>(m["RevertEvaluation"]));
    }
  }


  virtual ~StartAggregateConfigRuleEvaluationRequest() = default;
};
class StartAggregateConfigRuleEvaluationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  StartAggregateConfigRuleEvaluationResponseBody() {}

  explicit StartAggregateConfigRuleEvaluationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~StartAggregateConfigRuleEvaluationResponseBody() = default;
};
class StartAggregateConfigRuleEvaluationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartAggregateConfigRuleEvaluationResponseBody> body{};

  StartAggregateConfigRuleEvaluationResponse() {}

  explicit StartAggregateConfigRuleEvaluationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartAggregateConfigRuleEvaluationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartAggregateConfigRuleEvaluationResponseBody>(model1);
      }
    }
  }


  virtual ~StartAggregateConfigRuleEvaluationResponse() = default;
};
class UpdateAggregateCompliancePackRequestConfigRulesConfigRuleParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterName{};
  shared_ptr<string> parameterValue{};

  UpdateAggregateCompliancePackRequestConfigRulesConfigRuleParameters() {}

  explicit UpdateAggregateCompliancePackRequestConfigRulesConfigRuleParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterName) {
      res["ParameterName"] = boost::any(*parameterName);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterName") != m.end() && !m["ParameterName"].empty()) {
      parameterName = make_shared<string>(boost::any_cast<string>(m["ParameterName"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~UpdateAggregateCompliancePackRequestConfigRulesConfigRuleParameters() = default;
};
class UpdateAggregateCompliancePackRequestConfigRules : public Darabonba::Model {
public:
  shared_ptr<string> configRuleId{};
  shared_ptr<string> configRuleName{};
  shared_ptr<vector<UpdateAggregateCompliancePackRequestConfigRulesConfigRuleParameters>> configRuleParameters{};
  shared_ptr<string> description{};
  shared_ptr<string> managedRuleIdentifier{};
  shared_ptr<long> riskLevel{};

  UpdateAggregateCompliancePackRequestConfigRules() {}

  explicit UpdateAggregateCompliancePackRequestConfigRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (configRuleName) {
      res["ConfigRuleName"] = boost::any(*configRuleName);
    }
    if (configRuleParameters) {
      vector<boost::any> temp1;
      for(auto item1:*configRuleParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigRuleParameters"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (managedRuleIdentifier) {
      res["ManagedRuleIdentifier"] = boost::any(*managedRuleIdentifier);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("ConfigRuleName") != m.end() && !m["ConfigRuleName"].empty()) {
      configRuleName = make_shared<string>(boost::any_cast<string>(m["ConfigRuleName"]));
    }
    if (m.find("ConfigRuleParameters") != m.end() && !m["ConfigRuleParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigRuleParameters"].type()) {
        vector<UpdateAggregateCompliancePackRequestConfigRulesConfigRuleParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigRuleParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateAggregateCompliancePackRequestConfigRulesConfigRuleParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configRuleParameters = make_shared<vector<UpdateAggregateCompliancePackRequestConfigRulesConfigRuleParameters>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ManagedRuleIdentifier") != m.end() && !m["ManagedRuleIdentifier"].empty()) {
      managedRuleIdentifier = make_shared<string>(boost::any_cast<string>(m["ManagedRuleIdentifier"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
  }


  virtual ~UpdateAggregateCompliancePackRequestConfigRules() = default;
};
class UpdateAggregateCompliancePackRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> compliancePackId{};
  shared_ptr<string> compliancePackName{};
  shared_ptr<vector<UpdateAggregateCompliancePackRequestConfigRules>> configRules{};
  shared_ptr<string> description{};
  shared_ptr<long> riskLevel{};

  UpdateAggregateCompliancePackRequest() {}

  explicit UpdateAggregateCompliancePackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (compliancePackName) {
      res["CompliancePackName"] = boost::any(*compliancePackName);
    }
    if (configRules) {
      vector<boost::any> temp1;
      for(auto item1:*configRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigRules"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("CompliancePackName") != m.end() && !m["CompliancePackName"].empty()) {
      compliancePackName = make_shared<string>(boost::any_cast<string>(m["CompliancePackName"]));
    }
    if (m.find("ConfigRules") != m.end() && !m["ConfigRules"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigRules"].type()) {
        vector<UpdateAggregateCompliancePackRequestConfigRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateAggregateCompliancePackRequestConfigRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configRules = make_shared<vector<UpdateAggregateCompliancePackRequestConfigRules>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
  }


  virtual ~UpdateAggregateCompliancePackRequest() = default;
};
class UpdateAggregateCompliancePackShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> compliancePackId{};
  shared_ptr<string> compliancePackName{};
  shared_ptr<string> configRulesShrink{};
  shared_ptr<string> description{};
  shared_ptr<long> riskLevel{};

  UpdateAggregateCompliancePackShrinkRequest() {}

  explicit UpdateAggregateCompliancePackShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (compliancePackName) {
      res["CompliancePackName"] = boost::any(*compliancePackName);
    }
    if (configRulesShrink) {
      res["ConfigRules"] = boost::any(*configRulesShrink);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("CompliancePackName") != m.end() && !m["CompliancePackName"].empty()) {
      compliancePackName = make_shared<string>(boost::any_cast<string>(m["CompliancePackName"]));
    }
    if (m.find("ConfigRules") != m.end() && !m["ConfigRules"].empty()) {
      configRulesShrink = make_shared<string>(boost::any_cast<string>(m["ConfigRules"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
  }


  virtual ~UpdateAggregateCompliancePackShrinkRequest() = default;
};
class UpdateAggregateCompliancePackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> compliancePackId{};
  shared_ptr<string> requestId{};

  UpdateAggregateCompliancePackResponseBody() {}

  explicit UpdateAggregateCompliancePackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateAggregateCompliancePackResponseBody() = default;
};
class UpdateAggregateCompliancePackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateAggregateCompliancePackResponseBody> body{};

  UpdateAggregateCompliancePackResponse() {}

  explicit UpdateAggregateCompliancePackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAggregateCompliancePackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAggregateCompliancePackResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAggregateCompliancePackResponse() = default;
};
class UpdateAggregateConfigRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> configRuleId{};
  shared_ptr<string> configRuleName{};
  shared_ptr<string> configRuleTriggerTypes{};
  shared_ptr<string> description{};
  shared_ptr<string> excludeResourceIdsScope{};
  shared_ptr<map<string, boost::any>> inputParameters{};
  shared_ptr<string> maximumExecutionFrequency{};
  shared_ptr<string> regionIdsScope{};
  shared_ptr<string> resourceGroupIdsScope{};
  shared_ptr<vector<string>> resourceTypesScope{};
  shared_ptr<long> riskLevel{};
  shared_ptr<string> tagKeyScope{};
  shared_ptr<string> tagValueScope{};

  UpdateAggregateConfigRuleRequest() {}

  explicit UpdateAggregateConfigRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (configRuleName) {
      res["ConfigRuleName"] = boost::any(*configRuleName);
    }
    if (configRuleTriggerTypes) {
      res["ConfigRuleTriggerTypes"] = boost::any(*configRuleTriggerTypes);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (excludeResourceIdsScope) {
      res["ExcludeResourceIdsScope"] = boost::any(*excludeResourceIdsScope);
    }
    if (inputParameters) {
      res["InputParameters"] = boost::any(*inputParameters);
    }
    if (maximumExecutionFrequency) {
      res["MaximumExecutionFrequency"] = boost::any(*maximumExecutionFrequency);
    }
    if (regionIdsScope) {
      res["RegionIdsScope"] = boost::any(*regionIdsScope);
    }
    if (resourceGroupIdsScope) {
      res["ResourceGroupIdsScope"] = boost::any(*resourceGroupIdsScope);
    }
    if (resourceTypesScope) {
      res["ResourceTypesScope"] = boost::any(*resourceTypesScope);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (tagKeyScope) {
      res["TagKeyScope"] = boost::any(*tagKeyScope);
    }
    if (tagValueScope) {
      res["TagValueScope"] = boost::any(*tagValueScope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("ConfigRuleName") != m.end() && !m["ConfigRuleName"].empty()) {
      configRuleName = make_shared<string>(boost::any_cast<string>(m["ConfigRuleName"]));
    }
    if (m.find("ConfigRuleTriggerTypes") != m.end() && !m["ConfigRuleTriggerTypes"].empty()) {
      configRuleTriggerTypes = make_shared<string>(boost::any_cast<string>(m["ConfigRuleTriggerTypes"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExcludeResourceIdsScope") != m.end() && !m["ExcludeResourceIdsScope"].empty()) {
      excludeResourceIdsScope = make_shared<string>(boost::any_cast<string>(m["ExcludeResourceIdsScope"]));
    }
    if (m.find("InputParameters") != m.end() && !m["InputParameters"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["InputParameters"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      inputParameters = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("MaximumExecutionFrequency") != m.end() && !m["MaximumExecutionFrequency"].empty()) {
      maximumExecutionFrequency = make_shared<string>(boost::any_cast<string>(m["MaximumExecutionFrequency"]));
    }
    if (m.find("RegionIdsScope") != m.end() && !m["RegionIdsScope"].empty()) {
      regionIdsScope = make_shared<string>(boost::any_cast<string>(m["RegionIdsScope"]));
    }
    if (m.find("ResourceGroupIdsScope") != m.end() && !m["ResourceGroupIdsScope"].empty()) {
      resourceGroupIdsScope = make_shared<string>(boost::any_cast<string>(m["ResourceGroupIdsScope"]));
    }
    if (m.find("ResourceTypesScope") != m.end() && !m["ResourceTypesScope"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceTypesScope"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceTypesScope"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceTypesScope = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
    if (m.find("TagKeyScope") != m.end() && !m["TagKeyScope"].empty()) {
      tagKeyScope = make_shared<string>(boost::any_cast<string>(m["TagKeyScope"]));
    }
    if (m.find("TagValueScope") != m.end() && !m["TagValueScope"].empty()) {
      tagValueScope = make_shared<string>(boost::any_cast<string>(m["TagValueScope"]));
    }
  }


  virtual ~UpdateAggregateConfigRuleRequest() = default;
};
class UpdateAggregateConfigRuleShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> configRuleId{};
  shared_ptr<string> configRuleName{};
  shared_ptr<string> configRuleTriggerTypes{};
  shared_ptr<string> description{};
  shared_ptr<string> excludeResourceIdsScope{};
  shared_ptr<string> inputParametersShrink{};
  shared_ptr<string> maximumExecutionFrequency{};
  shared_ptr<string> regionIdsScope{};
  shared_ptr<string> resourceGroupIdsScope{};
  shared_ptr<string> resourceTypesScopeShrink{};
  shared_ptr<long> riskLevel{};
  shared_ptr<string> tagKeyScope{};
  shared_ptr<string> tagValueScope{};

  UpdateAggregateConfigRuleShrinkRequest() {}

  explicit UpdateAggregateConfigRuleShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (configRuleName) {
      res["ConfigRuleName"] = boost::any(*configRuleName);
    }
    if (configRuleTriggerTypes) {
      res["ConfigRuleTriggerTypes"] = boost::any(*configRuleTriggerTypes);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (excludeResourceIdsScope) {
      res["ExcludeResourceIdsScope"] = boost::any(*excludeResourceIdsScope);
    }
    if (inputParametersShrink) {
      res["InputParameters"] = boost::any(*inputParametersShrink);
    }
    if (maximumExecutionFrequency) {
      res["MaximumExecutionFrequency"] = boost::any(*maximumExecutionFrequency);
    }
    if (regionIdsScope) {
      res["RegionIdsScope"] = boost::any(*regionIdsScope);
    }
    if (resourceGroupIdsScope) {
      res["ResourceGroupIdsScope"] = boost::any(*resourceGroupIdsScope);
    }
    if (resourceTypesScopeShrink) {
      res["ResourceTypesScope"] = boost::any(*resourceTypesScopeShrink);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (tagKeyScope) {
      res["TagKeyScope"] = boost::any(*tagKeyScope);
    }
    if (tagValueScope) {
      res["TagValueScope"] = boost::any(*tagValueScope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("ConfigRuleName") != m.end() && !m["ConfigRuleName"].empty()) {
      configRuleName = make_shared<string>(boost::any_cast<string>(m["ConfigRuleName"]));
    }
    if (m.find("ConfigRuleTriggerTypes") != m.end() && !m["ConfigRuleTriggerTypes"].empty()) {
      configRuleTriggerTypes = make_shared<string>(boost::any_cast<string>(m["ConfigRuleTriggerTypes"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExcludeResourceIdsScope") != m.end() && !m["ExcludeResourceIdsScope"].empty()) {
      excludeResourceIdsScope = make_shared<string>(boost::any_cast<string>(m["ExcludeResourceIdsScope"]));
    }
    if (m.find("InputParameters") != m.end() && !m["InputParameters"].empty()) {
      inputParametersShrink = make_shared<string>(boost::any_cast<string>(m["InputParameters"]));
    }
    if (m.find("MaximumExecutionFrequency") != m.end() && !m["MaximumExecutionFrequency"].empty()) {
      maximumExecutionFrequency = make_shared<string>(boost::any_cast<string>(m["MaximumExecutionFrequency"]));
    }
    if (m.find("RegionIdsScope") != m.end() && !m["RegionIdsScope"].empty()) {
      regionIdsScope = make_shared<string>(boost::any_cast<string>(m["RegionIdsScope"]));
    }
    if (m.find("ResourceGroupIdsScope") != m.end() && !m["ResourceGroupIdsScope"].empty()) {
      resourceGroupIdsScope = make_shared<string>(boost::any_cast<string>(m["ResourceGroupIdsScope"]));
    }
    if (m.find("ResourceTypesScope") != m.end() && !m["ResourceTypesScope"].empty()) {
      resourceTypesScopeShrink = make_shared<string>(boost::any_cast<string>(m["ResourceTypesScope"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
    if (m.find("TagKeyScope") != m.end() && !m["TagKeyScope"].empty()) {
      tagKeyScope = make_shared<string>(boost::any_cast<string>(m["TagKeyScope"]));
    }
    if (m.find("TagValueScope") != m.end() && !m["TagValueScope"].empty()) {
      tagValueScope = make_shared<string>(boost::any_cast<string>(m["TagValueScope"]));
    }
  }


  virtual ~UpdateAggregateConfigRuleShrinkRequest() = default;
};
class UpdateAggregateConfigRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> configRuleId{};
  shared_ptr<string> requestId{};

  UpdateAggregateConfigRuleResponseBody() {}

  explicit UpdateAggregateConfigRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateAggregateConfigRuleResponseBody() = default;
};
class UpdateAggregateConfigRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateAggregateConfigRuleResponseBody> body{};

  UpdateAggregateConfigRuleResponse() {}

  explicit UpdateAggregateConfigRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAggregateConfigRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAggregateConfigRuleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAggregateConfigRuleResponse() = default;
};
class UpdateAggregatorRequestAggregatorAccounts : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountType{};

  UpdateAggregatorRequestAggregatorAccounts() {}

  explicit UpdateAggregatorRequestAggregatorAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
  }


  virtual ~UpdateAggregatorRequestAggregatorAccounts() = default;
};
class UpdateAggregatorRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateAggregatorRequestAggregatorAccounts>> aggregatorAccounts{};
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> aggregatorName{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};

  UpdateAggregatorRequest() {}

  explicit UpdateAggregatorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorAccounts) {
      vector<boost::any> temp1;
      for(auto item1:*aggregatorAccounts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AggregatorAccounts"] = boost::any(temp1);
    }
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (aggregatorName) {
      res["AggregatorName"] = boost::any(*aggregatorName);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorAccounts") != m.end() && !m["AggregatorAccounts"].empty()) {
      if (typeid(vector<boost::any>) == m["AggregatorAccounts"].type()) {
        vector<UpdateAggregatorRequestAggregatorAccounts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AggregatorAccounts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateAggregatorRequestAggregatorAccounts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aggregatorAccounts = make_shared<vector<UpdateAggregatorRequestAggregatorAccounts>>(expect1);
      }
    }
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("AggregatorName") != m.end() && !m["AggregatorName"].empty()) {
      aggregatorName = make_shared<string>(boost::any_cast<string>(m["AggregatorName"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~UpdateAggregatorRequest() = default;
};
class UpdateAggregatorShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorAccountsShrink{};
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> aggregatorName{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};

  UpdateAggregatorShrinkRequest() {}

  explicit UpdateAggregatorShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorAccountsShrink) {
      res["AggregatorAccounts"] = boost::any(*aggregatorAccountsShrink);
    }
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (aggregatorName) {
      res["AggregatorName"] = boost::any(*aggregatorName);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorAccounts") != m.end() && !m["AggregatorAccounts"].empty()) {
      aggregatorAccountsShrink = make_shared<string>(boost::any_cast<string>(m["AggregatorAccounts"]));
    }
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("AggregatorName") != m.end() && !m["AggregatorName"].empty()) {
      aggregatorName = make_shared<string>(boost::any_cast<string>(m["AggregatorName"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~UpdateAggregatorShrinkRequest() = default;
};
class UpdateAggregatorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> requestId{};

  UpdateAggregatorResponseBody() {}

  explicit UpdateAggregatorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateAggregatorResponseBody() = default;
};
class UpdateAggregatorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateAggregatorResponseBody> body{};

  UpdateAggregatorResponse() {}

  explicit UpdateAggregatorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAggregatorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAggregatorResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAggregatorResponse() = default;
};
class UpdateCompliancePackRequestConfigRulesConfigRuleParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterName{};
  shared_ptr<string> parameterValue{};

  UpdateCompliancePackRequestConfigRulesConfigRuleParameters() {}

  explicit UpdateCompliancePackRequestConfigRulesConfigRuleParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterName) {
      res["ParameterName"] = boost::any(*parameterName);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterName") != m.end() && !m["ParameterName"].empty()) {
      parameterName = make_shared<string>(boost::any_cast<string>(m["ParameterName"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~UpdateCompliancePackRequestConfigRulesConfigRuleParameters() = default;
};
class UpdateCompliancePackRequestConfigRules : public Darabonba::Model {
public:
  shared_ptr<string> configRuleId{};
  shared_ptr<string> configRuleName{};
  shared_ptr<vector<UpdateCompliancePackRequestConfigRulesConfigRuleParameters>> configRuleParameters{};
  shared_ptr<string> description{};
  shared_ptr<string> managedRuleIdentifier{};
  shared_ptr<long> riskLevel{};

  UpdateCompliancePackRequestConfigRules() {}

  explicit UpdateCompliancePackRequestConfigRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (configRuleName) {
      res["ConfigRuleName"] = boost::any(*configRuleName);
    }
    if (configRuleParameters) {
      vector<boost::any> temp1;
      for(auto item1:*configRuleParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigRuleParameters"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (managedRuleIdentifier) {
      res["ManagedRuleIdentifier"] = boost::any(*managedRuleIdentifier);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("ConfigRuleName") != m.end() && !m["ConfigRuleName"].empty()) {
      configRuleName = make_shared<string>(boost::any_cast<string>(m["ConfigRuleName"]));
    }
    if (m.find("ConfigRuleParameters") != m.end() && !m["ConfigRuleParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigRuleParameters"].type()) {
        vector<UpdateCompliancePackRequestConfigRulesConfigRuleParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigRuleParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateCompliancePackRequestConfigRulesConfigRuleParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configRuleParameters = make_shared<vector<UpdateCompliancePackRequestConfigRulesConfigRuleParameters>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ManagedRuleIdentifier") != m.end() && !m["ManagedRuleIdentifier"].empty()) {
      managedRuleIdentifier = make_shared<string>(boost::any_cast<string>(m["ManagedRuleIdentifier"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
  }


  virtual ~UpdateCompliancePackRequestConfigRules() = default;
};
class UpdateCompliancePackRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> compliancePackId{};
  shared_ptr<string> compliancePackName{};
  shared_ptr<vector<UpdateCompliancePackRequestConfigRules>> configRules{};
  shared_ptr<string> description{};
  shared_ptr<long> riskLevel{};

  UpdateCompliancePackRequest() {}

  explicit UpdateCompliancePackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (compliancePackName) {
      res["CompliancePackName"] = boost::any(*compliancePackName);
    }
    if (configRules) {
      vector<boost::any> temp1;
      for(auto item1:*configRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigRules"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("CompliancePackName") != m.end() && !m["CompliancePackName"].empty()) {
      compliancePackName = make_shared<string>(boost::any_cast<string>(m["CompliancePackName"]));
    }
    if (m.find("ConfigRules") != m.end() && !m["ConfigRules"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigRules"].type()) {
        vector<UpdateCompliancePackRequestConfigRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateCompliancePackRequestConfigRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configRules = make_shared<vector<UpdateCompliancePackRequestConfigRules>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
  }


  virtual ~UpdateCompliancePackRequest() = default;
};
class UpdateCompliancePackShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> compliancePackId{};
  shared_ptr<string> compliancePackName{};
  shared_ptr<string> configRulesShrink{};
  shared_ptr<string> description{};
  shared_ptr<long> riskLevel{};

  UpdateCompliancePackShrinkRequest() {}

  explicit UpdateCompliancePackShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (compliancePackName) {
      res["CompliancePackName"] = boost::any(*compliancePackName);
    }
    if (configRulesShrink) {
      res["ConfigRules"] = boost::any(*configRulesShrink);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("CompliancePackName") != m.end() && !m["CompliancePackName"].empty()) {
      compliancePackName = make_shared<string>(boost::any_cast<string>(m["CompliancePackName"]));
    }
    if (m.find("ConfigRules") != m.end() && !m["ConfigRules"].empty()) {
      configRulesShrink = make_shared<string>(boost::any_cast<string>(m["ConfigRules"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
  }


  virtual ~UpdateCompliancePackShrinkRequest() = default;
};
class UpdateCompliancePackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> compliancePackId{};
  shared_ptr<string> requestId{};

  UpdateCompliancePackResponseBody() {}

  explicit UpdateCompliancePackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateCompliancePackResponseBody() = default;
};
class UpdateCompliancePackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateCompliancePackResponseBody> body{};

  UpdateCompliancePackResponse() {}

  explicit UpdateCompliancePackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateCompliancePackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateCompliancePackResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateCompliancePackResponse() = default;
};
class UpdateConfigRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> configRuleId{};
  shared_ptr<string> configRuleName{};
  shared_ptr<string> configRuleTriggerTypes{};
  shared_ptr<string> description{};
  shared_ptr<string> excludeResourceIdsScope{};
  shared_ptr<map<string, boost::any>> inputParameters{};
  shared_ptr<string> maximumExecutionFrequency{};
  shared_ptr<string> regionIdsScope{};
  shared_ptr<string> resourceGroupIdsScope{};
  shared_ptr<vector<string>> resourceTypesScope{};
  shared_ptr<long> riskLevel{};
  shared_ptr<string> tagKeyScope{};
  shared_ptr<string> tagValueScope{};

  UpdateConfigRuleRequest() {}

  explicit UpdateConfigRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (configRuleName) {
      res["ConfigRuleName"] = boost::any(*configRuleName);
    }
    if (configRuleTriggerTypes) {
      res["ConfigRuleTriggerTypes"] = boost::any(*configRuleTriggerTypes);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (excludeResourceIdsScope) {
      res["ExcludeResourceIdsScope"] = boost::any(*excludeResourceIdsScope);
    }
    if (inputParameters) {
      res["InputParameters"] = boost::any(*inputParameters);
    }
    if (maximumExecutionFrequency) {
      res["MaximumExecutionFrequency"] = boost::any(*maximumExecutionFrequency);
    }
    if (regionIdsScope) {
      res["RegionIdsScope"] = boost::any(*regionIdsScope);
    }
    if (resourceGroupIdsScope) {
      res["ResourceGroupIdsScope"] = boost::any(*resourceGroupIdsScope);
    }
    if (resourceTypesScope) {
      res["ResourceTypesScope"] = boost::any(*resourceTypesScope);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (tagKeyScope) {
      res["TagKeyScope"] = boost::any(*tagKeyScope);
    }
    if (tagValueScope) {
      res["TagValueScope"] = boost::any(*tagValueScope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("ConfigRuleName") != m.end() && !m["ConfigRuleName"].empty()) {
      configRuleName = make_shared<string>(boost::any_cast<string>(m["ConfigRuleName"]));
    }
    if (m.find("ConfigRuleTriggerTypes") != m.end() && !m["ConfigRuleTriggerTypes"].empty()) {
      configRuleTriggerTypes = make_shared<string>(boost::any_cast<string>(m["ConfigRuleTriggerTypes"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExcludeResourceIdsScope") != m.end() && !m["ExcludeResourceIdsScope"].empty()) {
      excludeResourceIdsScope = make_shared<string>(boost::any_cast<string>(m["ExcludeResourceIdsScope"]));
    }
    if (m.find("InputParameters") != m.end() && !m["InputParameters"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["InputParameters"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      inputParameters = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("MaximumExecutionFrequency") != m.end() && !m["MaximumExecutionFrequency"].empty()) {
      maximumExecutionFrequency = make_shared<string>(boost::any_cast<string>(m["MaximumExecutionFrequency"]));
    }
    if (m.find("RegionIdsScope") != m.end() && !m["RegionIdsScope"].empty()) {
      regionIdsScope = make_shared<string>(boost::any_cast<string>(m["RegionIdsScope"]));
    }
    if (m.find("ResourceGroupIdsScope") != m.end() && !m["ResourceGroupIdsScope"].empty()) {
      resourceGroupIdsScope = make_shared<string>(boost::any_cast<string>(m["ResourceGroupIdsScope"]));
    }
    if (m.find("ResourceTypesScope") != m.end() && !m["ResourceTypesScope"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceTypesScope"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceTypesScope"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceTypesScope = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
    if (m.find("TagKeyScope") != m.end() && !m["TagKeyScope"].empty()) {
      tagKeyScope = make_shared<string>(boost::any_cast<string>(m["TagKeyScope"]));
    }
    if (m.find("TagValueScope") != m.end() && !m["TagValueScope"].empty()) {
      tagValueScope = make_shared<string>(boost::any_cast<string>(m["TagValueScope"]));
    }
  }


  virtual ~UpdateConfigRuleRequest() = default;
};
class UpdateConfigRuleShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> configRuleId{};
  shared_ptr<string> configRuleName{};
  shared_ptr<string> configRuleTriggerTypes{};
  shared_ptr<string> description{};
  shared_ptr<string> excludeResourceIdsScope{};
  shared_ptr<string> inputParametersShrink{};
  shared_ptr<string> maximumExecutionFrequency{};
  shared_ptr<string> regionIdsScope{};
  shared_ptr<string> resourceGroupIdsScope{};
  shared_ptr<string> resourceTypesScopeShrink{};
  shared_ptr<long> riskLevel{};
  shared_ptr<string> tagKeyScope{};
  shared_ptr<string> tagValueScope{};

  UpdateConfigRuleShrinkRequest() {}

  explicit UpdateConfigRuleShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (configRuleName) {
      res["ConfigRuleName"] = boost::any(*configRuleName);
    }
    if (configRuleTriggerTypes) {
      res["ConfigRuleTriggerTypes"] = boost::any(*configRuleTriggerTypes);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (excludeResourceIdsScope) {
      res["ExcludeResourceIdsScope"] = boost::any(*excludeResourceIdsScope);
    }
    if (inputParametersShrink) {
      res["InputParameters"] = boost::any(*inputParametersShrink);
    }
    if (maximumExecutionFrequency) {
      res["MaximumExecutionFrequency"] = boost::any(*maximumExecutionFrequency);
    }
    if (regionIdsScope) {
      res["RegionIdsScope"] = boost::any(*regionIdsScope);
    }
    if (resourceGroupIdsScope) {
      res["ResourceGroupIdsScope"] = boost::any(*resourceGroupIdsScope);
    }
    if (resourceTypesScopeShrink) {
      res["ResourceTypesScope"] = boost::any(*resourceTypesScopeShrink);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (tagKeyScope) {
      res["TagKeyScope"] = boost::any(*tagKeyScope);
    }
    if (tagValueScope) {
      res["TagValueScope"] = boost::any(*tagValueScope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("ConfigRuleName") != m.end() && !m["ConfigRuleName"].empty()) {
      configRuleName = make_shared<string>(boost::any_cast<string>(m["ConfigRuleName"]));
    }
    if (m.find("ConfigRuleTriggerTypes") != m.end() && !m["ConfigRuleTriggerTypes"].empty()) {
      configRuleTriggerTypes = make_shared<string>(boost::any_cast<string>(m["ConfigRuleTriggerTypes"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExcludeResourceIdsScope") != m.end() && !m["ExcludeResourceIdsScope"].empty()) {
      excludeResourceIdsScope = make_shared<string>(boost::any_cast<string>(m["ExcludeResourceIdsScope"]));
    }
    if (m.find("InputParameters") != m.end() && !m["InputParameters"].empty()) {
      inputParametersShrink = make_shared<string>(boost::any_cast<string>(m["InputParameters"]));
    }
    if (m.find("MaximumExecutionFrequency") != m.end() && !m["MaximumExecutionFrequency"].empty()) {
      maximumExecutionFrequency = make_shared<string>(boost::any_cast<string>(m["MaximumExecutionFrequency"]));
    }
    if (m.find("RegionIdsScope") != m.end() && !m["RegionIdsScope"].empty()) {
      regionIdsScope = make_shared<string>(boost::any_cast<string>(m["RegionIdsScope"]));
    }
    if (m.find("ResourceGroupIdsScope") != m.end() && !m["ResourceGroupIdsScope"].empty()) {
      resourceGroupIdsScope = make_shared<string>(boost::any_cast<string>(m["ResourceGroupIdsScope"]));
    }
    if (m.find("ResourceTypesScope") != m.end() && !m["ResourceTypesScope"].empty()) {
      resourceTypesScopeShrink = make_shared<string>(boost::any_cast<string>(m["ResourceTypesScope"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
    if (m.find("TagKeyScope") != m.end() && !m["TagKeyScope"].empty()) {
      tagKeyScope = make_shared<string>(boost::any_cast<string>(m["TagKeyScope"]));
    }
    if (m.find("TagValueScope") != m.end() && !m["TagValueScope"].empty()) {
      tagValueScope = make_shared<string>(boost::any_cast<string>(m["TagValueScope"]));
    }
  }


  virtual ~UpdateConfigRuleShrinkRequest() = default;
};
class UpdateConfigRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> configRuleId{};
  shared_ptr<string> requestId{};

  UpdateConfigRuleResponseBody() {}

  explicit UpdateConfigRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateConfigRuleResponseBody() = default;
};
class UpdateConfigRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateConfigRuleResponseBody> body{};

  UpdateConfigRuleResponse() {}

  explicit UpdateConfigRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateConfigRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateConfigRuleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateConfigRuleResponse() = default;
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
  ActiveAggregateConfigRulesResponse activeAggregateConfigRulesWithOptions(shared_ptr<ActiveAggregateConfigRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ActiveAggregateConfigRulesResponse activeAggregateConfigRules(shared_ptr<ActiveAggregateConfigRulesRequest> request);
  AttachAggregateConfigRuleToCompliancePackResponse attachAggregateConfigRuleToCompliancePackWithOptions(shared_ptr<AttachAggregateConfigRuleToCompliancePackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachAggregateConfigRuleToCompliancePackResponse attachAggregateConfigRuleToCompliancePack(shared_ptr<AttachAggregateConfigRuleToCompliancePackRequest> request);
  AttachConfigRuleToCompliancePackResponse attachConfigRuleToCompliancePackWithOptions(shared_ptr<AttachConfigRuleToCompliancePackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachConfigRuleToCompliancePackResponse attachConfigRuleToCompliancePack(shared_ptr<AttachConfigRuleToCompliancePackRequest> request);
  CreateAggregateCompliancePackResponse createAggregateCompliancePackWithOptions(shared_ptr<CreateAggregateCompliancePackRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAggregateCompliancePackResponse createAggregateCompliancePack(shared_ptr<CreateAggregateCompliancePackRequest> request);
  CreateAggregateConfigRuleResponse createAggregateConfigRuleWithOptions(shared_ptr<CreateAggregateConfigRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAggregateConfigRuleResponse createAggregateConfigRule(shared_ptr<CreateAggregateConfigRuleRequest> request);
  CreateAggregatorResponse createAggregatorWithOptions(shared_ptr<CreateAggregatorRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAggregatorResponse createAggregator(shared_ptr<CreateAggregatorRequest> request);
  CreateCompliancePackResponse createCompliancePackWithOptions(shared_ptr<CreateCompliancePackRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCompliancePackResponse createCompliancePack(shared_ptr<CreateCompliancePackRequest> request);
  CreateConfigRuleResponse createConfigRuleWithOptions(shared_ptr<CreateConfigRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateConfigRuleResponse createConfigRule(shared_ptr<CreateConfigRuleRequest> request);
  DeactiveAggregateConfigRulesResponse deactiveAggregateConfigRulesWithOptions(shared_ptr<DeactiveAggregateConfigRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeactiveAggregateConfigRulesResponse deactiveAggregateConfigRules(shared_ptr<DeactiveAggregateConfigRulesRequest> request);
  DeactiveConfigRulesResponse deactiveConfigRulesWithOptions(shared_ptr<DeactiveConfigRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeactiveConfigRulesResponse deactiveConfigRules(shared_ptr<DeactiveConfigRulesRequest> request);
  DeleteAggregateCompliancePacksResponse deleteAggregateCompliancePacksWithOptions(shared_ptr<DeleteAggregateCompliancePacksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAggregateCompliancePacksResponse deleteAggregateCompliancePacks(shared_ptr<DeleteAggregateCompliancePacksRequest> request);
  DeleteAggregateConfigRulesResponse deleteAggregateConfigRulesWithOptions(shared_ptr<DeleteAggregateConfigRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAggregateConfigRulesResponse deleteAggregateConfigRules(shared_ptr<DeleteAggregateConfigRulesRequest> request);
  DeleteAggregatorsResponse deleteAggregatorsWithOptions(shared_ptr<DeleteAggregatorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAggregatorsResponse deleteAggregators(shared_ptr<DeleteAggregatorsRequest> request);
  DeleteCompliancePacksResponse deleteCompliancePacksWithOptions(shared_ptr<DeleteCompliancePacksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCompliancePacksResponse deleteCompliancePacks(shared_ptr<DeleteCompliancePacksRequest> request);
  DetachAggregateConfigRuleToCompliancePackResponse detachAggregateConfigRuleToCompliancePackWithOptions(shared_ptr<DetachAggregateConfigRuleToCompliancePackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachAggregateConfigRuleToCompliancePackResponse detachAggregateConfigRuleToCompliancePack(shared_ptr<DetachAggregateConfigRuleToCompliancePackRequest> request);
  DetachConfigRuleToCompliancePackResponse detachConfigRuleToCompliancePackWithOptions(shared_ptr<DetachConfigRuleToCompliancePackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachConfigRuleToCompliancePackResponse detachConfigRuleToCompliancePack(shared_ptr<DetachConfigRuleToCompliancePackRequest> request);
  GenerateAggregateCompliancePackReportResponse generateAggregateCompliancePackReportWithOptions(shared_ptr<GenerateAggregateCompliancePackReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateAggregateCompliancePackReportResponse generateAggregateCompliancePackReport(shared_ptr<GenerateAggregateCompliancePackReportRequest> request);
  GenerateAggregateConfigRulesReportResponse generateAggregateConfigRulesReportWithOptions(shared_ptr<GenerateAggregateConfigRulesReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateAggregateConfigRulesReportResponse generateAggregateConfigRulesReport(shared_ptr<GenerateAggregateConfigRulesReportRequest> request);
  GenerateCompliancePackReportResponse generateCompliancePackReportWithOptions(shared_ptr<GenerateCompliancePackReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateCompliancePackReportResponse generateCompliancePackReport(shared_ptr<GenerateCompliancePackReportRequest> request);
  GenerateConfigRulesReportResponse generateConfigRulesReportWithOptions(shared_ptr<GenerateConfigRulesReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateConfigRulesReportResponse generateConfigRulesReport(shared_ptr<GenerateConfigRulesReportRequest> request);
  GetAggregateAccountComplianceByPackResponse getAggregateAccountComplianceByPackWithOptions(shared_ptr<GetAggregateAccountComplianceByPackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAggregateAccountComplianceByPackResponse getAggregateAccountComplianceByPack(shared_ptr<GetAggregateAccountComplianceByPackRequest> request);
  GetAggregateCompliancePackResponse getAggregateCompliancePackWithOptions(shared_ptr<GetAggregateCompliancePackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAggregateCompliancePackResponse getAggregateCompliancePack(shared_ptr<GetAggregateCompliancePackRequest> request);
  GetAggregateCompliancePackReportResponse getAggregateCompliancePackReportWithOptions(shared_ptr<GetAggregateCompliancePackReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAggregateCompliancePackReportResponse getAggregateCompliancePackReport(shared_ptr<GetAggregateCompliancePackReportRequest> request);
  GetAggregateConfigRuleResponse getAggregateConfigRuleWithOptions(shared_ptr<GetAggregateConfigRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAggregateConfigRuleResponse getAggregateConfigRule(shared_ptr<GetAggregateConfigRuleRequest> request);
  GetAggregateConfigRuleComplianceByPackResponse getAggregateConfigRuleComplianceByPackWithOptions(shared_ptr<GetAggregateConfigRuleComplianceByPackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAggregateConfigRuleComplianceByPackResponse getAggregateConfigRuleComplianceByPack(shared_ptr<GetAggregateConfigRuleComplianceByPackRequest> request);
  GetAggregateConfigRuleSummaryByRiskLevelResponse getAggregateConfigRuleSummaryByRiskLevelWithOptions(shared_ptr<GetAggregateConfigRuleSummaryByRiskLevelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAggregateConfigRuleSummaryByRiskLevelResponse getAggregateConfigRuleSummaryByRiskLevel(shared_ptr<GetAggregateConfigRuleSummaryByRiskLevelRequest> request);
  GetAggregateConfigRulesReportResponse getAggregateConfigRulesReportWithOptions(shared_ptr<GetAggregateConfigRulesReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAggregateConfigRulesReportResponse getAggregateConfigRulesReport(shared_ptr<GetAggregateConfigRulesReportRequest> request);
  GetAggregateResourceComplianceByConfigRuleResponse getAggregateResourceComplianceByConfigRuleWithOptions(shared_ptr<GetAggregateResourceComplianceByConfigRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAggregateResourceComplianceByConfigRuleResponse getAggregateResourceComplianceByConfigRule(shared_ptr<GetAggregateResourceComplianceByConfigRuleRequest> request);
  GetAggregateResourceComplianceByPackResponse getAggregateResourceComplianceByPackWithOptions(shared_ptr<GetAggregateResourceComplianceByPackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAggregateResourceComplianceByPackResponse getAggregateResourceComplianceByPack(shared_ptr<GetAggregateResourceComplianceByPackRequest> request);
  GetAggregateResourceComplianceTimelineResponse getAggregateResourceComplianceTimelineWithOptions(shared_ptr<GetAggregateResourceComplianceTimelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAggregateResourceComplianceTimelineResponse getAggregateResourceComplianceTimeline(shared_ptr<GetAggregateResourceComplianceTimelineRequest> request);
  GetAggregateResourceConfigurationTimelineResponse getAggregateResourceConfigurationTimelineWithOptions(shared_ptr<GetAggregateResourceConfigurationTimelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAggregateResourceConfigurationTimelineResponse getAggregateResourceConfigurationTimeline(shared_ptr<GetAggregateResourceConfigurationTimelineRequest> request);
  GetAggregateResourceCountsGroupByRegionResponse getAggregateResourceCountsGroupByRegionWithOptions(shared_ptr<GetAggregateResourceCountsGroupByRegionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAggregateResourceCountsGroupByRegionResponse getAggregateResourceCountsGroupByRegion(shared_ptr<GetAggregateResourceCountsGroupByRegionRequest> request);
  GetAggregateResourceCountsGroupByResourceTypeResponse getAggregateResourceCountsGroupByResourceTypeWithOptions(shared_ptr<GetAggregateResourceCountsGroupByResourceTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAggregateResourceCountsGroupByResourceTypeResponse getAggregateResourceCountsGroupByResourceType(shared_ptr<GetAggregateResourceCountsGroupByResourceTypeRequest> request);
  GetAggregatorResponse getAggregatorWithOptions(shared_ptr<GetAggregatorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAggregatorResponse getAggregator(shared_ptr<GetAggregatorRequest> request);
  GetCompliancePackResponse getCompliancePackWithOptions(shared_ptr<GetCompliancePackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCompliancePackResponse getCompliancePack(shared_ptr<GetCompliancePackRequest> request);
  GetCompliancePackReportResponse getCompliancePackReportWithOptions(shared_ptr<GetCompliancePackReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCompliancePackReportResponse getCompliancePackReport(shared_ptr<GetCompliancePackReportRequest> request);
  GetConfigRuleResponse getConfigRuleWithOptions(shared_ptr<GetConfigRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConfigRuleResponse getConfigRule(shared_ptr<GetConfigRuleRequest> request);
  GetConfigRuleComplianceByPackResponse getConfigRuleComplianceByPackWithOptions(shared_ptr<GetConfigRuleComplianceByPackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConfigRuleComplianceByPackResponse getConfigRuleComplianceByPack(shared_ptr<GetConfigRuleComplianceByPackRequest> request);
  GetConfigRuleSummaryByRiskLevelResponse getConfigRuleSummaryByRiskLevelWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConfigRuleSummaryByRiskLevelResponse getConfigRuleSummaryByRiskLevel();
  GetConfigRulesReportResponse getConfigRulesReportWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConfigRulesReportResponse getConfigRulesReport();
  GetDiscoveredResourceCountsGroupByRegionResponse getDiscoveredResourceCountsGroupByRegionWithOptions(shared_ptr<GetDiscoveredResourceCountsGroupByRegionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDiscoveredResourceCountsGroupByRegionResponse getDiscoveredResourceCountsGroupByRegion(shared_ptr<GetDiscoveredResourceCountsGroupByRegionRequest> request);
  GetDiscoveredResourceCountsGroupByResourceTypeResponse getDiscoveredResourceCountsGroupByResourceTypeWithOptions(shared_ptr<GetDiscoveredResourceCountsGroupByResourceTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDiscoveredResourceCountsGroupByResourceTypeResponse getDiscoveredResourceCountsGroupByResourceType(shared_ptr<GetDiscoveredResourceCountsGroupByResourceTypeRequest> request);
  GetResourceComplianceByConfigRuleResponse getResourceComplianceByConfigRuleWithOptions(shared_ptr<GetResourceComplianceByConfigRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceComplianceByConfigRuleResponse getResourceComplianceByConfigRule(shared_ptr<GetResourceComplianceByConfigRuleRequest> request);
  GetResourceComplianceByPackResponse getResourceComplianceByPackWithOptions(shared_ptr<GetResourceComplianceByPackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceComplianceByPackResponse getResourceComplianceByPack(shared_ptr<GetResourceComplianceByPackRequest> request);
  GetResourceComplianceTimelineResponse getResourceComplianceTimelineWithOptions(shared_ptr<GetResourceComplianceTimelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceComplianceTimelineResponse getResourceComplianceTimeline(shared_ptr<GetResourceComplianceTimelineRequest> request);
  GetResourceConfigurationTimelineResponse getResourceConfigurationTimelineWithOptions(shared_ptr<GetResourceConfigurationTimelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceConfigurationTimelineResponse getResourceConfigurationTimeline(shared_ptr<GetResourceConfigurationTimelineRequest> request);
  IgnoreAggregateEvaluationResultsResponse ignoreAggregateEvaluationResultsWithOptions(shared_ptr<IgnoreAggregateEvaluationResultsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  IgnoreAggregateEvaluationResultsResponse ignoreAggregateEvaluationResults(shared_ptr<IgnoreAggregateEvaluationResultsRequest> request);
  IgnoreEvaluationResultsResponse ignoreEvaluationResultsWithOptions(shared_ptr<IgnoreEvaluationResultsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  IgnoreEvaluationResultsResponse ignoreEvaluationResults(shared_ptr<IgnoreEvaluationResultsRequest> request);
  ListAggregateCompliancePacksResponse listAggregateCompliancePacksWithOptions(shared_ptr<ListAggregateCompliancePacksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAggregateCompliancePacksResponse listAggregateCompliancePacks(shared_ptr<ListAggregateCompliancePacksRequest> request);
  ListAggregateConfigRuleEvaluationResultsResponse listAggregateConfigRuleEvaluationResultsWithOptions(shared_ptr<ListAggregateConfigRuleEvaluationResultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAggregateConfigRuleEvaluationResultsResponse listAggregateConfigRuleEvaluationResults(shared_ptr<ListAggregateConfigRuleEvaluationResultsRequest> request);
  ListAggregateConfigRulesResponse listAggregateConfigRulesWithOptions(shared_ptr<ListAggregateConfigRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAggregateConfigRulesResponse listAggregateConfigRules(shared_ptr<ListAggregateConfigRulesRequest> request);
  ListAggregateResourceEvaluationResultsResponse listAggregateResourceEvaluationResultsWithOptions(shared_ptr<ListAggregateResourceEvaluationResultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAggregateResourceEvaluationResultsResponse listAggregateResourceEvaluationResults(shared_ptr<ListAggregateResourceEvaluationResultsRequest> request);
  ListAggregatorsResponse listAggregatorsWithOptions(shared_ptr<ListAggregatorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAggregatorsResponse listAggregators(shared_ptr<ListAggregatorsRequest> request);
  ListCompliancePackTemplatesResponse listCompliancePackTemplatesWithOptions(shared_ptr<ListCompliancePackTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCompliancePackTemplatesResponse listCompliancePackTemplates(shared_ptr<ListCompliancePackTemplatesRequest> request);
  ListCompliancePacksResponse listCompliancePacksWithOptions(shared_ptr<ListCompliancePacksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCompliancePacksResponse listCompliancePacks(shared_ptr<ListCompliancePacksRequest> request);
  ListConfigRuleEvaluationResultsResponse listConfigRuleEvaluationResultsWithOptions(shared_ptr<ListConfigRuleEvaluationResultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConfigRuleEvaluationResultsResponse listConfigRuleEvaluationResults(shared_ptr<ListConfigRuleEvaluationResultsRequest> request);
  ListResourceEvaluationResultsResponse listResourceEvaluationResultsWithOptions(shared_ptr<ListResourceEvaluationResultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourceEvaluationResultsResponse listResourceEvaluationResults(shared_ptr<ListResourceEvaluationResultsRequest> request);
  RevertAggregateEvaluationResultsResponse revertAggregateEvaluationResultsWithOptions(shared_ptr<RevertAggregateEvaluationResultsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RevertAggregateEvaluationResultsResponse revertAggregateEvaluationResults(shared_ptr<RevertAggregateEvaluationResultsRequest> request);
  RevertEvaluationResultsResponse revertEvaluationResultsWithOptions(shared_ptr<RevertEvaluationResultsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RevertEvaluationResultsResponse revertEvaluationResults(shared_ptr<RevertEvaluationResultsRequest> request);
  StartAggregateConfigRuleEvaluationResponse startAggregateConfigRuleEvaluationWithOptions(shared_ptr<StartAggregateConfigRuleEvaluationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartAggregateConfigRuleEvaluationResponse startAggregateConfigRuleEvaluation(shared_ptr<StartAggregateConfigRuleEvaluationRequest> request);
  UpdateAggregateCompliancePackResponse updateAggregateCompliancePackWithOptions(shared_ptr<UpdateAggregateCompliancePackRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAggregateCompliancePackResponse updateAggregateCompliancePack(shared_ptr<UpdateAggregateCompliancePackRequest> request);
  UpdateAggregateConfigRuleResponse updateAggregateConfigRuleWithOptions(shared_ptr<UpdateAggregateConfigRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAggregateConfigRuleResponse updateAggregateConfigRule(shared_ptr<UpdateAggregateConfigRuleRequest> request);
  UpdateAggregatorResponse updateAggregatorWithOptions(shared_ptr<UpdateAggregatorRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAggregatorResponse updateAggregator(shared_ptr<UpdateAggregatorRequest> request);
  UpdateCompliancePackResponse updateCompliancePackWithOptions(shared_ptr<UpdateCompliancePackRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCompliancePackResponse updateCompliancePack(shared_ptr<UpdateCompliancePackRequest> request);
  UpdateConfigRuleResponse updateConfigRuleWithOptions(shared_ptr<UpdateConfigRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateConfigRuleResponse updateConfigRule(shared_ptr<UpdateConfigRuleRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Config20200907

#endif
