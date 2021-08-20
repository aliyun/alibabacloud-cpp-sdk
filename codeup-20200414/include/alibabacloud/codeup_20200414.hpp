// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CODEUP20200414_H_
#define ALIBABACLOUD_CODEUP20200414_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Codeup20200414 {
class DeleteRepositoryMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> subUserId{};

  DeleteRepositoryMemberRequest() {}

  explicit DeleteRepositoryMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~DeleteRepositoryMemberRequest() = default;
};
class DeleteRepositoryMemberResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> userId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> message{};
  shared_ptr<long> accessLevel{};
  shared_ptr<string> updatedAt{};
  shared_ptr<long> sourceId{};
  shared_ptr<long> notificationLevel{};
  shared_ptr<long> id{};

  DeleteRepositoryMemberResponseBodyResult() {}

  explicit DeleteRepositoryMemberResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (accessLevel) {
      res["AccessLevel"] = boost::any(*accessLevel);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (notificationLevel) {
      res["NotificationLevel"] = boost::any(*notificationLevel);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("AccessLevel") != m.end() && !m["AccessLevel"].empty()) {
      accessLevel = make_shared<long>(boost::any_cast<long>(m["AccessLevel"]));
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["UpdatedAt"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<long>(boost::any_cast<long>(m["SourceId"]));
    }
    if (m.find("NotificationLevel") != m.end() && !m["NotificationLevel"].empty()) {
      notificationLevel = make_shared<long>(boost::any_cast<long>(m["NotificationLevel"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~DeleteRepositoryMemberResponseBodyResult() = default;
};
class DeleteRepositoryMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<DeleteRepositoryMemberResponseBodyResult> result{};

  DeleteRepositoryMemberResponseBody() {}

  explicit DeleteRepositoryMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        DeleteRepositoryMemberResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DeleteRepositoryMemberResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DeleteRepositoryMemberResponseBody() = default;
};
class DeleteRepositoryMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteRepositoryMemberResponseBody> body{};

  DeleteRepositoryMemberResponse() {}

  explicit DeleteRepositoryMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRepositoryMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRepositoryMemberResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRepositoryMemberResponse() = default;
};
class CreateRepositoryProtectedBranchRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};

  CreateRepositoryProtectedBranchRequest() {}

  explicit CreateRepositoryProtectedBranchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~CreateRepositoryProtectedBranchRequest() = default;
};
class CreateRepositoryProtectedBranchResponseBodyResultMergeRequestSetting : public Darabonba::Model {
public:
  shared_ptr<string> mergeRequestMode{};
  shared_ptr<bool> allowSelfApproval{};
  shared_ptr<bool> isRequireDiscussionProcessed{};
  shared_ptr<bool> required{};
  shared_ptr<bool> isResetApprovalWhenNewPush{};
  shared_ptr<long> minimualApproval{};
  shared_ptr<vector<string>> defaultAssignees{};
  shared_ptr<vector<long>> allowMergeRequestRoles{};

  CreateRepositoryProtectedBranchResponseBodyResultMergeRequestSetting() {}

  explicit CreateRepositoryProtectedBranchResponseBodyResultMergeRequestSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mergeRequestMode) {
      res["MergeRequestMode"] = boost::any(*mergeRequestMode);
    }
    if (allowSelfApproval) {
      res["AllowSelfApproval"] = boost::any(*allowSelfApproval);
    }
    if (isRequireDiscussionProcessed) {
      res["IsRequireDiscussionProcessed"] = boost::any(*isRequireDiscussionProcessed);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    if (isResetApprovalWhenNewPush) {
      res["IsResetApprovalWhenNewPush"] = boost::any(*isResetApprovalWhenNewPush);
    }
    if (minimualApproval) {
      res["MinimualApproval"] = boost::any(*minimualApproval);
    }
    if (defaultAssignees) {
      res["DefaultAssignees"] = boost::any(*defaultAssignees);
    }
    if (allowMergeRequestRoles) {
      res["AllowMergeRequestRoles"] = boost::any(*allowMergeRequestRoles);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MergeRequestMode") != m.end() && !m["MergeRequestMode"].empty()) {
      mergeRequestMode = make_shared<string>(boost::any_cast<string>(m["MergeRequestMode"]));
    }
    if (m.find("AllowSelfApproval") != m.end() && !m["AllowSelfApproval"].empty()) {
      allowSelfApproval = make_shared<bool>(boost::any_cast<bool>(m["AllowSelfApproval"]));
    }
    if (m.find("IsRequireDiscussionProcessed") != m.end() && !m["IsRequireDiscussionProcessed"].empty()) {
      isRequireDiscussionProcessed = make_shared<bool>(boost::any_cast<bool>(m["IsRequireDiscussionProcessed"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["Required"]));
    }
    if (m.find("IsResetApprovalWhenNewPush") != m.end() && !m["IsResetApprovalWhenNewPush"].empty()) {
      isResetApprovalWhenNewPush = make_shared<bool>(boost::any_cast<bool>(m["IsResetApprovalWhenNewPush"]));
    }
    if (m.find("MinimualApproval") != m.end() && !m["MinimualApproval"].empty()) {
      minimualApproval = make_shared<long>(boost::any_cast<long>(m["MinimualApproval"]));
    }
    if (m.find("DefaultAssignees") != m.end() && !m["DefaultAssignees"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DefaultAssignees"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DefaultAssignees"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      defaultAssignees = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AllowMergeRequestRoles") != m.end() && !m["AllowMergeRequestRoles"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AllowMergeRequestRoles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AllowMergeRequestRoles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      allowMergeRequestRoles = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~CreateRepositoryProtectedBranchResponseBodyResultMergeRequestSetting() = default;
};
class CreateRepositoryProtectedBranchResponseBodyResultTestSettingCodingGuidelinesDetection : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<bool> enabled{};

  CreateRepositoryProtectedBranchResponseBodyResultTestSettingCodingGuidelinesDetection() {}

  explicit CreateRepositoryProtectedBranchResponseBodyResultTestSettingCodingGuidelinesDetection(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
  }


  virtual ~CreateRepositoryProtectedBranchResponseBodyResultTestSettingCodingGuidelinesDetection() = default;
};
class CreateRepositoryProtectedBranchResponseBodyResultTestSettingSensitiveInfoDetection : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<bool> enabled{};

  CreateRepositoryProtectedBranchResponseBodyResultTestSettingSensitiveInfoDetection() {}

  explicit CreateRepositoryProtectedBranchResponseBodyResultTestSettingSensitiveInfoDetection(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
  }


  virtual ~CreateRepositoryProtectedBranchResponseBodyResultTestSettingSensitiveInfoDetection() = default;
};
class CreateRepositoryProtectedBranchResponseBodyResultTestSettingCheckConfigCheckItems : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<bool> required{};

  CreateRepositoryProtectedBranchResponseBodyResultTestSettingCheckConfigCheckItems() {}

  explicit CreateRepositoryProtectedBranchResponseBodyResultTestSettingCheckConfigCheckItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["Required"]));
    }
  }


  virtual ~CreateRepositoryProtectedBranchResponseBodyResultTestSettingCheckConfigCheckItems() = default;
};
class CreateRepositoryProtectedBranchResponseBodyResultTestSettingCheckConfig : public Darabonba::Model {
public:
  shared_ptr<vector<CreateRepositoryProtectedBranchResponseBodyResultTestSettingCheckConfigCheckItems>> checkItems{};

  CreateRepositoryProtectedBranchResponseBodyResultTestSettingCheckConfig() {}

  explicit CreateRepositoryProtectedBranchResponseBodyResultTestSettingCheckConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkItems) {
      vector<boost::any> temp1;
      for(auto item1:*checkItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CheckItems"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckItems") != m.end() && !m["CheckItems"].empty()) {
      if (typeid(vector<boost::any>) == m["CheckItems"].type()) {
        vector<CreateRepositoryProtectedBranchResponseBodyResultTestSettingCheckConfigCheckItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CheckItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateRepositoryProtectedBranchResponseBodyResultTestSettingCheckConfigCheckItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        checkItems = make_shared<vector<CreateRepositoryProtectedBranchResponseBodyResultTestSettingCheckConfigCheckItems>>(expect1);
      }
    }
  }


  virtual ~CreateRepositoryProtectedBranchResponseBodyResultTestSettingCheckConfig() = default;
};
class CreateRepositoryProtectedBranchResponseBodyResultTestSetting : public Darabonba::Model {
public:
  shared_ptr<bool> required{};
  shared_ptr<CreateRepositoryProtectedBranchResponseBodyResultTestSettingCodingGuidelinesDetection> codingGuidelinesDetection{};
  shared_ptr<CreateRepositoryProtectedBranchResponseBodyResultTestSettingSensitiveInfoDetection> sensitiveInfoDetection{};
  shared_ptr<CreateRepositoryProtectedBranchResponseBodyResultTestSettingCheckConfig> checkConfig{};

  CreateRepositoryProtectedBranchResponseBodyResultTestSetting() {}

  explicit CreateRepositoryProtectedBranchResponseBodyResultTestSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (required) {
      res["Required"] = boost::any(*required);
    }
    if (codingGuidelinesDetection) {
      res["CodingGuidelinesDetection"] = codingGuidelinesDetection ? boost::any(codingGuidelinesDetection->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sensitiveInfoDetection) {
      res["SensitiveInfoDetection"] = sensitiveInfoDetection ? boost::any(sensitiveInfoDetection->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (checkConfig) {
      res["CheckConfig"] = checkConfig ? boost::any(checkConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["Required"]));
    }
    if (m.find("CodingGuidelinesDetection") != m.end() && !m["CodingGuidelinesDetection"].empty()) {
      if (typeid(map<string, boost::any>) == m["CodingGuidelinesDetection"].type()) {
        CreateRepositoryProtectedBranchResponseBodyResultTestSettingCodingGuidelinesDetection model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CodingGuidelinesDetection"]));
        codingGuidelinesDetection = make_shared<CreateRepositoryProtectedBranchResponseBodyResultTestSettingCodingGuidelinesDetection>(model1);
      }
    }
    if (m.find("SensitiveInfoDetection") != m.end() && !m["SensitiveInfoDetection"].empty()) {
      if (typeid(map<string, boost::any>) == m["SensitiveInfoDetection"].type()) {
        CreateRepositoryProtectedBranchResponseBodyResultTestSettingSensitiveInfoDetection model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SensitiveInfoDetection"]));
        sensitiveInfoDetection = make_shared<CreateRepositoryProtectedBranchResponseBodyResultTestSettingSensitiveInfoDetection>(model1);
      }
    }
    if (m.find("CheckConfig") != m.end() && !m["CheckConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CheckConfig"].type()) {
        CreateRepositoryProtectedBranchResponseBodyResultTestSettingCheckConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CheckConfig"]));
        checkConfig = make_shared<CreateRepositoryProtectedBranchResponseBodyResultTestSettingCheckConfig>(model1);
      }
    }
  }


  virtual ~CreateRepositoryProtectedBranchResponseBodyResultTestSetting() = default;
};
class CreateRepositoryProtectedBranchResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> branch{};
  shared_ptr<long> id{};
  shared_ptr<vector<long>> allowPushRoles{};
  shared_ptr<vector<long>> allowMergeRoles{};
  shared_ptr<CreateRepositoryProtectedBranchResponseBodyResultMergeRequestSetting> mergeRequestSetting{};
  shared_ptr<CreateRepositoryProtectedBranchResponseBodyResultTestSetting> testSetting{};

  CreateRepositoryProtectedBranchResponseBodyResult() {}

  explicit CreateRepositoryProtectedBranchResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (branch) {
      res["Branch"] = boost::any(*branch);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (allowPushRoles) {
      res["AllowPushRoles"] = boost::any(*allowPushRoles);
    }
    if (allowMergeRoles) {
      res["AllowMergeRoles"] = boost::any(*allowMergeRoles);
    }
    if (mergeRequestSetting) {
      res["MergeRequestSetting"] = mergeRequestSetting ? boost::any(mergeRequestSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (testSetting) {
      res["TestSetting"] = testSetting ? boost::any(testSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Branch") != m.end() && !m["Branch"].empty()) {
      branch = make_shared<string>(boost::any_cast<string>(m["Branch"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("AllowPushRoles") != m.end() && !m["AllowPushRoles"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AllowPushRoles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AllowPushRoles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      allowPushRoles = make_shared<vector<long>>(toVec1);
    }
    if (m.find("AllowMergeRoles") != m.end() && !m["AllowMergeRoles"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AllowMergeRoles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AllowMergeRoles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      allowMergeRoles = make_shared<vector<long>>(toVec1);
    }
    if (m.find("MergeRequestSetting") != m.end() && !m["MergeRequestSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["MergeRequestSetting"].type()) {
        CreateRepositoryProtectedBranchResponseBodyResultMergeRequestSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MergeRequestSetting"]));
        mergeRequestSetting = make_shared<CreateRepositoryProtectedBranchResponseBodyResultMergeRequestSetting>(model1);
      }
    }
    if (m.find("TestSetting") != m.end() && !m["TestSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["TestSetting"].type()) {
        CreateRepositoryProtectedBranchResponseBodyResultTestSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TestSetting"]));
        testSetting = make_shared<CreateRepositoryProtectedBranchResponseBodyResultTestSetting>(model1);
      }
    }
  }


  virtual ~CreateRepositoryProtectedBranchResponseBodyResult() = default;
};
class CreateRepositoryProtectedBranchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<CreateRepositoryProtectedBranchResponseBodyResult> result{};

  CreateRepositoryProtectedBranchResponseBody() {}

  explicit CreateRepositoryProtectedBranchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateRepositoryProtectedBranchResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateRepositoryProtectedBranchResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateRepositoryProtectedBranchResponseBody() = default;
};
class CreateRepositoryProtectedBranchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateRepositoryProtectedBranchResponseBody> body{};

  CreateRepositoryProtectedBranchResponse() {}

  explicit CreateRepositoryProtectedBranchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRepositoryProtectedBranchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRepositoryProtectedBranchResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRepositoryProtectedBranchResponse() = default;
};
class CreateMergeRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> subUserId{};

  CreateMergeRequestRequest() {}

  explicit CreateMergeRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~CreateMergeRequestRequest() = default;
};
class CreateMergeRequestResponseBodyResultAssigneeList : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> name{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> id{};

  CreateMergeRequestResponseBodyResultAssigneeList() {}

  explicit CreateMergeRequestResponseBodyResultAssigneeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~CreateMergeRequestResponseBodyResultAssigneeList() = default;
};
class CreateMergeRequestResponseBodyResultAuthor : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> name{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<long> id{};

  CreateMergeRequestResponseBodyResultAuthor() {}

  explicit CreateMergeRequestResponseBodyResultAuthor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~CreateMergeRequestResponseBodyResultAuthor() = default;
};
class CreateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> name{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<long> id{};

  CreateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers() {}

  explicit CreateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~CreateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers() = default;
};
class CreateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<string> checkType{};
  shared_ptr<string> checkName{};
  shared_ptr<vector<CreateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers>> extraUsers{};
  shared_ptr<vector<string>> unsatisfiedItems{};
  shared_ptr<vector<string>> satisfiedItems{};

  CreateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults() {}

  explicit CreateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (checkType) {
      res["CheckType"] = boost::any(*checkType);
    }
    if (checkName) {
      res["CheckName"] = boost::any(*checkName);
    }
    if (extraUsers) {
      vector<boost::any> temp1;
      for(auto item1:*extraUsers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ExtraUsers"] = boost::any(temp1);
    }
    if (unsatisfiedItems) {
      res["UnsatisfiedItems"] = boost::any(*unsatisfiedItems);
    }
    if (satisfiedItems) {
      res["SatisfiedItems"] = boost::any(*satisfiedItems);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CheckType") != m.end() && !m["CheckType"].empty()) {
      checkType = make_shared<string>(boost::any_cast<string>(m["CheckType"]));
    }
    if (m.find("CheckName") != m.end() && !m["CheckName"].empty()) {
      checkName = make_shared<string>(boost::any_cast<string>(m["CheckName"]));
    }
    if (m.find("ExtraUsers") != m.end() && !m["ExtraUsers"].empty()) {
      if (typeid(vector<boost::any>) == m["ExtraUsers"].type()) {
        vector<CreateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ExtraUsers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        extraUsers = make_shared<vector<CreateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers>>(expect1);
      }
    }
    if (m.find("UnsatisfiedItems") != m.end() && !m["UnsatisfiedItems"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsatisfiedItems"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsatisfiedItems"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsatisfiedItems = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SatisfiedItems") != m.end() && !m["SatisfiedItems"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SatisfiedItems"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SatisfiedItems"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      satisfiedItems = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults() = default;
};
class CreateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> name{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<long> id{};

  CreateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers() {}

  explicit CreateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~CreateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers() = default;
};
class CreateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<string> checkType{};
  shared_ptr<string> checkName{};
  shared_ptr<vector<CreateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers>> extraUsers{};
  shared_ptr<vector<string>> unsatisfiedItems{};
  shared_ptr<vector<string>> satisfiedItems{};

  CreateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults() {}

  explicit CreateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (checkType) {
      res["CheckType"] = boost::any(*checkType);
    }
    if (checkName) {
      res["CheckName"] = boost::any(*checkName);
    }
    if (extraUsers) {
      vector<boost::any> temp1;
      for(auto item1:*extraUsers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ExtraUsers"] = boost::any(temp1);
    }
    if (unsatisfiedItems) {
      res["UnsatisfiedItems"] = boost::any(*unsatisfiedItems);
    }
    if (satisfiedItems) {
      res["SatisfiedItems"] = boost::any(*satisfiedItems);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CheckType") != m.end() && !m["CheckType"].empty()) {
      checkType = make_shared<string>(boost::any_cast<string>(m["CheckType"]));
    }
    if (m.find("CheckName") != m.end() && !m["CheckName"].empty()) {
      checkName = make_shared<string>(boost::any_cast<string>(m["CheckName"]));
    }
    if (m.find("ExtraUsers") != m.end() && !m["ExtraUsers"].empty()) {
      if (typeid(vector<boost::any>) == m["ExtraUsers"].type()) {
        vector<CreateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ExtraUsers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        extraUsers = make_shared<vector<CreateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers>>(expect1);
      }
    }
    if (m.find("UnsatisfiedItems") != m.end() && !m["UnsatisfiedItems"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsatisfiedItems"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsatisfiedItems"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsatisfiedItems = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SatisfiedItems") != m.end() && !m["SatisfiedItems"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SatisfiedItems"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SatisfiedItems"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      satisfiedItems = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults() = default;
};
class CreateMergeRequestResponseBodyResultApproveCheckResult : public Darabonba::Model {
public:
  shared_ptr<string> totalCheckResult{};
  shared_ptr<vector<CreateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults>> satisfiedCheckResults{};
  shared_ptr<vector<CreateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults>> unsatisfiedCheckResults{};

  CreateMergeRequestResponseBodyResultApproveCheckResult() {}

  explicit CreateMergeRequestResponseBodyResultApproveCheckResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCheckResult) {
      res["TotalCheckResult"] = boost::any(*totalCheckResult);
    }
    if (satisfiedCheckResults) {
      vector<boost::any> temp1;
      for(auto item1:*satisfiedCheckResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SatisfiedCheckResults"] = boost::any(temp1);
    }
    if (unsatisfiedCheckResults) {
      vector<boost::any> temp1;
      for(auto item1:*unsatisfiedCheckResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UnsatisfiedCheckResults"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCheckResult") != m.end() && !m["TotalCheckResult"].empty()) {
      totalCheckResult = make_shared<string>(boost::any_cast<string>(m["TotalCheckResult"]));
    }
    if (m.find("SatisfiedCheckResults") != m.end() && !m["SatisfiedCheckResults"].empty()) {
      if (typeid(vector<boost::any>) == m["SatisfiedCheckResults"].type()) {
        vector<CreateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SatisfiedCheckResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        satisfiedCheckResults = make_shared<vector<CreateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults>>(expect1);
      }
    }
    if (m.find("UnsatisfiedCheckResults") != m.end() && !m["UnsatisfiedCheckResults"].empty()) {
      if (typeid(vector<boost::any>) == m["UnsatisfiedCheckResults"].type()) {
        vector<CreateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UnsatisfiedCheckResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        unsatisfiedCheckResults = make_shared<vector<CreateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults>>(expect1);
      }
    }
  }


  virtual ~CreateMergeRequestResponseBodyResultApproveCheckResult() = default;
};
class CreateMergeRequestResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> behindCommitCount{};
  shared_ptr<string> state{};
  shared_ptr<long> projectId{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> acceptedRevision{};
  shared_ptr<string> sourceBranch{};
  shared_ptr<string> webUrl{};
  shared_ptr<string> description{};
  shared_ptr<string> mergeType{};
  shared_ptr<string> nameWithNamespace{};
  shared_ptr<string> targetBranch{};
  shared_ptr<long> aheadCommitCount{};
  shared_ptr<string> updatedAt{};
  shared_ptr<string> title{};
  shared_ptr<string> mergeError{};
  shared_ptr<string> mergedRevision{};
  shared_ptr<long> id{};
  shared_ptr<string> mergeStatus{};
  shared_ptr<vector<CreateMergeRequestResponseBodyResultAssigneeList>> assigneeList{};
  shared_ptr<CreateMergeRequestResponseBodyResultAuthor> author{};
  shared_ptr<CreateMergeRequestResponseBodyResultApproveCheckResult> approveCheckResult{};

  CreateMergeRequestResponseBodyResult() {}

  explicit CreateMergeRequestResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (behindCommitCount) {
      res["BehindCommitCount"] = boost::any(*behindCommitCount);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (acceptedRevision) {
      res["AcceptedRevision"] = boost::any(*acceptedRevision);
    }
    if (sourceBranch) {
      res["SourceBranch"] = boost::any(*sourceBranch);
    }
    if (webUrl) {
      res["WebUrl"] = boost::any(*webUrl);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (mergeType) {
      res["MergeType"] = boost::any(*mergeType);
    }
    if (nameWithNamespace) {
      res["NameWithNamespace"] = boost::any(*nameWithNamespace);
    }
    if (targetBranch) {
      res["TargetBranch"] = boost::any(*targetBranch);
    }
    if (aheadCommitCount) {
      res["AheadCommitCount"] = boost::any(*aheadCommitCount);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (mergeError) {
      res["MergeError"] = boost::any(*mergeError);
    }
    if (mergedRevision) {
      res["MergedRevision"] = boost::any(*mergedRevision);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (mergeStatus) {
      res["MergeStatus"] = boost::any(*mergeStatus);
    }
    if (assigneeList) {
      vector<boost::any> temp1;
      for(auto item1:*assigneeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AssigneeList"] = boost::any(temp1);
    }
    if (author) {
      res["Author"] = author ? boost::any(author->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (approveCheckResult) {
      res["ApproveCheckResult"] = approveCheckResult ? boost::any(approveCheckResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BehindCommitCount") != m.end() && !m["BehindCommitCount"].empty()) {
      behindCommitCount = make_shared<long>(boost::any_cast<long>(m["BehindCommitCount"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("AcceptedRevision") != m.end() && !m["AcceptedRevision"].empty()) {
      acceptedRevision = make_shared<string>(boost::any_cast<string>(m["AcceptedRevision"]));
    }
    if (m.find("SourceBranch") != m.end() && !m["SourceBranch"].empty()) {
      sourceBranch = make_shared<string>(boost::any_cast<string>(m["SourceBranch"]));
    }
    if (m.find("WebUrl") != m.end() && !m["WebUrl"].empty()) {
      webUrl = make_shared<string>(boost::any_cast<string>(m["WebUrl"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("MergeType") != m.end() && !m["MergeType"].empty()) {
      mergeType = make_shared<string>(boost::any_cast<string>(m["MergeType"]));
    }
    if (m.find("NameWithNamespace") != m.end() && !m["NameWithNamespace"].empty()) {
      nameWithNamespace = make_shared<string>(boost::any_cast<string>(m["NameWithNamespace"]));
    }
    if (m.find("TargetBranch") != m.end() && !m["TargetBranch"].empty()) {
      targetBranch = make_shared<string>(boost::any_cast<string>(m["TargetBranch"]));
    }
    if (m.find("AheadCommitCount") != m.end() && !m["AheadCommitCount"].empty()) {
      aheadCommitCount = make_shared<long>(boost::any_cast<long>(m["AheadCommitCount"]));
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["UpdatedAt"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("MergeError") != m.end() && !m["MergeError"].empty()) {
      mergeError = make_shared<string>(boost::any_cast<string>(m["MergeError"]));
    }
    if (m.find("MergedRevision") != m.end() && !m["MergedRevision"].empty()) {
      mergedRevision = make_shared<string>(boost::any_cast<string>(m["MergedRevision"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("MergeStatus") != m.end() && !m["MergeStatus"].empty()) {
      mergeStatus = make_shared<string>(boost::any_cast<string>(m["MergeStatus"]));
    }
    if (m.find("AssigneeList") != m.end() && !m["AssigneeList"].empty()) {
      if (typeid(vector<boost::any>) == m["AssigneeList"].type()) {
        vector<CreateMergeRequestResponseBodyResultAssigneeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AssigneeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateMergeRequestResponseBodyResultAssigneeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        assigneeList = make_shared<vector<CreateMergeRequestResponseBodyResultAssigneeList>>(expect1);
      }
    }
    if (m.find("Author") != m.end() && !m["Author"].empty()) {
      if (typeid(map<string, boost::any>) == m["Author"].type()) {
        CreateMergeRequestResponseBodyResultAuthor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Author"]));
        author = make_shared<CreateMergeRequestResponseBodyResultAuthor>(model1);
      }
    }
    if (m.find("ApproveCheckResult") != m.end() && !m["ApproveCheckResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApproveCheckResult"].type()) {
        CreateMergeRequestResponseBodyResultApproveCheckResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApproveCheckResult"]));
        approveCheckResult = make_shared<CreateMergeRequestResponseBodyResultApproveCheckResult>(model1);
      }
    }
  }


  virtual ~CreateMergeRequestResponseBodyResult() = default;
};
class CreateMergeRequestResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<CreateMergeRequestResponseBodyResult> result{};

  CreateMergeRequestResponseBody() {}

  explicit CreateMergeRequestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateMergeRequestResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateMergeRequestResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateMergeRequestResponseBody() = default;
};
class CreateMergeRequestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateMergeRequestResponseBody> body{};

  CreateMergeRequestResponse() {}

  explicit CreateMergeRequestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateMergeRequestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMergeRequestResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMergeRequestResponse() = default;
};
class DeleteRepositoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> subUserId{};

  DeleteRepositoryRequest() {}

  explicit DeleteRepositoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~DeleteRepositoryRequest() = default;
};
class DeleteRepositoryResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> result{};

  DeleteRepositoryResponseBodyResult() {}

  explicit DeleteRepositoryResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~DeleteRepositoryResponseBodyResult() = default;
};
class DeleteRepositoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<DeleteRepositoryResponseBodyResult> result{};

  DeleteRepositoryResponseBody() {}

  explicit DeleteRepositoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        DeleteRepositoryResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DeleteRepositoryResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DeleteRepositoryResponseBody() = default;
};
class DeleteRepositoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteRepositoryResponseBody> body{};

  DeleteRepositoryResponse() {}

  explicit DeleteRepositoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRepositoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRepositoryResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRepositoryResponse() = default;
};
class GetRepositoryTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};

  GetRepositoryTagRequest() {}

  explicit GetRepositoryTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetRepositoryTagRequest() = default;
};
class GetRepositoryTagResponseBodyResultCommitSignature : public Darabonba::Model {
public:
  shared_ptr<string> verificationStatus{};
  shared_ptr<string> gpgKeyId{};

  GetRepositoryTagResponseBodyResultCommitSignature() {}

  explicit GetRepositoryTagResponseBodyResultCommitSignature(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (verificationStatus) {
      res["VerificationStatus"] = boost::any(*verificationStatus);
    }
    if (gpgKeyId) {
      res["GpgKeyId"] = boost::any(*gpgKeyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VerificationStatus") != m.end() && !m["VerificationStatus"].empty()) {
      verificationStatus = make_shared<string>(boost::any_cast<string>(m["VerificationStatus"]));
    }
    if (m.find("GpgKeyId") != m.end() && !m["GpgKeyId"].empty()) {
      gpgKeyId = make_shared<string>(boost::any_cast<string>(m["GpgKeyId"]));
    }
  }


  virtual ~GetRepositoryTagResponseBodyResultCommitSignature() = default;
};
class GetRepositoryTagResponseBodyResultCommit : public Darabonba::Model {
public:
  shared_ptr<string> shortId{};
  shared_ptr<string> authorName{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> message{};
  shared_ptr<string> authoredDate{};
  shared_ptr<string> committerName{};
  shared_ptr<string> title{};
  shared_ptr<string> authorEmail{};
  shared_ptr<string> committerEmail{};
  shared_ptr<string> id{};
  shared_ptr<string> committedDate{};
  shared_ptr<vector<string>> parentIds{};
  shared_ptr<GetRepositoryTagResponseBodyResultCommitSignature> signature{};

  GetRepositoryTagResponseBodyResultCommit() {}

  explicit GetRepositoryTagResponseBodyResultCommit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shortId) {
      res["ShortId"] = boost::any(*shortId);
    }
    if (authorName) {
      res["AuthorName"] = boost::any(*authorName);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (authoredDate) {
      res["AuthoredDate"] = boost::any(*authoredDate);
    }
    if (committerName) {
      res["CommitterName"] = boost::any(*committerName);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (authorEmail) {
      res["AuthorEmail"] = boost::any(*authorEmail);
    }
    if (committerEmail) {
      res["CommitterEmail"] = boost::any(*committerEmail);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (committedDate) {
      res["CommittedDate"] = boost::any(*committedDate);
    }
    if (parentIds) {
      res["ParentIds"] = boost::any(*parentIds);
    }
    if (signature) {
      res["Signature"] = signature ? boost::any(signature->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ShortId") != m.end() && !m["ShortId"].empty()) {
      shortId = make_shared<string>(boost::any_cast<string>(m["ShortId"]));
    }
    if (m.find("AuthorName") != m.end() && !m["AuthorName"].empty()) {
      authorName = make_shared<string>(boost::any_cast<string>(m["AuthorName"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("AuthoredDate") != m.end() && !m["AuthoredDate"].empty()) {
      authoredDate = make_shared<string>(boost::any_cast<string>(m["AuthoredDate"]));
    }
    if (m.find("CommitterName") != m.end() && !m["CommitterName"].empty()) {
      committerName = make_shared<string>(boost::any_cast<string>(m["CommitterName"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("AuthorEmail") != m.end() && !m["AuthorEmail"].empty()) {
      authorEmail = make_shared<string>(boost::any_cast<string>(m["AuthorEmail"]));
    }
    if (m.find("CommitterEmail") != m.end() && !m["CommitterEmail"].empty()) {
      committerEmail = make_shared<string>(boost::any_cast<string>(m["CommitterEmail"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("CommittedDate") != m.end() && !m["CommittedDate"].empty()) {
      committedDate = make_shared<string>(boost::any_cast<string>(m["CommittedDate"]));
    }
    if (m.find("ParentIds") != m.end() && !m["ParentIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ParentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ParentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      parentIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      if (typeid(map<string, boost::any>) == m["Signature"].type()) {
        GetRepositoryTagResponseBodyResultCommitSignature model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Signature"]));
        signature = make_shared<GetRepositoryTagResponseBodyResultCommitSignature>(model1);
      }
    }
  }


  virtual ~GetRepositoryTagResponseBodyResultCommit() = default;
};
class GetRepositoryTagResponseBodyResultSignature : public Darabonba::Model {
public:
  shared_ptr<string> verificationStatus{};
  shared_ptr<string> gpgKeyId{};

  GetRepositoryTagResponseBodyResultSignature() {}

  explicit GetRepositoryTagResponseBodyResultSignature(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (verificationStatus) {
      res["VerificationStatus"] = boost::any(*verificationStatus);
    }
    if (gpgKeyId) {
      res["GpgKeyId"] = boost::any(*gpgKeyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VerificationStatus") != m.end() && !m["VerificationStatus"].empty()) {
      verificationStatus = make_shared<string>(boost::any_cast<string>(m["VerificationStatus"]));
    }
    if (m.find("GpgKeyId") != m.end() && !m["GpgKeyId"].empty()) {
      gpgKeyId = make_shared<string>(boost::any_cast<string>(m["GpgKeyId"]));
    }
  }


  virtual ~GetRepositoryTagResponseBodyResultSignature() = default;
};
class GetRepositoryTagResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<string> id{};
  shared_ptr<GetRepositoryTagResponseBodyResultCommit> commit{};
  shared_ptr<GetRepositoryTagResponseBodyResultSignature> signature{};

  GetRepositoryTagResponseBodyResult() {}

  explicit GetRepositoryTagResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (commit) {
      res["Commit"] = commit ? boost::any(commit->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (signature) {
      res["Signature"] = signature ? boost::any(signature->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Commit") != m.end() && !m["Commit"].empty()) {
      if (typeid(map<string, boost::any>) == m["Commit"].type()) {
        GetRepositoryTagResponseBodyResultCommit model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Commit"]));
        commit = make_shared<GetRepositoryTagResponseBodyResultCommit>(model1);
      }
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      if (typeid(map<string, boost::any>) == m["Signature"].type()) {
        GetRepositoryTagResponseBodyResultSignature model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Signature"]));
        signature = make_shared<GetRepositoryTagResponseBodyResultSignature>(model1);
      }
    }
  }


  virtual ~GetRepositoryTagResponseBodyResult() = default;
};
class GetRepositoryTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<GetRepositoryTagResponseBodyResult> result{};

  GetRepositoryTagResponseBody() {}

  explicit GetRepositoryTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetRepositoryTagResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetRepositoryTagResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetRepositoryTagResponseBody() = default;
};
class GetRepositoryTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRepositoryTagResponseBody> body{};

  GetRepositoryTagResponse() {}

  explicit GetRepositoryTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRepositoryTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRepositoryTagResponseBody>(model1);
      }
    }
  }


  virtual ~GetRepositoryTagResponse() = default;
};
class UpdateMergeRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};

  UpdateMergeRequestRequest() {}

  explicit UpdateMergeRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~UpdateMergeRequestRequest() = default;
};
class UpdateMergeRequestResponseBodyResultAssigneeList : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> name{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> id{};

  UpdateMergeRequestResponseBodyResultAssigneeList() {}

  explicit UpdateMergeRequestResponseBodyResultAssigneeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~UpdateMergeRequestResponseBodyResultAssigneeList() = default;
};
class UpdateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> name{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<long> id{};

  UpdateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers() {}

  explicit UpdateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~UpdateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers() = default;
};
class UpdateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<string> checkType{};
  shared_ptr<string> checkName{};
  shared_ptr<vector<UpdateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers>> extraUsers{};
  shared_ptr<vector<string>> unsatisfiedItems{};
  shared_ptr<vector<string>> satisfiedItems{};

  UpdateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults() {}

  explicit UpdateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (checkType) {
      res["CheckType"] = boost::any(*checkType);
    }
    if (checkName) {
      res["CheckName"] = boost::any(*checkName);
    }
    if (extraUsers) {
      vector<boost::any> temp1;
      for(auto item1:*extraUsers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ExtraUsers"] = boost::any(temp1);
    }
    if (unsatisfiedItems) {
      res["UnsatisfiedItems"] = boost::any(*unsatisfiedItems);
    }
    if (satisfiedItems) {
      res["SatisfiedItems"] = boost::any(*satisfiedItems);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CheckType") != m.end() && !m["CheckType"].empty()) {
      checkType = make_shared<string>(boost::any_cast<string>(m["CheckType"]));
    }
    if (m.find("CheckName") != m.end() && !m["CheckName"].empty()) {
      checkName = make_shared<string>(boost::any_cast<string>(m["CheckName"]));
    }
    if (m.find("ExtraUsers") != m.end() && !m["ExtraUsers"].empty()) {
      if (typeid(vector<boost::any>) == m["ExtraUsers"].type()) {
        vector<UpdateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ExtraUsers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        extraUsers = make_shared<vector<UpdateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers>>(expect1);
      }
    }
    if (m.find("UnsatisfiedItems") != m.end() && !m["UnsatisfiedItems"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsatisfiedItems"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsatisfiedItems"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsatisfiedItems = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SatisfiedItems") != m.end() && !m["SatisfiedItems"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SatisfiedItems"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SatisfiedItems"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      satisfiedItems = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults() = default;
};
class UpdateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> name{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<long> id{};

  UpdateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers() {}

  explicit UpdateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~UpdateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers() = default;
};
class UpdateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<string> checkType{};
  shared_ptr<string> checkName{};
  shared_ptr<vector<UpdateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers>> extraUsers{};
  shared_ptr<vector<string>> unsatisfiedItems{};
  shared_ptr<vector<string>> satisfiedItems{};

  UpdateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults() {}

  explicit UpdateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (checkType) {
      res["CheckType"] = boost::any(*checkType);
    }
    if (checkName) {
      res["CheckName"] = boost::any(*checkName);
    }
    if (extraUsers) {
      vector<boost::any> temp1;
      for(auto item1:*extraUsers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ExtraUsers"] = boost::any(temp1);
    }
    if (unsatisfiedItems) {
      res["UnsatisfiedItems"] = boost::any(*unsatisfiedItems);
    }
    if (satisfiedItems) {
      res["SatisfiedItems"] = boost::any(*satisfiedItems);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CheckType") != m.end() && !m["CheckType"].empty()) {
      checkType = make_shared<string>(boost::any_cast<string>(m["CheckType"]));
    }
    if (m.find("CheckName") != m.end() && !m["CheckName"].empty()) {
      checkName = make_shared<string>(boost::any_cast<string>(m["CheckName"]));
    }
    if (m.find("ExtraUsers") != m.end() && !m["ExtraUsers"].empty()) {
      if (typeid(vector<boost::any>) == m["ExtraUsers"].type()) {
        vector<UpdateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ExtraUsers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        extraUsers = make_shared<vector<UpdateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers>>(expect1);
      }
    }
    if (m.find("UnsatisfiedItems") != m.end() && !m["UnsatisfiedItems"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsatisfiedItems"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsatisfiedItems"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsatisfiedItems = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SatisfiedItems") != m.end() && !m["SatisfiedItems"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SatisfiedItems"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SatisfiedItems"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      satisfiedItems = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults() = default;
};
class UpdateMergeRequestResponseBodyResultApproveCheckResult : public Darabonba::Model {
public:
  shared_ptr<string> totalCheckResult{};
  shared_ptr<vector<UpdateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults>> satisfiedCheckResults{};
  shared_ptr<vector<UpdateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults>> unsatisfiedCheckResults{};

  UpdateMergeRequestResponseBodyResultApproveCheckResult() {}

  explicit UpdateMergeRequestResponseBodyResultApproveCheckResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCheckResult) {
      res["TotalCheckResult"] = boost::any(*totalCheckResult);
    }
    if (satisfiedCheckResults) {
      vector<boost::any> temp1;
      for(auto item1:*satisfiedCheckResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SatisfiedCheckResults"] = boost::any(temp1);
    }
    if (unsatisfiedCheckResults) {
      vector<boost::any> temp1;
      for(auto item1:*unsatisfiedCheckResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UnsatisfiedCheckResults"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCheckResult") != m.end() && !m["TotalCheckResult"].empty()) {
      totalCheckResult = make_shared<string>(boost::any_cast<string>(m["TotalCheckResult"]));
    }
    if (m.find("SatisfiedCheckResults") != m.end() && !m["SatisfiedCheckResults"].empty()) {
      if (typeid(vector<boost::any>) == m["SatisfiedCheckResults"].type()) {
        vector<UpdateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SatisfiedCheckResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        satisfiedCheckResults = make_shared<vector<UpdateMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults>>(expect1);
      }
    }
    if (m.find("UnsatisfiedCheckResults") != m.end() && !m["UnsatisfiedCheckResults"].empty()) {
      if (typeid(vector<boost::any>) == m["UnsatisfiedCheckResults"].type()) {
        vector<UpdateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UnsatisfiedCheckResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        unsatisfiedCheckResults = make_shared<vector<UpdateMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults>>(expect1);
      }
    }
  }


  virtual ~UpdateMergeRequestResponseBodyResultApproveCheckResult() = default;
};
class UpdateMergeRequestResponseBodyResultAuthor : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> name{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<long> id{};

  UpdateMergeRequestResponseBodyResultAuthor() {}

  explicit UpdateMergeRequestResponseBodyResultAuthor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~UpdateMergeRequestResponseBodyResultAuthor() = default;
};
class UpdateMergeRequestResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> state{};
  shared_ptr<long> behindCommitCount{};
  shared_ptr<long> projectId{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> acceptedRevision{};
  shared_ptr<string> sourceBranch{};
  shared_ptr<string> webUrl{};
  shared_ptr<string> description{};
  shared_ptr<string> nameWithNamespace{};
  shared_ptr<string> mergeType{};
  shared_ptr<string> targetBranch{};
  shared_ptr<long> aheadCommitCount{};
  shared_ptr<string> updatedAt{};
  shared_ptr<string> title{};
  shared_ptr<string> mergeError{};
  shared_ptr<string> mergedRevision{};
  shared_ptr<long> id{};
  shared_ptr<string> mergeStatus{};
  shared_ptr<vector<UpdateMergeRequestResponseBodyResultAssigneeList>> assigneeList{};
  shared_ptr<UpdateMergeRequestResponseBodyResultApproveCheckResult> approveCheckResult{};
  shared_ptr<UpdateMergeRequestResponseBodyResultAuthor> author{};

  UpdateMergeRequestResponseBodyResult() {}

  explicit UpdateMergeRequestResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (behindCommitCount) {
      res["BehindCommitCount"] = boost::any(*behindCommitCount);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (acceptedRevision) {
      res["AcceptedRevision"] = boost::any(*acceptedRevision);
    }
    if (sourceBranch) {
      res["SourceBranch"] = boost::any(*sourceBranch);
    }
    if (webUrl) {
      res["WebUrl"] = boost::any(*webUrl);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (nameWithNamespace) {
      res["NameWithNamespace"] = boost::any(*nameWithNamespace);
    }
    if (mergeType) {
      res["MergeType"] = boost::any(*mergeType);
    }
    if (targetBranch) {
      res["TargetBranch"] = boost::any(*targetBranch);
    }
    if (aheadCommitCount) {
      res["AheadCommitCount"] = boost::any(*aheadCommitCount);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (mergeError) {
      res["MergeError"] = boost::any(*mergeError);
    }
    if (mergedRevision) {
      res["MergedRevision"] = boost::any(*mergedRevision);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (mergeStatus) {
      res["MergeStatus"] = boost::any(*mergeStatus);
    }
    if (assigneeList) {
      vector<boost::any> temp1;
      for(auto item1:*assigneeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AssigneeList"] = boost::any(temp1);
    }
    if (approveCheckResult) {
      res["ApproveCheckResult"] = approveCheckResult ? boost::any(approveCheckResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (author) {
      res["Author"] = author ? boost::any(author->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("BehindCommitCount") != m.end() && !m["BehindCommitCount"].empty()) {
      behindCommitCount = make_shared<long>(boost::any_cast<long>(m["BehindCommitCount"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("AcceptedRevision") != m.end() && !m["AcceptedRevision"].empty()) {
      acceptedRevision = make_shared<string>(boost::any_cast<string>(m["AcceptedRevision"]));
    }
    if (m.find("SourceBranch") != m.end() && !m["SourceBranch"].empty()) {
      sourceBranch = make_shared<string>(boost::any_cast<string>(m["SourceBranch"]));
    }
    if (m.find("WebUrl") != m.end() && !m["WebUrl"].empty()) {
      webUrl = make_shared<string>(boost::any_cast<string>(m["WebUrl"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("NameWithNamespace") != m.end() && !m["NameWithNamespace"].empty()) {
      nameWithNamespace = make_shared<string>(boost::any_cast<string>(m["NameWithNamespace"]));
    }
    if (m.find("MergeType") != m.end() && !m["MergeType"].empty()) {
      mergeType = make_shared<string>(boost::any_cast<string>(m["MergeType"]));
    }
    if (m.find("TargetBranch") != m.end() && !m["TargetBranch"].empty()) {
      targetBranch = make_shared<string>(boost::any_cast<string>(m["TargetBranch"]));
    }
    if (m.find("AheadCommitCount") != m.end() && !m["AheadCommitCount"].empty()) {
      aheadCommitCount = make_shared<long>(boost::any_cast<long>(m["AheadCommitCount"]));
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["UpdatedAt"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("MergeError") != m.end() && !m["MergeError"].empty()) {
      mergeError = make_shared<string>(boost::any_cast<string>(m["MergeError"]));
    }
    if (m.find("MergedRevision") != m.end() && !m["MergedRevision"].empty()) {
      mergedRevision = make_shared<string>(boost::any_cast<string>(m["MergedRevision"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("MergeStatus") != m.end() && !m["MergeStatus"].empty()) {
      mergeStatus = make_shared<string>(boost::any_cast<string>(m["MergeStatus"]));
    }
    if (m.find("AssigneeList") != m.end() && !m["AssigneeList"].empty()) {
      if (typeid(vector<boost::any>) == m["AssigneeList"].type()) {
        vector<UpdateMergeRequestResponseBodyResultAssigneeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AssigneeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateMergeRequestResponseBodyResultAssigneeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        assigneeList = make_shared<vector<UpdateMergeRequestResponseBodyResultAssigneeList>>(expect1);
      }
    }
    if (m.find("ApproveCheckResult") != m.end() && !m["ApproveCheckResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApproveCheckResult"].type()) {
        UpdateMergeRequestResponseBodyResultApproveCheckResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApproveCheckResult"]));
        approveCheckResult = make_shared<UpdateMergeRequestResponseBodyResultApproveCheckResult>(model1);
      }
    }
    if (m.find("Author") != m.end() && !m["Author"].empty()) {
      if (typeid(map<string, boost::any>) == m["Author"].type()) {
        UpdateMergeRequestResponseBodyResultAuthor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Author"]));
        author = make_shared<UpdateMergeRequestResponseBodyResultAuthor>(model1);
      }
    }
  }


  virtual ~UpdateMergeRequestResponseBodyResult() = default;
};
class UpdateMergeRequestResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<UpdateMergeRequestResponseBodyResult> result{};

  UpdateMergeRequestResponseBody() {}

  explicit UpdateMergeRequestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        UpdateMergeRequestResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<UpdateMergeRequestResponseBodyResult>(model1);
      }
    }
  }


  virtual ~UpdateMergeRequestResponseBody() = default;
};
class UpdateMergeRequestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateMergeRequestResponseBody> body{};

  UpdateMergeRequestResponse() {}

  explicit UpdateMergeRequestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateMergeRequestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateMergeRequestResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateMergeRequestResponse() = default;
};
class UpdateRepositoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};

  UpdateRepositoryRequest() {}

  explicit UpdateRepositoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~UpdateRepositoryRequest() = default;
};
class UpdateRepositoryResponseBodyResultNamespace : public Darabonba::Model {
public:
  shared_ptr<string> avatar{};
  shared_ptr<string> description{};
  shared_ptr<bool> public_{};
  shared_ptr<string> visibilityLevel{};
  shared_ptr<string> path{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> updatedAt{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> id{};

  UpdateRepositoryResponseBodyResultNamespace() {}

  explicit UpdateRepositoryResponseBodyResultNamespace(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avatar) {
      res["Avatar"] = boost::any(*avatar);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (public_) {
      res["Public"] = boost::any(*public_);
    }
    if (visibilityLevel) {
      res["VisibilityLevel"] = boost::any(*visibilityLevel);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Avatar") != m.end() && !m["Avatar"].empty()) {
      avatar = make_shared<string>(boost::any_cast<string>(m["Avatar"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Public") != m.end() && !m["Public"].empty()) {
      public_ = make_shared<bool>(boost::any_cast<bool>(m["Public"]));
    }
    if (m.find("VisibilityLevel") != m.end() && !m["VisibilityLevel"].empty()) {
      visibilityLevel = make_shared<string>(boost::any_cast<string>(m["VisibilityLevel"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["UpdatedAt"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~UpdateRepositoryResponseBodyResultNamespace() = default;
};
class UpdateRepositoryResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> lastActivityAt{};
  shared_ptr<string> defaultBranch{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<bool> archive{};
  shared_ptr<string> createdAt{};
  shared_ptr<long> creatorId{};
  shared_ptr<string> httpUrlToRepo{};
  shared_ptr<string> webUrl{};
  shared_ptr<string> description{};
  shared_ptr<string> nameWithNamespace{};
  shared_ptr<string> pathWithNamespace{};
  shared_ptr<string> visibilityLevel{};
  shared_ptr<string> path{};
  shared_ptr<string> sshUrlToRepo{};
  shared_ptr<string> name{};
  shared_ptr<long> id{};
  shared_ptr<UpdateRepositoryResponseBodyResultNamespace> namespace_{};

  UpdateRepositoryResponseBodyResult() {}

  explicit UpdateRepositoryResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lastActivityAt) {
      res["LastActivityAt"] = boost::any(*lastActivityAt);
    }
    if (defaultBranch) {
      res["DefaultBranch"] = boost::any(*defaultBranch);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (archive) {
      res["Archive"] = boost::any(*archive);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (httpUrlToRepo) {
      res["HttpUrlToRepo"] = boost::any(*httpUrlToRepo);
    }
    if (webUrl) {
      res["WebUrl"] = boost::any(*webUrl);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (nameWithNamespace) {
      res["NameWithNamespace"] = boost::any(*nameWithNamespace);
    }
    if (pathWithNamespace) {
      res["PathWithNamespace"] = boost::any(*pathWithNamespace);
    }
    if (visibilityLevel) {
      res["VisibilityLevel"] = boost::any(*visibilityLevel);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (sshUrlToRepo) {
      res["SshUrlToRepo"] = boost::any(*sshUrlToRepo);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (namespace_) {
      res["Namespace"] = namespace_ ? boost::any(namespace_->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LastActivityAt") != m.end() && !m["LastActivityAt"].empty()) {
      lastActivityAt = make_shared<string>(boost::any_cast<string>(m["LastActivityAt"]));
    }
    if (m.find("DefaultBranch") != m.end() && !m["DefaultBranch"].empty()) {
      defaultBranch = make_shared<string>(boost::any_cast<string>(m["DefaultBranch"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Archive") != m.end() && !m["Archive"].empty()) {
      archive = make_shared<bool>(boost::any_cast<bool>(m["Archive"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<long>(boost::any_cast<long>(m["CreatorId"]));
    }
    if (m.find("HttpUrlToRepo") != m.end() && !m["HttpUrlToRepo"].empty()) {
      httpUrlToRepo = make_shared<string>(boost::any_cast<string>(m["HttpUrlToRepo"]));
    }
    if (m.find("WebUrl") != m.end() && !m["WebUrl"].empty()) {
      webUrl = make_shared<string>(boost::any_cast<string>(m["WebUrl"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("NameWithNamespace") != m.end() && !m["NameWithNamespace"].empty()) {
      nameWithNamespace = make_shared<string>(boost::any_cast<string>(m["NameWithNamespace"]));
    }
    if (m.find("PathWithNamespace") != m.end() && !m["PathWithNamespace"].empty()) {
      pathWithNamespace = make_shared<string>(boost::any_cast<string>(m["PathWithNamespace"]));
    }
    if (m.find("VisibilityLevel") != m.end() && !m["VisibilityLevel"].empty()) {
      visibilityLevel = make_shared<string>(boost::any_cast<string>(m["VisibilityLevel"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("SshUrlToRepo") != m.end() && !m["SshUrlToRepo"].empty()) {
      sshUrlToRepo = make_shared<string>(boost::any_cast<string>(m["SshUrlToRepo"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      if (typeid(map<string, boost::any>) == m["Namespace"].type()) {
        UpdateRepositoryResponseBodyResultNamespace model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Namespace"]));
        namespace_ = make_shared<UpdateRepositoryResponseBodyResultNamespace>(model1);
      }
    }
  }


  virtual ~UpdateRepositoryResponseBodyResult() = default;
};
class UpdateRepositoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<UpdateRepositoryResponseBodyResult> result{};

  UpdateRepositoryResponseBody() {}

  explicit UpdateRepositoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        UpdateRepositoryResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<UpdateRepositoryResponseBodyResult>(model1);
      }
    }
  }


  virtual ~UpdateRepositoryResponseBody() = default;
};
class UpdateRepositoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateRepositoryResponseBody> body{};

  UpdateRepositoryResponse() {}

  explicit UpdateRepositoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateRepositoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRepositoryResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRepositoryResponse() = default;
};
class UpdateMergeRequestCommentRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};

  UpdateMergeRequestCommentRequest() {}

  explicit UpdateMergeRequestCommentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~UpdateMergeRequestCommentRequest() = default;
};
class UpdateMergeRequestCommentResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> result{};

  UpdateMergeRequestCommentResponseBodyResult() {}

  explicit UpdateMergeRequestCommentResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~UpdateMergeRequestCommentResponseBodyResult() = default;
};
class UpdateMergeRequestCommentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<UpdateMergeRequestCommentResponseBodyResult> result{};

  UpdateMergeRequestCommentResponseBody() {}

  explicit UpdateMergeRequestCommentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        UpdateMergeRequestCommentResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<UpdateMergeRequestCommentResponseBodyResult>(model1);
      }
    }
  }


  virtual ~UpdateMergeRequestCommentResponseBody() = default;
};
class UpdateMergeRequestCommentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateMergeRequestCommentResponseBody> body{};

  UpdateMergeRequestCommentResponse() {}

  explicit UpdateMergeRequestCommentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateMergeRequestCommentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateMergeRequestCommentResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateMergeRequestCommentResponse() = default;
};
class DeleteBranchRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> branchName{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> subUserId{};

  DeleteBranchRequest() {}

  explicit DeleteBranchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (branchName) {
      res["BranchName"] = boost::any(*branchName);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("BranchName") != m.end() && !m["BranchName"].empty()) {
      branchName = make_shared<string>(boost::any_cast<string>(m["BranchName"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~DeleteBranchRequest() = default;
};
class DeleteBranchResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> branchName{};

  DeleteBranchResponseBodyResult() {}

  explicit DeleteBranchResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (branchName) {
      res["BranchName"] = boost::any(*branchName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BranchName") != m.end() && !m["BranchName"].empty()) {
      branchName = make_shared<string>(boost::any_cast<string>(m["BranchName"]));
    }
  }


  virtual ~DeleteBranchResponseBodyResult() = default;
};
class DeleteBranchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<DeleteBranchResponseBodyResult> result{};

  DeleteBranchResponseBody() {}

  explicit DeleteBranchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        DeleteBranchResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DeleteBranchResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DeleteBranchResponseBody() = default;
};
class DeleteBranchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteBranchResponseBody> body{};

  DeleteBranchResponse() {}

  explicit DeleteBranchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteBranchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteBranchResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteBranchResponse() = default;
};
class ListRepositoryCommitDiffRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<long> contextLine{};

  ListRepositoryCommitDiffRequest() {}

  explicit ListRepositoryCommitDiffRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (contextLine) {
      res["ContextLine"] = boost::any(*contextLine);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("ContextLine") != m.end() && !m["ContextLine"].empty()) {
      contextLine = make_shared<long>(boost::any_cast<long>(m["ContextLine"]));
    }
  }


  virtual ~ListRepositoryCommitDiffRequest() = default;
};
class ListRepositoryCommitDiffResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> deletedFile{};
  shared_ptr<string> diff{};
  shared_ptr<string> oldPath{};
  shared_ptr<string> oldId{};
  shared_ptr<string> BMode{};
  shared_ptr<bool> isOldLfs{};
  shared_ptr<bool> isNewLfs{};
  shared_ptr<bool> renamedFile{};
  shared_ptr<bool> newFile{};
  shared_ptr<string> newId{};
  shared_ptr<bool> isBinary{};
  shared_ptr<string> newPath{};
  shared_ptr<string> AMode{};

  ListRepositoryCommitDiffResponseBodyResult() {}

  explicit ListRepositoryCommitDiffResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deletedFile) {
      res["DeletedFile"] = boost::any(*deletedFile);
    }
    if (diff) {
      res["Diff"] = boost::any(*diff);
    }
    if (oldPath) {
      res["OldPath"] = boost::any(*oldPath);
    }
    if (oldId) {
      res["OldId"] = boost::any(*oldId);
    }
    if (BMode) {
      res["BMode"] = boost::any(*BMode);
    }
    if (isOldLfs) {
      res["IsOldLfs"] = boost::any(*isOldLfs);
    }
    if (isNewLfs) {
      res["IsNewLfs"] = boost::any(*isNewLfs);
    }
    if (renamedFile) {
      res["RenamedFile"] = boost::any(*renamedFile);
    }
    if (newFile) {
      res["NewFile"] = boost::any(*newFile);
    }
    if (newId) {
      res["NewId"] = boost::any(*newId);
    }
    if (isBinary) {
      res["IsBinary"] = boost::any(*isBinary);
    }
    if (newPath) {
      res["NewPath"] = boost::any(*newPath);
    }
    if (AMode) {
      res["AMode"] = boost::any(*AMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeletedFile") != m.end() && !m["DeletedFile"].empty()) {
      deletedFile = make_shared<bool>(boost::any_cast<bool>(m["DeletedFile"]));
    }
    if (m.find("Diff") != m.end() && !m["Diff"].empty()) {
      diff = make_shared<string>(boost::any_cast<string>(m["Diff"]));
    }
    if (m.find("OldPath") != m.end() && !m["OldPath"].empty()) {
      oldPath = make_shared<string>(boost::any_cast<string>(m["OldPath"]));
    }
    if (m.find("OldId") != m.end() && !m["OldId"].empty()) {
      oldId = make_shared<string>(boost::any_cast<string>(m["OldId"]));
    }
    if (m.find("BMode") != m.end() && !m["BMode"].empty()) {
      BMode = make_shared<string>(boost::any_cast<string>(m["BMode"]));
    }
    if (m.find("IsOldLfs") != m.end() && !m["IsOldLfs"].empty()) {
      isOldLfs = make_shared<bool>(boost::any_cast<bool>(m["IsOldLfs"]));
    }
    if (m.find("IsNewLfs") != m.end() && !m["IsNewLfs"].empty()) {
      isNewLfs = make_shared<bool>(boost::any_cast<bool>(m["IsNewLfs"]));
    }
    if (m.find("RenamedFile") != m.end() && !m["RenamedFile"].empty()) {
      renamedFile = make_shared<bool>(boost::any_cast<bool>(m["RenamedFile"]));
    }
    if (m.find("NewFile") != m.end() && !m["NewFile"].empty()) {
      newFile = make_shared<bool>(boost::any_cast<bool>(m["NewFile"]));
    }
    if (m.find("NewId") != m.end() && !m["NewId"].empty()) {
      newId = make_shared<string>(boost::any_cast<string>(m["NewId"]));
    }
    if (m.find("IsBinary") != m.end() && !m["IsBinary"].empty()) {
      isBinary = make_shared<bool>(boost::any_cast<bool>(m["IsBinary"]));
    }
    if (m.find("NewPath") != m.end() && !m["NewPath"].empty()) {
      newPath = make_shared<string>(boost::any_cast<string>(m["NewPath"]));
    }
    if (m.find("AMode") != m.end() && !m["AMode"].empty()) {
      AMode = make_shared<string>(boost::any_cast<string>(m["AMode"]));
    }
  }


  virtual ~ListRepositoryCommitDiffResponseBodyResult() = default;
};
class ListRepositoryCommitDiffResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<ListRepositoryCommitDiffResponseBodyResult>> result{};

  ListRepositoryCommitDiffResponseBody() {}

  explicit ListRepositoryCommitDiffResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListRepositoryCommitDiffResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRepositoryCommitDiffResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListRepositoryCommitDiffResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListRepositoryCommitDiffResponseBody() = default;
};
class ListRepositoryCommitDiffResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListRepositoryCommitDiffResponseBody> body{};

  ListRepositoryCommitDiffResponse() {}

  explicit ListRepositoryCommitDiffResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRepositoryCommitDiffResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRepositoryCommitDiffResponseBody>(model1);
      }
    }
  }


  virtual ~ListRepositoryCommitDiffResponse() = default;
};
class GetRepositoryInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> identity{};
  shared_ptr<string> organizationId{};

  GetRepositoryInfoRequest() {}

  explicit GetRepositoryInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (identity) {
      res["Identity"] = boost::any(*identity);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("Identity") != m.end() && !m["Identity"].empty()) {
      identity = make_shared<string>(boost::any_cast<string>(m["Identity"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetRepositoryInfoRequest() = default;
};
class GetRepositoryInfoResponseBodyResultNamespace : public Darabonba::Model {
public:
  shared_ptr<string> avatar{};
  shared_ptr<string> description{};
  shared_ptr<string> state{};
  shared_ptr<bool> public_{};
  shared_ptr<string> visibilityLevel{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> path{};
  shared_ptr<string> updatedAt{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> id{};

  GetRepositoryInfoResponseBodyResultNamespace() {}

  explicit GetRepositoryInfoResponseBodyResultNamespace(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avatar) {
      res["Avatar"] = boost::any(*avatar);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (public_) {
      res["Public"] = boost::any(*public_);
    }
    if (visibilityLevel) {
      res["VisibilityLevel"] = boost::any(*visibilityLevel);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Avatar") != m.end() && !m["Avatar"].empty()) {
      avatar = make_shared<string>(boost::any_cast<string>(m["Avatar"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Public") != m.end() && !m["Public"].empty()) {
      public_ = make_shared<bool>(boost::any_cast<bool>(m["Public"]));
    }
    if (m.find("VisibilityLevel") != m.end() && !m["VisibilityLevel"].empty()) {
      visibilityLevel = make_shared<string>(boost::any_cast<string>(m["VisibilityLevel"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["UpdatedAt"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~GetRepositoryInfoResponseBodyResultNamespace() = default;
};
class GetRepositoryInfoResponseBodyResultPermissionsProjectAccess : public Darabonba::Model {
public:
  shared_ptr<long> accessLevel{};

  GetRepositoryInfoResponseBodyResultPermissionsProjectAccess() {}

  explicit GetRepositoryInfoResponseBodyResultPermissionsProjectAccess(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessLevel) {
      res["AccessLevel"] = boost::any(*accessLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessLevel") != m.end() && !m["AccessLevel"].empty()) {
      accessLevel = make_shared<long>(boost::any_cast<long>(m["AccessLevel"]));
    }
  }


  virtual ~GetRepositoryInfoResponseBodyResultPermissionsProjectAccess() = default;
};
class GetRepositoryInfoResponseBodyResultPermissionsGroupAccess : public Darabonba::Model {
public:
  shared_ptr<long> accessLevel{};

  GetRepositoryInfoResponseBodyResultPermissionsGroupAccess() {}

  explicit GetRepositoryInfoResponseBodyResultPermissionsGroupAccess(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessLevel) {
      res["AccessLevel"] = boost::any(*accessLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessLevel") != m.end() && !m["AccessLevel"].empty()) {
      accessLevel = make_shared<long>(boost::any_cast<long>(m["AccessLevel"]));
    }
  }


  virtual ~GetRepositoryInfoResponseBodyResultPermissionsGroupAccess() = default;
};
class GetRepositoryInfoResponseBodyResultPermissions : public Darabonba::Model {
public:
  shared_ptr<GetRepositoryInfoResponseBodyResultPermissionsProjectAccess> projectAccess{};
  shared_ptr<GetRepositoryInfoResponseBodyResultPermissionsGroupAccess> groupAccess{};

  GetRepositoryInfoResponseBodyResultPermissions() {}

  explicit GetRepositoryInfoResponseBodyResultPermissions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectAccess) {
      res["ProjectAccess"] = projectAccess ? boost::any(projectAccess->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (groupAccess) {
      res["GroupAccess"] = groupAccess ? boost::any(groupAccess->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectAccess") != m.end() && !m["ProjectAccess"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProjectAccess"].type()) {
        GetRepositoryInfoResponseBodyResultPermissionsProjectAccess model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProjectAccess"]));
        projectAccess = make_shared<GetRepositoryInfoResponseBodyResultPermissionsProjectAccess>(model1);
      }
    }
    if (m.find("GroupAccess") != m.end() && !m["GroupAccess"].empty()) {
      if (typeid(map<string, boost::any>) == m["GroupAccess"].type()) {
        GetRepositoryInfoResponseBodyResultPermissionsGroupAccess model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GroupAccess"]));
        groupAccess = make_shared<GetRepositoryInfoResponseBodyResultPermissionsGroupAccess>(model1);
      }
    }
  }


  virtual ~GetRepositoryInfoResponseBodyResultPermissions() = default;
};
class GetRepositoryInfoResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> lastActivityAt{};
  shared_ptr<string> defaultBranch{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<bool> archive{};
  shared_ptr<string> importUrl{};
  shared_ptr<string> createdAt{};
  shared_ptr<bool> demoProjectStatus{};
  shared_ptr<long> creatorId{};
  shared_ptr<string> importStatus{};
  shared_ptr<string> httpUrlToRepo{};
  shared_ptr<string> webUrl{};
  shared_ptr<string> description{};
  shared_ptr<string> nameWithNamespace{};
  shared_ptr<bool> public_{};
  shared_ptr<string> pathWithNamespace{};
  shared_ptr<string> path{};
  shared_ptr<string> visibilityLevel{};
  shared_ptr<long> accessLevel{};
  shared_ptr<bool> importFromSubversion{};
  shared_ptr<string> sshUrlToRepo{};
  shared_ptr<string> name{};
  shared_ptr<long> id{};
  shared_ptr<vector<string>> tagList{};
  shared_ptr<GetRepositoryInfoResponseBodyResultNamespace> namespace_{};
  shared_ptr<GetRepositoryInfoResponseBodyResultPermissions> permissions{};

  GetRepositoryInfoResponseBodyResult() {}

  explicit GetRepositoryInfoResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lastActivityAt) {
      res["LastActivityAt"] = boost::any(*lastActivityAt);
    }
    if (defaultBranch) {
      res["DefaultBranch"] = boost::any(*defaultBranch);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (archive) {
      res["Archive"] = boost::any(*archive);
    }
    if (importUrl) {
      res["ImportUrl"] = boost::any(*importUrl);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (demoProjectStatus) {
      res["DemoProjectStatus"] = boost::any(*demoProjectStatus);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (importStatus) {
      res["ImportStatus"] = boost::any(*importStatus);
    }
    if (httpUrlToRepo) {
      res["HttpUrlToRepo"] = boost::any(*httpUrlToRepo);
    }
    if (webUrl) {
      res["WebUrl"] = boost::any(*webUrl);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (nameWithNamespace) {
      res["NameWithNamespace"] = boost::any(*nameWithNamespace);
    }
    if (public_) {
      res["Public"] = boost::any(*public_);
    }
    if (pathWithNamespace) {
      res["PathWithNamespace"] = boost::any(*pathWithNamespace);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (visibilityLevel) {
      res["VisibilityLevel"] = boost::any(*visibilityLevel);
    }
    if (accessLevel) {
      res["AccessLevel"] = boost::any(*accessLevel);
    }
    if (importFromSubversion) {
      res["ImportFromSubversion"] = boost::any(*importFromSubversion);
    }
    if (sshUrlToRepo) {
      res["SshUrlToRepo"] = boost::any(*sshUrlToRepo);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (tagList) {
      res["TagList"] = boost::any(*tagList);
    }
    if (namespace_) {
      res["Namespace"] = namespace_ ? boost::any(namespace_->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (permissions) {
      res["Permissions"] = permissions ? boost::any(permissions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LastActivityAt") != m.end() && !m["LastActivityAt"].empty()) {
      lastActivityAt = make_shared<string>(boost::any_cast<string>(m["LastActivityAt"]));
    }
    if (m.find("DefaultBranch") != m.end() && !m["DefaultBranch"].empty()) {
      defaultBranch = make_shared<string>(boost::any_cast<string>(m["DefaultBranch"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Archive") != m.end() && !m["Archive"].empty()) {
      archive = make_shared<bool>(boost::any_cast<bool>(m["Archive"]));
    }
    if (m.find("ImportUrl") != m.end() && !m["ImportUrl"].empty()) {
      importUrl = make_shared<string>(boost::any_cast<string>(m["ImportUrl"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("DemoProjectStatus") != m.end() && !m["DemoProjectStatus"].empty()) {
      demoProjectStatus = make_shared<bool>(boost::any_cast<bool>(m["DemoProjectStatus"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<long>(boost::any_cast<long>(m["CreatorId"]));
    }
    if (m.find("ImportStatus") != m.end() && !m["ImportStatus"].empty()) {
      importStatus = make_shared<string>(boost::any_cast<string>(m["ImportStatus"]));
    }
    if (m.find("HttpUrlToRepo") != m.end() && !m["HttpUrlToRepo"].empty()) {
      httpUrlToRepo = make_shared<string>(boost::any_cast<string>(m["HttpUrlToRepo"]));
    }
    if (m.find("WebUrl") != m.end() && !m["WebUrl"].empty()) {
      webUrl = make_shared<string>(boost::any_cast<string>(m["WebUrl"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("NameWithNamespace") != m.end() && !m["NameWithNamespace"].empty()) {
      nameWithNamespace = make_shared<string>(boost::any_cast<string>(m["NameWithNamespace"]));
    }
    if (m.find("Public") != m.end() && !m["Public"].empty()) {
      public_ = make_shared<bool>(boost::any_cast<bool>(m["Public"]));
    }
    if (m.find("PathWithNamespace") != m.end() && !m["PathWithNamespace"].empty()) {
      pathWithNamespace = make_shared<string>(boost::any_cast<string>(m["PathWithNamespace"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("VisibilityLevel") != m.end() && !m["VisibilityLevel"].empty()) {
      visibilityLevel = make_shared<string>(boost::any_cast<string>(m["VisibilityLevel"]));
    }
    if (m.find("AccessLevel") != m.end() && !m["AccessLevel"].empty()) {
      accessLevel = make_shared<long>(boost::any_cast<long>(m["AccessLevel"]));
    }
    if (m.find("ImportFromSubversion") != m.end() && !m["ImportFromSubversion"].empty()) {
      importFromSubversion = make_shared<bool>(boost::any_cast<bool>(m["ImportFromSubversion"]));
    }
    if (m.find("SshUrlToRepo") != m.end() && !m["SshUrlToRepo"].empty()) {
      sshUrlToRepo = make_shared<string>(boost::any_cast<string>(m["SshUrlToRepo"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("TagList") != m.end() && !m["TagList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      if (typeid(map<string, boost::any>) == m["Namespace"].type()) {
        GetRepositoryInfoResponseBodyResultNamespace model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Namespace"]));
        namespace_ = make_shared<GetRepositoryInfoResponseBodyResultNamespace>(model1);
      }
    }
    if (m.find("Permissions") != m.end() && !m["Permissions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Permissions"].type()) {
        GetRepositoryInfoResponseBodyResultPermissions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Permissions"]));
        permissions = make_shared<GetRepositoryInfoResponseBodyResultPermissions>(model1);
      }
    }
  }


  virtual ~GetRepositoryInfoResponseBodyResult() = default;
};
class GetRepositoryInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> errorCode{};
  shared_ptr<GetRepositoryInfoResponseBodyResult> result{};

  GetRepositoryInfoResponseBody() {}

  explicit GetRepositoryInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetRepositoryInfoResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetRepositoryInfoResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetRepositoryInfoResponseBody() = default;
};
class GetRepositoryInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRepositoryInfoResponseBody> body{};

  GetRepositoryInfoResponse() {}

  explicit GetRepositoryInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRepositoryInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRepositoryInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetRepositoryInfoResponse() = default;
};
class AcceptMergeRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};

  AcceptMergeRequestRequest() {}

  explicit AcceptMergeRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~AcceptMergeRequestRequest() = default;
};
class AcceptMergeRequestResponseBodyResultAssigneeList : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> name{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> id{};

  AcceptMergeRequestResponseBodyResultAssigneeList() {}

  explicit AcceptMergeRequestResponseBodyResultAssigneeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~AcceptMergeRequestResponseBodyResultAssigneeList() = default;
};
class AcceptMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> name{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<long> id{};

  AcceptMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers() {}

  explicit AcceptMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~AcceptMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers() = default;
};
class AcceptMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<string> checkType{};
  shared_ptr<string> checkName{};
  shared_ptr<vector<AcceptMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers>> extraUsers{};
  shared_ptr<vector<string>> unsatisfiedItems{};
  shared_ptr<vector<string>> satisfiedItems{};

  AcceptMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults() {}

  explicit AcceptMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (checkType) {
      res["CheckType"] = boost::any(*checkType);
    }
    if (checkName) {
      res["CheckName"] = boost::any(*checkName);
    }
    if (extraUsers) {
      vector<boost::any> temp1;
      for(auto item1:*extraUsers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ExtraUsers"] = boost::any(temp1);
    }
    if (unsatisfiedItems) {
      res["UnsatisfiedItems"] = boost::any(*unsatisfiedItems);
    }
    if (satisfiedItems) {
      res["SatisfiedItems"] = boost::any(*satisfiedItems);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CheckType") != m.end() && !m["CheckType"].empty()) {
      checkType = make_shared<string>(boost::any_cast<string>(m["CheckType"]));
    }
    if (m.find("CheckName") != m.end() && !m["CheckName"].empty()) {
      checkName = make_shared<string>(boost::any_cast<string>(m["CheckName"]));
    }
    if (m.find("ExtraUsers") != m.end() && !m["ExtraUsers"].empty()) {
      if (typeid(vector<boost::any>) == m["ExtraUsers"].type()) {
        vector<AcceptMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ExtraUsers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AcceptMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        extraUsers = make_shared<vector<AcceptMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers>>(expect1);
      }
    }
    if (m.find("UnsatisfiedItems") != m.end() && !m["UnsatisfiedItems"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsatisfiedItems"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsatisfiedItems"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsatisfiedItems = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SatisfiedItems") != m.end() && !m["SatisfiedItems"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SatisfiedItems"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SatisfiedItems"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      satisfiedItems = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AcceptMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults() = default;
};
class AcceptMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> name{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<long> id{};

  AcceptMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers() {}

  explicit AcceptMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~AcceptMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers() = default;
};
class AcceptMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<string> checkType{};
  shared_ptr<string> checkName{};
  shared_ptr<vector<AcceptMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers>> extraUsers{};
  shared_ptr<vector<string>> unsatisfiedItems{};
  shared_ptr<vector<string>> satisfiedItems{};

  AcceptMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults() {}

  explicit AcceptMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (checkType) {
      res["CheckType"] = boost::any(*checkType);
    }
    if (checkName) {
      res["CheckName"] = boost::any(*checkName);
    }
    if (extraUsers) {
      vector<boost::any> temp1;
      for(auto item1:*extraUsers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ExtraUsers"] = boost::any(temp1);
    }
    if (unsatisfiedItems) {
      res["UnsatisfiedItems"] = boost::any(*unsatisfiedItems);
    }
    if (satisfiedItems) {
      res["SatisfiedItems"] = boost::any(*satisfiedItems);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CheckType") != m.end() && !m["CheckType"].empty()) {
      checkType = make_shared<string>(boost::any_cast<string>(m["CheckType"]));
    }
    if (m.find("CheckName") != m.end() && !m["CheckName"].empty()) {
      checkName = make_shared<string>(boost::any_cast<string>(m["CheckName"]));
    }
    if (m.find("ExtraUsers") != m.end() && !m["ExtraUsers"].empty()) {
      if (typeid(vector<boost::any>) == m["ExtraUsers"].type()) {
        vector<AcceptMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ExtraUsers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AcceptMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        extraUsers = make_shared<vector<AcceptMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers>>(expect1);
      }
    }
    if (m.find("UnsatisfiedItems") != m.end() && !m["UnsatisfiedItems"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsatisfiedItems"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsatisfiedItems"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsatisfiedItems = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SatisfiedItems") != m.end() && !m["SatisfiedItems"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SatisfiedItems"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SatisfiedItems"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      satisfiedItems = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AcceptMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults() = default;
};
class AcceptMergeRequestResponseBodyResultApproveCheckResult : public Darabonba::Model {
public:
  shared_ptr<string> totalCheckResult{};
  shared_ptr<vector<AcceptMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults>> satisfiedCheckResults{};
  shared_ptr<vector<AcceptMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults>> unsatisfiedCheckResults{};

  AcceptMergeRequestResponseBodyResultApproveCheckResult() {}

  explicit AcceptMergeRequestResponseBodyResultApproveCheckResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCheckResult) {
      res["TotalCheckResult"] = boost::any(*totalCheckResult);
    }
    if (satisfiedCheckResults) {
      vector<boost::any> temp1;
      for(auto item1:*satisfiedCheckResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SatisfiedCheckResults"] = boost::any(temp1);
    }
    if (unsatisfiedCheckResults) {
      vector<boost::any> temp1;
      for(auto item1:*unsatisfiedCheckResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UnsatisfiedCheckResults"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCheckResult") != m.end() && !m["TotalCheckResult"].empty()) {
      totalCheckResult = make_shared<string>(boost::any_cast<string>(m["TotalCheckResult"]));
    }
    if (m.find("SatisfiedCheckResults") != m.end() && !m["SatisfiedCheckResults"].empty()) {
      if (typeid(vector<boost::any>) == m["SatisfiedCheckResults"].type()) {
        vector<AcceptMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SatisfiedCheckResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AcceptMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        satisfiedCheckResults = make_shared<vector<AcceptMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults>>(expect1);
      }
    }
    if (m.find("UnsatisfiedCheckResults") != m.end() && !m["UnsatisfiedCheckResults"].empty()) {
      if (typeid(vector<boost::any>) == m["UnsatisfiedCheckResults"].type()) {
        vector<AcceptMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UnsatisfiedCheckResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AcceptMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        unsatisfiedCheckResults = make_shared<vector<AcceptMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults>>(expect1);
      }
    }
  }


  virtual ~AcceptMergeRequestResponseBodyResultApproveCheckResult() = default;
};
class AcceptMergeRequestResponseBodyResultAuthor : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> name{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<long> id{};

  AcceptMergeRequestResponseBodyResultAuthor() {}

  explicit AcceptMergeRequestResponseBodyResultAuthor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~AcceptMergeRequestResponseBodyResultAuthor() = default;
};
class AcceptMergeRequestResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> state{};
  shared_ptr<long> behindCommitCount{};
  shared_ptr<long> projectId{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> acceptedRevision{};
  shared_ptr<string> sourceBranch{};
  shared_ptr<string> webUrl{};
  shared_ptr<string> description{};
  shared_ptr<string> nameWithNamespace{};
  shared_ptr<string> mergeType{};
  shared_ptr<string> targetBranch{};
  shared_ptr<long> aheadCommitCount{};
  shared_ptr<string> updatedAt{};
  shared_ptr<string> title{};
  shared_ptr<string> mergeError{};
  shared_ptr<string> mergedRevision{};
  shared_ptr<long> id{};
  shared_ptr<string> mergeStatus{};
  shared_ptr<vector<AcceptMergeRequestResponseBodyResultAssigneeList>> assigneeList{};
  shared_ptr<AcceptMergeRequestResponseBodyResultApproveCheckResult> approveCheckResult{};
  shared_ptr<AcceptMergeRequestResponseBodyResultAuthor> author{};

  AcceptMergeRequestResponseBodyResult() {}

  explicit AcceptMergeRequestResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (behindCommitCount) {
      res["BehindCommitCount"] = boost::any(*behindCommitCount);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (acceptedRevision) {
      res["AcceptedRevision"] = boost::any(*acceptedRevision);
    }
    if (sourceBranch) {
      res["SourceBranch"] = boost::any(*sourceBranch);
    }
    if (webUrl) {
      res["WebUrl"] = boost::any(*webUrl);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (nameWithNamespace) {
      res["NameWithNamespace"] = boost::any(*nameWithNamespace);
    }
    if (mergeType) {
      res["MergeType"] = boost::any(*mergeType);
    }
    if (targetBranch) {
      res["TargetBranch"] = boost::any(*targetBranch);
    }
    if (aheadCommitCount) {
      res["AheadCommitCount"] = boost::any(*aheadCommitCount);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (mergeError) {
      res["MergeError"] = boost::any(*mergeError);
    }
    if (mergedRevision) {
      res["MergedRevision"] = boost::any(*mergedRevision);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (mergeStatus) {
      res["MergeStatus"] = boost::any(*mergeStatus);
    }
    if (assigneeList) {
      vector<boost::any> temp1;
      for(auto item1:*assigneeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AssigneeList"] = boost::any(temp1);
    }
    if (approveCheckResult) {
      res["ApproveCheckResult"] = approveCheckResult ? boost::any(approveCheckResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (author) {
      res["Author"] = author ? boost::any(author->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("BehindCommitCount") != m.end() && !m["BehindCommitCount"].empty()) {
      behindCommitCount = make_shared<long>(boost::any_cast<long>(m["BehindCommitCount"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("AcceptedRevision") != m.end() && !m["AcceptedRevision"].empty()) {
      acceptedRevision = make_shared<string>(boost::any_cast<string>(m["AcceptedRevision"]));
    }
    if (m.find("SourceBranch") != m.end() && !m["SourceBranch"].empty()) {
      sourceBranch = make_shared<string>(boost::any_cast<string>(m["SourceBranch"]));
    }
    if (m.find("WebUrl") != m.end() && !m["WebUrl"].empty()) {
      webUrl = make_shared<string>(boost::any_cast<string>(m["WebUrl"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("NameWithNamespace") != m.end() && !m["NameWithNamespace"].empty()) {
      nameWithNamespace = make_shared<string>(boost::any_cast<string>(m["NameWithNamespace"]));
    }
    if (m.find("MergeType") != m.end() && !m["MergeType"].empty()) {
      mergeType = make_shared<string>(boost::any_cast<string>(m["MergeType"]));
    }
    if (m.find("TargetBranch") != m.end() && !m["TargetBranch"].empty()) {
      targetBranch = make_shared<string>(boost::any_cast<string>(m["TargetBranch"]));
    }
    if (m.find("AheadCommitCount") != m.end() && !m["AheadCommitCount"].empty()) {
      aheadCommitCount = make_shared<long>(boost::any_cast<long>(m["AheadCommitCount"]));
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["UpdatedAt"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("MergeError") != m.end() && !m["MergeError"].empty()) {
      mergeError = make_shared<string>(boost::any_cast<string>(m["MergeError"]));
    }
    if (m.find("MergedRevision") != m.end() && !m["MergedRevision"].empty()) {
      mergedRevision = make_shared<string>(boost::any_cast<string>(m["MergedRevision"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("MergeStatus") != m.end() && !m["MergeStatus"].empty()) {
      mergeStatus = make_shared<string>(boost::any_cast<string>(m["MergeStatus"]));
    }
    if (m.find("AssigneeList") != m.end() && !m["AssigneeList"].empty()) {
      if (typeid(vector<boost::any>) == m["AssigneeList"].type()) {
        vector<AcceptMergeRequestResponseBodyResultAssigneeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AssigneeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AcceptMergeRequestResponseBodyResultAssigneeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        assigneeList = make_shared<vector<AcceptMergeRequestResponseBodyResultAssigneeList>>(expect1);
      }
    }
    if (m.find("ApproveCheckResult") != m.end() && !m["ApproveCheckResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApproveCheckResult"].type()) {
        AcceptMergeRequestResponseBodyResultApproveCheckResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApproveCheckResult"]));
        approveCheckResult = make_shared<AcceptMergeRequestResponseBodyResultApproveCheckResult>(model1);
      }
    }
    if (m.find("Author") != m.end() && !m["Author"].empty()) {
      if (typeid(map<string, boost::any>) == m["Author"].type()) {
        AcceptMergeRequestResponseBodyResultAuthor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Author"]));
        author = make_shared<AcceptMergeRequestResponseBodyResultAuthor>(model1);
      }
    }
  }


  virtual ~AcceptMergeRequestResponseBodyResult() = default;
};
class AcceptMergeRequestResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<AcceptMergeRequestResponseBodyResult> result{};

  AcceptMergeRequestResponseBody() {}

  explicit AcceptMergeRequestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        AcceptMergeRequestResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<AcceptMergeRequestResponseBodyResult>(model1);
      }
    }
  }


  virtual ~AcceptMergeRequestResponseBody() = default;
};
class AcceptMergeRequestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AcceptMergeRequestResponseBody> body{};

  AcceptMergeRequestResponse() {}

  explicit AcceptMergeRequestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AcceptMergeRequestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AcceptMergeRequestResponseBody>(model1);
      }
    }
  }


  virtual ~AcceptMergeRequestResponse() = default;
};
class DeleteFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> branchName{};
  shared_ptr<string> filePath{};
  shared_ptr<string> commitMessage{};
  shared_ptr<string> subUserId{};

  DeleteFileRequest() {}

  explicit DeleteFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (branchName) {
      res["BranchName"] = boost::any(*branchName);
    }
    if (filePath) {
      res["FilePath"] = boost::any(*filePath);
    }
    if (commitMessage) {
      res["CommitMessage"] = boost::any(*commitMessage);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("BranchName") != m.end() && !m["BranchName"].empty()) {
      branchName = make_shared<string>(boost::any_cast<string>(m["BranchName"]));
    }
    if (m.find("FilePath") != m.end() && !m["FilePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["FilePath"]));
    }
    if (m.find("CommitMessage") != m.end() && !m["CommitMessage"].empty()) {
      commitMessage = make_shared<string>(boost::any_cast<string>(m["CommitMessage"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~DeleteFileRequest() = default;
};
class DeleteFileResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> filePath{};
  shared_ptr<string> branchName{};

  DeleteFileResponseBodyResult() {}

  explicit DeleteFileResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filePath) {
      res["FilePath"] = boost::any(*filePath);
    }
    if (branchName) {
      res["BranchName"] = boost::any(*branchName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FilePath") != m.end() && !m["FilePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["FilePath"]));
    }
    if (m.find("BranchName") != m.end() && !m["BranchName"].empty()) {
      branchName = make_shared<string>(boost::any_cast<string>(m["BranchName"]));
    }
  }


  virtual ~DeleteFileResponseBodyResult() = default;
};
class DeleteFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<DeleteFileResponseBodyResult> result{};

  DeleteFileResponseBody() {}

  explicit DeleteFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        DeleteFileResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DeleteFileResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DeleteFileResponseBody() = default;
};
class DeleteFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteFileResponseBody> body{};

  DeleteFileResponse() {}

  explicit DeleteFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFileResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFileResponse() = default;
};
class DeleteRepositoryProtectedBranchRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};

  DeleteRepositoryProtectedBranchRequest() {}

  explicit DeleteRepositoryProtectedBranchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~DeleteRepositoryProtectedBranchRequest() = default;
};
class DeleteRepositoryProtectedBranchResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> result{};

  DeleteRepositoryProtectedBranchResponseBodyResult() {}

  explicit DeleteRepositoryProtectedBranchResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~DeleteRepositoryProtectedBranchResponseBodyResult() = default;
};
class DeleteRepositoryProtectedBranchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<DeleteRepositoryProtectedBranchResponseBodyResult> result{};

  DeleteRepositoryProtectedBranchResponseBody() {}

  explicit DeleteRepositoryProtectedBranchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        DeleteRepositoryProtectedBranchResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DeleteRepositoryProtectedBranchResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DeleteRepositoryProtectedBranchResponseBody() = default;
};
class DeleteRepositoryProtectedBranchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteRepositoryProtectedBranchResponseBody> body{};

  DeleteRepositoryProtectedBranchResponse() {}

  explicit DeleteRepositoryProtectedBranchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRepositoryProtectedBranchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRepositoryProtectedBranchResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRepositoryProtectedBranchResponse() = default;
};
class DeleteRepositoryTagV2Request : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> tagName{};

  DeleteRepositoryTagV2Request() {}

  explicit DeleteRepositoryTagV2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~DeleteRepositoryTagV2Request() = default;
};
class DeleteRepositoryTagV2ResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> tagName{};

  DeleteRepositoryTagV2ResponseBodyResult() {}

  explicit DeleteRepositoryTagV2ResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~DeleteRepositoryTagV2ResponseBodyResult() = default;
};
class DeleteRepositoryTagV2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<DeleteRepositoryTagV2ResponseBodyResult> result{};

  DeleteRepositoryTagV2ResponseBody() {}

  explicit DeleteRepositoryTagV2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        DeleteRepositoryTagV2ResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DeleteRepositoryTagV2ResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DeleteRepositoryTagV2ResponseBody() = default;
};
class DeleteRepositoryTagV2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteRepositoryTagV2ResponseBody> body{};

  DeleteRepositoryTagV2Response() {}

  explicit DeleteRepositoryTagV2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRepositoryTagV2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRepositoryTagV2ResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRepositoryTagV2Response() = default;
};
class GetFileLastCommitRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> sha{};
  shared_ptr<string> filePath{};

  GetFileLastCommitRequest() {}

  explicit GetFileLastCommitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (sha) {
      res["Sha"] = boost::any(*sha);
    }
    if (filePath) {
      res["FilePath"] = boost::any(*filePath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("Sha") != m.end() && !m["Sha"].empty()) {
      sha = make_shared<string>(boost::any_cast<string>(m["Sha"]));
    }
    if (m.find("FilePath") != m.end() && !m["FilePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["FilePath"]));
    }
  }


  virtual ~GetFileLastCommitRequest() = default;
};
class GetFileLastCommitResponseBodyResultSignature : public Darabonba::Model {
public:
  shared_ptr<string> verificationStatus{};
  shared_ptr<string> gpgKeyId{};

  GetFileLastCommitResponseBodyResultSignature() {}

  explicit GetFileLastCommitResponseBodyResultSignature(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (verificationStatus) {
      res["VerificationStatus"] = boost::any(*verificationStatus);
    }
    if (gpgKeyId) {
      res["GpgKeyId"] = boost::any(*gpgKeyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VerificationStatus") != m.end() && !m["VerificationStatus"].empty()) {
      verificationStatus = make_shared<string>(boost::any_cast<string>(m["VerificationStatus"]));
    }
    if (m.find("GpgKeyId") != m.end() && !m["GpgKeyId"].empty()) {
      gpgKeyId = make_shared<string>(boost::any_cast<string>(m["GpgKeyId"]));
    }
  }


  virtual ~GetFileLastCommitResponseBodyResultSignature() = default;
};
class GetFileLastCommitResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> shortId{};
  shared_ptr<string> authorName{};
  shared_ptr<string> authorDate{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> message{};
  shared_ptr<string> title{};
  shared_ptr<string> committerName{};
  shared_ptr<string> authorEmail{};
  shared_ptr<string> id{};
  shared_ptr<string> committerEmail{};
  shared_ptr<string> committedDate{};
  shared_ptr<vector<string>> parentIds{};
  shared_ptr<GetFileLastCommitResponseBodyResultSignature> signature{};

  GetFileLastCommitResponseBodyResult() {}

  explicit GetFileLastCommitResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shortId) {
      res["ShortId"] = boost::any(*shortId);
    }
    if (authorName) {
      res["AuthorName"] = boost::any(*authorName);
    }
    if (authorDate) {
      res["AuthorDate"] = boost::any(*authorDate);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (committerName) {
      res["CommitterName"] = boost::any(*committerName);
    }
    if (authorEmail) {
      res["AuthorEmail"] = boost::any(*authorEmail);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (committerEmail) {
      res["CommitterEmail"] = boost::any(*committerEmail);
    }
    if (committedDate) {
      res["CommittedDate"] = boost::any(*committedDate);
    }
    if (parentIds) {
      res["ParentIds"] = boost::any(*parentIds);
    }
    if (signature) {
      res["Signature"] = signature ? boost::any(signature->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ShortId") != m.end() && !m["ShortId"].empty()) {
      shortId = make_shared<string>(boost::any_cast<string>(m["ShortId"]));
    }
    if (m.find("AuthorName") != m.end() && !m["AuthorName"].empty()) {
      authorName = make_shared<string>(boost::any_cast<string>(m["AuthorName"]));
    }
    if (m.find("AuthorDate") != m.end() && !m["AuthorDate"].empty()) {
      authorDate = make_shared<string>(boost::any_cast<string>(m["AuthorDate"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("CommitterName") != m.end() && !m["CommitterName"].empty()) {
      committerName = make_shared<string>(boost::any_cast<string>(m["CommitterName"]));
    }
    if (m.find("AuthorEmail") != m.end() && !m["AuthorEmail"].empty()) {
      authorEmail = make_shared<string>(boost::any_cast<string>(m["AuthorEmail"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("CommitterEmail") != m.end() && !m["CommitterEmail"].empty()) {
      committerEmail = make_shared<string>(boost::any_cast<string>(m["CommitterEmail"]));
    }
    if (m.find("CommittedDate") != m.end() && !m["CommittedDate"].empty()) {
      committedDate = make_shared<string>(boost::any_cast<string>(m["CommittedDate"]));
    }
    if (m.find("ParentIds") != m.end() && !m["ParentIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ParentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ParentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      parentIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      if (typeid(map<string, boost::any>) == m["Signature"].type()) {
        GetFileLastCommitResponseBodyResultSignature model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Signature"]));
        signature = make_shared<GetFileLastCommitResponseBodyResultSignature>(model1);
      }
    }
  }


  virtual ~GetFileLastCommitResponseBodyResult() = default;
};
class GetFileLastCommitResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetFileLastCommitResponseBodyResult> result{};

  GetFileLastCommitResponseBody() {}

  explicit GetFileLastCommitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetFileLastCommitResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetFileLastCommitResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetFileLastCommitResponseBody() = default;
};
class GetFileLastCommitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetFileLastCommitResponseBody> body{};

  GetFileLastCommitResponse() {}

  explicit GetFileLastCommitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFileLastCommitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFileLastCommitResponseBody>(model1);
      }
    }
  }


  virtual ~GetFileLastCommitResponse() = default;
};
class UpdateFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> subUserId{};

  UpdateFileRequest() {}

  explicit UpdateFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~UpdateFileRequest() = default;
};
class UpdateFileResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> filePath{};
  shared_ptr<string> branchName{};

  UpdateFileResponseBodyResult() {}

  explicit UpdateFileResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filePath) {
      res["FilePath"] = boost::any(*filePath);
    }
    if (branchName) {
      res["BranchName"] = boost::any(*branchName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FilePath") != m.end() && !m["FilePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["FilePath"]));
    }
    if (m.find("BranchName") != m.end() && !m["BranchName"].empty()) {
      branchName = make_shared<string>(boost::any_cast<string>(m["BranchName"]));
    }
  }


  virtual ~UpdateFileResponseBodyResult() = default;
};
class UpdateFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<UpdateFileResponseBodyResult> result{};

  UpdateFileResponseBody() {}

  explicit UpdateFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        UpdateFileResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<UpdateFileResponseBodyResult>(model1);
      }
    }
  }


  virtual ~UpdateFileResponseBody() = default;
};
class UpdateFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateFileResponseBody> body{};

  UpdateFileResponse() {}

  explicit UpdateFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFileResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFileResponse() = default;
};
class UpdateRepositoryMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> subUserId{};

  UpdateRepositoryMemberRequest() {}

  explicit UpdateRepositoryMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~UpdateRepositoryMemberRequest() = default;
};
class UpdateRepositoryMemberResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> email{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> state{};
  shared_ptr<long> accessLevel{};
  shared_ptr<long> id{};

  UpdateRepositoryMemberResponseBodyResult() {}

  explicit UpdateRepositoryMemberResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (accessLevel) {
      res["AccessLevel"] = boost::any(*accessLevel);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("AccessLevel") != m.end() && !m["AccessLevel"].empty()) {
      accessLevel = make_shared<long>(boost::any_cast<long>(m["AccessLevel"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~UpdateRepositoryMemberResponseBodyResult() = default;
};
class UpdateRepositoryMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<UpdateRepositoryMemberResponseBodyResult> result{};

  UpdateRepositoryMemberResponseBody() {}

  explicit UpdateRepositoryMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        UpdateRepositoryMemberResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<UpdateRepositoryMemberResponseBodyResult>(model1);
      }
    }
  }


  virtual ~UpdateRepositoryMemberResponseBody() = default;
};
class UpdateRepositoryMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateRepositoryMemberResponseBody> body{};

  UpdateRepositoryMemberResponse() {}

  explicit UpdateRepositoryMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateRepositoryMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRepositoryMemberResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRepositoryMemberResponse() = default;
};
class AddRepositoryMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> subUserId{};

  AddRepositoryMemberRequest() {}

  explicit AddRepositoryMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~AddRepositoryMemberRequest() = default;
};
class AddRepositoryMemberResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> email{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> state{};
  shared_ptr<long> accessLevel{};
  shared_ptr<long> id{};

  AddRepositoryMemberResponseBodyResult() {}

  explicit AddRepositoryMemberResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (accessLevel) {
      res["AccessLevel"] = boost::any(*accessLevel);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("AccessLevel") != m.end() && !m["AccessLevel"].empty()) {
      accessLevel = make_shared<long>(boost::any_cast<long>(m["AccessLevel"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~AddRepositoryMemberResponseBodyResult() = default;
};
class AddRepositoryMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<vector<AddRepositoryMemberResponseBodyResult>> result{};

  AddRepositoryMemberResponseBody() {}

  explicit AddRepositoryMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<AddRepositoryMemberResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddRepositoryMemberResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<AddRepositoryMemberResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~AddRepositoryMemberResponseBody() = default;
};
class AddRepositoryMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddRepositoryMemberResponseBody> body{};

  AddRepositoryMemberResponse() {}

  explicit AddRepositoryMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddRepositoryMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddRepositoryMemberResponseBody>(model1);
      }
    }
  }


  virtual ~AddRepositoryMemberResponse() = default;
};
class CreateSshKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};

  CreateSshKeyRequest() {}

  explicit CreateSshKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
  }


  virtual ~CreateSshKeyRequest() = default;
};
class CreateSshKeyResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> fingerPrint{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> title{};
  shared_ptr<string> keyScope{};
  shared_ptr<long> id{};

  CreateSshKeyResponseBodyResult() {}

  explicit CreateSshKeyResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (fingerPrint) {
      res["FingerPrint"] = boost::any(*fingerPrint);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (keyScope) {
      res["KeyScope"] = boost::any(*keyScope);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("FingerPrint") != m.end() && !m["FingerPrint"].empty()) {
      fingerPrint = make_shared<string>(boost::any_cast<string>(m["FingerPrint"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("KeyScope") != m.end() && !m["KeyScope"].empty()) {
      keyScope = make_shared<string>(boost::any_cast<string>(m["KeyScope"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~CreateSshKeyResponseBodyResult() = default;
};
class CreateSshKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<CreateSshKeyResponseBodyResult> result{};

  CreateSshKeyResponseBody() {}

  explicit CreateSshKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateSshKeyResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateSshKeyResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateSshKeyResponseBody() = default;
};
class CreateSshKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateSshKeyResponseBody> body{};

  CreateSshKeyResponse() {}

  explicit CreateSshKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSshKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSshKeyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSshKeyResponse() = default;
};
class ListRepositoryTagsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> search{};
  shared_ptr<string> organizationId{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sort{};
  shared_ptr<bool> showSignature{};

  ListRepositoryTagsRequest() {}

  explicit ListRepositoryTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (search) {
      res["Search"] = boost::any(*search);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (showSignature) {
      res["ShowSignature"] = boost::any(*showSignature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("Search") != m.end() && !m["Search"].empty()) {
      search = make_shared<string>(boost::any_cast<string>(m["Search"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("ShowSignature") != m.end() && !m["ShowSignature"].empty()) {
      showSignature = make_shared<bool>(boost::any_cast<bool>(m["ShowSignature"]));
    }
  }


  virtual ~ListRepositoryTagsRequest() = default;
};
class ListRepositoryTagsResponseBodyResultCommitSignature : public Darabonba::Model {
public:
  shared_ptr<string> verificationStatus{};
  shared_ptr<string> gpgKeyId{};

  ListRepositoryTagsResponseBodyResultCommitSignature() {}

  explicit ListRepositoryTagsResponseBodyResultCommitSignature(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (verificationStatus) {
      res["VerificationStatus"] = boost::any(*verificationStatus);
    }
    if (gpgKeyId) {
      res["GpgKeyId"] = boost::any(*gpgKeyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VerificationStatus") != m.end() && !m["VerificationStatus"].empty()) {
      verificationStatus = make_shared<string>(boost::any_cast<string>(m["VerificationStatus"]));
    }
    if (m.find("GpgKeyId") != m.end() && !m["GpgKeyId"].empty()) {
      gpgKeyId = make_shared<string>(boost::any_cast<string>(m["GpgKeyId"]));
    }
  }


  virtual ~ListRepositoryTagsResponseBodyResultCommitSignature() = default;
};
class ListRepositoryTagsResponseBodyResultCommit : public Darabonba::Model {
public:
  shared_ptr<string> shortId{};
  shared_ptr<string> authorName{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> message{};
  shared_ptr<string> authoredDate{};
  shared_ptr<string> committerName{};
  shared_ptr<string> title{};
  shared_ptr<string> authorEmail{};
  shared_ptr<string> committerEmail{};
  shared_ptr<string> id{};
  shared_ptr<string> committedDate{};
  shared_ptr<vector<string>> parentIds{};
  shared_ptr<ListRepositoryTagsResponseBodyResultCommitSignature> signature{};

  ListRepositoryTagsResponseBodyResultCommit() {}

  explicit ListRepositoryTagsResponseBodyResultCommit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shortId) {
      res["ShortId"] = boost::any(*shortId);
    }
    if (authorName) {
      res["AuthorName"] = boost::any(*authorName);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (authoredDate) {
      res["AuthoredDate"] = boost::any(*authoredDate);
    }
    if (committerName) {
      res["CommitterName"] = boost::any(*committerName);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (authorEmail) {
      res["AuthorEmail"] = boost::any(*authorEmail);
    }
    if (committerEmail) {
      res["CommitterEmail"] = boost::any(*committerEmail);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (committedDate) {
      res["CommittedDate"] = boost::any(*committedDate);
    }
    if (parentIds) {
      res["ParentIds"] = boost::any(*parentIds);
    }
    if (signature) {
      res["Signature"] = signature ? boost::any(signature->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ShortId") != m.end() && !m["ShortId"].empty()) {
      shortId = make_shared<string>(boost::any_cast<string>(m["ShortId"]));
    }
    if (m.find("AuthorName") != m.end() && !m["AuthorName"].empty()) {
      authorName = make_shared<string>(boost::any_cast<string>(m["AuthorName"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("AuthoredDate") != m.end() && !m["AuthoredDate"].empty()) {
      authoredDate = make_shared<string>(boost::any_cast<string>(m["AuthoredDate"]));
    }
    if (m.find("CommitterName") != m.end() && !m["CommitterName"].empty()) {
      committerName = make_shared<string>(boost::any_cast<string>(m["CommitterName"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("AuthorEmail") != m.end() && !m["AuthorEmail"].empty()) {
      authorEmail = make_shared<string>(boost::any_cast<string>(m["AuthorEmail"]));
    }
    if (m.find("CommitterEmail") != m.end() && !m["CommitterEmail"].empty()) {
      committerEmail = make_shared<string>(boost::any_cast<string>(m["CommitterEmail"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("CommittedDate") != m.end() && !m["CommittedDate"].empty()) {
      committedDate = make_shared<string>(boost::any_cast<string>(m["CommittedDate"]));
    }
    if (m.find("ParentIds") != m.end() && !m["ParentIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ParentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ParentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      parentIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      if (typeid(map<string, boost::any>) == m["Signature"].type()) {
        ListRepositoryTagsResponseBodyResultCommitSignature model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Signature"]));
        signature = make_shared<ListRepositoryTagsResponseBodyResultCommitSignature>(model1);
      }
    }
  }


  virtual ~ListRepositoryTagsResponseBodyResultCommit() = default;
};
class ListRepositoryTagsResponseBodyResultSignature : public Darabonba::Model {
public:
  shared_ptr<string> verificationStatus{};
  shared_ptr<string> gpgKeyId{};

  ListRepositoryTagsResponseBodyResultSignature() {}

  explicit ListRepositoryTagsResponseBodyResultSignature(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (verificationStatus) {
      res["VerificationStatus"] = boost::any(*verificationStatus);
    }
    if (gpgKeyId) {
      res["GpgKeyId"] = boost::any(*gpgKeyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VerificationStatus") != m.end() && !m["VerificationStatus"].empty()) {
      verificationStatus = make_shared<string>(boost::any_cast<string>(m["VerificationStatus"]));
    }
    if (m.find("GpgKeyId") != m.end() && !m["GpgKeyId"].empty()) {
      gpgKeyId = make_shared<string>(boost::any_cast<string>(m["GpgKeyId"]));
    }
  }


  virtual ~ListRepositoryTagsResponseBodyResultSignature() = default;
};
class ListRepositoryTagsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<string> id{};
  shared_ptr<ListRepositoryTagsResponseBodyResultCommit> commit{};
  shared_ptr<ListRepositoryTagsResponseBodyResultSignature> signature{};

  ListRepositoryTagsResponseBodyResult() {}

  explicit ListRepositoryTagsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (commit) {
      res["Commit"] = commit ? boost::any(commit->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (signature) {
      res["Signature"] = signature ? boost::any(signature->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Commit") != m.end() && !m["Commit"].empty()) {
      if (typeid(map<string, boost::any>) == m["Commit"].type()) {
        ListRepositoryTagsResponseBodyResultCommit model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Commit"]));
        commit = make_shared<ListRepositoryTagsResponseBodyResultCommit>(model1);
      }
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      if (typeid(map<string, boost::any>) == m["Signature"].type()) {
        ListRepositoryTagsResponseBodyResultSignature model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Signature"]));
        signature = make_shared<ListRepositoryTagsResponseBodyResultSignature>(model1);
      }
    }
  }


  virtual ~ListRepositoryTagsResponseBodyResult() = default;
};
class ListRepositoryTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<ListRepositoryTagsResponseBodyResult>> result{};

  ListRepositoryTagsResponseBody() {}

  explicit ListRepositoryTagsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListRepositoryTagsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRepositoryTagsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListRepositoryTagsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListRepositoryTagsResponseBody() = default;
};
class ListRepositoryTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListRepositoryTagsResponseBody> body{};

  ListRepositoryTagsResponse() {}

  explicit ListRepositoryTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRepositoryTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRepositoryTagsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRepositoryTagsResponse() = default;
};
class AddWebhookRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};

  AddWebhookRequest() {}

  explicit AddWebhookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~AddWebhookRequest() = default;
};
class AddWebhookResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> pushEvents{};
  shared_ptr<bool> buildEvents{};
  shared_ptr<long> projectId{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> url{};
  shared_ptr<bool> issuesEvents{};
  shared_ptr<bool> tagPushEvents{};
  shared_ptr<string> lastTestResult{};
  shared_ptr<string> description{};
  shared_ptr<bool> mergeRequestsEvents{};
  shared_ptr<string> secretToken{};
  shared_ptr<bool> noteEvents{};
  shared_ptr<long> id{};
  shared_ptr<bool> enableSslVerification{};

  AddWebhookResponseBodyResult() {}

  explicit AddWebhookResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pushEvents) {
      res["PushEvents"] = boost::any(*pushEvents);
    }
    if (buildEvents) {
      res["BuildEvents"] = boost::any(*buildEvents);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (issuesEvents) {
      res["IssuesEvents"] = boost::any(*issuesEvents);
    }
    if (tagPushEvents) {
      res["TagPushEvents"] = boost::any(*tagPushEvents);
    }
    if (lastTestResult) {
      res["LastTestResult"] = boost::any(*lastTestResult);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (mergeRequestsEvents) {
      res["MergeRequestsEvents"] = boost::any(*mergeRequestsEvents);
    }
    if (secretToken) {
      res["SecretToken"] = boost::any(*secretToken);
    }
    if (noteEvents) {
      res["NoteEvents"] = boost::any(*noteEvents);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (enableSslVerification) {
      res["EnableSslVerification"] = boost::any(*enableSslVerification);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PushEvents") != m.end() && !m["PushEvents"].empty()) {
      pushEvents = make_shared<bool>(boost::any_cast<bool>(m["PushEvents"]));
    }
    if (m.find("BuildEvents") != m.end() && !m["BuildEvents"].empty()) {
      buildEvents = make_shared<bool>(boost::any_cast<bool>(m["BuildEvents"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("IssuesEvents") != m.end() && !m["IssuesEvents"].empty()) {
      issuesEvents = make_shared<bool>(boost::any_cast<bool>(m["IssuesEvents"]));
    }
    if (m.find("TagPushEvents") != m.end() && !m["TagPushEvents"].empty()) {
      tagPushEvents = make_shared<bool>(boost::any_cast<bool>(m["TagPushEvents"]));
    }
    if (m.find("LastTestResult") != m.end() && !m["LastTestResult"].empty()) {
      lastTestResult = make_shared<string>(boost::any_cast<string>(m["LastTestResult"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("MergeRequestsEvents") != m.end() && !m["MergeRequestsEvents"].empty()) {
      mergeRequestsEvents = make_shared<bool>(boost::any_cast<bool>(m["MergeRequestsEvents"]));
    }
    if (m.find("SecretToken") != m.end() && !m["SecretToken"].empty()) {
      secretToken = make_shared<string>(boost::any_cast<string>(m["SecretToken"]));
    }
    if (m.find("NoteEvents") != m.end() && !m["NoteEvents"].empty()) {
      noteEvents = make_shared<bool>(boost::any_cast<bool>(m["NoteEvents"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("EnableSslVerification") != m.end() && !m["EnableSslVerification"].empty()) {
      enableSslVerification = make_shared<bool>(boost::any_cast<bool>(m["EnableSslVerification"]));
    }
  }


  virtual ~AddWebhookResponseBodyResult() = default;
};
class AddWebhookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<AddWebhookResponseBodyResult> result{};

  AddWebhookResponseBody() {}

  explicit AddWebhookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        AddWebhookResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<AddWebhookResponseBodyResult>(model1);
      }
    }
  }


  virtual ~AddWebhookResponseBody() = default;
};
class AddWebhookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddWebhookResponseBody> body{};

  AddWebhookResponse() {}

  explicit AddWebhookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddWebhookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddWebhookResponseBody>(model1);
      }
    }
  }


  virtual ~AddWebhookResponse() = default;
};
class EnableRepositoryDeployKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> subUserId{};

  EnableRepositoryDeployKeyRequest() {}

  explicit EnableRepositoryDeployKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~EnableRepositoryDeployKeyRequest() = default;
};
class EnableRepositoryDeployKeyResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> result{};

  EnableRepositoryDeployKeyResponseBodyResult() {}

  explicit EnableRepositoryDeployKeyResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~EnableRepositoryDeployKeyResponseBodyResult() = default;
};
class EnableRepositoryDeployKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<EnableRepositoryDeployKeyResponseBodyResult> result{};

  EnableRepositoryDeployKeyResponseBody() {}

  explicit EnableRepositoryDeployKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        EnableRepositoryDeployKeyResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<EnableRepositoryDeployKeyResponseBodyResult>(model1);
      }
    }
  }


  virtual ~EnableRepositoryDeployKeyResponseBody() = default;
};
class EnableRepositoryDeployKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableRepositoryDeployKeyResponseBody> body{};

  EnableRepositoryDeployKeyResponse() {}

  explicit EnableRepositoryDeployKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableRepositoryDeployKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableRepositoryDeployKeyResponseBody>(model1);
      }
    }
  }


  virtual ~EnableRepositoryDeployKeyResponse() = default;
};
class GetUserInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};

  GetUserInfoRequest() {}

  explicit GetUserInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetUserInfoRequest() = default;
};
class GetUserInfoResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> externalUserId{};
  shared_ptr<string> name{};
  shared_ptr<long> id{};
  shared_ptr<string> username{};

  GetUserInfoResponseBodyResult() {}

  explicit GetUserInfoResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (externalUserId) {
      res["ExternalUserId"] = boost::any(*externalUserId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("ExternalUserId") != m.end() && !m["ExternalUserId"].empty()) {
      externalUserId = make_shared<string>(boost::any_cast<string>(m["ExternalUserId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~GetUserInfoResponseBodyResult() = default;
};
class GetUserInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<GetUserInfoResponseBodyResult> result{};

  GetUserInfoResponseBody() {}

  explicit GetUserInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetUserInfoResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetUserInfoResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetUserInfoResponseBody() = default;
};
class GetUserInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetUserInfoResponseBody> body{};

  GetUserInfoResponse() {}

  explicit GetUserInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserInfoResponse() = default;
};
class ListRepositoryTreeRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> path{};
  shared_ptr<string> type{};
  shared_ptr<string> refName{};
  shared_ptr<string> subUserId{};

  ListRepositoryTreeRequest() {}

  explicit ListRepositoryTreeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (refName) {
      res["RefName"] = boost::any(*refName);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("RefName") != m.end() && !m["RefName"].empty()) {
      refName = make_shared<string>(boost::any_cast<string>(m["RefName"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~ListRepositoryTreeRequest() = default;
};
class ListRepositoryTreeResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> path{};
  shared_ptr<string> mode{};
  shared_ptr<string> name{};
  shared_ptr<string> id{};

  ListRepositoryTreeResponseBodyResult() {}

  explicit ListRepositoryTreeResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~ListRepositoryTreeResponseBodyResult() = default;
};
class ListRepositoryTreeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<vector<ListRepositoryTreeResponseBodyResult>> result{};

  ListRepositoryTreeResponseBody() {}

  explicit ListRepositoryTreeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListRepositoryTreeResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRepositoryTreeResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListRepositoryTreeResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListRepositoryTreeResponseBody() = default;
};
class ListRepositoryTreeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListRepositoryTreeResponseBody> body{};

  ListRepositoryTreeResponse() {}

  explicit ListRepositoryTreeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRepositoryTreeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRepositoryTreeResponseBody>(model1);
      }
    }
  }


  virtual ~ListRepositoryTreeResponse() = default;
};
class DeleteRepositoryGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> subUserId{};

  DeleteRepositoryGroupRequest() {}

  explicit DeleteRepositoryGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~DeleteRepositoryGroupRequest() = default;
};
class DeleteRepositoryGroupResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> result{};

  DeleteRepositoryGroupResponseBodyResult() {}

  explicit DeleteRepositoryGroupResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~DeleteRepositoryGroupResponseBodyResult() = default;
};
class DeleteRepositoryGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<DeleteRepositoryGroupResponseBodyResult> result{};

  DeleteRepositoryGroupResponseBody() {}

  explicit DeleteRepositoryGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        DeleteRepositoryGroupResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DeleteRepositoryGroupResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DeleteRepositoryGroupResponseBody() = default;
};
class DeleteRepositoryGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteRepositoryGroupResponseBody> body{};

  DeleteRepositoryGroupResponse() {}

  explicit DeleteRepositoryGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRepositoryGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRepositoryGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRepositoryGroupResponse() = default;
};
class DeleteRepositoryWebhookRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};

  DeleteRepositoryWebhookRequest() {}

  explicit DeleteRepositoryWebhookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~DeleteRepositoryWebhookRequest() = default;
};
class DeleteRepositoryWebhookResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> pushEvents{};
  shared_ptr<long> projectId{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> url{};
  shared_ptr<bool> tagPushEvents{};
  shared_ptr<string> lastTestResult{};
  shared_ptr<bool> mergeRequestsEvents{};
  shared_ptr<string> description{};
  shared_ptr<bool> noteEvents{};
  shared_ptr<string> secretToken{};
  shared_ptr<long> id{};
  shared_ptr<bool> enableSslVerification{};

  DeleteRepositoryWebhookResponseBodyResult() {}

  explicit DeleteRepositoryWebhookResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pushEvents) {
      res["PushEvents"] = boost::any(*pushEvents);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (tagPushEvents) {
      res["TagPushEvents"] = boost::any(*tagPushEvents);
    }
    if (lastTestResult) {
      res["LastTestResult"] = boost::any(*lastTestResult);
    }
    if (mergeRequestsEvents) {
      res["MergeRequestsEvents"] = boost::any(*mergeRequestsEvents);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (noteEvents) {
      res["NoteEvents"] = boost::any(*noteEvents);
    }
    if (secretToken) {
      res["SecretToken"] = boost::any(*secretToken);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (enableSslVerification) {
      res["EnableSslVerification"] = boost::any(*enableSslVerification);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PushEvents") != m.end() && !m["PushEvents"].empty()) {
      pushEvents = make_shared<bool>(boost::any_cast<bool>(m["PushEvents"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("TagPushEvents") != m.end() && !m["TagPushEvents"].empty()) {
      tagPushEvents = make_shared<bool>(boost::any_cast<bool>(m["TagPushEvents"]));
    }
    if (m.find("LastTestResult") != m.end() && !m["LastTestResult"].empty()) {
      lastTestResult = make_shared<string>(boost::any_cast<string>(m["LastTestResult"]));
    }
    if (m.find("MergeRequestsEvents") != m.end() && !m["MergeRequestsEvents"].empty()) {
      mergeRequestsEvents = make_shared<bool>(boost::any_cast<bool>(m["MergeRequestsEvents"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("NoteEvents") != m.end() && !m["NoteEvents"].empty()) {
      noteEvents = make_shared<bool>(boost::any_cast<bool>(m["NoteEvents"]));
    }
    if (m.find("SecretToken") != m.end() && !m["SecretToken"].empty()) {
      secretToken = make_shared<string>(boost::any_cast<string>(m["SecretToken"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("EnableSslVerification") != m.end() && !m["EnableSslVerification"].empty()) {
      enableSslVerification = make_shared<bool>(boost::any_cast<bool>(m["EnableSslVerification"]));
    }
  }


  virtual ~DeleteRepositoryWebhookResponseBodyResult() = default;
};
class DeleteRepositoryWebhookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<DeleteRepositoryWebhookResponseBodyResult> result{};

  DeleteRepositoryWebhookResponseBody() {}

  explicit DeleteRepositoryWebhookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        DeleteRepositoryWebhookResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DeleteRepositoryWebhookResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DeleteRepositoryWebhookResponseBody() = default;
};
class DeleteRepositoryWebhookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteRepositoryWebhookResponseBody> body{};

  DeleteRepositoryWebhookResponse() {}

  explicit DeleteRepositoryWebhookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRepositoryWebhookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRepositoryWebhookResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRepositoryWebhookResponse() = default;
};
class ListRepositoryMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> query{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> subUserId{};

  ListRepositoryMemberRequest() {}

  explicit ListRepositoryMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~ListRepositoryMemberRequest() = default;
};
class ListRepositoryMemberResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> email{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> state{};
  shared_ptr<long> accessLevel{};
  shared_ptr<string> name{};
  shared_ptr<long> id{};
  shared_ptr<string> username{};

  ListRepositoryMemberResponseBodyResult() {}

  explicit ListRepositoryMemberResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (accessLevel) {
      res["AccessLevel"] = boost::any(*accessLevel);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("AccessLevel") != m.end() && !m["AccessLevel"].empty()) {
      accessLevel = make_shared<long>(boost::any_cast<long>(m["AccessLevel"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~ListRepositoryMemberResponseBodyResult() = default;
};
class ListRepositoryMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<ListRepositoryMemberResponseBodyResult>> result{};

  ListRepositoryMemberResponseBody() {}

  explicit ListRepositoryMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListRepositoryMemberResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRepositoryMemberResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListRepositoryMemberResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListRepositoryMemberResponseBody() = default;
};
class ListRepositoryMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListRepositoryMemberResponseBody> body{};

  ListRepositoryMemberResponse() {}

  explicit ListRepositoryMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRepositoryMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRepositoryMemberResponseBody>(model1);
      }
    }
  }


  virtual ~ListRepositoryMemberResponse() = default;
};
class CreateTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> subUserId{};

  CreateTagRequest() {}

  explicit CreateTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~CreateTagRequest() = default;
};
class CreateTagResponseBodyResultCommitInfo : public Darabonba::Model {
public:
  shared_ptr<string> shortId{};
  shared_ptr<string> authorName{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> message{};
  shared_ptr<string> authoredDate{};
  shared_ptr<string> committerName{};
  shared_ptr<string> title{};
  shared_ptr<string> authorEmail{};
  shared_ptr<string> committerEmail{};
  shared_ptr<string> id{};
  shared_ptr<string> committedDate{};
  shared_ptr<vector<string>> parentIds{};

  CreateTagResponseBodyResultCommitInfo() {}

  explicit CreateTagResponseBodyResultCommitInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shortId) {
      res["ShortId"] = boost::any(*shortId);
    }
    if (authorName) {
      res["AuthorName"] = boost::any(*authorName);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (authoredDate) {
      res["AuthoredDate"] = boost::any(*authoredDate);
    }
    if (committerName) {
      res["CommitterName"] = boost::any(*committerName);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (authorEmail) {
      res["AuthorEmail"] = boost::any(*authorEmail);
    }
    if (committerEmail) {
      res["CommitterEmail"] = boost::any(*committerEmail);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (committedDate) {
      res["CommittedDate"] = boost::any(*committedDate);
    }
    if (parentIds) {
      res["ParentIds"] = boost::any(*parentIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ShortId") != m.end() && !m["ShortId"].empty()) {
      shortId = make_shared<string>(boost::any_cast<string>(m["ShortId"]));
    }
    if (m.find("AuthorName") != m.end() && !m["AuthorName"].empty()) {
      authorName = make_shared<string>(boost::any_cast<string>(m["AuthorName"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("AuthoredDate") != m.end() && !m["AuthoredDate"].empty()) {
      authoredDate = make_shared<string>(boost::any_cast<string>(m["AuthoredDate"]));
    }
    if (m.find("CommitterName") != m.end() && !m["CommitterName"].empty()) {
      committerName = make_shared<string>(boost::any_cast<string>(m["CommitterName"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("AuthorEmail") != m.end() && !m["AuthorEmail"].empty()) {
      authorEmail = make_shared<string>(boost::any_cast<string>(m["AuthorEmail"]));
    }
    if (m.find("CommitterEmail") != m.end() && !m["CommitterEmail"].empty()) {
      committerEmail = make_shared<string>(boost::any_cast<string>(m["CommitterEmail"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("CommittedDate") != m.end() && !m["CommittedDate"].empty()) {
      committedDate = make_shared<string>(boost::any_cast<string>(m["CommittedDate"]));
    }
    if (m.find("ParentIds") != m.end() && !m["ParentIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ParentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ParentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      parentIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateTagResponseBodyResultCommitInfo() = default;
};
class CreateTagResponseBodyResultRelease : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> tagName{};

  CreateTagResponseBodyResultRelease() {}

  explicit CreateTagResponseBodyResultRelease(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~CreateTagResponseBodyResultRelease() = default;
};
class CreateTagResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> message{};
  shared_ptr<CreateTagResponseBodyResultCommitInfo> commitInfo{};
  shared_ptr<CreateTagResponseBodyResultRelease> release{};

  CreateTagResponseBodyResult() {}

  explicit CreateTagResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (commitInfo) {
      res["CommitInfo"] = commitInfo ? boost::any(commitInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (release) {
      res["Release"] = release ? boost::any(release->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("CommitInfo") != m.end() && !m["CommitInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["CommitInfo"].type()) {
        CreateTagResponseBodyResultCommitInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CommitInfo"]));
        commitInfo = make_shared<CreateTagResponseBodyResultCommitInfo>(model1);
      }
    }
    if (m.find("Release") != m.end() && !m["Release"].empty()) {
      if (typeid(map<string, boost::any>) == m["Release"].type()) {
        CreateTagResponseBodyResultRelease model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Release"]));
        release = make_shared<CreateTagResponseBodyResultRelease>(model1);
      }
    }
  }


  virtual ~CreateTagResponseBodyResult() = default;
};
class CreateTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<CreateTagResponseBodyResult> result{};

  CreateTagResponseBody() {}

  explicit CreateTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateTagResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateTagResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateTagResponseBody() = default;
};
class CreateTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateTagResponseBody> body{};

  CreateTagResponse() {}

  explicit CreateTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTagResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTagResponse() = default;
};
class GetRepositoryCommitRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};

  GetRepositoryCommitRequest() {}

  explicit GetRepositoryCommitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetRepositoryCommitRequest() = default;
};
class GetRepositoryCommitResponseBodyResultSignature : public Darabonba::Model {
public:
  shared_ptr<string> verificationStatus{};
  shared_ptr<string> gpgKeyId{};

  GetRepositoryCommitResponseBodyResultSignature() {}

  explicit GetRepositoryCommitResponseBodyResultSignature(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (verificationStatus) {
      res["VerificationStatus"] = boost::any(*verificationStatus);
    }
    if (gpgKeyId) {
      res["GpgKeyId"] = boost::any(*gpgKeyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VerificationStatus") != m.end() && !m["VerificationStatus"].empty()) {
      verificationStatus = make_shared<string>(boost::any_cast<string>(m["VerificationStatus"]));
    }
    if (m.find("GpgKeyId") != m.end() && !m["GpgKeyId"].empty()) {
      gpgKeyId = make_shared<string>(boost::any_cast<string>(m["GpgKeyId"]));
    }
  }


  virtual ~GetRepositoryCommitResponseBodyResultSignature() = default;
};
class GetRepositoryCommitResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> shortId{};
  shared_ptr<string> authorName{};
  shared_ptr<string> authorDate{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> message{};
  shared_ptr<string> title{};
  shared_ptr<string> committerName{};
  shared_ptr<string> authorEmail{};
  shared_ptr<string> id{};
  shared_ptr<string> committerEmail{};
  shared_ptr<string> committedDate{};
  shared_ptr<vector<string>> parentIds{};
  shared_ptr<GetRepositoryCommitResponseBodyResultSignature> signature{};

  GetRepositoryCommitResponseBodyResult() {}

  explicit GetRepositoryCommitResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shortId) {
      res["ShortId"] = boost::any(*shortId);
    }
    if (authorName) {
      res["AuthorName"] = boost::any(*authorName);
    }
    if (authorDate) {
      res["AuthorDate"] = boost::any(*authorDate);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (committerName) {
      res["CommitterName"] = boost::any(*committerName);
    }
    if (authorEmail) {
      res["AuthorEmail"] = boost::any(*authorEmail);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (committerEmail) {
      res["CommitterEmail"] = boost::any(*committerEmail);
    }
    if (committedDate) {
      res["CommittedDate"] = boost::any(*committedDate);
    }
    if (parentIds) {
      res["ParentIds"] = boost::any(*parentIds);
    }
    if (signature) {
      res["Signature"] = signature ? boost::any(signature->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ShortId") != m.end() && !m["ShortId"].empty()) {
      shortId = make_shared<string>(boost::any_cast<string>(m["ShortId"]));
    }
    if (m.find("AuthorName") != m.end() && !m["AuthorName"].empty()) {
      authorName = make_shared<string>(boost::any_cast<string>(m["AuthorName"]));
    }
    if (m.find("AuthorDate") != m.end() && !m["AuthorDate"].empty()) {
      authorDate = make_shared<string>(boost::any_cast<string>(m["AuthorDate"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("CommitterName") != m.end() && !m["CommitterName"].empty()) {
      committerName = make_shared<string>(boost::any_cast<string>(m["CommitterName"]));
    }
    if (m.find("AuthorEmail") != m.end() && !m["AuthorEmail"].empty()) {
      authorEmail = make_shared<string>(boost::any_cast<string>(m["AuthorEmail"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("CommitterEmail") != m.end() && !m["CommitterEmail"].empty()) {
      committerEmail = make_shared<string>(boost::any_cast<string>(m["CommitterEmail"]));
    }
    if (m.find("CommittedDate") != m.end() && !m["CommittedDate"].empty()) {
      committedDate = make_shared<string>(boost::any_cast<string>(m["CommittedDate"]));
    }
    if (m.find("ParentIds") != m.end() && !m["ParentIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ParentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ParentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      parentIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      if (typeid(map<string, boost::any>) == m["Signature"].type()) {
        GetRepositoryCommitResponseBodyResultSignature model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Signature"]));
        signature = make_shared<GetRepositoryCommitResponseBodyResultSignature>(model1);
      }
    }
  }


  virtual ~GetRepositoryCommitResponseBodyResult() = default;
};
class GetRepositoryCommitResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetRepositoryCommitResponseBodyResult> result{};

  GetRepositoryCommitResponseBody() {}

  explicit GetRepositoryCommitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetRepositoryCommitResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetRepositoryCommitResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetRepositoryCommitResponseBody() = default;
};
class GetRepositoryCommitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRepositoryCommitResponseBody> body{};

  GetRepositoryCommitResponse() {}

  explicit GetRepositoryCommitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRepositoryCommitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRepositoryCommitResponseBody>(model1);
      }
    }
  }


  virtual ~GetRepositoryCommitResponse() = default;
};
class AddGroupMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> subUserId{};

  AddGroupMemberRequest() {}

  explicit AddGroupMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~AddGroupMemberRequest() = default;
};
class AddGroupMemberResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> email{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> state{};
  shared_ptr<long> accessLevel{};
  shared_ptr<long> id{};

  AddGroupMemberResponseBodyResult() {}

  explicit AddGroupMemberResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (accessLevel) {
      res["AccessLevel"] = boost::any(*accessLevel);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("AccessLevel") != m.end() && !m["AccessLevel"].empty()) {
      accessLevel = make_shared<long>(boost::any_cast<long>(m["AccessLevel"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~AddGroupMemberResponseBodyResult() = default;
};
class AddGroupMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<vector<AddGroupMemberResponseBodyResult>> result{};

  AddGroupMemberResponseBody() {}

  explicit AddGroupMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<AddGroupMemberResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddGroupMemberResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<AddGroupMemberResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~AddGroupMemberResponseBody() = default;
};
class AddGroupMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddGroupMemberResponseBody> body{};

  AddGroupMemberResponse() {}

  explicit AddGroupMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddGroupMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddGroupMemberResponseBody>(model1);
      }
    }
  }


  virtual ~AddGroupMemberResponse() = default;
};
class GetBranchInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> subUserId{};
  shared_ptr<string> branchName{};

  GetBranchInfoRequest() {}

  explicit GetBranchInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    if (branchName) {
      res["BranchName"] = boost::any(*branchName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
    if (m.find("BranchName") != m.end() && !m["BranchName"].empty()) {
      branchName = make_shared<string>(boost::any_cast<string>(m["BranchName"]));
    }
  }


  virtual ~GetBranchInfoRequest() = default;
};
class GetBranchInfoResponseBodyResultCommitInfo : public Darabonba::Model {
public:
  shared_ptr<string> shortId{};
  shared_ptr<string> authorName{};
  shared_ptr<string> authorDate{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> message{};
  shared_ptr<string> committerName{};
  shared_ptr<string> title{};
  shared_ptr<string> authorEmail{};
  shared_ptr<string> committerEmail{};
  shared_ptr<string> id{};
  shared_ptr<string> committedDate{};
  shared_ptr<vector<string>> parentIds{};

  GetBranchInfoResponseBodyResultCommitInfo() {}

  explicit GetBranchInfoResponseBodyResultCommitInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shortId) {
      res["ShortId"] = boost::any(*shortId);
    }
    if (authorName) {
      res["AuthorName"] = boost::any(*authorName);
    }
    if (authorDate) {
      res["AuthorDate"] = boost::any(*authorDate);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (committerName) {
      res["CommitterName"] = boost::any(*committerName);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (authorEmail) {
      res["AuthorEmail"] = boost::any(*authorEmail);
    }
    if (committerEmail) {
      res["CommitterEmail"] = boost::any(*committerEmail);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (committedDate) {
      res["CommittedDate"] = boost::any(*committedDate);
    }
    if (parentIds) {
      res["ParentIds"] = boost::any(*parentIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ShortId") != m.end() && !m["ShortId"].empty()) {
      shortId = make_shared<string>(boost::any_cast<string>(m["ShortId"]));
    }
    if (m.find("AuthorName") != m.end() && !m["AuthorName"].empty()) {
      authorName = make_shared<string>(boost::any_cast<string>(m["AuthorName"]));
    }
    if (m.find("AuthorDate") != m.end() && !m["AuthorDate"].empty()) {
      authorDate = make_shared<string>(boost::any_cast<string>(m["AuthorDate"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("CommitterName") != m.end() && !m["CommitterName"].empty()) {
      committerName = make_shared<string>(boost::any_cast<string>(m["CommitterName"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("AuthorEmail") != m.end() && !m["AuthorEmail"].empty()) {
      authorEmail = make_shared<string>(boost::any_cast<string>(m["AuthorEmail"]));
    }
    if (m.find("CommitterEmail") != m.end() && !m["CommitterEmail"].empty()) {
      committerEmail = make_shared<string>(boost::any_cast<string>(m["CommitterEmail"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("CommittedDate") != m.end() && !m["CommittedDate"].empty()) {
      committedDate = make_shared<string>(boost::any_cast<string>(m["CommittedDate"]));
    }
    if (m.find("ParentIds") != m.end() && !m["ParentIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ParentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ParentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      parentIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetBranchInfoResponseBodyResultCommitInfo() = default;
};
class GetBranchInfoResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> protectedBranch{};
  shared_ptr<string> branchName{};
  shared_ptr<GetBranchInfoResponseBodyResultCommitInfo> commitInfo{};

  GetBranchInfoResponseBodyResult() {}

  explicit GetBranchInfoResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (protectedBranch) {
      res["ProtectedBranch"] = boost::any(*protectedBranch);
    }
    if (branchName) {
      res["BranchName"] = boost::any(*branchName);
    }
    if (commitInfo) {
      res["CommitInfo"] = commitInfo ? boost::any(commitInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProtectedBranch") != m.end() && !m["ProtectedBranch"].empty()) {
      protectedBranch = make_shared<bool>(boost::any_cast<bool>(m["ProtectedBranch"]));
    }
    if (m.find("BranchName") != m.end() && !m["BranchName"].empty()) {
      branchName = make_shared<string>(boost::any_cast<string>(m["BranchName"]));
    }
    if (m.find("CommitInfo") != m.end() && !m["CommitInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["CommitInfo"].type()) {
        GetBranchInfoResponseBodyResultCommitInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CommitInfo"]));
        commitInfo = make_shared<GetBranchInfoResponseBodyResultCommitInfo>(model1);
      }
    }
  }


  virtual ~GetBranchInfoResponseBodyResult() = default;
};
class GetBranchInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<GetBranchInfoResponseBodyResult> result{};

  GetBranchInfoResponseBody() {}

  explicit GetBranchInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetBranchInfoResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetBranchInfoResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetBranchInfoResponseBody() = default;
};
class GetBranchInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetBranchInfoResponseBody> body{};

  GetBranchInfoResponse() {}

  explicit GetBranchInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetBranchInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetBranchInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetBranchInfoResponse() = default;
};
class ListMergeRequestCommentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> fromCommit{};
  shared_ptr<string> toCommit{};

  ListMergeRequestCommentsRequest() {}

  explicit ListMergeRequestCommentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (fromCommit) {
      res["FromCommit"] = boost::any(*fromCommit);
    }
    if (toCommit) {
      res["ToCommit"] = boost::any(*toCommit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("FromCommit") != m.end() && !m["FromCommit"].empty()) {
      fromCommit = make_shared<string>(boost::any_cast<string>(m["FromCommit"]));
    }
    if (m.find("ToCommit") != m.end() && !m["ToCommit"].empty()) {
      toCommit = make_shared<string>(boost::any_cast<string>(m["ToCommit"]));
    }
  }


  virtual ~ListMergeRequestCommentsRequest() = default;
};
class ListMergeRequestCommentsResponseBodyResultAuthor : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> email{};
  shared_ptr<string> name{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<long> id{};

  ListMergeRequestCommentsResponseBodyResultAuthor() {}

  explicit ListMergeRequestCommentsResponseBodyResultAuthor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~ListMergeRequestCommentsResponseBodyResultAuthor() = default;
};
class ListMergeRequestCommentsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> outDated{};
  shared_ptr<long> projectId{};
  shared_ptr<string> rangeContext{};
  shared_ptr<string> createdAt{};
  shared_ptr<long> parentNoteId{};
  shared_ptr<bool> isDraft{};
  shared_ptr<long> closed{};
  shared_ptr<long> line{};
  shared_ptr<string> side{};
  shared_ptr<string> path{};
  shared_ptr<string> note{};
  shared_ptr<string> updatedAt{};
  shared_ptr<long> id{};
  shared_ptr<ListMergeRequestCommentsResponseBodyResultAuthor> author{};

  ListMergeRequestCommentsResponseBodyResult() {}

  explicit ListMergeRequestCommentsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outDated) {
      res["OutDated"] = boost::any(*outDated);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (rangeContext) {
      res["RangeContext"] = boost::any(*rangeContext);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (parentNoteId) {
      res["ParentNoteId"] = boost::any(*parentNoteId);
    }
    if (isDraft) {
      res["IsDraft"] = boost::any(*isDraft);
    }
    if (closed) {
      res["Closed"] = boost::any(*closed);
    }
    if (line) {
      res["Line"] = boost::any(*line);
    }
    if (side) {
      res["Side"] = boost::any(*side);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (author) {
      res["Author"] = author ? boost::any(author->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OutDated") != m.end() && !m["OutDated"].empty()) {
      outDated = make_shared<bool>(boost::any_cast<bool>(m["OutDated"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("RangeContext") != m.end() && !m["RangeContext"].empty()) {
      rangeContext = make_shared<string>(boost::any_cast<string>(m["RangeContext"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("ParentNoteId") != m.end() && !m["ParentNoteId"].empty()) {
      parentNoteId = make_shared<long>(boost::any_cast<long>(m["ParentNoteId"]));
    }
    if (m.find("IsDraft") != m.end() && !m["IsDraft"].empty()) {
      isDraft = make_shared<bool>(boost::any_cast<bool>(m["IsDraft"]));
    }
    if (m.find("Closed") != m.end() && !m["Closed"].empty()) {
      closed = make_shared<long>(boost::any_cast<long>(m["Closed"]));
    }
    if (m.find("Line") != m.end() && !m["Line"].empty()) {
      line = make_shared<long>(boost::any_cast<long>(m["Line"]));
    }
    if (m.find("Side") != m.end() && !m["Side"].empty()) {
      side = make_shared<string>(boost::any_cast<string>(m["Side"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["UpdatedAt"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Author") != m.end() && !m["Author"].empty()) {
      if (typeid(map<string, boost::any>) == m["Author"].type()) {
        ListMergeRequestCommentsResponseBodyResultAuthor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Author"]));
        author = make_shared<ListMergeRequestCommentsResponseBodyResultAuthor>(model1);
      }
    }
  }


  virtual ~ListMergeRequestCommentsResponseBodyResult() = default;
};
class ListMergeRequestCommentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> total{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<ListMergeRequestCommentsResponseBodyResult>> result{};

  ListMergeRequestCommentsResponseBody() {}

  explicit ListMergeRequestCommentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListMergeRequestCommentsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMergeRequestCommentsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListMergeRequestCommentsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListMergeRequestCommentsResponseBody() = default;
};
class ListMergeRequestCommentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListMergeRequestCommentsResponseBody> body{};

  ListMergeRequestCommentsResponse() {}

  explicit ListMergeRequestCommentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMergeRequestCommentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMergeRequestCommentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListMergeRequestCommentsResponse() = default;
};
class CreateRepositoryGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> subUserId{};

  CreateRepositoryGroupRequest() {}

  explicit CreateRepositoryGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~CreateRepositoryGroupRequest() = default;
};
class CreateRepositoryGroupResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> webUrl{};
  shared_ptr<long> parentId{};
  shared_ptr<string> description{};
  shared_ptr<string> nameWithNamespace{};
  shared_ptr<string> pathWithNamespace{};
  shared_ptr<string> visibilityLevel{};
  shared_ptr<string> path{};
  shared_ptr<string> name{};
  shared_ptr<long> id{};

  CreateRepositoryGroupResponseBodyResult() {}

  explicit CreateRepositoryGroupResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (webUrl) {
      res["WebUrl"] = boost::any(*webUrl);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (nameWithNamespace) {
      res["NameWithNamespace"] = boost::any(*nameWithNamespace);
    }
    if (pathWithNamespace) {
      res["PathWithNamespace"] = boost::any(*pathWithNamespace);
    }
    if (visibilityLevel) {
      res["VisibilityLevel"] = boost::any(*visibilityLevel);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("WebUrl") != m.end() && !m["WebUrl"].empty()) {
      webUrl = make_shared<string>(boost::any_cast<string>(m["WebUrl"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<long>(boost::any_cast<long>(m["ParentId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("NameWithNamespace") != m.end() && !m["NameWithNamespace"].empty()) {
      nameWithNamespace = make_shared<string>(boost::any_cast<string>(m["NameWithNamespace"]));
    }
    if (m.find("PathWithNamespace") != m.end() && !m["PathWithNamespace"].empty()) {
      pathWithNamespace = make_shared<string>(boost::any_cast<string>(m["PathWithNamespace"]));
    }
    if (m.find("VisibilityLevel") != m.end() && !m["VisibilityLevel"].empty()) {
      visibilityLevel = make_shared<string>(boost::any_cast<string>(m["VisibilityLevel"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~CreateRepositoryGroupResponseBodyResult() = default;
};
class CreateRepositoryGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> errorCode{};
  shared_ptr<CreateRepositoryGroupResponseBodyResult> result{};

  CreateRepositoryGroupResponseBody() {}

  explicit CreateRepositoryGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateRepositoryGroupResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateRepositoryGroupResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateRepositoryGroupResponseBody() = default;
};
class CreateRepositoryGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateRepositoryGroupResponseBody> body{};

  CreateRepositoryGroupResponse() {}

  explicit CreateRepositoryGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRepositoryGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRepositoryGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRepositoryGroupResponse() = default;
};
class GetMergeRequestDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};

  GetMergeRequestDetailRequest() {}

  explicit GetMergeRequestDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetMergeRequestDetailRequest() = default;
};
class GetMergeRequestDetailResponseBodyResultAssigneeList : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> externUserId{};
  shared_ptr<string> email{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> name{};
  shared_ptr<string> id{};

  GetMergeRequestDetailResponseBodyResultAssigneeList() {}

  explicit GetMergeRequestDetailResponseBodyResultAssigneeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~GetMergeRequestDetailResponseBodyResultAssigneeList() = default;
};
class GetMergeRequestDetailResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> name{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<long> id{};

  GetMergeRequestDetailResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers() {}

  explicit GetMergeRequestDetailResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~GetMergeRequestDetailResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers() = default;
};
class GetMergeRequestDetailResponseBodyResultApproveCheckResultSatisfiedCheckResults : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<string> checkType{};
  shared_ptr<string> checkName{};
  shared_ptr<vector<GetMergeRequestDetailResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers>> extraUsers{};
  shared_ptr<vector<string>> unsatisfiedItems{};
  shared_ptr<vector<string>> satisfiedItems{};

  GetMergeRequestDetailResponseBodyResultApproveCheckResultSatisfiedCheckResults() {}

  explicit GetMergeRequestDetailResponseBodyResultApproveCheckResultSatisfiedCheckResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (checkType) {
      res["CheckType"] = boost::any(*checkType);
    }
    if (checkName) {
      res["CheckName"] = boost::any(*checkName);
    }
    if (extraUsers) {
      vector<boost::any> temp1;
      for(auto item1:*extraUsers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ExtraUsers"] = boost::any(temp1);
    }
    if (unsatisfiedItems) {
      res["UnsatisfiedItems"] = boost::any(*unsatisfiedItems);
    }
    if (satisfiedItems) {
      res["SatisfiedItems"] = boost::any(*satisfiedItems);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CheckType") != m.end() && !m["CheckType"].empty()) {
      checkType = make_shared<string>(boost::any_cast<string>(m["CheckType"]));
    }
    if (m.find("CheckName") != m.end() && !m["CheckName"].empty()) {
      checkName = make_shared<string>(boost::any_cast<string>(m["CheckName"]));
    }
    if (m.find("ExtraUsers") != m.end() && !m["ExtraUsers"].empty()) {
      if (typeid(vector<boost::any>) == m["ExtraUsers"].type()) {
        vector<GetMergeRequestDetailResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ExtraUsers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMergeRequestDetailResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        extraUsers = make_shared<vector<GetMergeRequestDetailResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers>>(expect1);
      }
    }
    if (m.find("UnsatisfiedItems") != m.end() && !m["UnsatisfiedItems"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsatisfiedItems"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsatisfiedItems"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsatisfiedItems = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SatisfiedItems") != m.end() && !m["SatisfiedItems"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SatisfiedItems"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SatisfiedItems"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      satisfiedItems = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetMergeRequestDetailResponseBodyResultApproveCheckResultSatisfiedCheckResults() = default;
};
class GetMergeRequestDetailResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> name{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<long> id{};

  GetMergeRequestDetailResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers() {}

  explicit GetMergeRequestDetailResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~GetMergeRequestDetailResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers() = default;
};
class GetMergeRequestDetailResponseBodyResultApproveCheckResultUnsatisfiedCheckResults : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<string> checkType{};
  shared_ptr<string> checkName{};
  shared_ptr<vector<GetMergeRequestDetailResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers>> extraUsers{};
  shared_ptr<vector<string>> unsatisfiedItems{};
  shared_ptr<vector<string>> satisfiedItems{};

  GetMergeRequestDetailResponseBodyResultApproveCheckResultUnsatisfiedCheckResults() {}

  explicit GetMergeRequestDetailResponseBodyResultApproveCheckResultUnsatisfiedCheckResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (checkType) {
      res["CheckType"] = boost::any(*checkType);
    }
    if (checkName) {
      res["CheckName"] = boost::any(*checkName);
    }
    if (extraUsers) {
      vector<boost::any> temp1;
      for(auto item1:*extraUsers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ExtraUsers"] = boost::any(temp1);
    }
    if (unsatisfiedItems) {
      res["UnsatisfiedItems"] = boost::any(*unsatisfiedItems);
    }
    if (satisfiedItems) {
      res["SatisfiedItems"] = boost::any(*satisfiedItems);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CheckType") != m.end() && !m["CheckType"].empty()) {
      checkType = make_shared<string>(boost::any_cast<string>(m["CheckType"]));
    }
    if (m.find("CheckName") != m.end() && !m["CheckName"].empty()) {
      checkName = make_shared<string>(boost::any_cast<string>(m["CheckName"]));
    }
    if (m.find("ExtraUsers") != m.end() && !m["ExtraUsers"].empty()) {
      if (typeid(vector<boost::any>) == m["ExtraUsers"].type()) {
        vector<GetMergeRequestDetailResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ExtraUsers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMergeRequestDetailResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        extraUsers = make_shared<vector<GetMergeRequestDetailResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers>>(expect1);
      }
    }
    if (m.find("UnsatisfiedItems") != m.end() && !m["UnsatisfiedItems"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsatisfiedItems"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsatisfiedItems"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsatisfiedItems = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SatisfiedItems") != m.end() && !m["SatisfiedItems"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SatisfiedItems"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SatisfiedItems"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      satisfiedItems = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetMergeRequestDetailResponseBodyResultApproveCheckResultUnsatisfiedCheckResults() = default;
};
class GetMergeRequestDetailResponseBodyResultApproveCheckResult : public Darabonba::Model {
public:
  shared_ptr<string> totalCheckResult{};
  shared_ptr<vector<GetMergeRequestDetailResponseBodyResultApproveCheckResultSatisfiedCheckResults>> satisfiedCheckResults{};
  shared_ptr<vector<GetMergeRequestDetailResponseBodyResultApproveCheckResultUnsatisfiedCheckResults>> unsatisfiedCheckResults{};

  GetMergeRequestDetailResponseBodyResultApproveCheckResult() {}

  explicit GetMergeRequestDetailResponseBodyResultApproveCheckResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCheckResult) {
      res["TotalCheckResult"] = boost::any(*totalCheckResult);
    }
    if (satisfiedCheckResults) {
      vector<boost::any> temp1;
      for(auto item1:*satisfiedCheckResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SatisfiedCheckResults"] = boost::any(temp1);
    }
    if (unsatisfiedCheckResults) {
      vector<boost::any> temp1;
      for(auto item1:*unsatisfiedCheckResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UnsatisfiedCheckResults"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCheckResult") != m.end() && !m["TotalCheckResult"].empty()) {
      totalCheckResult = make_shared<string>(boost::any_cast<string>(m["TotalCheckResult"]));
    }
    if (m.find("SatisfiedCheckResults") != m.end() && !m["SatisfiedCheckResults"].empty()) {
      if (typeid(vector<boost::any>) == m["SatisfiedCheckResults"].type()) {
        vector<GetMergeRequestDetailResponseBodyResultApproveCheckResultSatisfiedCheckResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SatisfiedCheckResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMergeRequestDetailResponseBodyResultApproveCheckResultSatisfiedCheckResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        satisfiedCheckResults = make_shared<vector<GetMergeRequestDetailResponseBodyResultApproveCheckResultSatisfiedCheckResults>>(expect1);
      }
    }
    if (m.find("UnsatisfiedCheckResults") != m.end() && !m["UnsatisfiedCheckResults"].empty()) {
      if (typeid(vector<boost::any>) == m["UnsatisfiedCheckResults"].type()) {
        vector<GetMergeRequestDetailResponseBodyResultApproveCheckResultUnsatisfiedCheckResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UnsatisfiedCheckResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMergeRequestDetailResponseBodyResultApproveCheckResultUnsatisfiedCheckResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        unsatisfiedCheckResults = make_shared<vector<GetMergeRequestDetailResponseBodyResultApproveCheckResultUnsatisfiedCheckResults>>(expect1);
      }
    }
  }


  virtual ~GetMergeRequestDetailResponseBodyResultApproveCheckResult() = default;
};
class GetMergeRequestDetailResponseBodyResultAuthor : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> name{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<long> id{};

  GetMergeRequestDetailResponseBodyResultAuthor() {}

  explicit GetMergeRequestDetailResponseBodyResultAuthor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~GetMergeRequestDetailResponseBodyResultAuthor() = default;
};
class GetMergeRequestDetailResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> isSupportMerge{};
  shared_ptr<string> state{};
  shared_ptr<long> behindCommitCount{};
  shared_ptr<long> projectId{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> acceptedRevision{};
  shared_ptr<string> sourceBranch{};
  shared_ptr<string> webUrl{};
  shared_ptr<string> description{};
  shared_ptr<string> nameWithNamespace{};
  shared_ptr<string> mergeType{};
  shared_ptr<string> targetBranch{};
  shared_ptr<long> aheadCommitCount{};
  shared_ptr<string> updatedAt{};
  shared_ptr<string> title{};
  shared_ptr<string> mergeError{};
  shared_ptr<string> mergedRevision{};
  shared_ptr<long> id{};
  shared_ptr<string> mergeStatus{};
  shared_ptr<vector<GetMergeRequestDetailResponseBodyResultAssigneeList>> assigneeList{};
  shared_ptr<GetMergeRequestDetailResponseBodyResultApproveCheckResult> approveCheckResult{};
  shared_ptr<GetMergeRequestDetailResponseBodyResultAuthor> author{};

  GetMergeRequestDetailResponseBodyResult() {}

  explicit GetMergeRequestDetailResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isSupportMerge) {
      res["IsSupportMerge"] = boost::any(*isSupportMerge);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (behindCommitCount) {
      res["BehindCommitCount"] = boost::any(*behindCommitCount);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (acceptedRevision) {
      res["AcceptedRevision"] = boost::any(*acceptedRevision);
    }
    if (sourceBranch) {
      res["SourceBranch"] = boost::any(*sourceBranch);
    }
    if (webUrl) {
      res["WebUrl"] = boost::any(*webUrl);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (nameWithNamespace) {
      res["NameWithNamespace"] = boost::any(*nameWithNamespace);
    }
    if (mergeType) {
      res["MergeType"] = boost::any(*mergeType);
    }
    if (targetBranch) {
      res["TargetBranch"] = boost::any(*targetBranch);
    }
    if (aheadCommitCount) {
      res["AheadCommitCount"] = boost::any(*aheadCommitCount);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (mergeError) {
      res["MergeError"] = boost::any(*mergeError);
    }
    if (mergedRevision) {
      res["MergedRevision"] = boost::any(*mergedRevision);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (mergeStatus) {
      res["MergeStatus"] = boost::any(*mergeStatus);
    }
    if (assigneeList) {
      vector<boost::any> temp1;
      for(auto item1:*assigneeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AssigneeList"] = boost::any(temp1);
    }
    if (approveCheckResult) {
      res["ApproveCheckResult"] = approveCheckResult ? boost::any(approveCheckResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (author) {
      res["Author"] = author ? boost::any(author->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsSupportMerge") != m.end() && !m["IsSupportMerge"].empty()) {
      isSupportMerge = make_shared<bool>(boost::any_cast<bool>(m["IsSupportMerge"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("BehindCommitCount") != m.end() && !m["BehindCommitCount"].empty()) {
      behindCommitCount = make_shared<long>(boost::any_cast<long>(m["BehindCommitCount"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("AcceptedRevision") != m.end() && !m["AcceptedRevision"].empty()) {
      acceptedRevision = make_shared<string>(boost::any_cast<string>(m["AcceptedRevision"]));
    }
    if (m.find("SourceBranch") != m.end() && !m["SourceBranch"].empty()) {
      sourceBranch = make_shared<string>(boost::any_cast<string>(m["SourceBranch"]));
    }
    if (m.find("WebUrl") != m.end() && !m["WebUrl"].empty()) {
      webUrl = make_shared<string>(boost::any_cast<string>(m["WebUrl"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("NameWithNamespace") != m.end() && !m["NameWithNamespace"].empty()) {
      nameWithNamespace = make_shared<string>(boost::any_cast<string>(m["NameWithNamespace"]));
    }
    if (m.find("MergeType") != m.end() && !m["MergeType"].empty()) {
      mergeType = make_shared<string>(boost::any_cast<string>(m["MergeType"]));
    }
    if (m.find("TargetBranch") != m.end() && !m["TargetBranch"].empty()) {
      targetBranch = make_shared<string>(boost::any_cast<string>(m["TargetBranch"]));
    }
    if (m.find("AheadCommitCount") != m.end() && !m["AheadCommitCount"].empty()) {
      aheadCommitCount = make_shared<long>(boost::any_cast<long>(m["AheadCommitCount"]));
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["UpdatedAt"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("MergeError") != m.end() && !m["MergeError"].empty()) {
      mergeError = make_shared<string>(boost::any_cast<string>(m["MergeError"]));
    }
    if (m.find("MergedRevision") != m.end() && !m["MergedRevision"].empty()) {
      mergedRevision = make_shared<string>(boost::any_cast<string>(m["MergedRevision"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("MergeStatus") != m.end() && !m["MergeStatus"].empty()) {
      mergeStatus = make_shared<string>(boost::any_cast<string>(m["MergeStatus"]));
    }
    if (m.find("AssigneeList") != m.end() && !m["AssigneeList"].empty()) {
      if (typeid(vector<boost::any>) == m["AssigneeList"].type()) {
        vector<GetMergeRequestDetailResponseBodyResultAssigneeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AssigneeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMergeRequestDetailResponseBodyResultAssigneeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        assigneeList = make_shared<vector<GetMergeRequestDetailResponseBodyResultAssigneeList>>(expect1);
      }
    }
    if (m.find("ApproveCheckResult") != m.end() && !m["ApproveCheckResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApproveCheckResult"].type()) {
        GetMergeRequestDetailResponseBodyResultApproveCheckResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApproveCheckResult"]));
        approveCheckResult = make_shared<GetMergeRequestDetailResponseBodyResultApproveCheckResult>(model1);
      }
    }
    if (m.find("Author") != m.end() && !m["Author"].empty()) {
      if (typeid(map<string, boost::any>) == m["Author"].type()) {
        GetMergeRequestDetailResponseBodyResultAuthor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Author"]));
        author = make_shared<GetMergeRequestDetailResponseBodyResultAuthor>(model1);
      }
    }
  }


  virtual ~GetMergeRequestDetailResponseBodyResult() = default;
};
class GetMergeRequestDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetMergeRequestDetailResponseBodyResult> result{};

  GetMergeRequestDetailResponseBody() {}

  explicit GetMergeRequestDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetMergeRequestDetailResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetMergeRequestDetailResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetMergeRequestDetailResponseBody() = default;
};
class GetMergeRequestDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetMergeRequestDetailResponseBody> body{};

  GetMergeRequestDetailResponse() {}

  explicit GetMergeRequestDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMergeRequestDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMergeRequestDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetMergeRequestDetailResponse() = default;
};
class ListGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> search{};
  shared_ptr<string> organizationId{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> subUserId{};
  shared_ptr<bool> includePersonal{};

  ListGroupsRequest() {}

  explicit ListGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (search) {
      res["Search"] = boost::any(*search);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    if (includePersonal) {
      res["IncludePersonal"] = boost::any(*includePersonal);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("Search") != m.end() && !m["Search"].empty()) {
      search = make_shared<string>(boost::any_cast<string>(m["Search"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
    if (m.find("IncludePersonal") != m.end() && !m["IncludePersonal"].empty()) {
      includePersonal = make_shared<bool>(boost::any_cast<bool>(m["IncludePersonal"]));
    }
  }


  virtual ~ListGroupsRequest() = default;
};
class ListGroupsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> createdAt{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> webUrl{};
  shared_ptr<long> parentId{};
  shared_ptr<string> description{};
  shared_ptr<string> nameWithNamespace{};
  shared_ptr<string> pathWithNamespace{};
  shared_ptr<string> visibilityLevel{};
  shared_ptr<string> path{};
  shared_ptr<long> accessLevel{};
  shared_ptr<string> updatedAt{};
  shared_ptr<string> name{};
  shared_ptr<long> id{};

  ListGroupsResponseBodyResult() {}

  explicit ListGroupsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (webUrl) {
      res["WebUrl"] = boost::any(*webUrl);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (nameWithNamespace) {
      res["NameWithNamespace"] = boost::any(*nameWithNamespace);
    }
    if (pathWithNamespace) {
      res["PathWithNamespace"] = boost::any(*pathWithNamespace);
    }
    if (visibilityLevel) {
      res["VisibilityLevel"] = boost::any(*visibilityLevel);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (accessLevel) {
      res["AccessLevel"] = boost::any(*accessLevel);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("WebUrl") != m.end() && !m["WebUrl"].empty()) {
      webUrl = make_shared<string>(boost::any_cast<string>(m["WebUrl"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<long>(boost::any_cast<long>(m["ParentId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("NameWithNamespace") != m.end() && !m["NameWithNamespace"].empty()) {
      nameWithNamespace = make_shared<string>(boost::any_cast<string>(m["NameWithNamespace"]));
    }
    if (m.find("PathWithNamespace") != m.end() && !m["PathWithNamespace"].empty()) {
      pathWithNamespace = make_shared<string>(boost::any_cast<string>(m["PathWithNamespace"]));
    }
    if (m.find("VisibilityLevel") != m.end() && !m["VisibilityLevel"].empty()) {
      visibilityLevel = make_shared<string>(boost::any_cast<string>(m["VisibilityLevel"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("AccessLevel") != m.end() && !m["AccessLevel"].empty()) {
      accessLevel = make_shared<long>(boost::any_cast<long>(m["AccessLevel"]));
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["UpdatedAt"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~ListGroupsResponseBodyResult() = default;
};
class ListGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<ListGroupsResponseBodyResult>> result{};

  ListGroupsResponseBody() {}

  explicit ListGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListGroupsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGroupsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListGroupsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListGroupsResponseBody() = default;
};
class ListGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListGroupsResponseBody> body{};

  ListGroupsResponse() {}

  explicit ListGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListGroupsResponse() = default;
};
class ListRepositoryProtectedBranchRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};

  ListRepositoryProtectedBranchRequest() {}

  explicit ListRepositoryProtectedBranchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~ListRepositoryProtectedBranchRequest() = default;
};
class ListRepositoryProtectedBranchResponseBodyResultMergeRequestSettingDefaultAssignees : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> externUid{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<long> id{};
  shared_ptr<string> email{};

  ListRepositoryProtectedBranchResponseBodyResultMergeRequestSettingDefaultAssignees() {}

  explicit ListRepositoryProtectedBranchResponseBodyResultMergeRequestSettingDefaultAssignees(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (externUid) {
      res["ExternUid"] = boost::any(*externUid);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ExternUid") != m.end() && !m["ExternUid"].empty()) {
      externUid = make_shared<string>(boost::any_cast<string>(m["ExternUid"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
  }


  virtual ~ListRepositoryProtectedBranchResponseBodyResultMergeRequestSettingDefaultAssignees() = default;
};
class ListRepositoryProtectedBranchResponseBodyResultMergeRequestSetting : public Darabonba::Model {
public:
  shared_ptr<string> mergeRequestMode{};
  shared_ptr<bool> allowSelfApproval{};
  shared_ptr<bool> isRequireDiscussionProcessed{};
  shared_ptr<bool> required{};
  shared_ptr<long> minimumApproval{};
  shared_ptr<vector<ListRepositoryProtectedBranchResponseBodyResultMergeRequestSettingDefaultAssignees>> defaultAssignees{};
  shared_ptr<vector<long>> allowMergeRequestRoles{};
  shared_ptr<string> whiteList{};

  ListRepositoryProtectedBranchResponseBodyResultMergeRequestSetting() {}

  explicit ListRepositoryProtectedBranchResponseBodyResultMergeRequestSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mergeRequestMode) {
      res["MergeRequestMode"] = boost::any(*mergeRequestMode);
    }
    if (allowSelfApproval) {
      res["AllowSelfApproval"] = boost::any(*allowSelfApproval);
    }
    if (isRequireDiscussionProcessed) {
      res["IsRequireDiscussionProcessed"] = boost::any(*isRequireDiscussionProcessed);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    if (minimumApproval) {
      res["MinimumApproval"] = boost::any(*minimumApproval);
    }
    if (defaultAssignees) {
      vector<boost::any> temp1;
      for(auto item1:*defaultAssignees){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DefaultAssignees"] = boost::any(temp1);
    }
    if (allowMergeRequestRoles) {
      res["AllowMergeRequestRoles"] = boost::any(*allowMergeRequestRoles);
    }
    if (whiteList) {
      res["WhiteList"] = boost::any(*whiteList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MergeRequestMode") != m.end() && !m["MergeRequestMode"].empty()) {
      mergeRequestMode = make_shared<string>(boost::any_cast<string>(m["MergeRequestMode"]));
    }
    if (m.find("AllowSelfApproval") != m.end() && !m["AllowSelfApproval"].empty()) {
      allowSelfApproval = make_shared<bool>(boost::any_cast<bool>(m["AllowSelfApproval"]));
    }
    if (m.find("IsRequireDiscussionProcessed") != m.end() && !m["IsRequireDiscussionProcessed"].empty()) {
      isRequireDiscussionProcessed = make_shared<bool>(boost::any_cast<bool>(m["IsRequireDiscussionProcessed"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["Required"]));
    }
    if (m.find("MinimumApproval") != m.end() && !m["MinimumApproval"].empty()) {
      minimumApproval = make_shared<long>(boost::any_cast<long>(m["MinimumApproval"]));
    }
    if (m.find("DefaultAssignees") != m.end() && !m["DefaultAssignees"].empty()) {
      if (typeid(vector<boost::any>) == m["DefaultAssignees"].type()) {
        vector<ListRepositoryProtectedBranchResponseBodyResultMergeRequestSettingDefaultAssignees> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DefaultAssignees"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRepositoryProtectedBranchResponseBodyResultMergeRequestSettingDefaultAssignees model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        defaultAssignees = make_shared<vector<ListRepositoryProtectedBranchResponseBodyResultMergeRequestSettingDefaultAssignees>>(expect1);
      }
    }
    if (m.find("AllowMergeRequestRoles") != m.end() && !m["AllowMergeRequestRoles"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AllowMergeRequestRoles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AllowMergeRequestRoles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      allowMergeRequestRoles = make_shared<vector<long>>(toVec1);
    }
    if (m.find("WhiteList") != m.end() && !m["WhiteList"].empty()) {
      whiteList = make_shared<string>(boost::any_cast<string>(m["WhiteList"]));
    }
  }


  virtual ~ListRepositoryProtectedBranchResponseBodyResultMergeRequestSetting() = default;
};
class ListRepositoryProtectedBranchResponseBodyResultTestSettingCodingGuidelinesDetection : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<bool> enabled{};

  ListRepositoryProtectedBranchResponseBodyResultTestSettingCodingGuidelinesDetection() {}

  explicit ListRepositoryProtectedBranchResponseBodyResultTestSettingCodingGuidelinesDetection(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
  }


  virtual ~ListRepositoryProtectedBranchResponseBodyResultTestSettingCodingGuidelinesDetection() = default;
};
class ListRepositoryProtectedBranchResponseBodyResultTestSettingSensitiveInfoDetection : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<bool> enabled{};

  ListRepositoryProtectedBranchResponseBodyResultTestSettingSensitiveInfoDetection() {}

  explicit ListRepositoryProtectedBranchResponseBodyResultTestSettingSensitiveInfoDetection(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
  }


  virtual ~ListRepositoryProtectedBranchResponseBodyResultTestSettingSensitiveInfoDetection() = default;
};
class ListRepositoryProtectedBranchResponseBodyResultTestSettingCheckConfigCheckItems : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<bool> required{};

  ListRepositoryProtectedBranchResponseBodyResultTestSettingCheckConfigCheckItems() {}

  explicit ListRepositoryProtectedBranchResponseBodyResultTestSettingCheckConfigCheckItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["Required"]));
    }
  }


  virtual ~ListRepositoryProtectedBranchResponseBodyResultTestSettingCheckConfigCheckItems() = default;
};
class ListRepositoryProtectedBranchResponseBodyResultTestSettingCheckConfig : public Darabonba::Model {
public:
  shared_ptr<vector<ListRepositoryProtectedBranchResponseBodyResultTestSettingCheckConfigCheckItems>> checkItems{};

  ListRepositoryProtectedBranchResponseBodyResultTestSettingCheckConfig() {}

  explicit ListRepositoryProtectedBranchResponseBodyResultTestSettingCheckConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkItems) {
      vector<boost::any> temp1;
      for(auto item1:*checkItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CheckItems"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckItems") != m.end() && !m["CheckItems"].empty()) {
      if (typeid(vector<boost::any>) == m["CheckItems"].type()) {
        vector<ListRepositoryProtectedBranchResponseBodyResultTestSettingCheckConfigCheckItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CheckItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRepositoryProtectedBranchResponseBodyResultTestSettingCheckConfigCheckItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        checkItems = make_shared<vector<ListRepositoryProtectedBranchResponseBodyResultTestSettingCheckConfigCheckItems>>(expect1);
      }
    }
  }


  virtual ~ListRepositoryProtectedBranchResponseBodyResultTestSettingCheckConfig() = default;
};
class ListRepositoryProtectedBranchResponseBodyResultTestSetting : public Darabonba::Model {
public:
  shared_ptr<bool> required{};
  shared_ptr<ListRepositoryProtectedBranchResponseBodyResultTestSettingCodingGuidelinesDetection> codingGuidelinesDetection{};
  shared_ptr<ListRepositoryProtectedBranchResponseBodyResultTestSettingSensitiveInfoDetection> sensitiveInfoDetection{};
  shared_ptr<ListRepositoryProtectedBranchResponseBodyResultTestSettingCheckConfig> checkConfig{};

  ListRepositoryProtectedBranchResponseBodyResultTestSetting() {}

  explicit ListRepositoryProtectedBranchResponseBodyResultTestSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (required) {
      res["Required"] = boost::any(*required);
    }
    if (codingGuidelinesDetection) {
      res["CodingGuidelinesDetection"] = codingGuidelinesDetection ? boost::any(codingGuidelinesDetection->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sensitiveInfoDetection) {
      res["SensitiveInfoDetection"] = sensitiveInfoDetection ? boost::any(sensitiveInfoDetection->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (checkConfig) {
      res["CheckConfig"] = checkConfig ? boost::any(checkConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["Required"]));
    }
    if (m.find("CodingGuidelinesDetection") != m.end() && !m["CodingGuidelinesDetection"].empty()) {
      if (typeid(map<string, boost::any>) == m["CodingGuidelinesDetection"].type()) {
        ListRepositoryProtectedBranchResponseBodyResultTestSettingCodingGuidelinesDetection model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CodingGuidelinesDetection"]));
        codingGuidelinesDetection = make_shared<ListRepositoryProtectedBranchResponseBodyResultTestSettingCodingGuidelinesDetection>(model1);
      }
    }
    if (m.find("SensitiveInfoDetection") != m.end() && !m["SensitiveInfoDetection"].empty()) {
      if (typeid(map<string, boost::any>) == m["SensitiveInfoDetection"].type()) {
        ListRepositoryProtectedBranchResponseBodyResultTestSettingSensitiveInfoDetection model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SensitiveInfoDetection"]));
        sensitiveInfoDetection = make_shared<ListRepositoryProtectedBranchResponseBodyResultTestSettingSensitiveInfoDetection>(model1);
      }
    }
    if (m.find("CheckConfig") != m.end() && !m["CheckConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CheckConfig"].type()) {
        ListRepositoryProtectedBranchResponseBodyResultTestSettingCheckConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CheckConfig"]));
        checkConfig = make_shared<ListRepositoryProtectedBranchResponseBodyResultTestSettingCheckConfig>(model1);
      }
    }
  }


  virtual ~ListRepositoryProtectedBranchResponseBodyResultTestSetting() = default;
};
class ListRepositoryProtectedBranchResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> branch{};
  shared_ptr<long> id{};
  shared_ptr<vector<long>> allowPushRoles{};
  shared_ptr<vector<long>> allowMergeRoles{};
  shared_ptr<ListRepositoryProtectedBranchResponseBodyResultMergeRequestSetting> mergeRequestSetting{};
  shared_ptr<ListRepositoryProtectedBranchResponseBodyResultTestSetting> testSetting{};

  ListRepositoryProtectedBranchResponseBodyResult() {}

  explicit ListRepositoryProtectedBranchResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (branch) {
      res["Branch"] = boost::any(*branch);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (allowPushRoles) {
      res["AllowPushRoles"] = boost::any(*allowPushRoles);
    }
    if (allowMergeRoles) {
      res["AllowMergeRoles"] = boost::any(*allowMergeRoles);
    }
    if (mergeRequestSetting) {
      res["MergeRequestSetting"] = mergeRequestSetting ? boost::any(mergeRequestSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (testSetting) {
      res["TestSetting"] = testSetting ? boost::any(testSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Branch") != m.end() && !m["Branch"].empty()) {
      branch = make_shared<string>(boost::any_cast<string>(m["Branch"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("AllowPushRoles") != m.end() && !m["AllowPushRoles"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AllowPushRoles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AllowPushRoles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      allowPushRoles = make_shared<vector<long>>(toVec1);
    }
    if (m.find("AllowMergeRoles") != m.end() && !m["AllowMergeRoles"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AllowMergeRoles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AllowMergeRoles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      allowMergeRoles = make_shared<vector<long>>(toVec1);
    }
    if (m.find("MergeRequestSetting") != m.end() && !m["MergeRequestSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["MergeRequestSetting"].type()) {
        ListRepositoryProtectedBranchResponseBodyResultMergeRequestSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MergeRequestSetting"]));
        mergeRequestSetting = make_shared<ListRepositoryProtectedBranchResponseBodyResultMergeRequestSetting>(model1);
      }
    }
    if (m.find("TestSetting") != m.end() && !m["TestSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["TestSetting"].type()) {
        ListRepositoryProtectedBranchResponseBodyResultTestSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TestSetting"]));
        testSetting = make_shared<ListRepositoryProtectedBranchResponseBodyResultTestSetting>(model1);
      }
    }
  }


  virtual ~ListRepositoryProtectedBranchResponseBodyResult() = default;
};
class ListRepositoryProtectedBranchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<ListRepositoryProtectedBranchResponseBodyResult>> result{};

  ListRepositoryProtectedBranchResponseBody() {}

  explicit ListRepositoryProtectedBranchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListRepositoryProtectedBranchResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRepositoryProtectedBranchResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListRepositoryProtectedBranchResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListRepositoryProtectedBranchResponseBody() = default;
};
class ListRepositoryProtectedBranchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListRepositoryProtectedBranchResponseBody> body{};

  ListRepositoryProtectedBranchResponse() {}

  explicit ListRepositoryProtectedBranchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRepositoryProtectedBranchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRepositoryProtectedBranchResponseBody>(model1);
      }
    }
  }


  virtual ~ListRepositoryProtectedBranchResponse() = default;
};
class ListOrganizationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<long> accessLevel{};
  shared_ptr<long> minAccessLevel{};

  ListOrganizationsRequest() {}

  explicit ListOrganizationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (accessLevel) {
      res["AccessLevel"] = boost::any(*accessLevel);
    }
    if (minAccessLevel) {
      res["MinAccessLevel"] = boost::any(*minAccessLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("AccessLevel") != m.end() && !m["AccessLevel"].empty()) {
      accessLevel = make_shared<long>(boost::any_cast<long>(m["AccessLevel"]));
    }
    if (m.find("MinAccessLevel") != m.end() && !m["MinAccessLevel"].empty()) {
      minAccessLevel = make_shared<long>(boost::any_cast<long>(m["MinAccessLevel"]));
    }
  }


  virtual ~ListOrganizationsRequest() = default;
};
class ListOrganizationsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> organizationRole{};
  shared_ptr<long> accessLevel{};
  shared_ptr<string> organizationName{};
  shared_ptr<string> organizationId{};

  ListOrganizationsResponseBodyResult() {}

  explicit ListOrganizationsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (organizationRole) {
      res["OrganizationRole"] = boost::any(*organizationRole);
    }
    if (accessLevel) {
      res["AccessLevel"] = boost::any(*accessLevel);
    }
    if (organizationName) {
      res["OrganizationName"] = boost::any(*organizationName);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrganizationRole") != m.end() && !m["OrganizationRole"].empty()) {
      organizationRole = make_shared<string>(boost::any_cast<string>(m["OrganizationRole"]));
    }
    if (m.find("AccessLevel") != m.end() && !m["AccessLevel"].empty()) {
      accessLevel = make_shared<long>(boost::any_cast<long>(m["AccessLevel"]));
    }
    if (m.find("OrganizationName") != m.end() && !m["OrganizationName"].empty()) {
      organizationName = make_shared<string>(boost::any_cast<string>(m["OrganizationName"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~ListOrganizationsResponseBodyResult() = default;
};
class ListOrganizationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<vector<ListOrganizationsResponseBodyResult>> result{};

  ListOrganizationsResponseBody() {}

  explicit ListOrganizationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListOrganizationsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOrganizationsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListOrganizationsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListOrganizationsResponseBody() = default;
};
class ListOrganizationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListOrganizationsResponseBody> body{};

  ListOrganizationsResponse() {}

  explicit ListOrganizationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOrganizationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOrganizationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListOrganizationsResponse() = default;
};
class GetProjectMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> subUserId{};

  GetProjectMemberRequest() {}

  explicit GetProjectMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~GetProjectMemberRequest() = default;
};
class GetProjectMemberResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> accessLevel{};
  shared_ptr<string> externUserId{};
  shared_ptr<string> name{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<long> id{};

  GetProjectMemberResponseBodyResult() {}

  explicit GetProjectMemberResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessLevel) {
      res["AccessLevel"] = boost::any(*accessLevel);
    }
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessLevel") != m.end() && !m["AccessLevel"].empty()) {
      accessLevel = make_shared<long>(boost::any_cast<long>(m["AccessLevel"]));
    }
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~GetProjectMemberResponseBodyResult() = default;
};
class GetProjectMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<GetProjectMemberResponseBodyResult> result{};

  GetProjectMemberResponseBody() {}

  explicit GetProjectMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetProjectMemberResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetProjectMemberResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetProjectMemberResponseBody() = default;
};
class GetProjectMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetProjectMemberResponseBody> body{};

  GetProjectMemberResponse() {}

  explicit GetProjectMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetProjectMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProjectMemberResponseBody>(model1);
      }
    }
  }


  virtual ~GetProjectMemberResponse() = default;
};
class CreateFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> subUserId{};

  CreateFileRequest() {}

  explicit CreateFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~CreateFileRequest() = default;
};
class CreateFileResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> filePath{};
  shared_ptr<string> branchName{};

  CreateFileResponseBodyResult() {}

  explicit CreateFileResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filePath) {
      res["FilePath"] = boost::any(*filePath);
    }
    if (branchName) {
      res["BranchName"] = boost::any(*branchName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FilePath") != m.end() && !m["FilePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["FilePath"]));
    }
    if (m.find("BranchName") != m.end() && !m["BranchName"].empty()) {
      branchName = make_shared<string>(boost::any_cast<string>(m["BranchName"]));
    }
  }


  virtual ~CreateFileResponseBodyResult() = default;
};
class CreateFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<CreateFileResponseBodyResult> result{};

  CreateFileResponseBody() {}

  explicit CreateFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateFileResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateFileResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateFileResponseBody() = default;
};
class CreateFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateFileResponseBody> body{};

  CreateFileResponse() {}

  explicit CreateFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFileResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFileResponse() = default;
};
class ListRepositoryCommitsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> search{};
  shared_ptr<string> path{};
  shared_ptr<string> refName{};
  shared_ptr<bool> showSignature{};

  ListRepositoryCommitsRequest() {}

  explicit ListRepositoryCommitsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (search) {
      res["Search"] = boost::any(*search);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (refName) {
      res["RefName"] = boost::any(*refName);
    }
    if (showSignature) {
      res["ShowSignature"] = boost::any(*showSignature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Search") != m.end() && !m["Search"].empty()) {
      search = make_shared<string>(boost::any_cast<string>(m["Search"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("RefName") != m.end() && !m["RefName"].empty()) {
      refName = make_shared<string>(boost::any_cast<string>(m["RefName"]));
    }
    if (m.find("ShowSignature") != m.end() && !m["ShowSignature"].empty()) {
      showSignature = make_shared<bool>(boost::any_cast<bool>(m["ShowSignature"]));
    }
  }


  virtual ~ListRepositoryCommitsRequest() = default;
};
class ListRepositoryCommitsResponseBodyResultSignature : public Darabonba::Model {
public:
  shared_ptr<string> verificationStatus{};
  shared_ptr<string> gpgKeyId{};

  ListRepositoryCommitsResponseBodyResultSignature() {}

  explicit ListRepositoryCommitsResponseBodyResultSignature(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (verificationStatus) {
      res["VerificationStatus"] = boost::any(*verificationStatus);
    }
    if (gpgKeyId) {
      res["GpgKeyId"] = boost::any(*gpgKeyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VerificationStatus") != m.end() && !m["VerificationStatus"].empty()) {
      verificationStatus = make_shared<string>(boost::any_cast<string>(m["VerificationStatus"]));
    }
    if (m.find("GpgKeyId") != m.end() && !m["GpgKeyId"].empty()) {
      gpgKeyId = make_shared<string>(boost::any_cast<string>(m["GpgKeyId"]));
    }
  }


  virtual ~ListRepositoryCommitsResponseBodyResultSignature() = default;
};
class ListRepositoryCommitsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> shortId{};
  shared_ptr<string> authorName{};
  shared_ptr<string> authorDate{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> message{};
  shared_ptr<string> title{};
  shared_ptr<string> committerName{};
  shared_ptr<string> authorEmail{};
  shared_ptr<string> id{};
  shared_ptr<string> committerEmail{};
  shared_ptr<string> committedDate{};
  shared_ptr<vector<string>> parentIds{};
  shared_ptr<ListRepositoryCommitsResponseBodyResultSignature> signature{};

  ListRepositoryCommitsResponseBodyResult() {}

  explicit ListRepositoryCommitsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shortId) {
      res["ShortId"] = boost::any(*shortId);
    }
    if (authorName) {
      res["AuthorName"] = boost::any(*authorName);
    }
    if (authorDate) {
      res["AuthorDate"] = boost::any(*authorDate);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (committerName) {
      res["CommitterName"] = boost::any(*committerName);
    }
    if (authorEmail) {
      res["AuthorEmail"] = boost::any(*authorEmail);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (committerEmail) {
      res["CommitterEmail"] = boost::any(*committerEmail);
    }
    if (committedDate) {
      res["CommittedDate"] = boost::any(*committedDate);
    }
    if (parentIds) {
      res["ParentIds"] = boost::any(*parentIds);
    }
    if (signature) {
      res["Signature"] = signature ? boost::any(signature->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ShortId") != m.end() && !m["ShortId"].empty()) {
      shortId = make_shared<string>(boost::any_cast<string>(m["ShortId"]));
    }
    if (m.find("AuthorName") != m.end() && !m["AuthorName"].empty()) {
      authorName = make_shared<string>(boost::any_cast<string>(m["AuthorName"]));
    }
    if (m.find("AuthorDate") != m.end() && !m["AuthorDate"].empty()) {
      authorDate = make_shared<string>(boost::any_cast<string>(m["AuthorDate"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("CommitterName") != m.end() && !m["CommitterName"].empty()) {
      committerName = make_shared<string>(boost::any_cast<string>(m["CommitterName"]));
    }
    if (m.find("AuthorEmail") != m.end() && !m["AuthorEmail"].empty()) {
      authorEmail = make_shared<string>(boost::any_cast<string>(m["AuthorEmail"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("CommitterEmail") != m.end() && !m["CommitterEmail"].empty()) {
      committerEmail = make_shared<string>(boost::any_cast<string>(m["CommitterEmail"]));
    }
    if (m.find("CommittedDate") != m.end() && !m["CommittedDate"].empty()) {
      committedDate = make_shared<string>(boost::any_cast<string>(m["CommittedDate"]));
    }
    if (m.find("ParentIds") != m.end() && !m["ParentIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ParentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ParentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      parentIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      if (typeid(map<string, boost::any>) == m["Signature"].type()) {
        ListRepositoryCommitsResponseBodyResultSignature model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Signature"]));
        signature = make_shared<ListRepositoryCommitsResponseBodyResultSignature>(model1);
      }
    }
  }


  virtual ~ListRepositoryCommitsResponseBodyResult() = default;
};
class ListRepositoryCommitsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> total{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<ListRepositoryCommitsResponseBodyResult>> result{};

  ListRepositoryCommitsResponseBody() {}

  explicit ListRepositoryCommitsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListRepositoryCommitsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRepositoryCommitsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListRepositoryCommitsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListRepositoryCommitsResponseBody() = default;
};
class ListRepositoryCommitsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListRepositoryCommitsResponseBody> body{};

  ListRepositoryCommitsResponse() {}

  explicit ListRepositoryCommitsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRepositoryCommitsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRepositoryCommitsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRepositoryCommitsResponse() = default;
};
class GetMergeRequestApproveStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};

  GetMergeRequestApproveStatusRequest() {}

  explicit GetMergeRequestApproveStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetMergeRequestApproveStatusRequest() = default;
};
class GetMergeRequestApproveStatusResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> approveStatus{};

  GetMergeRequestApproveStatusResponseBodyResult() {}

  explicit GetMergeRequestApproveStatusResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (approveStatus) {
      res["ApproveStatus"] = boost::any(*approveStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ApproveStatus") != m.end() && !m["ApproveStatus"].empty()) {
      approveStatus = make_shared<string>(boost::any_cast<string>(m["ApproveStatus"]));
    }
  }


  virtual ~GetMergeRequestApproveStatusResponseBodyResult() = default;
};
class GetMergeRequestApproveStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetMergeRequestApproveStatusResponseBodyResult> result{};

  GetMergeRequestApproveStatusResponseBody() {}

  explicit GetMergeRequestApproveStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetMergeRequestApproveStatusResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetMergeRequestApproveStatusResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetMergeRequestApproveStatusResponseBody() = default;
};
class GetMergeRequestApproveStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetMergeRequestApproveStatusResponseBody> body{};

  GetMergeRequestApproveStatusResponse() {}

  explicit GetMergeRequestApproveStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMergeRequestApproveStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMergeRequestApproveStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetMergeRequestApproveStatusResponse() = default;
};
class ListRepositoriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> order{};
  shared_ptr<string> sort{};
  shared_ptr<string> search{};
  shared_ptr<bool> archive{};

  ListRepositoriesRequest() {}

  explicit ListRepositoriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (search) {
      res["Search"] = boost::any(*search);
    }
    if (archive) {
      res["Archive"] = boost::any(*archive);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("Search") != m.end() && !m["Search"].empty()) {
      search = make_shared<string>(boost::any_cast<string>(m["Search"]));
    }
    if (m.find("Archive") != m.end() && !m["Archive"].empty()) {
      archive = make_shared<bool>(boost::any_cast<bool>(m["Archive"]));
    }
  }


  virtual ~ListRepositoriesRequest() = default;
};
class ListRepositoriesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> lastActivityAt{};
  shared_ptr<long> namespaceId{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<long> starCount{};
  shared_ptr<bool> archive{};
  shared_ptr<string> createdAt{};
  shared_ptr<bool> star{};
  shared_ptr<bool> demoProjectStatus{};
  shared_ptr<string> importStatus{};
  shared_ptr<string> webUrl{};
  shared_ptr<string> description{};
  shared_ptr<string> nameWithNamespace{};
  shared_ptr<string> pathWithNamespace{};
  shared_ptr<string> path{};
  shared_ptr<string> visibilityLevel{};
  shared_ptr<long> accessLevel{};
  shared_ptr<string> updatedAt{};
  shared_ptr<string> name{};
  shared_ptr<long> id{};

  ListRepositoriesResponseBodyResult() {}

  explicit ListRepositoriesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lastActivityAt) {
      res["LastActivityAt"] = boost::any(*lastActivityAt);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (starCount) {
      res["StarCount"] = boost::any(*starCount);
    }
    if (archive) {
      res["Archive"] = boost::any(*archive);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (star) {
      res["Star"] = boost::any(*star);
    }
    if (demoProjectStatus) {
      res["DemoProjectStatus"] = boost::any(*demoProjectStatus);
    }
    if (importStatus) {
      res["ImportStatus"] = boost::any(*importStatus);
    }
    if (webUrl) {
      res["WebUrl"] = boost::any(*webUrl);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (nameWithNamespace) {
      res["NameWithNamespace"] = boost::any(*nameWithNamespace);
    }
    if (pathWithNamespace) {
      res["PathWithNamespace"] = boost::any(*pathWithNamespace);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (visibilityLevel) {
      res["VisibilityLevel"] = boost::any(*visibilityLevel);
    }
    if (accessLevel) {
      res["AccessLevel"] = boost::any(*accessLevel);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LastActivityAt") != m.end() && !m["LastActivityAt"].empty()) {
      lastActivityAt = make_shared<string>(boost::any_cast<string>(m["LastActivityAt"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<long>(boost::any_cast<long>(m["NamespaceId"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("StarCount") != m.end() && !m["StarCount"].empty()) {
      starCount = make_shared<long>(boost::any_cast<long>(m["StarCount"]));
    }
    if (m.find("Archive") != m.end() && !m["Archive"].empty()) {
      archive = make_shared<bool>(boost::any_cast<bool>(m["Archive"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Star") != m.end() && !m["Star"].empty()) {
      star = make_shared<bool>(boost::any_cast<bool>(m["Star"]));
    }
    if (m.find("DemoProjectStatus") != m.end() && !m["DemoProjectStatus"].empty()) {
      demoProjectStatus = make_shared<bool>(boost::any_cast<bool>(m["DemoProjectStatus"]));
    }
    if (m.find("ImportStatus") != m.end() && !m["ImportStatus"].empty()) {
      importStatus = make_shared<string>(boost::any_cast<string>(m["ImportStatus"]));
    }
    if (m.find("WebUrl") != m.end() && !m["WebUrl"].empty()) {
      webUrl = make_shared<string>(boost::any_cast<string>(m["WebUrl"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("NameWithNamespace") != m.end() && !m["NameWithNamespace"].empty()) {
      nameWithNamespace = make_shared<string>(boost::any_cast<string>(m["NameWithNamespace"]));
    }
    if (m.find("PathWithNamespace") != m.end() && !m["PathWithNamespace"].empty()) {
      pathWithNamespace = make_shared<string>(boost::any_cast<string>(m["PathWithNamespace"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("VisibilityLevel") != m.end() && !m["VisibilityLevel"].empty()) {
      visibilityLevel = make_shared<string>(boost::any_cast<string>(m["VisibilityLevel"]));
    }
    if (m.find("AccessLevel") != m.end() && !m["AccessLevel"].empty()) {
      accessLevel = make_shared<long>(boost::any_cast<long>(m["AccessLevel"]));
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["UpdatedAt"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~ListRepositoriesResponseBodyResult() = default;
};
class ListRepositoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> total{};
  shared_ptr<bool> success{};
  shared_ptr<long> errorCode{};
  shared_ptr<vector<ListRepositoriesResponseBodyResult>> result{};

  ListRepositoriesResponseBody() {}

  explicit ListRepositoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListRepositoriesResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRepositoriesResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListRepositoriesResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListRepositoriesResponseBody() = default;
};
class ListRepositoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListRepositoriesResponseBody> body{};

  ListRepositoriesResponse() {}

  explicit ListRepositoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRepositoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRepositoriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListRepositoriesResponse() = default;
};
class UpdateMergeRequestSettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};

  UpdateMergeRequestSettingRequest() {}

  explicit UpdateMergeRequestSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~UpdateMergeRequestSettingRequest() = default;
};
class UpdateMergeRequestSettingResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> result{};

  UpdateMergeRequestSettingResponseBodyResult() {}

  explicit UpdateMergeRequestSettingResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~UpdateMergeRequestSettingResponseBodyResult() = default;
};
class UpdateMergeRequestSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<UpdateMergeRequestSettingResponseBodyResult> result{};

  UpdateMergeRequestSettingResponseBody() {}

  explicit UpdateMergeRequestSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        UpdateMergeRequestSettingResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<UpdateMergeRequestSettingResponseBodyResult>(model1);
      }
    }
  }


  virtual ~UpdateMergeRequestSettingResponseBody() = default;
};
class UpdateMergeRequestSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateMergeRequestSettingResponseBody> body{};

  UpdateMergeRequestSettingResponse() {}

  explicit UpdateMergeRequestSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateMergeRequestSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateMergeRequestSettingResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateMergeRequestSettingResponse() = default;
};
class ListGroupMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> subUserId{};

  ListGroupMemberRequest() {}

  explicit ListGroupMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~ListGroupMemberRequest() = default;
};
class ListGroupMemberResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> email{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> state{};
  shared_ptr<long> accessLevel{};
  shared_ptr<long> id{};

  ListGroupMemberResponseBodyResult() {}

  explicit ListGroupMemberResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (accessLevel) {
      res["AccessLevel"] = boost::any(*accessLevel);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("AccessLevel") != m.end() && !m["AccessLevel"].empty()) {
      accessLevel = make_shared<long>(boost::any_cast<long>(m["AccessLevel"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~ListGroupMemberResponseBodyResult() = default;
};
class ListGroupMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<ListGroupMemberResponseBodyResult>> result{};

  ListGroupMemberResponseBody() {}

  explicit ListGroupMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListGroupMemberResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGroupMemberResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListGroupMemberResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListGroupMemberResponseBody() = default;
};
class ListGroupMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListGroupMemberResponseBody> body{};

  ListGroupMemberResponse() {}

  explicit ListGroupMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListGroupMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGroupMemberResponseBody>(model1);
      }
    }
  }


  virtual ~ListGroupMemberResponse() = default;
};
class UpdateGroupMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> subUserId{};

  UpdateGroupMemberRequest() {}

  explicit UpdateGroupMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~UpdateGroupMemberRequest() = default;
};
class UpdateGroupMemberResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> email{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> state{};
  shared_ptr<long> accessLevel{};
  shared_ptr<long> id{};

  UpdateGroupMemberResponseBodyResult() {}

  explicit UpdateGroupMemberResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (accessLevel) {
      res["AccessLevel"] = boost::any(*accessLevel);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("AccessLevel") != m.end() && !m["AccessLevel"].empty()) {
      accessLevel = make_shared<long>(boost::any_cast<long>(m["AccessLevel"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~UpdateGroupMemberResponseBodyResult() = default;
};
class UpdateGroupMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<UpdateGroupMemberResponseBodyResult> result{};

  UpdateGroupMemberResponseBody() {}

  explicit UpdateGroupMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        UpdateGroupMemberResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<UpdateGroupMemberResponseBodyResult>(model1);
      }
    }
  }


  virtual ~UpdateGroupMemberResponseBody() = default;
};
class UpdateGroupMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateGroupMemberResponseBody> body{};

  UpdateGroupMemberResponse() {}

  explicit UpdateGroupMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateGroupMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateGroupMemberResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateGroupMemberResponse() = default;
};
class CreateMergeRequestCommentRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};

  CreateMergeRequestCommentRequest() {}

  explicit CreateMergeRequestCommentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~CreateMergeRequestCommentRequest() = default;
};
class CreateMergeRequestCommentResponseBodyResultAuthor : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> email{};
  shared_ptr<string> name{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<long> id{};

  CreateMergeRequestCommentResponseBodyResultAuthor() {}

  explicit CreateMergeRequestCommentResponseBodyResultAuthor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~CreateMergeRequestCommentResponseBodyResultAuthor() = default;
};
class CreateMergeRequestCommentResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> outDated{};
  shared_ptr<long> projectId{};
  shared_ptr<string> rangeContext{};
  shared_ptr<string> createdAt{};
  shared_ptr<long> parentNoteId{};
  shared_ptr<bool> isDraft{};
  shared_ptr<long> closed{};
  shared_ptr<long> line{};
  shared_ptr<string> side{};
  shared_ptr<string> path{};
  shared_ptr<string> note{};
  shared_ptr<string> updatedAt{};
  shared_ptr<long> id{};
  shared_ptr<CreateMergeRequestCommentResponseBodyResultAuthor> author{};

  CreateMergeRequestCommentResponseBodyResult() {}

  explicit CreateMergeRequestCommentResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outDated) {
      res["OutDated"] = boost::any(*outDated);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (rangeContext) {
      res["RangeContext"] = boost::any(*rangeContext);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (parentNoteId) {
      res["ParentNoteId"] = boost::any(*parentNoteId);
    }
    if (isDraft) {
      res["IsDraft"] = boost::any(*isDraft);
    }
    if (closed) {
      res["Closed"] = boost::any(*closed);
    }
    if (line) {
      res["Line"] = boost::any(*line);
    }
    if (side) {
      res["Side"] = boost::any(*side);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (author) {
      res["Author"] = author ? boost::any(author->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OutDated") != m.end() && !m["OutDated"].empty()) {
      outDated = make_shared<bool>(boost::any_cast<bool>(m["OutDated"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("RangeContext") != m.end() && !m["RangeContext"].empty()) {
      rangeContext = make_shared<string>(boost::any_cast<string>(m["RangeContext"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("ParentNoteId") != m.end() && !m["ParentNoteId"].empty()) {
      parentNoteId = make_shared<long>(boost::any_cast<long>(m["ParentNoteId"]));
    }
    if (m.find("IsDraft") != m.end() && !m["IsDraft"].empty()) {
      isDraft = make_shared<bool>(boost::any_cast<bool>(m["IsDraft"]));
    }
    if (m.find("Closed") != m.end() && !m["Closed"].empty()) {
      closed = make_shared<long>(boost::any_cast<long>(m["Closed"]));
    }
    if (m.find("Line") != m.end() && !m["Line"].empty()) {
      line = make_shared<long>(boost::any_cast<long>(m["Line"]));
    }
    if (m.find("Side") != m.end() && !m["Side"].empty()) {
      side = make_shared<string>(boost::any_cast<string>(m["Side"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["UpdatedAt"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Author") != m.end() && !m["Author"].empty()) {
      if (typeid(map<string, boost::any>) == m["Author"].type()) {
        CreateMergeRequestCommentResponseBodyResultAuthor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Author"]));
        author = make_shared<CreateMergeRequestCommentResponseBodyResultAuthor>(model1);
      }
    }
  }


  virtual ~CreateMergeRequestCommentResponseBodyResult() = default;
};
class CreateMergeRequestCommentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<CreateMergeRequestCommentResponseBodyResult> result{};

  CreateMergeRequestCommentResponseBody() {}

  explicit CreateMergeRequestCommentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateMergeRequestCommentResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateMergeRequestCommentResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateMergeRequestCommentResponseBody() = default;
};
class CreateMergeRequestCommentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateMergeRequestCommentResponseBody> body{};

  CreateMergeRequestCommentResponse() {}

  explicit CreateMergeRequestCommentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateMergeRequestCommentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMergeRequestCommentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMergeRequestCommentResponse() = default;
};
class CreateRepositoryDeployKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> subUserId{};

  CreateRepositoryDeployKeyRequest() {}

  explicit CreateRepositoryDeployKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~CreateRepositoryDeployKeyRequest() = default;
};
class CreateRepositoryDeployKeyResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> key{};
  shared_ptr<string> title{};
  shared_ptr<long> id{};
  shared_ptr<string> fingerPrint{};

  CreateRepositoryDeployKeyResponseBodyResult() {}

  explicit CreateRepositoryDeployKeyResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (fingerPrint) {
      res["FingerPrint"] = boost::any(*fingerPrint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("FingerPrint") != m.end() && !m["FingerPrint"].empty()) {
      fingerPrint = make_shared<string>(boost::any_cast<string>(m["FingerPrint"]));
    }
  }


  virtual ~CreateRepositoryDeployKeyResponseBodyResult() = default;
};
class CreateRepositoryDeployKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<CreateRepositoryDeployKeyResponseBodyResult> result{};

  CreateRepositoryDeployKeyResponseBody() {}

  explicit CreateRepositoryDeployKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateRepositoryDeployKeyResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateRepositoryDeployKeyResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateRepositoryDeployKeyResponseBody() = default;
};
class CreateRepositoryDeployKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateRepositoryDeployKeyResponseBody> body{};

  CreateRepositoryDeployKeyResponse() {}

  explicit CreateRepositoryDeployKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRepositoryDeployKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRepositoryDeployKeyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRepositoryDeployKeyResponse() = default;
};
class DeleteRepositoryTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};

  DeleteRepositoryTagRequest() {}

  explicit DeleteRepositoryTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~DeleteRepositoryTagRequest() = default;
};
class DeleteRepositoryTagResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> tagName{};

  DeleteRepositoryTagResponseBodyResult() {}

  explicit DeleteRepositoryTagResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~DeleteRepositoryTagResponseBodyResult() = default;
};
class DeleteRepositoryTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<DeleteRepositoryTagResponseBodyResult> result{};

  DeleteRepositoryTagResponseBody() {}

  explicit DeleteRepositoryTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        DeleteRepositoryTagResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DeleteRepositoryTagResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DeleteRepositoryTagResponseBody() = default;
};
class DeleteRepositoryTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteRepositoryTagResponseBody> body{};

  DeleteRepositoryTagResponse() {}

  explicit DeleteRepositoryTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRepositoryTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRepositoryTagResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRepositoryTagResponse() = default;
};
class CreateRepositoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<bool> sync{};
  shared_ptr<bool> createParentPath{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> subUserId{};

  CreateRepositoryRequest() {}

  explicit CreateRepositoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (sync) {
      res["Sync"] = boost::any(*sync);
    }
    if (createParentPath) {
      res["CreateParentPath"] = boost::any(*createParentPath);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("Sync") != m.end() && !m["Sync"].empty()) {
      sync = make_shared<bool>(boost::any_cast<bool>(m["Sync"]));
    }
    if (m.find("CreateParentPath") != m.end() && !m["CreateParentPath"].empty()) {
      createParentPath = make_shared<bool>(boost::any_cast<bool>(m["CreateParentPath"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~CreateRepositoryRequest() = default;
};
class CreateRepositoryResponseBodyResultNamespace : public Darabonba::Model {
public:
  shared_ptr<string> avatar{};
  shared_ptr<string> description{};
  shared_ptr<string> state{};
  shared_ptr<bool> public_{};
  shared_ptr<string> visibilityLevel{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> path{};
  shared_ptr<string> updatedAt{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> id{};

  CreateRepositoryResponseBodyResultNamespace() {}

  explicit CreateRepositoryResponseBodyResultNamespace(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avatar) {
      res["Avatar"] = boost::any(*avatar);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (public_) {
      res["Public"] = boost::any(*public_);
    }
    if (visibilityLevel) {
      res["VisibilityLevel"] = boost::any(*visibilityLevel);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Avatar") != m.end() && !m["Avatar"].empty()) {
      avatar = make_shared<string>(boost::any_cast<string>(m["Avatar"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Public") != m.end() && !m["Public"].empty()) {
      public_ = make_shared<bool>(boost::any_cast<bool>(m["Public"]));
    }
    if (m.find("VisibilityLevel") != m.end() && !m["VisibilityLevel"].empty()) {
      visibilityLevel = make_shared<string>(boost::any_cast<string>(m["VisibilityLevel"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["UpdatedAt"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~CreateRepositoryResponseBodyResultNamespace() = default;
};
class CreateRepositoryResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> lastActivityAt{};
  shared_ptr<string> defaultBranch{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<bool> archive{};
  shared_ptr<bool> snippetsEnableStatus{};
  shared_ptr<string> createdAt{};
  shared_ptr<bool> issuesEnableStatus{};
  shared_ptr<bool> demoProjectStatus{};
  shared_ptr<long> creatorId{};
  shared_ptr<bool> buildsEnableStatus{};
  shared_ptr<string> httpUrlToRepo{};
  shared_ptr<string> webUrl{};
  shared_ptr<string> description{};
  shared_ptr<string> nameWithNamespace{};
  shared_ptr<bool> public_{};
  shared_ptr<string> pathWithNamespace{};
  shared_ptr<bool> mergeRequestEnableStatus{};
  shared_ptr<string> path{};
  shared_ptr<string> visibilityLevel{};
  shared_ptr<bool> wikiEnableStatus{};
  shared_ptr<string> sshUrlToRepo{};
  shared_ptr<string> name{};
  shared_ptr<long> id{};
  shared_ptr<vector<string>> tagList{};
  shared_ptr<CreateRepositoryResponseBodyResultNamespace> namespace_{};

  CreateRepositoryResponseBodyResult() {}

  explicit CreateRepositoryResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lastActivityAt) {
      res["LastActivityAt"] = boost::any(*lastActivityAt);
    }
    if (defaultBranch) {
      res["DefaultBranch"] = boost::any(*defaultBranch);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (archive) {
      res["Archive"] = boost::any(*archive);
    }
    if (snippetsEnableStatus) {
      res["SnippetsEnableStatus"] = boost::any(*snippetsEnableStatus);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (issuesEnableStatus) {
      res["IssuesEnableStatus"] = boost::any(*issuesEnableStatus);
    }
    if (demoProjectStatus) {
      res["DemoProjectStatus"] = boost::any(*demoProjectStatus);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (buildsEnableStatus) {
      res["BuildsEnableStatus"] = boost::any(*buildsEnableStatus);
    }
    if (httpUrlToRepo) {
      res["HttpUrlToRepo"] = boost::any(*httpUrlToRepo);
    }
    if (webUrl) {
      res["WebUrl"] = boost::any(*webUrl);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (nameWithNamespace) {
      res["NameWithNamespace"] = boost::any(*nameWithNamespace);
    }
    if (public_) {
      res["Public"] = boost::any(*public_);
    }
    if (pathWithNamespace) {
      res["PathWithNamespace"] = boost::any(*pathWithNamespace);
    }
    if (mergeRequestEnableStatus) {
      res["MergeRequestEnableStatus"] = boost::any(*mergeRequestEnableStatus);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (visibilityLevel) {
      res["VisibilityLevel"] = boost::any(*visibilityLevel);
    }
    if (wikiEnableStatus) {
      res["WikiEnableStatus"] = boost::any(*wikiEnableStatus);
    }
    if (sshUrlToRepo) {
      res["SshUrlToRepo"] = boost::any(*sshUrlToRepo);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (tagList) {
      res["TagList"] = boost::any(*tagList);
    }
    if (namespace_) {
      res["Namespace"] = namespace_ ? boost::any(namespace_->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LastActivityAt") != m.end() && !m["LastActivityAt"].empty()) {
      lastActivityAt = make_shared<string>(boost::any_cast<string>(m["LastActivityAt"]));
    }
    if (m.find("DefaultBranch") != m.end() && !m["DefaultBranch"].empty()) {
      defaultBranch = make_shared<string>(boost::any_cast<string>(m["DefaultBranch"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Archive") != m.end() && !m["Archive"].empty()) {
      archive = make_shared<bool>(boost::any_cast<bool>(m["Archive"]));
    }
    if (m.find("SnippetsEnableStatus") != m.end() && !m["SnippetsEnableStatus"].empty()) {
      snippetsEnableStatus = make_shared<bool>(boost::any_cast<bool>(m["SnippetsEnableStatus"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("IssuesEnableStatus") != m.end() && !m["IssuesEnableStatus"].empty()) {
      issuesEnableStatus = make_shared<bool>(boost::any_cast<bool>(m["IssuesEnableStatus"]));
    }
    if (m.find("DemoProjectStatus") != m.end() && !m["DemoProjectStatus"].empty()) {
      demoProjectStatus = make_shared<bool>(boost::any_cast<bool>(m["DemoProjectStatus"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<long>(boost::any_cast<long>(m["CreatorId"]));
    }
    if (m.find("BuildsEnableStatus") != m.end() && !m["BuildsEnableStatus"].empty()) {
      buildsEnableStatus = make_shared<bool>(boost::any_cast<bool>(m["BuildsEnableStatus"]));
    }
    if (m.find("HttpUrlToRepo") != m.end() && !m["HttpUrlToRepo"].empty()) {
      httpUrlToRepo = make_shared<string>(boost::any_cast<string>(m["HttpUrlToRepo"]));
    }
    if (m.find("WebUrl") != m.end() && !m["WebUrl"].empty()) {
      webUrl = make_shared<string>(boost::any_cast<string>(m["WebUrl"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("NameWithNamespace") != m.end() && !m["NameWithNamespace"].empty()) {
      nameWithNamespace = make_shared<string>(boost::any_cast<string>(m["NameWithNamespace"]));
    }
    if (m.find("Public") != m.end() && !m["Public"].empty()) {
      public_ = make_shared<bool>(boost::any_cast<bool>(m["Public"]));
    }
    if (m.find("PathWithNamespace") != m.end() && !m["PathWithNamespace"].empty()) {
      pathWithNamespace = make_shared<string>(boost::any_cast<string>(m["PathWithNamespace"]));
    }
    if (m.find("MergeRequestEnableStatus") != m.end() && !m["MergeRequestEnableStatus"].empty()) {
      mergeRequestEnableStatus = make_shared<bool>(boost::any_cast<bool>(m["MergeRequestEnableStatus"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("VisibilityLevel") != m.end() && !m["VisibilityLevel"].empty()) {
      visibilityLevel = make_shared<string>(boost::any_cast<string>(m["VisibilityLevel"]));
    }
    if (m.find("WikiEnableStatus") != m.end() && !m["WikiEnableStatus"].empty()) {
      wikiEnableStatus = make_shared<bool>(boost::any_cast<bool>(m["WikiEnableStatus"]));
    }
    if (m.find("SshUrlToRepo") != m.end() && !m["SshUrlToRepo"].empty()) {
      sshUrlToRepo = make_shared<string>(boost::any_cast<string>(m["SshUrlToRepo"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("TagList") != m.end() && !m["TagList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      if (typeid(map<string, boost::any>) == m["Namespace"].type()) {
        CreateRepositoryResponseBodyResultNamespace model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Namespace"]));
        namespace_ = make_shared<CreateRepositoryResponseBodyResultNamespace>(model1);
      }
    }
  }


  virtual ~CreateRepositoryResponseBodyResult() = default;
};
class CreateRepositoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> errorCode{};
  shared_ptr<CreateRepositoryResponseBodyResult> result{};

  CreateRepositoryResponseBody() {}

  explicit CreateRepositoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateRepositoryResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateRepositoryResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateRepositoryResponseBody() = default;
};
class CreateRepositoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateRepositoryResponseBody> body{};

  CreateRepositoryResponse() {}

  explicit CreateRepositoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRepositoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRepositoryResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRepositoryResponse() = default;
};
class GetCodeCompletionRequest : public Darabonba::Model {
public:
  shared_ptr<string> fetchKeys{};
  shared_ptr<bool> isEncrypted{};

  GetCodeCompletionRequest() {}

  explicit GetCodeCompletionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fetchKeys) {
      res["FetchKeys"] = boost::any(*fetchKeys);
    }
    if (isEncrypted) {
      res["IsEncrypted"] = boost::any(*isEncrypted);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FetchKeys") != m.end() && !m["FetchKeys"].empty()) {
      fetchKeys = make_shared<string>(boost::any_cast<string>(m["FetchKeys"]));
    }
    if (m.find("IsEncrypted") != m.end() && !m["IsEncrypted"].empty()) {
      isEncrypted = make_shared<bool>(boost::any_cast<bool>(m["IsEncrypted"]));
    }
  }


  virtual ~GetCodeCompletionRequest() = default;
};
class GetCodeCompletionResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> clientTimestamp{};
  shared_ptr<string> receiveTimestamp{};
  shared_ptr<string> rspTimestamp{};
  shared_ptr<string> invokeTimestamp{};
  shared_ptr<string> body{};
  shared_ptr<string> fetchTimestamp{};

  GetCodeCompletionResponseBodyResult() {}

  explicit GetCodeCompletionResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientTimestamp) {
      res["ClientTimestamp"] = boost::any(*clientTimestamp);
    }
    if (receiveTimestamp) {
      res["ReceiveTimestamp"] = boost::any(*receiveTimestamp);
    }
    if (rspTimestamp) {
      res["RspTimestamp"] = boost::any(*rspTimestamp);
    }
    if (invokeTimestamp) {
      res["InvokeTimestamp"] = boost::any(*invokeTimestamp);
    }
    if (body) {
      res["Body"] = boost::any(*body);
    }
    if (fetchTimestamp) {
      res["FetchTimestamp"] = boost::any(*fetchTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientTimestamp") != m.end() && !m["ClientTimestamp"].empty()) {
      clientTimestamp = make_shared<string>(boost::any_cast<string>(m["ClientTimestamp"]));
    }
    if (m.find("ReceiveTimestamp") != m.end() && !m["ReceiveTimestamp"].empty()) {
      receiveTimestamp = make_shared<string>(boost::any_cast<string>(m["ReceiveTimestamp"]));
    }
    if (m.find("RspTimestamp") != m.end() && !m["RspTimestamp"].empty()) {
      rspTimestamp = make_shared<string>(boost::any_cast<string>(m["RspTimestamp"]));
    }
    if (m.find("InvokeTimestamp") != m.end() && !m["InvokeTimestamp"].empty()) {
      invokeTimestamp = make_shared<string>(boost::any_cast<string>(m["InvokeTimestamp"]));
    }
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
    if (m.find("FetchTimestamp") != m.end() && !m["FetchTimestamp"].empty()) {
      fetchTimestamp = make_shared<string>(boost::any_cast<string>(m["FetchTimestamp"]));
    }
  }


  virtual ~GetCodeCompletionResponseBodyResult() = default;
};
class GetCodeCompletionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<GetCodeCompletionResponseBodyResult> result{};

  GetCodeCompletionResponseBody() {}

  explicit GetCodeCompletionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetCodeCompletionResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetCodeCompletionResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetCodeCompletionResponseBody() = default;
};
class GetCodeCompletionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetCodeCompletionResponseBody> body{};

  GetCodeCompletionResponse() {}

  explicit GetCodeCompletionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCodeCompletionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCodeCompletionResponseBody>(model1);
      }
    }
  }


  virtual ~GetCodeCompletionResponse() = default;
};
class ListMergeRequestsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> groupIdList{};
  shared_ptr<string> projectIdList{};
  shared_ptr<string> authorCodeupIdList{};
  shared_ptr<string> authorIdList{};
  shared_ptr<string> assigneeCodeupIdList{};
  shared_ptr<string> assigneeIdList{};
  shared_ptr<string> subscriberCodeupIdList{};
  shared_ptr<string> state{};
  shared_ptr<string> search{};
  shared_ptr<string> order{};
  shared_ptr<string> afterDate{};
  shared_ptr<string> beforeDate{};

  ListMergeRequestsRequest() {}

  explicit ListMergeRequestsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (groupIdList) {
      res["GroupIdList"] = boost::any(*groupIdList);
    }
    if (projectIdList) {
      res["ProjectIdList"] = boost::any(*projectIdList);
    }
    if (authorCodeupIdList) {
      res["AuthorCodeupIdList"] = boost::any(*authorCodeupIdList);
    }
    if (authorIdList) {
      res["AuthorIdList"] = boost::any(*authorIdList);
    }
    if (assigneeCodeupIdList) {
      res["AssigneeCodeupIdList"] = boost::any(*assigneeCodeupIdList);
    }
    if (assigneeIdList) {
      res["AssigneeIdList"] = boost::any(*assigneeIdList);
    }
    if (subscriberCodeupIdList) {
      res["SubscriberCodeupIdList"] = boost::any(*subscriberCodeupIdList);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (search) {
      res["Search"] = boost::any(*search);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (afterDate) {
      res["AfterDate"] = boost::any(*afterDate);
    }
    if (beforeDate) {
      res["BeforeDate"] = boost::any(*beforeDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("GroupIdList") != m.end() && !m["GroupIdList"].empty()) {
      groupIdList = make_shared<string>(boost::any_cast<string>(m["GroupIdList"]));
    }
    if (m.find("ProjectIdList") != m.end() && !m["ProjectIdList"].empty()) {
      projectIdList = make_shared<string>(boost::any_cast<string>(m["ProjectIdList"]));
    }
    if (m.find("AuthorCodeupIdList") != m.end() && !m["AuthorCodeupIdList"].empty()) {
      authorCodeupIdList = make_shared<string>(boost::any_cast<string>(m["AuthorCodeupIdList"]));
    }
    if (m.find("AuthorIdList") != m.end() && !m["AuthorIdList"].empty()) {
      authorIdList = make_shared<string>(boost::any_cast<string>(m["AuthorIdList"]));
    }
    if (m.find("AssigneeCodeupIdList") != m.end() && !m["AssigneeCodeupIdList"].empty()) {
      assigneeCodeupIdList = make_shared<string>(boost::any_cast<string>(m["AssigneeCodeupIdList"]));
    }
    if (m.find("AssigneeIdList") != m.end() && !m["AssigneeIdList"].empty()) {
      assigneeIdList = make_shared<string>(boost::any_cast<string>(m["AssigneeIdList"]));
    }
    if (m.find("SubscriberCodeupIdList") != m.end() && !m["SubscriberCodeupIdList"].empty()) {
      subscriberCodeupIdList = make_shared<string>(boost::any_cast<string>(m["SubscriberCodeupIdList"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Search") != m.end() && !m["Search"].empty()) {
      search = make_shared<string>(boost::any_cast<string>(m["Search"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("AfterDate") != m.end() && !m["AfterDate"].empty()) {
      afterDate = make_shared<string>(boost::any_cast<string>(m["AfterDate"]));
    }
    if (m.find("BeforeDate") != m.end() && !m["BeforeDate"].empty()) {
      beforeDate = make_shared<string>(boost::any_cast<string>(m["BeforeDate"]));
    }
  }


  virtual ~ListMergeRequestsRequest() = default;
};
class ListMergeRequestsResponseBodyResultAssigneeList : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> externUserId{};
  shared_ptr<string> email{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> name{};
  shared_ptr<string> id{};

  ListMergeRequestsResponseBodyResultAssigneeList() {}

  explicit ListMergeRequestsResponseBodyResultAssigneeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~ListMergeRequestsResponseBodyResultAssigneeList() = default;
};
class ListMergeRequestsResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> name{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<long> id{};

  ListMergeRequestsResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers() {}

  explicit ListMergeRequestsResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~ListMergeRequestsResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers() = default;
};
class ListMergeRequestsResponseBodyResultApproveCheckResultSatisfiedCheckResults : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<string> checkType{};
  shared_ptr<string> checkName{};
  shared_ptr<vector<ListMergeRequestsResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers>> extraUsers{};
  shared_ptr<vector<string>> unsatisfiedItems{};
  shared_ptr<vector<string>> satisfiedItems{};

  ListMergeRequestsResponseBodyResultApproveCheckResultSatisfiedCheckResults() {}

  explicit ListMergeRequestsResponseBodyResultApproveCheckResultSatisfiedCheckResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (checkType) {
      res["CheckType"] = boost::any(*checkType);
    }
    if (checkName) {
      res["CheckName"] = boost::any(*checkName);
    }
    if (extraUsers) {
      vector<boost::any> temp1;
      for(auto item1:*extraUsers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ExtraUsers"] = boost::any(temp1);
    }
    if (unsatisfiedItems) {
      res["UnsatisfiedItems"] = boost::any(*unsatisfiedItems);
    }
    if (satisfiedItems) {
      res["SatisfiedItems"] = boost::any(*satisfiedItems);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CheckType") != m.end() && !m["CheckType"].empty()) {
      checkType = make_shared<string>(boost::any_cast<string>(m["CheckType"]));
    }
    if (m.find("CheckName") != m.end() && !m["CheckName"].empty()) {
      checkName = make_shared<string>(boost::any_cast<string>(m["CheckName"]));
    }
    if (m.find("ExtraUsers") != m.end() && !m["ExtraUsers"].empty()) {
      if (typeid(vector<boost::any>) == m["ExtraUsers"].type()) {
        vector<ListMergeRequestsResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ExtraUsers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMergeRequestsResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        extraUsers = make_shared<vector<ListMergeRequestsResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers>>(expect1);
      }
    }
    if (m.find("UnsatisfiedItems") != m.end() && !m["UnsatisfiedItems"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsatisfiedItems"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsatisfiedItems"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsatisfiedItems = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SatisfiedItems") != m.end() && !m["SatisfiedItems"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SatisfiedItems"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SatisfiedItems"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      satisfiedItems = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListMergeRequestsResponseBodyResultApproveCheckResultSatisfiedCheckResults() = default;
};
class ListMergeRequestsResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> name{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<long> id{};

  ListMergeRequestsResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers() {}

  explicit ListMergeRequestsResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~ListMergeRequestsResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers() = default;
};
class ListMergeRequestsResponseBodyResultApproveCheckResultUnsatisfiedCheckResults : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<string> checkType{};
  shared_ptr<string> checkName{};
  shared_ptr<vector<ListMergeRequestsResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers>> extraUsers{};
  shared_ptr<vector<string>> unsatisfiedItems{};
  shared_ptr<vector<string>> satisfiedItems{};

  ListMergeRequestsResponseBodyResultApproveCheckResultUnsatisfiedCheckResults() {}

  explicit ListMergeRequestsResponseBodyResultApproveCheckResultUnsatisfiedCheckResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (checkType) {
      res["CheckType"] = boost::any(*checkType);
    }
    if (checkName) {
      res["CheckName"] = boost::any(*checkName);
    }
    if (extraUsers) {
      vector<boost::any> temp1;
      for(auto item1:*extraUsers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ExtraUsers"] = boost::any(temp1);
    }
    if (unsatisfiedItems) {
      res["UnsatisfiedItems"] = boost::any(*unsatisfiedItems);
    }
    if (satisfiedItems) {
      res["SatisfiedItems"] = boost::any(*satisfiedItems);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CheckType") != m.end() && !m["CheckType"].empty()) {
      checkType = make_shared<string>(boost::any_cast<string>(m["CheckType"]));
    }
    if (m.find("CheckName") != m.end() && !m["CheckName"].empty()) {
      checkName = make_shared<string>(boost::any_cast<string>(m["CheckName"]));
    }
    if (m.find("ExtraUsers") != m.end() && !m["ExtraUsers"].empty()) {
      if (typeid(vector<boost::any>) == m["ExtraUsers"].type()) {
        vector<ListMergeRequestsResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ExtraUsers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMergeRequestsResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        extraUsers = make_shared<vector<ListMergeRequestsResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers>>(expect1);
      }
    }
    if (m.find("UnsatisfiedItems") != m.end() && !m["UnsatisfiedItems"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsatisfiedItems"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsatisfiedItems"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsatisfiedItems = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SatisfiedItems") != m.end() && !m["SatisfiedItems"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SatisfiedItems"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SatisfiedItems"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      satisfiedItems = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListMergeRequestsResponseBodyResultApproveCheckResultUnsatisfiedCheckResults() = default;
};
class ListMergeRequestsResponseBodyResultApproveCheckResult : public Darabonba::Model {
public:
  shared_ptr<string> totalCheckResult{};
  shared_ptr<vector<ListMergeRequestsResponseBodyResultApproveCheckResultSatisfiedCheckResults>> satisfiedCheckResults{};
  shared_ptr<vector<ListMergeRequestsResponseBodyResultApproveCheckResultUnsatisfiedCheckResults>> unsatisfiedCheckResults{};

  ListMergeRequestsResponseBodyResultApproveCheckResult() {}

  explicit ListMergeRequestsResponseBodyResultApproveCheckResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCheckResult) {
      res["TotalCheckResult"] = boost::any(*totalCheckResult);
    }
    if (satisfiedCheckResults) {
      vector<boost::any> temp1;
      for(auto item1:*satisfiedCheckResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SatisfiedCheckResults"] = boost::any(temp1);
    }
    if (unsatisfiedCheckResults) {
      vector<boost::any> temp1;
      for(auto item1:*unsatisfiedCheckResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UnsatisfiedCheckResults"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCheckResult") != m.end() && !m["TotalCheckResult"].empty()) {
      totalCheckResult = make_shared<string>(boost::any_cast<string>(m["TotalCheckResult"]));
    }
    if (m.find("SatisfiedCheckResults") != m.end() && !m["SatisfiedCheckResults"].empty()) {
      if (typeid(vector<boost::any>) == m["SatisfiedCheckResults"].type()) {
        vector<ListMergeRequestsResponseBodyResultApproveCheckResultSatisfiedCheckResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SatisfiedCheckResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMergeRequestsResponseBodyResultApproveCheckResultSatisfiedCheckResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        satisfiedCheckResults = make_shared<vector<ListMergeRequestsResponseBodyResultApproveCheckResultSatisfiedCheckResults>>(expect1);
      }
    }
    if (m.find("UnsatisfiedCheckResults") != m.end() && !m["UnsatisfiedCheckResults"].empty()) {
      if (typeid(vector<boost::any>) == m["UnsatisfiedCheckResults"].type()) {
        vector<ListMergeRequestsResponseBodyResultApproveCheckResultUnsatisfiedCheckResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UnsatisfiedCheckResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMergeRequestsResponseBodyResultApproveCheckResultUnsatisfiedCheckResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        unsatisfiedCheckResults = make_shared<vector<ListMergeRequestsResponseBodyResultApproveCheckResultUnsatisfiedCheckResults>>(expect1);
      }
    }
  }


  virtual ~ListMergeRequestsResponseBodyResultApproveCheckResult() = default;
};
class ListMergeRequestsResponseBodyResultAuthor : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> name{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<long> id{};

  ListMergeRequestsResponseBodyResultAuthor() {}

  explicit ListMergeRequestsResponseBodyResultAuthor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~ListMergeRequestsResponseBodyResultAuthor() = default;
};
class ListMergeRequestsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> isSupportMerge{};
  shared_ptr<string> state{};
  shared_ptr<long> behindCommitCount{};
  shared_ptr<long> projectId{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> acceptedRevision{};
  shared_ptr<string> sourceBranch{};
  shared_ptr<string> webUrl{};
  shared_ptr<string> description{};
  shared_ptr<string> nameWithNamespace{};
  shared_ptr<string> mergeType{};
  shared_ptr<string> targetBranch{};
  shared_ptr<long> aheadCommitCount{};
  shared_ptr<string> updatedAt{};
  shared_ptr<string> title{};
  shared_ptr<string> mergeError{};
  shared_ptr<string> mergedRevision{};
  shared_ptr<long> id{};
  shared_ptr<string> mergeStatus{};
  shared_ptr<vector<ListMergeRequestsResponseBodyResultAssigneeList>> assigneeList{};
  shared_ptr<ListMergeRequestsResponseBodyResultApproveCheckResult> approveCheckResult{};
  shared_ptr<ListMergeRequestsResponseBodyResultAuthor> author{};

  ListMergeRequestsResponseBodyResult() {}

  explicit ListMergeRequestsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isSupportMerge) {
      res["IsSupportMerge"] = boost::any(*isSupportMerge);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (behindCommitCount) {
      res["BehindCommitCount"] = boost::any(*behindCommitCount);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (acceptedRevision) {
      res["AcceptedRevision"] = boost::any(*acceptedRevision);
    }
    if (sourceBranch) {
      res["SourceBranch"] = boost::any(*sourceBranch);
    }
    if (webUrl) {
      res["WebUrl"] = boost::any(*webUrl);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (nameWithNamespace) {
      res["NameWithNamespace"] = boost::any(*nameWithNamespace);
    }
    if (mergeType) {
      res["MergeType"] = boost::any(*mergeType);
    }
    if (targetBranch) {
      res["TargetBranch"] = boost::any(*targetBranch);
    }
    if (aheadCommitCount) {
      res["AheadCommitCount"] = boost::any(*aheadCommitCount);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (mergeError) {
      res["MergeError"] = boost::any(*mergeError);
    }
    if (mergedRevision) {
      res["MergedRevision"] = boost::any(*mergedRevision);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (mergeStatus) {
      res["MergeStatus"] = boost::any(*mergeStatus);
    }
    if (assigneeList) {
      vector<boost::any> temp1;
      for(auto item1:*assigneeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AssigneeList"] = boost::any(temp1);
    }
    if (approveCheckResult) {
      res["ApproveCheckResult"] = approveCheckResult ? boost::any(approveCheckResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (author) {
      res["Author"] = author ? boost::any(author->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsSupportMerge") != m.end() && !m["IsSupportMerge"].empty()) {
      isSupportMerge = make_shared<bool>(boost::any_cast<bool>(m["IsSupportMerge"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("BehindCommitCount") != m.end() && !m["BehindCommitCount"].empty()) {
      behindCommitCount = make_shared<long>(boost::any_cast<long>(m["BehindCommitCount"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("AcceptedRevision") != m.end() && !m["AcceptedRevision"].empty()) {
      acceptedRevision = make_shared<string>(boost::any_cast<string>(m["AcceptedRevision"]));
    }
    if (m.find("SourceBranch") != m.end() && !m["SourceBranch"].empty()) {
      sourceBranch = make_shared<string>(boost::any_cast<string>(m["SourceBranch"]));
    }
    if (m.find("WebUrl") != m.end() && !m["WebUrl"].empty()) {
      webUrl = make_shared<string>(boost::any_cast<string>(m["WebUrl"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("NameWithNamespace") != m.end() && !m["NameWithNamespace"].empty()) {
      nameWithNamespace = make_shared<string>(boost::any_cast<string>(m["NameWithNamespace"]));
    }
    if (m.find("MergeType") != m.end() && !m["MergeType"].empty()) {
      mergeType = make_shared<string>(boost::any_cast<string>(m["MergeType"]));
    }
    if (m.find("TargetBranch") != m.end() && !m["TargetBranch"].empty()) {
      targetBranch = make_shared<string>(boost::any_cast<string>(m["TargetBranch"]));
    }
    if (m.find("AheadCommitCount") != m.end() && !m["AheadCommitCount"].empty()) {
      aheadCommitCount = make_shared<long>(boost::any_cast<long>(m["AheadCommitCount"]));
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["UpdatedAt"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("MergeError") != m.end() && !m["MergeError"].empty()) {
      mergeError = make_shared<string>(boost::any_cast<string>(m["MergeError"]));
    }
    if (m.find("MergedRevision") != m.end() && !m["MergedRevision"].empty()) {
      mergedRevision = make_shared<string>(boost::any_cast<string>(m["MergedRevision"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("MergeStatus") != m.end() && !m["MergeStatus"].empty()) {
      mergeStatus = make_shared<string>(boost::any_cast<string>(m["MergeStatus"]));
    }
    if (m.find("AssigneeList") != m.end() && !m["AssigneeList"].empty()) {
      if (typeid(vector<boost::any>) == m["AssigneeList"].type()) {
        vector<ListMergeRequestsResponseBodyResultAssigneeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AssigneeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMergeRequestsResponseBodyResultAssigneeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        assigneeList = make_shared<vector<ListMergeRequestsResponseBodyResultAssigneeList>>(expect1);
      }
    }
    if (m.find("ApproveCheckResult") != m.end() && !m["ApproveCheckResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApproveCheckResult"].type()) {
        ListMergeRequestsResponseBodyResultApproveCheckResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApproveCheckResult"]));
        approveCheckResult = make_shared<ListMergeRequestsResponseBodyResultApproveCheckResult>(model1);
      }
    }
    if (m.find("Author") != m.end() && !m["Author"].empty()) {
      if (typeid(map<string, boost::any>) == m["Author"].type()) {
        ListMergeRequestsResponseBodyResultAuthor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Author"]));
        author = make_shared<ListMergeRequestsResponseBodyResultAuthor>(model1);
      }
    }
  }


  virtual ~ListMergeRequestsResponseBodyResult() = default;
};
class ListMergeRequestsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> total{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<ListMergeRequestsResponseBodyResult>> result{};

  ListMergeRequestsResponseBody() {}

  explicit ListMergeRequestsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListMergeRequestsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMergeRequestsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListMergeRequestsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListMergeRequestsResponseBody() = default;
};
class ListMergeRequestsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListMergeRequestsResponseBody> body{};

  ListMergeRequestsResponse() {}

  explicit ListMergeRequestsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMergeRequestsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMergeRequestsResponseBody>(model1);
      }
    }
  }


  virtual ~ListMergeRequestsResponse() = default;
};
class ListOrganizationSecurityScoresRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};

  ListOrganizationSecurityScoresRequest() {}

  explicit ListOrganizationSecurityScoresRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
  }


  virtual ~ListOrganizationSecurityScoresRequest() = default;
};
class ListOrganizationSecurityScoresResponseBodyResultOrganizationSecurityScore : public Darabonba::Model {
public:
  shared_ptr<long> codeContentScore{};
  shared_ptr<long> memberBehaviorScore{};
  shared_ptr<long> authorityControlScore{};
  shared_ptr<string> level{};

  ListOrganizationSecurityScoresResponseBodyResultOrganizationSecurityScore() {}

  explicit ListOrganizationSecurityScoresResponseBodyResultOrganizationSecurityScore(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeContentScore) {
      res["CodeContentScore"] = boost::any(*codeContentScore);
    }
    if (memberBehaviorScore) {
      res["MemberBehaviorScore"] = boost::any(*memberBehaviorScore);
    }
    if (authorityControlScore) {
      res["AuthorityControlScore"] = boost::any(*authorityControlScore);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeContentScore") != m.end() && !m["CodeContentScore"].empty()) {
      codeContentScore = make_shared<long>(boost::any_cast<long>(m["CodeContentScore"]));
    }
    if (m.find("MemberBehaviorScore") != m.end() && !m["MemberBehaviorScore"].empty()) {
      memberBehaviorScore = make_shared<long>(boost::any_cast<long>(m["MemberBehaviorScore"]));
    }
    if (m.find("AuthorityControlScore") != m.end() && !m["AuthorityControlScore"].empty()) {
      authorityControlScore = make_shared<long>(boost::any_cast<long>(m["AuthorityControlScore"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
  }


  virtual ~ListOrganizationSecurityScoresResponseBodyResultOrganizationSecurityScore() = default;
};
class ListOrganizationSecurityScoresResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<bool> enable{};
  shared_ptr<string> organizationId{};
  shared_ptr<ListOrganizationSecurityScoresResponseBodyResultOrganizationSecurityScore> organizationSecurityScore{};

  ListOrganizationSecurityScoresResponseBodyResult() {}

  explicit ListOrganizationSecurityScoresResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (organizationSecurityScore) {
      res["OrganizationSecurityScore"] = organizationSecurityScore ? boost::any(organizationSecurityScore->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("OrganizationSecurityScore") != m.end() && !m["OrganizationSecurityScore"].empty()) {
      if (typeid(map<string, boost::any>) == m["OrganizationSecurityScore"].type()) {
        ListOrganizationSecurityScoresResponseBodyResultOrganizationSecurityScore model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OrganizationSecurityScore"]));
        organizationSecurityScore = make_shared<ListOrganizationSecurityScoresResponseBodyResultOrganizationSecurityScore>(model1);
      }
    }
  }


  virtual ~ListOrganizationSecurityScoresResponseBodyResult() = default;
};
class ListOrganizationSecurityScoresResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<ListOrganizationSecurityScoresResponseBodyResult>> result{};

  ListOrganizationSecurityScoresResponseBody() {}

  explicit ListOrganizationSecurityScoresResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListOrganizationSecurityScoresResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOrganizationSecurityScoresResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListOrganizationSecurityScoresResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListOrganizationSecurityScoresResponseBody() = default;
};
class ListOrganizationSecurityScoresResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListOrganizationSecurityScoresResponseBody> body{};

  ListOrganizationSecurityScoresResponse() {}

  explicit ListOrganizationSecurityScoresResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOrganizationSecurityScoresResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOrganizationSecurityScoresResponseBody>(model1);
      }
    }
  }


  virtual ~ListOrganizationSecurityScoresResponse() = default;
};
class GetFileBlobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> filePath{};
  shared_ptr<string> ref{};
  shared_ptr<long> from{};
  shared_ptr<long> to{};
  shared_ptr<string> subUserId{};

  GetFileBlobsRequest() {}

  explicit GetFileBlobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (filePath) {
      res["FilePath"] = boost::any(*filePath);
    }
    if (ref) {
      res["Ref"] = boost::any(*ref);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("FilePath") != m.end() && !m["FilePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["FilePath"]));
    }
    if (m.find("Ref") != m.end() && !m["Ref"].empty()) {
      ref = make_shared<string>(boost::any_cast<string>(m["Ref"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["To"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~GetFileBlobsRequest() = default;
};
class GetFileBlobsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> totalLines{};
  shared_ptr<string> content{};

  GetFileBlobsResponseBodyResult() {}

  explicit GetFileBlobsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalLines) {
      res["TotalLines"] = boost::any(*totalLines);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalLines") != m.end() && !m["TotalLines"].empty()) {
      totalLines = make_shared<long>(boost::any_cast<long>(m["TotalLines"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
  }


  virtual ~GetFileBlobsResponseBodyResult() = default;
};
class GetFileBlobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<GetFileBlobsResponseBodyResult> result{};

  GetFileBlobsResponseBody() {}

  explicit GetFileBlobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetFileBlobsResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetFileBlobsResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetFileBlobsResponseBody() = default;
};
class GetFileBlobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetFileBlobsResponseBody> body{};

  GetFileBlobsResponse() {}

  explicit GetFileBlobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFileBlobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFileBlobsResponseBody>(model1);
      }
    }
  }


  virtual ~GetFileBlobsResponse() = default;
};
class MergeMergeRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> subUserId{};

  MergeMergeRequestRequest() {}

  explicit MergeMergeRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~MergeMergeRequestRequest() = default;
};
class MergeMergeRequestResponseBodyResultAssigneeList : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> name{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> id{};

  MergeMergeRequestResponseBodyResultAssigneeList() {}

  explicit MergeMergeRequestResponseBodyResultAssigneeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~MergeMergeRequestResponseBodyResultAssigneeList() = default;
};
class MergeMergeRequestResponseBodyResultAuthor : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> name{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<long> id{};

  MergeMergeRequestResponseBodyResultAuthor() {}

  explicit MergeMergeRequestResponseBodyResultAuthor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~MergeMergeRequestResponseBodyResultAuthor() = default;
};
class MergeMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> name{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<long> id{};

  MergeMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers() {}

  explicit MergeMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~MergeMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers() = default;
};
class MergeMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<string> checkType{};
  shared_ptr<string> checkName{};
  shared_ptr<vector<MergeMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers>> extraUsers{};
  shared_ptr<vector<string>> unsatisfiedItems{};
  shared_ptr<vector<string>> satisfiedItems{};

  MergeMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults() {}

  explicit MergeMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (checkType) {
      res["CheckType"] = boost::any(*checkType);
    }
    if (checkName) {
      res["CheckName"] = boost::any(*checkName);
    }
    if (extraUsers) {
      vector<boost::any> temp1;
      for(auto item1:*extraUsers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ExtraUsers"] = boost::any(temp1);
    }
    if (unsatisfiedItems) {
      res["UnsatisfiedItems"] = boost::any(*unsatisfiedItems);
    }
    if (satisfiedItems) {
      res["SatisfiedItems"] = boost::any(*satisfiedItems);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CheckType") != m.end() && !m["CheckType"].empty()) {
      checkType = make_shared<string>(boost::any_cast<string>(m["CheckType"]));
    }
    if (m.find("CheckName") != m.end() && !m["CheckName"].empty()) {
      checkName = make_shared<string>(boost::any_cast<string>(m["CheckName"]));
    }
    if (m.find("ExtraUsers") != m.end() && !m["ExtraUsers"].empty()) {
      if (typeid(vector<boost::any>) == m["ExtraUsers"].type()) {
        vector<MergeMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ExtraUsers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            MergeMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        extraUsers = make_shared<vector<MergeMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResultsExtraUsers>>(expect1);
      }
    }
    if (m.find("UnsatisfiedItems") != m.end() && !m["UnsatisfiedItems"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsatisfiedItems"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsatisfiedItems"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsatisfiedItems = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SatisfiedItems") != m.end() && !m["SatisfiedItems"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SatisfiedItems"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SatisfiedItems"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      satisfiedItems = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~MergeMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults() = default;
};
class MergeMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> name{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<long> id{};

  MergeMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers() {}

  explicit MergeMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~MergeMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers() = default;
};
class MergeMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<string> checkType{};
  shared_ptr<string> checkName{};
  shared_ptr<vector<MergeMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers>> extraUsers{};
  shared_ptr<vector<string>> unsatisfiedItems{};
  shared_ptr<vector<string>> satisfiedItems{};

  MergeMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults() {}

  explicit MergeMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (checkType) {
      res["CheckType"] = boost::any(*checkType);
    }
    if (checkName) {
      res["CheckName"] = boost::any(*checkName);
    }
    if (extraUsers) {
      vector<boost::any> temp1;
      for(auto item1:*extraUsers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ExtraUsers"] = boost::any(temp1);
    }
    if (unsatisfiedItems) {
      res["UnsatisfiedItems"] = boost::any(*unsatisfiedItems);
    }
    if (satisfiedItems) {
      res["SatisfiedItems"] = boost::any(*satisfiedItems);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CheckType") != m.end() && !m["CheckType"].empty()) {
      checkType = make_shared<string>(boost::any_cast<string>(m["CheckType"]));
    }
    if (m.find("CheckName") != m.end() && !m["CheckName"].empty()) {
      checkName = make_shared<string>(boost::any_cast<string>(m["CheckName"]));
    }
    if (m.find("ExtraUsers") != m.end() && !m["ExtraUsers"].empty()) {
      if (typeid(vector<boost::any>) == m["ExtraUsers"].type()) {
        vector<MergeMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ExtraUsers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            MergeMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        extraUsers = make_shared<vector<MergeMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResultsExtraUsers>>(expect1);
      }
    }
    if (m.find("UnsatisfiedItems") != m.end() && !m["UnsatisfiedItems"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsatisfiedItems"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsatisfiedItems"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsatisfiedItems = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SatisfiedItems") != m.end() && !m["SatisfiedItems"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SatisfiedItems"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SatisfiedItems"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      satisfiedItems = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~MergeMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults() = default;
};
class MergeMergeRequestResponseBodyResultApproveCheckResult : public Darabonba::Model {
public:
  shared_ptr<string> totalCheckResult{};
  shared_ptr<vector<MergeMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults>> satisfiedCheckResults{};
  shared_ptr<vector<MergeMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults>> unsatisfiedCheckResults{};

  MergeMergeRequestResponseBodyResultApproveCheckResult() {}

  explicit MergeMergeRequestResponseBodyResultApproveCheckResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCheckResult) {
      res["TotalCheckResult"] = boost::any(*totalCheckResult);
    }
    if (satisfiedCheckResults) {
      vector<boost::any> temp1;
      for(auto item1:*satisfiedCheckResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SatisfiedCheckResults"] = boost::any(temp1);
    }
    if (unsatisfiedCheckResults) {
      vector<boost::any> temp1;
      for(auto item1:*unsatisfiedCheckResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UnsatisfiedCheckResults"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCheckResult") != m.end() && !m["TotalCheckResult"].empty()) {
      totalCheckResult = make_shared<string>(boost::any_cast<string>(m["TotalCheckResult"]));
    }
    if (m.find("SatisfiedCheckResults") != m.end() && !m["SatisfiedCheckResults"].empty()) {
      if (typeid(vector<boost::any>) == m["SatisfiedCheckResults"].type()) {
        vector<MergeMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SatisfiedCheckResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            MergeMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        satisfiedCheckResults = make_shared<vector<MergeMergeRequestResponseBodyResultApproveCheckResultSatisfiedCheckResults>>(expect1);
      }
    }
    if (m.find("UnsatisfiedCheckResults") != m.end() && !m["UnsatisfiedCheckResults"].empty()) {
      if (typeid(vector<boost::any>) == m["UnsatisfiedCheckResults"].type()) {
        vector<MergeMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UnsatisfiedCheckResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            MergeMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        unsatisfiedCheckResults = make_shared<vector<MergeMergeRequestResponseBodyResultApproveCheckResultUnsatisfiedCheckResults>>(expect1);
      }
    }
  }


  virtual ~MergeMergeRequestResponseBodyResultApproveCheckResult() = default;
};
class MergeMergeRequestResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> behindCommitCount{};
  shared_ptr<string> state{};
  shared_ptr<long> projectId{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> acceptedRevision{};
  shared_ptr<string> sourceBranch{};
  shared_ptr<string> webUrl{};
  shared_ptr<string> description{};
  shared_ptr<string> mergeType{};
  shared_ptr<string> nameWithNamespace{};
  shared_ptr<string> targetBranch{};
  shared_ptr<long> aheadCommitCount{};
  shared_ptr<string> updatedAt{};
  shared_ptr<string> title{};
  shared_ptr<string> mergeError{};
  shared_ptr<string> mergedRevision{};
  shared_ptr<long> id{};
  shared_ptr<string> mergeStatus{};
  shared_ptr<vector<MergeMergeRequestResponseBodyResultAssigneeList>> assigneeList{};
  shared_ptr<MergeMergeRequestResponseBodyResultAuthor> author{};
  shared_ptr<MergeMergeRequestResponseBodyResultApproveCheckResult> approveCheckResult{};

  MergeMergeRequestResponseBodyResult() {}

  explicit MergeMergeRequestResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (behindCommitCount) {
      res["BehindCommitCount"] = boost::any(*behindCommitCount);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (acceptedRevision) {
      res["AcceptedRevision"] = boost::any(*acceptedRevision);
    }
    if (sourceBranch) {
      res["SourceBranch"] = boost::any(*sourceBranch);
    }
    if (webUrl) {
      res["WebUrl"] = boost::any(*webUrl);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (mergeType) {
      res["MergeType"] = boost::any(*mergeType);
    }
    if (nameWithNamespace) {
      res["NameWithNamespace"] = boost::any(*nameWithNamespace);
    }
    if (targetBranch) {
      res["TargetBranch"] = boost::any(*targetBranch);
    }
    if (aheadCommitCount) {
      res["AheadCommitCount"] = boost::any(*aheadCommitCount);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (mergeError) {
      res["MergeError"] = boost::any(*mergeError);
    }
    if (mergedRevision) {
      res["MergedRevision"] = boost::any(*mergedRevision);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (mergeStatus) {
      res["MergeStatus"] = boost::any(*mergeStatus);
    }
    if (assigneeList) {
      vector<boost::any> temp1;
      for(auto item1:*assigneeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AssigneeList"] = boost::any(temp1);
    }
    if (author) {
      res["Author"] = author ? boost::any(author->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (approveCheckResult) {
      res["ApproveCheckResult"] = approveCheckResult ? boost::any(approveCheckResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BehindCommitCount") != m.end() && !m["BehindCommitCount"].empty()) {
      behindCommitCount = make_shared<long>(boost::any_cast<long>(m["BehindCommitCount"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("AcceptedRevision") != m.end() && !m["AcceptedRevision"].empty()) {
      acceptedRevision = make_shared<string>(boost::any_cast<string>(m["AcceptedRevision"]));
    }
    if (m.find("SourceBranch") != m.end() && !m["SourceBranch"].empty()) {
      sourceBranch = make_shared<string>(boost::any_cast<string>(m["SourceBranch"]));
    }
    if (m.find("WebUrl") != m.end() && !m["WebUrl"].empty()) {
      webUrl = make_shared<string>(boost::any_cast<string>(m["WebUrl"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("MergeType") != m.end() && !m["MergeType"].empty()) {
      mergeType = make_shared<string>(boost::any_cast<string>(m["MergeType"]));
    }
    if (m.find("NameWithNamespace") != m.end() && !m["NameWithNamespace"].empty()) {
      nameWithNamespace = make_shared<string>(boost::any_cast<string>(m["NameWithNamespace"]));
    }
    if (m.find("TargetBranch") != m.end() && !m["TargetBranch"].empty()) {
      targetBranch = make_shared<string>(boost::any_cast<string>(m["TargetBranch"]));
    }
    if (m.find("AheadCommitCount") != m.end() && !m["AheadCommitCount"].empty()) {
      aheadCommitCount = make_shared<long>(boost::any_cast<long>(m["AheadCommitCount"]));
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["UpdatedAt"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("MergeError") != m.end() && !m["MergeError"].empty()) {
      mergeError = make_shared<string>(boost::any_cast<string>(m["MergeError"]));
    }
    if (m.find("MergedRevision") != m.end() && !m["MergedRevision"].empty()) {
      mergedRevision = make_shared<string>(boost::any_cast<string>(m["MergedRevision"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("MergeStatus") != m.end() && !m["MergeStatus"].empty()) {
      mergeStatus = make_shared<string>(boost::any_cast<string>(m["MergeStatus"]));
    }
    if (m.find("AssigneeList") != m.end() && !m["AssigneeList"].empty()) {
      if (typeid(vector<boost::any>) == m["AssigneeList"].type()) {
        vector<MergeMergeRequestResponseBodyResultAssigneeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AssigneeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            MergeMergeRequestResponseBodyResultAssigneeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        assigneeList = make_shared<vector<MergeMergeRequestResponseBodyResultAssigneeList>>(expect1);
      }
    }
    if (m.find("Author") != m.end() && !m["Author"].empty()) {
      if (typeid(map<string, boost::any>) == m["Author"].type()) {
        MergeMergeRequestResponseBodyResultAuthor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Author"]));
        author = make_shared<MergeMergeRequestResponseBodyResultAuthor>(model1);
      }
    }
    if (m.find("ApproveCheckResult") != m.end() && !m["ApproveCheckResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApproveCheckResult"].type()) {
        MergeMergeRequestResponseBodyResultApproveCheckResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApproveCheckResult"]));
        approveCheckResult = make_shared<MergeMergeRequestResponseBodyResultApproveCheckResult>(model1);
      }
    }
  }


  virtual ~MergeMergeRequestResponseBodyResult() = default;
};
class MergeMergeRequestResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<MergeMergeRequestResponseBodyResult> result{};

  MergeMergeRequestResponseBody() {}

  explicit MergeMergeRequestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        MergeMergeRequestResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<MergeMergeRequestResponseBodyResult>(model1);
      }
    }
  }


  virtual ~MergeMergeRequestResponseBody() = default;
};
class MergeMergeRequestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<MergeMergeRequestResponseBody> body{};

  MergeMergeRequestResponse() {}

  explicit MergeMergeRequestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MergeMergeRequestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MergeMergeRequestResponseBody>(model1);
      }
    }
  }


  virtual ~MergeMergeRequestResponse() = default;
};
class DeleteGroupMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> subUserId{};

  DeleteGroupMemberRequest() {}

  explicit DeleteGroupMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~DeleteGroupMemberRequest() = default;
};
class DeleteGroupMemberResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> email{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> state{};
  shared_ptr<long> accessLevel{};
  shared_ptr<long> id{};

  DeleteGroupMemberResponseBodyResult() {}

  explicit DeleteGroupMemberResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (accessLevel) {
      res["AccessLevel"] = boost::any(*accessLevel);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("AccessLevel") != m.end() && !m["AccessLevel"].empty()) {
      accessLevel = make_shared<long>(boost::any_cast<long>(m["AccessLevel"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~DeleteGroupMemberResponseBodyResult() = default;
};
class DeleteGroupMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<DeleteGroupMemberResponseBodyResult> result{};

  DeleteGroupMemberResponseBody() {}

  explicit DeleteGroupMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        DeleteGroupMemberResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DeleteGroupMemberResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DeleteGroupMemberResponseBody() = default;
};
class DeleteGroupMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteGroupMemberResponseBody> body{};

  DeleteGroupMemberResponse() {}

  explicit DeleteGroupMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteGroupMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGroupMemberResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGroupMemberResponse() = default;
};
class ListRepositoryMemberWithInheritedRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};

  ListRepositoryMemberWithInheritedRequest() {}

  explicit ListRepositoryMemberWithInheritedRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~ListRepositoryMemberWithInheritedRequest() = default;
};
class ListRepositoryMemberWithInheritedResponseBodyResultInherited : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> nameWithNamespace{};
  shared_ptr<string> pathWithNamespace{};
  shared_ptr<string> visibilityLevel{};
  shared_ptr<string> path{};
  shared_ptr<string> name{};
  shared_ptr<long> id{};

  ListRepositoryMemberWithInheritedResponseBodyResultInherited() {}

  explicit ListRepositoryMemberWithInheritedResponseBodyResultInherited(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (nameWithNamespace) {
      res["NameWithNamespace"] = boost::any(*nameWithNamespace);
    }
    if (pathWithNamespace) {
      res["PathWithNamespace"] = boost::any(*pathWithNamespace);
    }
    if (visibilityLevel) {
      res["VisibilityLevel"] = boost::any(*visibilityLevel);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("NameWithNamespace") != m.end() && !m["NameWithNamespace"].empty()) {
      nameWithNamespace = make_shared<string>(boost::any_cast<string>(m["NameWithNamespace"]));
    }
    if (m.find("PathWithNamespace") != m.end() && !m["PathWithNamespace"].empty()) {
      pathWithNamespace = make_shared<string>(boost::any_cast<string>(m["PathWithNamespace"]));
    }
    if (m.find("VisibilityLevel") != m.end() && !m["VisibilityLevel"].empty()) {
      visibilityLevel = make_shared<string>(boost::any_cast<string>(m["VisibilityLevel"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~ListRepositoryMemberWithInheritedResponseBodyResultInherited() = default;
};
class ListRepositoryMemberWithInheritedResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> externUserId{};
  shared_ptr<string> email{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> state{};
  shared_ptr<long> accessLevel{};
  shared_ptr<string> name{};
  shared_ptr<long> id{};
  shared_ptr<string> username{};
  shared_ptr<ListRepositoryMemberWithInheritedResponseBodyResultInherited> inherited{};

  ListRepositoryMemberWithInheritedResponseBodyResult() {}

  explicit ListRepositoryMemberWithInheritedResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (accessLevel) {
      res["AccessLevel"] = boost::any(*accessLevel);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    if (inherited) {
      res["Inherited"] = inherited ? boost::any(inherited->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("AccessLevel") != m.end() && !m["AccessLevel"].empty()) {
      accessLevel = make_shared<long>(boost::any_cast<long>(m["AccessLevel"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
    if (m.find("Inherited") != m.end() && !m["Inherited"].empty()) {
      if (typeid(map<string, boost::any>) == m["Inherited"].type()) {
        ListRepositoryMemberWithInheritedResponseBodyResultInherited model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Inherited"]));
        inherited = make_shared<ListRepositoryMemberWithInheritedResponseBodyResultInherited>(model1);
      }
    }
  }


  virtual ~ListRepositoryMemberWithInheritedResponseBodyResult() = default;
};
class ListRepositoryMemberWithInheritedResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<vector<ListRepositoryMemberWithInheritedResponseBodyResult>> result{};

  ListRepositoryMemberWithInheritedResponseBody() {}

  explicit ListRepositoryMemberWithInheritedResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListRepositoryMemberWithInheritedResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRepositoryMemberWithInheritedResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListRepositoryMemberWithInheritedResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListRepositoryMemberWithInheritedResponseBody() = default;
};
class ListRepositoryMemberWithInheritedResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListRepositoryMemberWithInheritedResponseBody> body{};

  ListRepositoryMemberWithInheritedResponse() {}

  explicit ListRepositoryMemberWithInheritedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRepositoryMemberWithInheritedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRepositoryMemberWithInheritedResponseBody>(model1);
      }
    }
  }


  virtual ~ListRepositoryMemberWithInheritedResponse() = default;
};
class GetGroupDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<long> groupId{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> subUserId{};

  GetGroupDetailRequest() {}

  explicit GetGroupDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<long>(boost::any_cast<long>(m["GroupId"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~GetGroupDetailRequest() = default;
};
class GetGroupDetailResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> webUrl{};
  shared_ptr<long> parentId{};
  shared_ptr<string> description{};
  shared_ptr<string> nameWithNamespace{};
  shared_ptr<string> pathWithNamespace{};
  shared_ptr<string> path{};
  shared_ptr<string> visibilityLevel{};
  shared_ptr<string> name{};
  shared_ptr<long> id{};

  GetGroupDetailResponseBodyResult() {}

  explicit GetGroupDetailResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (webUrl) {
      res["WebUrl"] = boost::any(*webUrl);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (nameWithNamespace) {
      res["NameWithNamespace"] = boost::any(*nameWithNamespace);
    }
    if (pathWithNamespace) {
      res["PathWithNamespace"] = boost::any(*pathWithNamespace);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (visibilityLevel) {
      res["VisibilityLevel"] = boost::any(*visibilityLevel);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("WebUrl") != m.end() && !m["WebUrl"].empty()) {
      webUrl = make_shared<string>(boost::any_cast<string>(m["WebUrl"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<long>(boost::any_cast<long>(m["ParentId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("NameWithNamespace") != m.end() && !m["NameWithNamespace"].empty()) {
      nameWithNamespace = make_shared<string>(boost::any_cast<string>(m["NameWithNamespace"]));
    }
    if (m.find("PathWithNamespace") != m.end() && !m["PathWithNamespace"].empty()) {
      pathWithNamespace = make_shared<string>(boost::any_cast<string>(m["PathWithNamespace"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("VisibilityLevel") != m.end() && !m["VisibilityLevel"].empty()) {
      visibilityLevel = make_shared<string>(boost::any_cast<string>(m["VisibilityLevel"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~GetGroupDetailResponseBodyResult() = default;
};
class GetGroupDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<GetGroupDetailResponseBodyResult> result{};

  GetGroupDetailResponseBody() {}

  explicit GetGroupDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetGroupDetailResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetGroupDetailResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetGroupDetailResponseBody() = default;
};
class GetGroupDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetGroupDetailResponseBody> body{};

  GetGroupDetailResponse() {}

  explicit GetGroupDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetGroupDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGroupDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetGroupDetailResponse() = default;
};
class GetCodeupOrganizationRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> subUserId{};

  GetCodeupOrganizationRequest() {}

  explicit GetCodeupOrganizationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~GetCodeupOrganizationRequest() = default;
};
class GetCodeupOrganizationResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> namespaceId{};
  shared_ptr<string> userRole{};
  shared_ptr<string> path{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> updatedAt{};
  shared_ptr<long> id{};
  shared_ptr<string> organizationId{};

  GetCodeupOrganizationResponseBodyResult() {}

  explicit GetCodeupOrganizationResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (userRole) {
      res["UserRole"] = boost::any(*userRole);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<long>(boost::any_cast<long>(m["NamespaceId"]));
    }
    if (m.find("UserRole") != m.end() && !m["UserRole"].empty()) {
      userRole = make_shared<string>(boost::any_cast<string>(m["UserRole"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["UpdatedAt"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetCodeupOrganizationResponseBodyResult() = default;
};
class GetCodeupOrganizationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<GetCodeupOrganizationResponseBodyResult> result{};

  GetCodeupOrganizationResponseBody() {}

  explicit GetCodeupOrganizationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetCodeupOrganizationResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetCodeupOrganizationResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetCodeupOrganizationResponseBody() = default;
};
class GetCodeupOrganizationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetCodeupOrganizationResponseBody> body{};

  GetCodeupOrganizationResponse() {}

  explicit GetCodeupOrganizationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCodeupOrganizationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCodeupOrganizationResponseBody>(model1);
      }
    }
  }


  virtual ~GetCodeupOrganizationResponse() = default;
};
class GetOrganizationSecurityCenterStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};

  GetOrganizationSecurityCenterStatusRequest() {}

  explicit GetOrganizationSecurityCenterStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
  }


  virtual ~GetOrganizationSecurityCenterStatusRequest() = default;
};
class GetOrganizationSecurityCenterStatusResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};

  GetOrganizationSecurityCenterStatusResponseBodyResult() {}

  explicit GetOrganizationSecurityCenterStatusResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
  }


  virtual ~GetOrganizationSecurityCenterStatusResponseBodyResult() = default;
};
class GetOrganizationSecurityCenterStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetOrganizationSecurityCenterStatusResponseBodyResult> result{};

  GetOrganizationSecurityCenterStatusResponseBody() {}

  explicit GetOrganizationSecurityCenterStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetOrganizationSecurityCenterStatusResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetOrganizationSecurityCenterStatusResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetOrganizationSecurityCenterStatusResponseBody() = default;
};
class GetOrganizationSecurityCenterStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetOrganizationSecurityCenterStatusResponseBody> body{};

  GetOrganizationSecurityCenterStatusResponse() {}

  explicit GetOrganizationSecurityCenterStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOrganizationSecurityCenterStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOrganizationSecurityCenterStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetOrganizationSecurityCenterStatusResponse() = default;
};
class ListRepositoryBranchesRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> subUserId{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> search{};

  ListRepositoryBranchesRequest() {}

  explicit ListRepositoryBranchesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (search) {
      res["Search"] = boost::any(*search);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Search") != m.end() && !m["Search"].empty()) {
      search = make_shared<string>(boost::any_cast<string>(m["Search"]));
    }
  }


  virtual ~ListRepositoryBranchesRequest() = default;
};
class ListRepositoryBranchesResponseBodyResultCommitInfo : public Darabonba::Model {
public:
  shared_ptr<string> shortId{};
  shared_ptr<string> authorName{};
  shared_ptr<string> authorDate{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> message{};
  shared_ptr<string> committerName{};
  shared_ptr<string> title{};
  shared_ptr<string> authorEmail{};
  shared_ptr<string> committerEmail{};
  shared_ptr<string> id{};
  shared_ptr<string> committedDate{};
  shared_ptr<vector<string>> parentIds{};

  ListRepositoryBranchesResponseBodyResultCommitInfo() {}

  explicit ListRepositoryBranchesResponseBodyResultCommitInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shortId) {
      res["ShortId"] = boost::any(*shortId);
    }
    if (authorName) {
      res["AuthorName"] = boost::any(*authorName);
    }
    if (authorDate) {
      res["AuthorDate"] = boost::any(*authorDate);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (committerName) {
      res["CommitterName"] = boost::any(*committerName);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (authorEmail) {
      res["AuthorEmail"] = boost::any(*authorEmail);
    }
    if (committerEmail) {
      res["CommitterEmail"] = boost::any(*committerEmail);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (committedDate) {
      res["CommittedDate"] = boost::any(*committedDate);
    }
    if (parentIds) {
      res["ParentIds"] = boost::any(*parentIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ShortId") != m.end() && !m["ShortId"].empty()) {
      shortId = make_shared<string>(boost::any_cast<string>(m["ShortId"]));
    }
    if (m.find("AuthorName") != m.end() && !m["AuthorName"].empty()) {
      authorName = make_shared<string>(boost::any_cast<string>(m["AuthorName"]));
    }
    if (m.find("AuthorDate") != m.end() && !m["AuthorDate"].empty()) {
      authorDate = make_shared<string>(boost::any_cast<string>(m["AuthorDate"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("CommitterName") != m.end() && !m["CommitterName"].empty()) {
      committerName = make_shared<string>(boost::any_cast<string>(m["CommitterName"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("AuthorEmail") != m.end() && !m["AuthorEmail"].empty()) {
      authorEmail = make_shared<string>(boost::any_cast<string>(m["AuthorEmail"]));
    }
    if (m.find("CommitterEmail") != m.end() && !m["CommitterEmail"].empty()) {
      committerEmail = make_shared<string>(boost::any_cast<string>(m["CommitterEmail"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("CommittedDate") != m.end() && !m["CommittedDate"].empty()) {
      committedDate = make_shared<string>(boost::any_cast<string>(m["CommittedDate"]));
    }
    if (m.find("ParentIds") != m.end() && !m["ParentIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ParentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ParentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      parentIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListRepositoryBranchesResponseBodyResultCommitInfo() = default;
};
class ListRepositoryBranchesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> protectedBranch{};
  shared_ptr<string> branchName{};
  shared_ptr<ListRepositoryBranchesResponseBodyResultCommitInfo> commitInfo{};

  ListRepositoryBranchesResponseBodyResult() {}

  explicit ListRepositoryBranchesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (protectedBranch) {
      res["ProtectedBranch"] = boost::any(*protectedBranch);
    }
    if (branchName) {
      res["BranchName"] = boost::any(*branchName);
    }
    if (commitInfo) {
      res["CommitInfo"] = commitInfo ? boost::any(commitInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProtectedBranch") != m.end() && !m["ProtectedBranch"].empty()) {
      protectedBranch = make_shared<bool>(boost::any_cast<bool>(m["ProtectedBranch"]));
    }
    if (m.find("BranchName") != m.end() && !m["BranchName"].empty()) {
      branchName = make_shared<string>(boost::any_cast<string>(m["BranchName"]));
    }
    if (m.find("CommitInfo") != m.end() && !m["CommitInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["CommitInfo"].type()) {
        ListRepositoryBranchesResponseBodyResultCommitInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CommitInfo"]));
        commitInfo = make_shared<ListRepositoryBranchesResponseBodyResultCommitInfo>(model1);
      }
    }
  }


  virtual ~ListRepositoryBranchesResponseBodyResult() = default;
};
class ListRepositoryBranchesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<ListRepositoryBranchesResponseBodyResult>> result{};

  ListRepositoryBranchesResponseBody() {}

  explicit ListRepositoryBranchesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListRepositoryBranchesResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRepositoryBranchesResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListRepositoryBranchesResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListRepositoryBranchesResponseBody() = default;
};
class ListRepositoryBranchesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListRepositoryBranchesResponseBody> body{};

  ListRepositoryBranchesResponse() {}

  explicit ListRepositoryBranchesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRepositoryBranchesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRepositoryBranchesResponseBody>(model1);
      }
    }
  }


  virtual ~ListRepositoryBranchesResponse() = default;
};
class CreateBranchRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> subUserId{};

  CreateBranchRequest() {}

  explicit CreateBranchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~CreateBranchRequest() = default;
};
class CreateBranchResponseBodyResultCommitInfo : public Darabonba::Model {
public:
  shared_ptr<string> shortId{};
  shared_ptr<string> authorName{};
  shared_ptr<string> authorDate{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> message{};
  shared_ptr<string> committerName{};
  shared_ptr<string> title{};
  shared_ptr<string> authorEmail{};
  shared_ptr<string> committerEmail{};
  shared_ptr<string> id{};
  shared_ptr<string> committedDate{};
  shared_ptr<vector<string>> parentIds{};

  CreateBranchResponseBodyResultCommitInfo() {}

  explicit CreateBranchResponseBodyResultCommitInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shortId) {
      res["ShortId"] = boost::any(*shortId);
    }
    if (authorName) {
      res["AuthorName"] = boost::any(*authorName);
    }
    if (authorDate) {
      res["AuthorDate"] = boost::any(*authorDate);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (committerName) {
      res["CommitterName"] = boost::any(*committerName);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (authorEmail) {
      res["AuthorEmail"] = boost::any(*authorEmail);
    }
    if (committerEmail) {
      res["CommitterEmail"] = boost::any(*committerEmail);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (committedDate) {
      res["CommittedDate"] = boost::any(*committedDate);
    }
    if (parentIds) {
      res["ParentIds"] = boost::any(*parentIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ShortId") != m.end() && !m["ShortId"].empty()) {
      shortId = make_shared<string>(boost::any_cast<string>(m["ShortId"]));
    }
    if (m.find("AuthorName") != m.end() && !m["AuthorName"].empty()) {
      authorName = make_shared<string>(boost::any_cast<string>(m["AuthorName"]));
    }
    if (m.find("AuthorDate") != m.end() && !m["AuthorDate"].empty()) {
      authorDate = make_shared<string>(boost::any_cast<string>(m["AuthorDate"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("CommitterName") != m.end() && !m["CommitterName"].empty()) {
      committerName = make_shared<string>(boost::any_cast<string>(m["CommitterName"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("AuthorEmail") != m.end() && !m["AuthorEmail"].empty()) {
      authorEmail = make_shared<string>(boost::any_cast<string>(m["AuthorEmail"]));
    }
    if (m.find("CommitterEmail") != m.end() && !m["CommitterEmail"].empty()) {
      committerEmail = make_shared<string>(boost::any_cast<string>(m["CommitterEmail"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("CommittedDate") != m.end() && !m["CommittedDate"].empty()) {
      committedDate = make_shared<string>(boost::any_cast<string>(m["CommittedDate"]));
    }
    if (m.find("ParentIds") != m.end() && !m["ParentIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ParentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ParentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      parentIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateBranchResponseBodyResultCommitInfo() = default;
};
class CreateBranchResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> protectedBranch{};
  shared_ptr<string> branchName{};
  shared_ptr<CreateBranchResponseBodyResultCommitInfo> commitInfo{};

  CreateBranchResponseBodyResult() {}

  explicit CreateBranchResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (protectedBranch) {
      res["ProtectedBranch"] = boost::any(*protectedBranch);
    }
    if (branchName) {
      res["BranchName"] = boost::any(*branchName);
    }
    if (commitInfo) {
      res["CommitInfo"] = commitInfo ? boost::any(commitInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProtectedBranch") != m.end() && !m["ProtectedBranch"].empty()) {
      protectedBranch = make_shared<bool>(boost::any_cast<bool>(m["ProtectedBranch"]));
    }
    if (m.find("BranchName") != m.end() && !m["BranchName"].empty()) {
      branchName = make_shared<string>(boost::any_cast<string>(m["BranchName"]));
    }
    if (m.find("CommitInfo") != m.end() && !m["CommitInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["CommitInfo"].type()) {
        CreateBranchResponseBodyResultCommitInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CommitInfo"]));
        commitInfo = make_shared<CreateBranchResponseBodyResultCommitInfo>(model1);
      }
    }
  }


  virtual ~CreateBranchResponseBodyResult() = default;
};
class CreateBranchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<CreateBranchResponseBodyResult> result{};

  CreateBranchResponseBody() {}

  explicit CreateBranchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateBranchResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateBranchResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateBranchResponseBody() = default;
};
class CreateBranchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateBranchResponseBody> body{};

  CreateBranchResponse() {}

  explicit CreateBranchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateBranchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateBranchResponseBody>(model1);
      }
    }
  }


  virtual ~CreateBranchResponse() = default;
};
class ListGroupRepositoriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<bool> isMember{};
  shared_ptr<string> subUserId{};
  shared_ptr<string> search{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};

  ListGroupRepositoriesRequest() {}

  explicit ListGroupRepositoriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (isMember) {
      res["IsMember"] = boost::any(*isMember);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    if (search) {
      res["Search"] = boost::any(*search);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("IsMember") != m.end() && !m["IsMember"].empty()) {
      isMember = make_shared<bool>(boost::any_cast<bool>(m["IsMember"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
    if (m.find("Search") != m.end() && !m["Search"].empty()) {
      search = make_shared<string>(boost::any_cast<string>(m["Search"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListGroupRepositoriesRequest() = default;
};
class ListGroupRepositoriesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> lastActivityAt{};
  shared_ptr<long> namespaceId{};
  shared_ptr<string> httpCloneUrl{};
  shared_ptr<bool> archive{};
  shared_ptr<string> sshCloneUrl{};
  shared_ptr<string> createdAt{};
  shared_ptr<long> creatorId{};
  shared_ptr<string> importStatus{};
  shared_ptr<string> webUrl{};
  shared_ptr<string> nameWithNamespace{};
  shared_ptr<string> pathWithNamespace{};
  shared_ptr<long> visibilityLevel{};
  shared_ptr<string> path{};
  shared_ptr<string> updatedAt{};
  shared_ptr<string> name{};
  shared_ptr<long> id{};

  ListGroupRepositoriesResponseBodyResult() {}

  explicit ListGroupRepositoriesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lastActivityAt) {
      res["LastActivityAt"] = boost::any(*lastActivityAt);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (httpCloneUrl) {
      res["HttpCloneUrl"] = boost::any(*httpCloneUrl);
    }
    if (archive) {
      res["Archive"] = boost::any(*archive);
    }
    if (sshCloneUrl) {
      res["SshCloneUrl"] = boost::any(*sshCloneUrl);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (importStatus) {
      res["ImportStatus"] = boost::any(*importStatus);
    }
    if (webUrl) {
      res["WebUrl"] = boost::any(*webUrl);
    }
    if (nameWithNamespace) {
      res["NameWithNamespace"] = boost::any(*nameWithNamespace);
    }
    if (pathWithNamespace) {
      res["PathWithNamespace"] = boost::any(*pathWithNamespace);
    }
    if (visibilityLevel) {
      res["VisibilityLevel"] = boost::any(*visibilityLevel);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LastActivityAt") != m.end() && !m["LastActivityAt"].empty()) {
      lastActivityAt = make_shared<string>(boost::any_cast<string>(m["LastActivityAt"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<long>(boost::any_cast<long>(m["NamespaceId"]));
    }
    if (m.find("HttpCloneUrl") != m.end() && !m["HttpCloneUrl"].empty()) {
      httpCloneUrl = make_shared<string>(boost::any_cast<string>(m["HttpCloneUrl"]));
    }
    if (m.find("Archive") != m.end() && !m["Archive"].empty()) {
      archive = make_shared<bool>(boost::any_cast<bool>(m["Archive"]));
    }
    if (m.find("SshCloneUrl") != m.end() && !m["SshCloneUrl"].empty()) {
      sshCloneUrl = make_shared<string>(boost::any_cast<string>(m["SshCloneUrl"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<long>(boost::any_cast<long>(m["CreatorId"]));
    }
    if (m.find("ImportStatus") != m.end() && !m["ImportStatus"].empty()) {
      importStatus = make_shared<string>(boost::any_cast<string>(m["ImportStatus"]));
    }
    if (m.find("WebUrl") != m.end() && !m["WebUrl"].empty()) {
      webUrl = make_shared<string>(boost::any_cast<string>(m["WebUrl"]));
    }
    if (m.find("NameWithNamespace") != m.end() && !m["NameWithNamespace"].empty()) {
      nameWithNamespace = make_shared<string>(boost::any_cast<string>(m["NameWithNamespace"]));
    }
    if (m.find("PathWithNamespace") != m.end() && !m["PathWithNamespace"].empty()) {
      pathWithNamespace = make_shared<string>(boost::any_cast<string>(m["PathWithNamespace"]));
    }
    if (m.find("VisibilityLevel") != m.end() && !m["VisibilityLevel"].empty()) {
      visibilityLevel = make_shared<long>(boost::any_cast<long>(m["VisibilityLevel"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["UpdatedAt"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~ListGroupRepositoriesResponseBodyResult() = default;
};
class ListGroupRepositoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<ListGroupRepositoriesResponseBodyResult>> result{};

  ListGroupRepositoriesResponseBody() {}

  explicit ListGroupRepositoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListGroupRepositoriesResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGroupRepositoriesResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListGroupRepositoriesResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListGroupRepositoriesResponseBody() = default;
};
class ListGroupRepositoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListGroupRepositoriesResponseBody> body{};

  ListGroupRepositoriesResponse() {}

  explicit ListGroupRepositoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListGroupRepositoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGroupRepositoriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListGroupRepositoriesResponse() = default;
};
class GetRepositoryTagV2Request : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> tagName{};

  GetRepositoryTagV2Request() {}

  explicit GetRepositoryTagV2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~GetRepositoryTagV2Request() = default;
};
class GetRepositoryTagV2ResponseBodyResultCommitSignature : public Darabonba::Model {
public:
  shared_ptr<string> verificationStatus{};
  shared_ptr<string> gpgKeyId{};

  GetRepositoryTagV2ResponseBodyResultCommitSignature() {}

  explicit GetRepositoryTagV2ResponseBodyResultCommitSignature(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (verificationStatus) {
      res["VerificationStatus"] = boost::any(*verificationStatus);
    }
    if (gpgKeyId) {
      res["GpgKeyId"] = boost::any(*gpgKeyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VerificationStatus") != m.end() && !m["VerificationStatus"].empty()) {
      verificationStatus = make_shared<string>(boost::any_cast<string>(m["VerificationStatus"]));
    }
    if (m.find("GpgKeyId") != m.end() && !m["GpgKeyId"].empty()) {
      gpgKeyId = make_shared<string>(boost::any_cast<string>(m["GpgKeyId"]));
    }
  }


  virtual ~GetRepositoryTagV2ResponseBodyResultCommitSignature() = default;
};
class GetRepositoryTagV2ResponseBodyResultCommit : public Darabonba::Model {
public:
  shared_ptr<string> shortId{};
  shared_ptr<string> authorName{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> message{};
  shared_ptr<string> authoredDate{};
  shared_ptr<string> title{};
  shared_ptr<string> committerName{};
  shared_ptr<string> authorEmail{};
  shared_ptr<string> id{};
  shared_ptr<string> committerEmail{};
  shared_ptr<string> committedDate{};
  shared_ptr<vector<string>> parentIds{};
  shared_ptr<GetRepositoryTagV2ResponseBodyResultCommitSignature> signature{};

  GetRepositoryTagV2ResponseBodyResultCommit() {}

  explicit GetRepositoryTagV2ResponseBodyResultCommit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shortId) {
      res["ShortId"] = boost::any(*shortId);
    }
    if (authorName) {
      res["AuthorName"] = boost::any(*authorName);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (authoredDate) {
      res["AuthoredDate"] = boost::any(*authoredDate);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (committerName) {
      res["CommitterName"] = boost::any(*committerName);
    }
    if (authorEmail) {
      res["AuthorEmail"] = boost::any(*authorEmail);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (committerEmail) {
      res["CommitterEmail"] = boost::any(*committerEmail);
    }
    if (committedDate) {
      res["CommittedDate"] = boost::any(*committedDate);
    }
    if (parentIds) {
      res["ParentIds"] = boost::any(*parentIds);
    }
    if (signature) {
      res["Signature"] = signature ? boost::any(signature->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ShortId") != m.end() && !m["ShortId"].empty()) {
      shortId = make_shared<string>(boost::any_cast<string>(m["ShortId"]));
    }
    if (m.find("AuthorName") != m.end() && !m["AuthorName"].empty()) {
      authorName = make_shared<string>(boost::any_cast<string>(m["AuthorName"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("AuthoredDate") != m.end() && !m["AuthoredDate"].empty()) {
      authoredDate = make_shared<string>(boost::any_cast<string>(m["AuthoredDate"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("CommitterName") != m.end() && !m["CommitterName"].empty()) {
      committerName = make_shared<string>(boost::any_cast<string>(m["CommitterName"]));
    }
    if (m.find("AuthorEmail") != m.end() && !m["AuthorEmail"].empty()) {
      authorEmail = make_shared<string>(boost::any_cast<string>(m["AuthorEmail"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("CommitterEmail") != m.end() && !m["CommitterEmail"].empty()) {
      committerEmail = make_shared<string>(boost::any_cast<string>(m["CommitterEmail"]));
    }
    if (m.find("CommittedDate") != m.end() && !m["CommittedDate"].empty()) {
      committedDate = make_shared<string>(boost::any_cast<string>(m["CommittedDate"]));
    }
    if (m.find("ParentIds") != m.end() && !m["ParentIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ParentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ParentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      parentIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      if (typeid(map<string, boost::any>) == m["Signature"].type()) {
        GetRepositoryTagV2ResponseBodyResultCommitSignature model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Signature"]));
        signature = make_shared<GetRepositoryTagV2ResponseBodyResultCommitSignature>(model1);
      }
    }
  }


  virtual ~GetRepositoryTagV2ResponseBodyResultCommit() = default;
};
class GetRepositoryTagV2ResponseBodyResultSignature : public Darabonba::Model {
public:
  shared_ptr<string> verificationStatus{};
  shared_ptr<string> gpgKeyId{};

  GetRepositoryTagV2ResponseBodyResultSignature() {}

  explicit GetRepositoryTagV2ResponseBodyResultSignature(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (verificationStatus) {
      res["VerificationStatus"] = boost::any(*verificationStatus);
    }
    if (gpgKeyId) {
      res["GpgKeyId"] = boost::any(*gpgKeyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VerificationStatus") != m.end() && !m["VerificationStatus"].empty()) {
      verificationStatus = make_shared<string>(boost::any_cast<string>(m["VerificationStatus"]));
    }
    if (m.find("GpgKeyId") != m.end() && !m["GpgKeyId"].empty()) {
      gpgKeyId = make_shared<string>(boost::any_cast<string>(m["GpgKeyId"]));
    }
  }


  virtual ~GetRepositoryTagV2ResponseBodyResultSignature() = default;
};
class GetRepositoryTagV2ResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<string> id{};
  shared_ptr<GetRepositoryTagV2ResponseBodyResultCommit> commit{};
  shared_ptr<GetRepositoryTagV2ResponseBodyResultSignature> signature{};

  GetRepositoryTagV2ResponseBodyResult() {}

  explicit GetRepositoryTagV2ResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (commit) {
      res["Commit"] = commit ? boost::any(commit->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (signature) {
      res["Signature"] = signature ? boost::any(signature->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Commit") != m.end() && !m["Commit"].empty()) {
      if (typeid(map<string, boost::any>) == m["Commit"].type()) {
        GetRepositoryTagV2ResponseBodyResultCommit model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Commit"]));
        commit = make_shared<GetRepositoryTagV2ResponseBodyResultCommit>(model1);
      }
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      if (typeid(map<string, boost::any>) == m["Signature"].type()) {
        GetRepositoryTagV2ResponseBodyResultSignature model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Signature"]));
        signature = make_shared<GetRepositoryTagV2ResponseBodyResultSignature>(model1);
      }
    }
  }


  virtual ~GetRepositoryTagV2ResponseBodyResult() = default;
};
class GetRepositoryTagV2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetRepositoryTagV2ResponseBodyResult> result{};

  GetRepositoryTagV2ResponseBody() {}

  explicit GetRepositoryTagV2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetRepositoryTagV2ResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetRepositoryTagV2ResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetRepositoryTagV2ResponseBody() = default;
};
class GetRepositoryTagV2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRepositoryTagV2ResponseBody> body{};

  GetRepositoryTagV2Response() {}

  explicit GetRepositoryTagV2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRepositoryTagV2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRepositoryTagV2ResponseBody>(model1);
      }
    }
  }


  virtual ~GetRepositoryTagV2Response() = default;
};
class GetMergeRequestSettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};

  GetMergeRequestSettingRequest() {}

  explicit GetMergeRequestSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetMergeRequestSettingRequest() = default;
};
class GetMergeRequestSettingResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> isEnableSmartCodeReview{};
  shared_ptr<vector<string>> mergeTypes{};

  GetMergeRequestSettingResponseBodyResult() {}

  explicit GetMergeRequestSettingResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isEnableSmartCodeReview) {
      res["IsEnableSmartCodeReview"] = boost::any(*isEnableSmartCodeReview);
    }
    if (mergeTypes) {
      res["MergeTypes"] = boost::any(*mergeTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsEnableSmartCodeReview") != m.end() && !m["IsEnableSmartCodeReview"].empty()) {
      isEnableSmartCodeReview = make_shared<bool>(boost::any_cast<bool>(m["IsEnableSmartCodeReview"]));
    }
    if (m.find("MergeTypes") != m.end() && !m["MergeTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MergeTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MergeTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      mergeTypes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetMergeRequestSettingResponseBodyResult() = default;
};
class GetMergeRequestSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetMergeRequestSettingResponseBodyResult> result{};

  GetMergeRequestSettingResponseBody() {}

  explicit GetMergeRequestSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetMergeRequestSettingResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetMergeRequestSettingResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetMergeRequestSettingResponseBody() = default;
};
class GetMergeRequestSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetMergeRequestSettingResponseBody> body{};

  GetMergeRequestSettingResponse() {}

  explicit GetMergeRequestSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMergeRequestSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMergeRequestSettingResponseBody>(model1);
      }
    }
  }


  virtual ~GetMergeRequestSettingResponse() = default;
};
class ListRepositoryWebhookRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};

  ListRepositoryWebhookRequest() {}

  explicit ListRepositoryWebhookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListRepositoryWebhookRequest() = default;
};
class ListRepositoryWebhookResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> pushEvents{};
  shared_ptr<long> projectId{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> url{};
  shared_ptr<bool> tagPushEvents{};
  shared_ptr<string> lastTestResult{};
  shared_ptr<bool> mergeRequestsEvents{};
  shared_ptr<string> description{};
  shared_ptr<bool> noteEvents{};
  shared_ptr<string> secretToken{};
  shared_ptr<long> id{};
  shared_ptr<bool> enableSslVerification{};

  ListRepositoryWebhookResponseBodyResult() {}

  explicit ListRepositoryWebhookResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pushEvents) {
      res["PushEvents"] = boost::any(*pushEvents);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (tagPushEvents) {
      res["TagPushEvents"] = boost::any(*tagPushEvents);
    }
    if (lastTestResult) {
      res["LastTestResult"] = boost::any(*lastTestResult);
    }
    if (mergeRequestsEvents) {
      res["MergeRequestsEvents"] = boost::any(*mergeRequestsEvents);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (noteEvents) {
      res["NoteEvents"] = boost::any(*noteEvents);
    }
    if (secretToken) {
      res["SecretToken"] = boost::any(*secretToken);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (enableSslVerification) {
      res["EnableSslVerification"] = boost::any(*enableSslVerification);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PushEvents") != m.end() && !m["PushEvents"].empty()) {
      pushEvents = make_shared<bool>(boost::any_cast<bool>(m["PushEvents"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("TagPushEvents") != m.end() && !m["TagPushEvents"].empty()) {
      tagPushEvents = make_shared<bool>(boost::any_cast<bool>(m["TagPushEvents"]));
    }
    if (m.find("LastTestResult") != m.end() && !m["LastTestResult"].empty()) {
      lastTestResult = make_shared<string>(boost::any_cast<string>(m["LastTestResult"]));
    }
    if (m.find("MergeRequestsEvents") != m.end() && !m["MergeRequestsEvents"].empty()) {
      mergeRequestsEvents = make_shared<bool>(boost::any_cast<bool>(m["MergeRequestsEvents"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("NoteEvents") != m.end() && !m["NoteEvents"].empty()) {
      noteEvents = make_shared<bool>(boost::any_cast<bool>(m["NoteEvents"]));
    }
    if (m.find("SecretToken") != m.end() && !m["SecretToken"].empty()) {
      secretToken = make_shared<string>(boost::any_cast<string>(m["SecretToken"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("EnableSslVerification") != m.end() && !m["EnableSslVerification"].empty()) {
      enableSslVerification = make_shared<bool>(boost::any_cast<bool>(m["EnableSslVerification"]));
    }
  }


  virtual ~ListRepositoryWebhookResponseBodyResult() = default;
};
class ListRepositoryWebhookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<ListRepositoryWebhookResponseBodyResult>> result{};

  ListRepositoryWebhookResponseBody() {}

  explicit ListRepositoryWebhookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListRepositoryWebhookResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRepositoryWebhookResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListRepositoryWebhookResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListRepositoryWebhookResponseBody() = default;
};
class ListRepositoryWebhookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListRepositoryWebhookResponseBody> body{};

  ListRepositoryWebhookResponse() {}

  explicit ListRepositoryWebhookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRepositoryWebhookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRepositoryWebhookResponseBody>(model1);
      }
    }
  }


  virtual ~ListRepositoryWebhookResponse() = default;
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
  DeleteRepositoryMemberResponse deleteRepositoryMember(shared_ptr<string> ProjectId, shared_ptr<string> UserId, shared_ptr<DeleteRepositoryMemberRequest> request);
  DeleteRepositoryMemberResponse deleteRepositoryMemberWithOptions(shared_ptr<string> ProjectId,
                                                                   shared_ptr<string> UserId,
                                                                   shared_ptr<DeleteRepositoryMemberRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRepositoryProtectedBranchResponse createRepositoryProtectedBranch(shared_ptr<string> ProjectId, shared_ptr<CreateRepositoryProtectedBranchRequest> request);
  CreateRepositoryProtectedBranchResponse createRepositoryProtectedBranchWithOptions(shared_ptr<string> ProjectId,
                                                                                     shared_ptr<CreateRepositoryProtectedBranchRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMergeRequestResponse createMergeRequest(shared_ptr<string> ProjectId, shared_ptr<CreateMergeRequestRequest> request);
  CreateMergeRequestResponse createMergeRequestWithOptions(shared_ptr<string> ProjectId,
                                                           shared_ptr<CreateMergeRequestRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRepositoryResponse deleteRepository(shared_ptr<string> ProjectId, shared_ptr<DeleteRepositoryRequest> request);
  DeleteRepositoryResponse deleteRepositoryWithOptions(shared_ptr<string> ProjectId,
                                                       shared_ptr<DeleteRepositoryRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRepositoryTagResponse getRepositoryTag(shared_ptr<string> ProjectId, shared_ptr<string> TagName, shared_ptr<GetRepositoryTagRequest> request);
  GetRepositoryTagResponse getRepositoryTagWithOptions(shared_ptr<string> ProjectId,
                                                       shared_ptr<string> TagName,
                                                       shared_ptr<GetRepositoryTagRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateMergeRequestResponse updateMergeRequest(shared_ptr<string> ProjectId, shared_ptr<string> MergeRequestId, shared_ptr<UpdateMergeRequestRequest> request);
  UpdateMergeRequestResponse updateMergeRequestWithOptions(shared_ptr<string> ProjectId,
                                                           shared_ptr<string> MergeRequestId,
                                                           shared_ptr<UpdateMergeRequestRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRepositoryResponse updateRepository(shared_ptr<string> ProjectId, shared_ptr<UpdateRepositoryRequest> request);
  UpdateRepositoryResponse updateRepositoryWithOptions(shared_ptr<string> ProjectId,
                                                       shared_ptr<UpdateRepositoryRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateMergeRequestCommentResponse updateMergeRequestComment(shared_ptr<string> ProjectId,
                                                              shared_ptr<string> MergeRequestId,
                                                              shared_ptr<string> NoteId,
                                                              shared_ptr<UpdateMergeRequestCommentRequest> request);
  UpdateMergeRequestCommentResponse updateMergeRequestCommentWithOptions(shared_ptr<string> ProjectId,
                                                                         shared_ptr<string> MergeRequestId,
                                                                         shared_ptr<string> NoteId,
                                                                         shared_ptr<UpdateMergeRequestCommentRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteBranchResponse deleteBranch(shared_ptr<string> ProjectId, shared_ptr<DeleteBranchRequest> request);
  DeleteBranchResponse deleteBranchWithOptions(shared_ptr<string> ProjectId,
                                               shared_ptr<DeleteBranchRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRepositoryCommitDiffResponse listRepositoryCommitDiff(shared_ptr<string> ProjectId, shared_ptr<string> Sha, shared_ptr<ListRepositoryCommitDiffRequest> request);
  ListRepositoryCommitDiffResponse listRepositoryCommitDiffWithOptions(shared_ptr<string> ProjectId,
                                                                       shared_ptr<string> Sha,
                                                                       shared_ptr<ListRepositoryCommitDiffRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRepositoryInfoResponse getRepositoryInfo(shared_ptr<GetRepositoryInfoRequest> request);
  GetRepositoryInfoResponse getRepositoryInfoWithOptions(shared_ptr<GetRepositoryInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AcceptMergeRequestResponse acceptMergeRequest(shared_ptr<string> ProjectId, shared_ptr<string> MergeRequestId, shared_ptr<AcceptMergeRequestRequest> request);
  AcceptMergeRequestResponse acceptMergeRequestWithOptions(shared_ptr<string> ProjectId,
                                                           shared_ptr<string> MergeRequestId,
                                                           shared_ptr<AcceptMergeRequestRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFileResponse deleteFile(shared_ptr<string> ProjectId, shared_ptr<DeleteFileRequest> request);
  DeleteFileResponse deleteFileWithOptions(shared_ptr<string> ProjectId,
                                           shared_ptr<DeleteFileRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRepositoryProtectedBranchResponse deleteRepositoryProtectedBranch(shared_ptr<string> ProjectId, shared_ptr<string> ProtectedBranchId, shared_ptr<DeleteRepositoryProtectedBranchRequest> request);
  DeleteRepositoryProtectedBranchResponse deleteRepositoryProtectedBranchWithOptions(shared_ptr<string> ProjectId,
                                                                                     shared_ptr<string> ProtectedBranchId,
                                                                                     shared_ptr<DeleteRepositoryProtectedBranchRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRepositoryTagV2Response deleteRepositoryTagV2(shared_ptr<string> ProjectId, shared_ptr<DeleteRepositoryTagV2Request> request);
  DeleteRepositoryTagV2Response deleteRepositoryTagV2WithOptions(shared_ptr<string> ProjectId,
                                                                 shared_ptr<DeleteRepositoryTagV2Request> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFileLastCommitResponse getFileLastCommit(shared_ptr<string> ProjectId, shared_ptr<GetFileLastCommitRequest> request);
  GetFileLastCommitResponse getFileLastCommitWithOptions(shared_ptr<string> ProjectId,
                                                         shared_ptr<GetFileLastCommitRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFileResponse updateFile(shared_ptr<string> ProjectId, shared_ptr<UpdateFileRequest> request);
  UpdateFileResponse updateFileWithOptions(shared_ptr<string> ProjectId,
                                           shared_ptr<UpdateFileRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRepositoryMemberResponse updateRepositoryMember(shared_ptr<string> ProjectId, shared_ptr<string> UserId, shared_ptr<UpdateRepositoryMemberRequest> request);
  UpdateRepositoryMemberResponse updateRepositoryMemberWithOptions(shared_ptr<string> ProjectId,
                                                                   shared_ptr<string> UserId,
                                                                   shared_ptr<UpdateRepositoryMemberRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddRepositoryMemberResponse addRepositoryMember(shared_ptr<string> ProjectId, shared_ptr<AddRepositoryMemberRequest> request);
  AddRepositoryMemberResponse addRepositoryMemberWithOptions(shared_ptr<string> ProjectId,
                                                             shared_ptr<AddRepositoryMemberRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSshKeyResponse createSshKey(shared_ptr<CreateSshKeyRequest> request);
  CreateSshKeyResponse createSshKeyWithOptions(shared_ptr<CreateSshKeyRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRepositoryTagsResponse listRepositoryTags(shared_ptr<string> ProjectId, shared_ptr<ListRepositoryTagsRequest> request);
  ListRepositoryTagsResponse listRepositoryTagsWithOptions(shared_ptr<string> ProjectId,
                                                           shared_ptr<ListRepositoryTagsRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddWebhookResponse addWebhook(shared_ptr<string> ProjectId, shared_ptr<AddWebhookRequest> request);
  AddWebhookResponse addWebhookWithOptions(shared_ptr<string> ProjectId,
                                           shared_ptr<AddWebhookRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableRepositoryDeployKeyResponse enableRepositoryDeployKey(shared_ptr<string> ProjectId, shared_ptr<string> KeyId, shared_ptr<EnableRepositoryDeployKeyRequest> request);
  EnableRepositoryDeployKeyResponse enableRepositoryDeployKeyWithOptions(shared_ptr<string> ProjectId,
                                                                         shared_ptr<string> KeyId,
                                                                         shared_ptr<EnableRepositoryDeployKeyRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserInfoResponse getUserInfo(shared_ptr<GetUserInfoRequest> request);
  GetUserInfoResponse getUserInfoWithOptions(shared_ptr<GetUserInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRepositoryTreeResponse listRepositoryTree(shared_ptr<string> ProjectId, shared_ptr<ListRepositoryTreeRequest> request);
  ListRepositoryTreeResponse listRepositoryTreeWithOptions(shared_ptr<string> ProjectId,
                                                           shared_ptr<ListRepositoryTreeRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRepositoryGroupResponse deleteRepositoryGroup(shared_ptr<string> GroupId, shared_ptr<DeleteRepositoryGroupRequest> request);
  DeleteRepositoryGroupResponse deleteRepositoryGroupWithOptions(shared_ptr<string> GroupId,
                                                                 shared_ptr<DeleteRepositoryGroupRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRepositoryWebhookResponse deleteRepositoryWebhook(shared_ptr<string> ProjectId, shared_ptr<string> WebhookId, shared_ptr<DeleteRepositoryWebhookRequest> request);
  DeleteRepositoryWebhookResponse deleteRepositoryWebhookWithOptions(shared_ptr<string> ProjectId,
                                                                     shared_ptr<string> WebhookId,
                                                                     shared_ptr<DeleteRepositoryWebhookRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRepositoryMemberResponse listRepositoryMember(shared_ptr<string> ProjectId, shared_ptr<ListRepositoryMemberRequest> request);
  ListRepositoryMemberResponse listRepositoryMemberWithOptions(shared_ptr<string> ProjectId,
                                                               shared_ptr<ListRepositoryMemberRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTagResponse createTag(shared_ptr<string> ProjectId, shared_ptr<CreateTagRequest> request);
  CreateTagResponse createTagWithOptions(shared_ptr<string> ProjectId,
                                         shared_ptr<CreateTagRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRepositoryCommitResponse getRepositoryCommit(shared_ptr<string> ProjectId, shared_ptr<string> Sha, shared_ptr<GetRepositoryCommitRequest> request);
  GetRepositoryCommitResponse getRepositoryCommitWithOptions(shared_ptr<string> ProjectId,
                                                             shared_ptr<string> Sha,
                                                             shared_ptr<GetRepositoryCommitRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddGroupMemberResponse addGroupMember(shared_ptr<string> GroupId, shared_ptr<AddGroupMemberRequest> request);
  AddGroupMemberResponse addGroupMemberWithOptions(shared_ptr<string> GroupId,
                                                   shared_ptr<AddGroupMemberRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBranchInfoResponse getBranchInfo(shared_ptr<string> ProjectId, shared_ptr<GetBranchInfoRequest> request);
  GetBranchInfoResponse getBranchInfoWithOptions(shared_ptr<string> ProjectId,
                                                 shared_ptr<GetBranchInfoRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMergeRequestCommentsResponse listMergeRequestComments(shared_ptr<string> ProjectId, shared_ptr<string> MergeRequestId, shared_ptr<ListMergeRequestCommentsRequest> request);
  ListMergeRequestCommentsResponse listMergeRequestCommentsWithOptions(shared_ptr<string> ProjectId,
                                                                       shared_ptr<string> MergeRequestId,
                                                                       shared_ptr<ListMergeRequestCommentsRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRepositoryGroupResponse createRepositoryGroup(shared_ptr<CreateRepositoryGroupRequest> request);
  CreateRepositoryGroupResponse createRepositoryGroupWithOptions(shared_ptr<CreateRepositoryGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMergeRequestDetailResponse getMergeRequestDetail(shared_ptr<string> ProjectId, shared_ptr<string> MergeRequestId, shared_ptr<GetMergeRequestDetailRequest> request);
  GetMergeRequestDetailResponse getMergeRequestDetailWithOptions(shared_ptr<string> ProjectId,
                                                                 shared_ptr<string> MergeRequestId,
                                                                 shared_ptr<GetMergeRequestDetailRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGroupsResponse listGroups(shared_ptr<ListGroupsRequest> request);
  ListGroupsResponse listGroupsWithOptions(shared_ptr<ListGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRepositoryProtectedBranchResponse listRepositoryProtectedBranch(shared_ptr<string> ProjectId, shared_ptr<ListRepositoryProtectedBranchRequest> request);
  ListRepositoryProtectedBranchResponse listRepositoryProtectedBranchWithOptions(shared_ptr<string> ProjectId,
                                                                                 shared_ptr<ListRepositoryProtectedBranchRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOrganizationsResponse listOrganizations(shared_ptr<ListOrganizationsRequest> request);
  ListOrganizationsResponse listOrganizationsWithOptions(shared_ptr<ListOrganizationsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectMemberResponse getProjectMember(shared_ptr<string> ProjectId, shared_ptr<string> UserId, shared_ptr<GetProjectMemberRequest> request);
  GetProjectMemberResponse getProjectMemberWithOptions(shared_ptr<string> ProjectId,
                                                       shared_ptr<string> UserId,
                                                       shared_ptr<GetProjectMemberRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFileResponse createFile(shared_ptr<string> ProjectId, shared_ptr<CreateFileRequest> request);
  CreateFileResponse createFileWithOptions(shared_ptr<string> ProjectId,
                                           shared_ptr<CreateFileRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRepositoryCommitsResponse listRepositoryCommits(shared_ptr<string> ProjectId, shared_ptr<ListRepositoryCommitsRequest> request);
  ListRepositoryCommitsResponse listRepositoryCommitsWithOptions(shared_ptr<string> ProjectId,
                                                                 shared_ptr<ListRepositoryCommitsRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMergeRequestApproveStatusResponse getMergeRequestApproveStatus(shared_ptr<string> ProjectId, shared_ptr<string> MergeRequestId, shared_ptr<GetMergeRequestApproveStatusRequest> request);
  GetMergeRequestApproveStatusResponse getMergeRequestApproveStatusWithOptions(shared_ptr<string> ProjectId,
                                                                               shared_ptr<string> MergeRequestId,
                                                                               shared_ptr<GetMergeRequestApproveStatusRequest> request,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRepositoriesResponse listRepositories(shared_ptr<ListRepositoriesRequest> request);
  ListRepositoriesResponse listRepositoriesWithOptions(shared_ptr<ListRepositoriesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateMergeRequestSettingResponse updateMergeRequestSetting(shared_ptr<string> ProjectId, shared_ptr<UpdateMergeRequestSettingRequest> request);
  UpdateMergeRequestSettingResponse updateMergeRequestSettingWithOptions(shared_ptr<string> ProjectId,
                                                                         shared_ptr<UpdateMergeRequestSettingRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGroupMemberResponse listGroupMember(shared_ptr<string> GroupId, shared_ptr<ListGroupMemberRequest> request);
  ListGroupMemberResponse listGroupMemberWithOptions(shared_ptr<string> GroupId,
                                                     shared_ptr<ListGroupMemberRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGroupMemberResponse updateGroupMember(shared_ptr<string> GroupId, shared_ptr<string> UserId, shared_ptr<UpdateGroupMemberRequest> request);
  UpdateGroupMemberResponse updateGroupMemberWithOptions(shared_ptr<string> GroupId,
                                                         shared_ptr<string> UserId,
                                                         shared_ptr<UpdateGroupMemberRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMergeRequestCommentResponse createMergeRequestComment(shared_ptr<string> ProjectId, shared_ptr<string> MergeRequestId, shared_ptr<CreateMergeRequestCommentRequest> request);
  CreateMergeRequestCommentResponse createMergeRequestCommentWithOptions(shared_ptr<string> ProjectId,
                                                                         shared_ptr<string> MergeRequestId,
                                                                         shared_ptr<CreateMergeRequestCommentRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRepositoryDeployKeyResponse createRepositoryDeployKey(shared_ptr<string> ProjectId, shared_ptr<CreateRepositoryDeployKeyRequest> request);
  CreateRepositoryDeployKeyResponse createRepositoryDeployKeyWithOptions(shared_ptr<string> ProjectId,
                                                                         shared_ptr<CreateRepositoryDeployKeyRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRepositoryTagResponse deleteRepositoryTag(shared_ptr<string> ProjectId, shared_ptr<string> TagName, shared_ptr<DeleteRepositoryTagRequest> request);
  DeleteRepositoryTagResponse deleteRepositoryTagWithOptions(shared_ptr<string> ProjectId,
                                                             shared_ptr<string> TagName,
                                                             shared_ptr<DeleteRepositoryTagRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRepositoryResponse createRepository(shared_ptr<CreateRepositoryRequest> request);
  CreateRepositoryResponse createRepositoryWithOptions(shared_ptr<CreateRepositoryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCodeCompletionResponse getCodeCompletion(shared_ptr<string> ServiceName, shared_ptr<GetCodeCompletionRequest> request);
  GetCodeCompletionResponse getCodeCompletionWithOptions(shared_ptr<string> ServiceName,
                                                         shared_ptr<GetCodeCompletionRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMergeRequestsResponse listMergeRequests(shared_ptr<ListMergeRequestsRequest> request);
  ListMergeRequestsResponse listMergeRequestsWithOptions(shared_ptr<ListMergeRequestsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOrganizationSecurityScoresResponse listOrganizationSecurityScores(shared_ptr<ListOrganizationSecurityScoresRequest> request);
  ListOrganizationSecurityScoresResponse listOrganizationSecurityScoresWithOptions(shared_ptr<ListOrganizationSecurityScoresRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFileBlobsResponse getFileBlobs(shared_ptr<string> ProjectId, shared_ptr<GetFileBlobsRequest> request);
  GetFileBlobsResponse getFileBlobsWithOptions(shared_ptr<string> ProjectId,
                                               shared_ptr<GetFileBlobsRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MergeMergeRequestResponse mergeMergeRequest(shared_ptr<string> ProjectId, shared_ptr<string> MergeRequestId, shared_ptr<MergeMergeRequestRequest> request);
  MergeMergeRequestResponse mergeMergeRequestWithOptions(shared_ptr<string> ProjectId,
                                                         shared_ptr<string> MergeRequestId,
                                                         shared_ptr<MergeMergeRequestRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGroupMemberResponse deleteGroupMember(shared_ptr<string> GroupId, shared_ptr<string> UserId, shared_ptr<DeleteGroupMemberRequest> request);
  DeleteGroupMemberResponse deleteGroupMemberWithOptions(shared_ptr<string> GroupId,
                                                         shared_ptr<string> UserId,
                                                         shared_ptr<DeleteGroupMemberRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRepositoryMemberWithInheritedResponse listRepositoryMemberWithInherited(shared_ptr<string> ProjectId, shared_ptr<ListRepositoryMemberWithInheritedRequest> request);
  ListRepositoryMemberWithInheritedResponse listRepositoryMemberWithInheritedWithOptions(shared_ptr<string> ProjectId,
                                                                                         shared_ptr<ListRepositoryMemberWithInheritedRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGroupDetailResponse getGroupDetail(shared_ptr<GetGroupDetailRequest> request);
  GetGroupDetailResponse getGroupDetailWithOptions(shared_ptr<GetGroupDetailRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCodeupOrganizationResponse getCodeupOrganization(shared_ptr<string> OrganizationIdentity, shared_ptr<GetCodeupOrganizationRequest> request);
  GetCodeupOrganizationResponse getCodeupOrganizationWithOptions(shared_ptr<string> OrganizationIdentity,
                                                                 shared_ptr<GetCodeupOrganizationRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOrganizationSecurityCenterStatusResponse getOrganizationSecurityCenterStatus(shared_ptr<GetOrganizationSecurityCenterStatusRequest> request);
  GetOrganizationSecurityCenterStatusResponse getOrganizationSecurityCenterStatusWithOptions(shared_ptr<GetOrganizationSecurityCenterStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRepositoryBranchesResponse listRepositoryBranches(shared_ptr<string> ProjectId, shared_ptr<ListRepositoryBranchesRequest> request);
  ListRepositoryBranchesResponse listRepositoryBranchesWithOptions(shared_ptr<string> ProjectId,
                                                                   shared_ptr<ListRepositoryBranchesRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateBranchResponse createBranch(shared_ptr<string> ProjectId, shared_ptr<CreateBranchRequest> request);
  CreateBranchResponse createBranchWithOptions(shared_ptr<string> ProjectId,
                                               shared_ptr<CreateBranchRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGroupRepositoriesResponse listGroupRepositories(shared_ptr<string> Identity, shared_ptr<ListGroupRepositoriesRequest> request);
  ListGroupRepositoriesResponse listGroupRepositoriesWithOptions(shared_ptr<string> Identity,
                                                                 shared_ptr<ListGroupRepositoriesRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRepositoryTagV2Response getRepositoryTagV2(shared_ptr<string> ProjectId, shared_ptr<GetRepositoryTagV2Request> request);
  GetRepositoryTagV2Response getRepositoryTagV2WithOptions(shared_ptr<string> ProjectId,
                                                           shared_ptr<GetRepositoryTagV2Request> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMergeRequestSettingResponse getMergeRequestSetting(shared_ptr<string> ProjectId, shared_ptr<GetMergeRequestSettingRequest> request);
  GetMergeRequestSettingResponse getMergeRequestSettingWithOptions(shared_ptr<string> ProjectId,
                                                                   shared_ptr<GetMergeRequestSettingRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRepositoryWebhookResponse listRepositoryWebhook(shared_ptr<string> ProjectId, shared_ptr<ListRepositoryWebhookRequest> request);
  ListRepositoryWebhookResponse listRepositoryWebhookWithOptions(shared_ptr<string> ProjectId,
                                                                 shared_ptr<ListRepositoryWebhookRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Codeup20200414

#endif
