// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DEVOPS20210625_H_
#define ALIBABACLOUD_DEVOPS20210625_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Devops20210625 {
class AddRepositoryMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<long> accessLevel{};
  shared_ptr<string> aliyunPks{};
  shared_ptr<string> organizationId{};

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
    if (accessLevel) {
      res["accessLevel"] = boost::any(*accessLevel);
    }
    if (aliyunPks) {
      res["aliyunPks"] = boost::any(*aliyunPks);
    }
    if (organizationId) {
      res["organizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("accessLevel") != m.end() && !m["accessLevel"].empty()) {
      accessLevel = make_shared<long>(boost::any_cast<long>(m["accessLevel"]));
    }
    if (m.find("aliyunPks") != m.end() && !m["aliyunPks"].empty()) {
      aliyunPks = make_shared<string>(boost::any_cast<string>(m["aliyunPks"]));
    }
    if (m.find("organizationId") != m.end() && !m["organizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["organizationId"]));
    }
  }


  virtual ~AddRepositoryMemberRequest() = default;
};
class AddRepositoryMemberResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> accessLevel{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> email{};
  shared_ptr<string> externUserId{};
  shared_ptr<long> id{};
  shared_ptr<string> state{};

  AddRepositoryMemberResponseBodyResult() {}

  explicit AddRepositoryMemberResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessLevel) {
      res["AccessLevel"] = boost::any(*accessLevel);
    }
    if (avatarUrl) {
      res["AvatarUrl"] = boost::any(*avatarUrl);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (externUserId) {
      res["ExternUserId"] = boost::any(*externUserId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessLevel") != m.end() && !m["AccessLevel"].empty()) {
      accessLevel = make_shared<long>(boost::any_cast<long>(m["AccessLevel"]));
    }
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("ExternUserId") != m.end() && !m["ExternUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["ExternUserId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~AddRepositoryMemberResponseBodyResult() = default;
};
class AddRepositoryMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<AddRepositoryMemberResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  AddRepositoryMemberResponseBody() {}

  explicit AddRepositoryMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddRepositoryMemberResponseBody() = default;
};
class AddRepositoryMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddRepositoryMemberResponseBody> body{};

  AddRepositoryMemberResponse() {}

  explicit AddRepositoryMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddRepositoryMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddRepositoryMemberResponseBody>(model1);
      }
    }
  }


  virtual ~AddRepositoryMemberResponse() = default;
};
class AddWebhookRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> description{};
  shared_ptr<bool> enableSslVerification{};
  shared_ptr<bool> mergeRequestsEvents{};
  shared_ptr<bool> noteEvents{};
  shared_ptr<bool> pushEvents{};
  shared_ptr<string> secretToken{};
  shared_ptr<bool> tagPushEvents{};
  shared_ptr<string> url{};

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
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (enableSslVerification) {
      res["enableSslVerification"] = boost::any(*enableSslVerification);
    }
    if (mergeRequestsEvents) {
      res["mergeRequestsEvents"] = boost::any(*mergeRequestsEvents);
    }
    if (noteEvents) {
      res["noteEvents"] = boost::any(*noteEvents);
    }
    if (pushEvents) {
      res["pushEvents"] = boost::any(*pushEvents);
    }
    if (secretToken) {
      res["secretToken"] = boost::any(*secretToken);
    }
    if (tagPushEvents) {
      res["tagPushEvents"] = boost::any(*tagPushEvents);
    }
    if (url) {
      res["url"] = boost::any(*url);
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
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("enableSslVerification") != m.end() && !m["enableSslVerification"].empty()) {
      enableSslVerification = make_shared<bool>(boost::any_cast<bool>(m["enableSslVerification"]));
    }
    if (m.find("mergeRequestsEvents") != m.end() && !m["mergeRequestsEvents"].empty()) {
      mergeRequestsEvents = make_shared<bool>(boost::any_cast<bool>(m["mergeRequestsEvents"]));
    }
    if (m.find("noteEvents") != m.end() && !m["noteEvents"].empty()) {
      noteEvents = make_shared<bool>(boost::any_cast<bool>(m["noteEvents"]));
    }
    if (m.find("pushEvents") != m.end() && !m["pushEvents"].empty()) {
      pushEvents = make_shared<bool>(boost::any_cast<bool>(m["pushEvents"]));
    }
    if (m.find("secretToken") != m.end() && !m["secretToken"].empty()) {
      secretToken = make_shared<string>(boost::any_cast<string>(m["secretToken"]));
    }
    if (m.find("tagPushEvents") != m.end() && !m["tagPushEvents"].empty()) {
      tagPushEvents = make_shared<bool>(boost::any_cast<bool>(m["tagPushEvents"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~AddWebhookRequest() = default;
};
class AddWebhookResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> description{};
  shared_ptr<bool> enableSslVerification{};
  shared_ptr<long> id{};
  shared_ptr<string> lastTestResult{};
  shared_ptr<bool> mergeRequestsEvents{};
  shared_ptr<bool> noteEvents{};
  shared_ptr<bool> pushEvents{};
  shared_ptr<long> repositoryId{};
  shared_ptr<string> secretToken{};
  shared_ptr<bool> tagPushEvents{};
  shared_ptr<string> url{};

  AddWebhookResponseBodyResult() {}

  explicit AddWebhookResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["createdAt"] = boost::any(*createdAt);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (enableSslVerification) {
      res["enableSslVerification"] = boost::any(*enableSslVerification);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (lastTestResult) {
      res["lastTestResult"] = boost::any(*lastTestResult);
    }
    if (mergeRequestsEvents) {
      res["mergeRequestsEvents"] = boost::any(*mergeRequestsEvents);
    }
    if (noteEvents) {
      res["noteEvents"] = boost::any(*noteEvents);
    }
    if (pushEvents) {
      res["pushEvents"] = boost::any(*pushEvents);
    }
    if (repositoryId) {
      res["repositoryId"] = boost::any(*repositoryId);
    }
    if (secretToken) {
      res["secretToken"] = boost::any(*secretToken);
    }
    if (tagPushEvents) {
      res["tagPushEvents"] = boost::any(*tagPushEvents);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createdAt") != m.end() && !m["createdAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["createdAt"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("enableSslVerification") != m.end() && !m["enableSslVerification"].empty()) {
      enableSslVerification = make_shared<bool>(boost::any_cast<bool>(m["enableSslVerification"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("lastTestResult") != m.end() && !m["lastTestResult"].empty()) {
      lastTestResult = make_shared<string>(boost::any_cast<string>(m["lastTestResult"]));
    }
    if (m.find("mergeRequestsEvents") != m.end() && !m["mergeRequestsEvents"].empty()) {
      mergeRequestsEvents = make_shared<bool>(boost::any_cast<bool>(m["mergeRequestsEvents"]));
    }
    if (m.find("noteEvents") != m.end() && !m["noteEvents"].empty()) {
      noteEvents = make_shared<bool>(boost::any_cast<bool>(m["noteEvents"]));
    }
    if (m.find("pushEvents") != m.end() && !m["pushEvents"].empty()) {
      pushEvents = make_shared<bool>(boost::any_cast<bool>(m["pushEvents"]));
    }
    if (m.find("repositoryId") != m.end() && !m["repositoryId"].empty()) {
      repositoryId = make_shared<long>(boost::any_cast<long>(m["repositoryId"]));
    }
    if (m.find("secretToken") != m.end() && !m["secretToken"].empty()) {
      secretToken = make_shared<string>(boost::any_cast<string>(m["secretToken"]));
    }
    if (m.find("tagPushEvents") != m.end() && !m["tagPushEvents"].empty()) {
      tagPushEvents = make_shared<bool>(boost::any_cast<bool>(m["tagPushEvents"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~AddWebhookResponseBodyResult() = default;
};
class AddWebhookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<AddWebhookResponseBodyResult> result{};
  shared_ptr<bool> success{};

  AddWebhookResponseBody() {}

  explicit AddWebhookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        AddWebhookResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<AddWebhookResponseBodyResult>(model1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~AddWebhookResponseBody() = default;
};
class AddWebhookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddWebhookResponseBody> body{};

  AddWebhookResponse() {}

  explicit AddWebhookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddWebhookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddWebhookResponseBody>(model1);
      }
    }
  }


  virtual ~AddWebhookResponse() = default;
};
class CreateFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> branchName{};
  shared_ptr<string> commitMessage{};
  shared_ptr<string> content{};
  shared_ptr<string> encoding{};
  shared_ptr<string> filePath{};
  shared_ptr<string> organizationId{};

  CreateFileRequest() {}

  explicit CreateFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["accessToken"] = boost::any(*accessToken);
    }
    if (branchName) {
      res["branchName"] = boost::any(*branchName);
    }
    if (commitMessage) {
      res["commitMessage"] = boost::any(*commitMessage);
    }
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (encoding) {
      res["encoding"] = boost::any(*encoding);
    }
    if (filePath) {
      res["filePath"] = boost::any(*filePath);
    }
    if (organizationId) {
      res["organizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessToken") != m.end() && !m["accessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["accessToken"]));
    }
    if (m.find("branchName") != m.end() && !m["branchName"].empty()) {
      branchName = make_shared<string>(boost::any_cast<string>(m["branchName"]));
    }
    if (m.find("commitMessage") != m.end() && !m["commitMessage"].empty()) {
      commitMessage = make_shared<string>(boost::any_cast<string>(m["commitMessage"]));
    }
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("encoding") != m.end() && !m["encoding"].empty()) {
      encoding = make_shared<string>(boost::any_cast<string>(m["encoding"]));
    }
    if (m.find("filePath") != m.end() && !m["filePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["filePath"]));
    }
    if (m.find("organizationId") != m.end() && !m["organizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["organizationId"]));
    }
  }


  virtual ~CreateFileRequest() = default;
};
class CreateFileResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> branchName{};
  shared_ptr<string> filePath{};

  CreateFileResponseBodyResult() {}

  explicit CreateFileResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (branchName) {
      res["branchName"] = boost::any(*branchName);
    }
    if (filePath) {
      res["filePath"] = boost::any(*filePath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("branchName") != m.end() && !m["branchName"].empty()) {
      branchName = make_shared<string>(boost::any_cast<string>(m["branchName"]));
    }
    if (m.find("filePath") != m.end() && !m["filePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["filePath"]));
    }
  }


  virtual ~CreateFileResponseBodyResult() = default;
};
class CreateFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<CreateFileResponseBodyResult> result{};
  shared_ptr<bool> success{};

  CreateFileResponseBody() {}

  explicit CreateFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        CreateFileResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<CreateFileResponseBodyResult>(model1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreateFileResponseBody() = default;
};
class CreateFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFileResponseBody> body{};

  CreateFileResponse() {}

  explicit CreateFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFileResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFileResponse() = default;
};
class CreateFlowTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> color{};
  shared_ptr<long> flowTagGroupId{};
  shared_ptr<string> name{};

  CreateFlowTagRequest() {}

  explicit CreateFlowTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (color) {
      res["color"] = boost::any(*color);
    }
    if (flowTagGroupId) {
      res["flowTagGroupId"] = boost::any(*flowTagGroupId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("color") != m.end() && !m["color"].empty()) {
      color = make_shared<string>(boost::any_cast<string>(m["color"]));
    }
    if (m.find("flowTagGroupId") != m.end() && !m["flowTagGroupId"].empty()) {
      flowTagGroupId = make_shared<long>(boost::any_cast<long>(m["flowTagGroupId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~CreateFlowTagRequest() = default;
};
class CreateFlowTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> id{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateFlowTagResponseBody() {}

  explicit CreateFlowTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (id) {
      res["id"] = boost::any(*id);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreateFlowTagResponseBody() = default;
};
class CreateFlowTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFlowTagResponseBody> body{};

  CreateFlowTagResponse() {}

  explicit CreateFlowTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFlowTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFlowTagResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFlowTagResponse() = default;
};
class CreateFlowTagGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  CreateFlowTagGroupRequest() {}

  explicit CreateFlowTagGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~CreateFlowTagGroupRequest() = default;
};
class CreateFlowTagGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> id{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateFlowTagGroupResponseBody() {}

  explicit CreateFlowTagGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (id) {
      res["id"] = boost::any(*id);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreateFlowTagGroupResponseBody() = default;
};
class CreateFlowTagGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFlowTagGroupResponseBody> body{};

  CreateFlowTagGroupResponse() {}

  explicit CreateFlowTagGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFlowTagGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFlowTagGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFlowTagGroupResponse() = default;
};
class CreateHostGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliyunRegion{};
  shared_ptr<string> ecsLabelKey{};
  shared_ptr<string> ecsLabelValue{};
  shared_ptr<string> ecsType{};
  shared_ptr<string> envId{};
  shared_ptr<string> machineInfos{};
  shared_ptr<string> name{};
  shared_ptr<long> serviceConnectionId{};
  shared_ptr<string> tagIds{};
  shared_ptr<string> type{};

  CreateHostGroupRequest() {}

  explicit CreateHostGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunRegion) {
      res["aliyunRegion"] = boost::any(*aliyunRegion);
    }
    if (ecsLabelKey) {
      res["ecsLabelKey"] = boost::any(*ecsLabelKey);
    }
    if (ecsLabelValue) {
      res["ecsLabelValue"] = boost::any(*ecsLabelValue);
    }
    if (ecsType) {
      res["ecsType"] = boost::any(*ecsType);
    }
    if (envId) {
      res["envId"] = boost::any(*envId);
    }
    if (machineInfos) {
      res["machineInfos"] = boost::any(*machineInfos);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (serviceConnectionId) {
      res["serviceConnectionId"] = boost::any(*serviceConnectionId);
    }
    if (tagIds) {
      res["tagIds"] = boost::any(*tagIds);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aliyunRegion") != m.end() && !m["aliyunRegion"].empty()) {
      aliyunRegion = make_shared<string>(boost::any_cast<string>(m["aliyunRegion"]));
    }
    if (m.find("ecsLabelKey") != m.end() && !m["ecsLabelKey"].empty()) {
      ecsLabelKey = make_shared<string>(boost::any_cast<string>(m["ecsLabelKey"]));
    }
    if (m.find("ecsLabelValue") != m.end() && !m["ecsLabelValue"].empty()) {
      ecsLabelValue = make_shared<string>(boost::any_cast<string>(m["ecsLabelValue"]));
    }
    if (m.find("ecsType") != m.end() && !m["ecsType"].empty()) {
      ecsType = make_shared<string>(boost::any_cast<string>(m["ecsType"]));
    }
    if (m.find("envId") != m.end() && !m["envId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["envId"]));
    }
    if (m.find("machineInfos") != m.end() && !m["machineInfos"].empty()) {
      machineInfos = make_shared<string>(boost::any_cast<string>(m["machineInfos"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("serviceConnectionId") != m.end() && !m["serviceConnectionId"].empty()) {
      serviceConnectionId = make_shared<long>(boost::any_cast<long>(m["serviceConnectionId"]));
    }
    if (m.find("tagIds") != m.end() && !m["tagIds"].empty()) {
      tagIds = make_shared<string>(boost::any_cast<string>(m["tagIds"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~CreateHostGroupRequest() = default;
};
class CreateHostGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> hostGroupId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateHostGroupResponseBody() {}

  explicit CreateHostGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (hostGroupId) {
      res["hostGroupId"] = boost::any(*hostGroupId);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("hostGroupId") != m.end() && !m["hostGroupId"].empty()) {
      hostGroupId = make_shared<long>(boost::any_cast<long>(m["hostGroupId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreateHostGroupResponseBody() = default;
};
class CreateHostGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateHostGroupResponseBody> body{};

  CreateHostGroupResponse() {}

  explicit CreateHostGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateHostGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateHostGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateHostGroupResponse() = default;
};
class CreateOAuthTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> clientSecret{};
  shared_ptr<string> code{};
  shared_ptr<string> grantType{};
  shared_ptr<string> login{};
  shared_ptr<string> scope{};

  CreateOAuthTokenRequest() {}

  explicit CreateOAuthTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["clientId"] = boost::any(*clientId);
    }
    if (clientSecret) {
      res["clientSecret"] = boost::any(*clientSecret);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (grantType) {
      res["grantType"] = boost::any(*grantType);
    }
    if (login) {
      res["login"] = boost::any(*login);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientId") != m.end() && !m["clientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["clientId"]));
    }
    if (m.find("clientSecret") != m.end() && !m["clientSecret"].empty()) {
      clientSecret = make_shared<string>(boost::any_cast<string>(m["clientSecret"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("grantType") != m.end() && !m["grantType"].empty()) {
      grantType = make_shared<string>(boost::any_cast<string>(m["grantType"]));
    }
    if (m.find("login") != m.end() && !m["login"].empty()) {
      login = make_shared<string>(boost::any_cast<string>(m["login"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
  }


  virtual ~CreateOAuthTokenRequest() = default;
};
class CreateOAuthTokenResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> id{};
  shared_ptr<string> scope{};
  shared_ptr<string> tokenType{};

  CreateOAuthTokenResponseBodyResult() {}

  explicit CreateOAuthTokenResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["accessToken"] = boost::any(*accessToken);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (tokenType) {
      res["tokenType"] = boost::any(*tokenType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessToken") != m.end() && !m["accessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["accessToken"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
    if (m.find("tokenType") != m.end() && !m["tokenType"].empty()) {
      tokenType = make_shared<string>(boost::any_cast<string>(m["tokenType"]));
    }
  }


  virtual ~CreateOAuthTokenResponseBodyResult() = default;
};
class CreateOAuthTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<CreateOAuthTokenResponseBodyResult> result{};
  shared_ptr<string> success{};

  CreateOAuthTokenResponseBody() {}

  explicit CreateOAuthTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        CreateOAuthTokenResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<CreateOAuthTokenResponseBodyResult>(model1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
  }


  virtual ~CreateOAuthTokenResponseBody() = default;
};
class CreateOAuthTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateOAuthTokenResponseBody> body{};

  CreateOAuthTokenResponse() {}

  explicit CreateOAuthTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateOAuthTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateOAuthTokenResponseBody>(model1);
      }
    }
  }


  virtual ~CreateOAuthTokenResponse() = default;
};
class CreatePipelineGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  CreatePipelineGroupRequest() {}

  explicit CreatePipelineGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~CreatePipelineGroupRequest() = default;
};
class CreatePipelineGroupResponseBodyPipelineGroup : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  CreatePipelineGroupResponseBodyPipelineGroup() {}

  explicit CreatePipelineGroupResponseBodyPipelineGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~CreatePipelineGroupResponseBodyPipelineGroup() = default;
};
class CreatePipelineGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<CreatePipelineGroupResponseBodyPipelineGroup> pipelineGroup{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreatePipelineGroupResponseBody() {}

  explicit CreatePipelineGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (pipelineGroup) {
      res["pipelineGroup"] = pipelineGroup ? boost::any(pipelineGroup->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("pipelineGroup") != m.end() && !m["pipelineGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["pipelineGroup"].type()) {
        CreatePipelineGroupResponseBodyPipelineGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["pipelineGroup"]));
        pipelineGroup = make_shared<CreatePipelineGroupResponseBodyPipelineGroup>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreatePipelineGroupResponseBody() = default;
};
class CreatePipelineGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePipelineGroupResponseBody> body{};

  CreatePipelineGroupResponse() {}

  explicit CreatePipelineGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePipelineGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePipelineGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePipelineGroupResponse() = default;
};
class CreateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> customCode{};
  shared_ptr<string> name{};
  shared_ptr<string> scope{};
  shared_ptr<string> templateIdentifier{};

  CreateProjectRequest() {}

  explicit CreateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customCode) {
      res["customCode"] = boost::any(*customCode);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (templateIdentifier) {
      res["templateIdentifier"] = boost::any(*templateIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("customCode") != m.end() && !m["customCode"].empty()) {
      customCode = make_shared<string>(boost::any_cast<string>(m["customCode"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
    if (m.find("templateIdentifier") != m.end() && !m["templateIdentifier"].empty()) {
      templateIdentifier = make_shared<string>(boost::any_cast<string>(m["templateIdentifier"]));
    }
  }


  virtual ~CreateProjectRequest() = default;
};
class CreateProjectResponseBodyProject : public Darabonba::Model {
public:
  shared_ptr<string> categoryIdentifier{};
  shared_ptr<string> creator{};
  shared_ptr<string> customCode{};
  shared_ptr<string> description{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> icon{};
  shared_ptr<string> identifier{};
  shared_ptr<string> logicalStatus{};
  shared_ptr<string> modifier{};
  shared_ptr<string> name{};
  shared_ptr<string> organizationIdentifier{};
  shared_ptr<string> scope{};
  shared_ptr<string> statusIdentifier{};
  shared_ptr<string> statusStageIdentifier{};
  shared_ptr<string> typeIdentifier{};

  CreateProjectResponseBodyProject() {}

  explicit CreateProjectResponseBodyProject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryIdentifier) {
      res["categoryIdentifier"] = boost::any(*categoryIdentifier);
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (customCode) {
      res["customCode"] = boost::any(*customCode);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (icon) {
      res["icon"] = boost::any(*icon);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (logicalStatus) {
      res["logicalStatus"] = boost::any(*logicalStatus);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (organizationIdentifier) {
      res["organizationIdentifier"] = boost::any(*organizationIdentifier);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (statusIdentifier) {
      res["statusIdentifier"] = boost::any(*statusIdentifier);
    }
    if (statusStageIdentifier) {
      res["statusStageIdentifier"] = boost::any(*statusStageIdentifier);
    }
    if (typeIdentifier) {
      res["typeIdentifier"] = boost::any(*typeIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("categoryIdentifier") != m.end() && !m["categoryIdentifier"].empty()) {
      categoryIdentifier = make_shared<string>(boost::any_cast<string>(m["categoryIdentifier"]));
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("customCode") != m.end() && !m["customCode"].empty()) {
      customCode = make_shared<string>(boost::any_cast<string>(m["customCode"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["gmtModified"]));
    }
    if (m.find("icon") != m.end() && !m["icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["icon"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("logicalStatus") != m.end() && !m["logicalStatus"].empty()) {
      logicalStatus = make_shared<string>(boost::any_cast<string>(m["logicalStatus"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["modifier"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("organizationIdentifier") != m.end() && !m["organizationIdentifier"].empty()) {
      organizationIdentifier = make_shared<string>(boost::any_cast<string>(m["organizationIdentifier"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
    if (m.find("statusIdentifier") != m.end() && !m["statusIdentifier"].empty()) {
      statusIdentifier = make_shared<string>(boost::any_cast<string>(m["statusIdentifier"]));
    }
    if (m.find("statusStageIdentifier") != m.end() && !m["statusStageIdentifier"].empty()) {
      statusStageIdentifier = make_shared<string>(boost::any_cast<string>(m["statusStageIdentifier"]));
    }
    if (m.find("typeIdentifier") != m.end() && !m["typeIdentifier"].empty()) {
      typeIdentifier = make_shared<string>(boost::any_cast<string>(m["typeIdentifier"]));
    }
  }


  virtual ~CreateProjectResponseBodyProject() = default;
};
class CreateProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<CreateProjectResponseBodyProject> project{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateProjectResponseBody() {}

  explicit CreateProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (project) {
      res["project"] = project ? boost::any(project->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      if (typeid(map<string, boost::any>) == m["project"].type()) {
        CreateProjectResponseBodyProject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["project"]));
        project = make_shared<CreateProjectResponseBodyProject>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreateProjectResponseBody() = default;
};
class CreateProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateProjectResponseBody> body{};

  CreateProjectResponse() {}

  explicit CreateProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProjectResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProjectResponse() = default;
};
class CreateRepositoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> description{};
  shared_ptr<string> gitignoreType{};
  shared_ptr<string> importAccount{};
  shared_ptr<bool> importDemoProject{};
  shared_ptr<string> importRepoType{};
  shared_ptr<string> importToken{};
  shared_ptr<string> importTokenEncrypted{};
  shared_ptr<string> importUrl{};
  shared_ptr<bool> initStandardService{};
  shared_ptr<bool> isCryptoEnabled{};
  shared_ptr<string> localImportUrl{};
  shared_ptr<string> name{};
  shared_ptr<long> namespaceId{};
  shared_ptr<string> path{};
  shared_ptr<string> readmeType{};
  shared_ptr<long> visibilityLevel{};
  shared_ptr<bool> createParentPath{};
  shared_ptr<string> organizationId{};
  shared_ptr<bool> sync{};

  CreateRepositoryRequest() {}

  explicit CreateRepositoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["accessToken"] = boost::any(*accessToken);
    }
    if (avatarUrl) {
      res["avatarUrl"] = boost::any(*avatarUrl);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (gitignoreType) {
      res["gitignoreType"] = boost::any(*gitignoreType);
    }
    if (importAccount) {
      res["importAccount"] = boost::any(*importAccount);
    }
    if (importDemoProject) {
      res["importDemoProject"] = boost::any(*importDemoProject);
    }
    if (importRepoType) {
      res["importRepoType"] = boost::any(*importRepoType);
    }
    if (importToken) {
      res["importToken"] = boost::any(*importToken);
    }
    if (importTokenEncrypted) {
      res["importTokenEncrypted"] = boost::any(*importTokenEncrypted);
    }
    if (importUrl) {
      res["importUrl"] = boost::any(*importUrl);
    }
    if (initStandardService) {
      res["initStandardService"] = boost::any(*initStandardService);
    }
    if (isCryptoEnabled) {
      res["isCryptoEnabled"] = boost::any(*isCryptoEnabled);
    }
    if (localImportUrl) {
      res["localImportUrl"] = boost::any(*localImportUrl);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (namespaceId) {
      res["namespaceId"] = boost::any(*namespaceId);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (readmeType) {
      res["readmeType"] = boost::any(*readmeType);
    }
    if (visibilityLevel) {
      res["visibilityLevel"] = boost::any(*visibilityLevel);
    }
    if (createParentPath) {
      res["createParentPath"] = boost::any(*createParentPath);
    }
    if (organizationId) {
      res["organizationId"] = boost::any(*organizationId);
    }
    if (sync) {
      res["sync"] = boost::any(*sync);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessToken") != m.end() && !m["accessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["accessToken"]));
    }
    if (m.find("avatarUrl") != m.end() && !m["avatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["avatarUrl"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("gitignoreType") != m.end() && !m["gitignoreType"].empty()) {
      gitignoreType = make_shared<string>(boost::any_cast<string>(m["gitignoreType"]));
    }
    if (m.find("importAccount") != m.end() && !m["importAccount"].empty()) {
      importAccount = make_shared<string>(boost::any_cast<string>(m["importAccount"]));
    }
    if (m.find("importDemoProject") != m.end() && !m["importDemoProject"].empty()) {
      importDemoProject = make_shared<bool>(boost::any_cast<bool>(m["importDemoProject"]));
    }
    if (m.find("importRepoType") != m.end() && !m["importRepoType"].empty()) {
      importRepoType = make_shared<string>(boost::any_cast<string>(m["importRepoType"]));
    }
    if (m.find("importToken") != m.end() && !m["importToken"].empty()) {
      importToken = make_shared<string>(boost::any_cast<string>(m["importToken"]));
    }
    if (m.find("importTokenEncrypted") != m.end() && !m["importTokenEncrypted"].empty()) {
      importTokenEncrypted = make_shared<string>(boost::any_cast<string>(m["importTokenEncrypted"]));
    }
    if (m.find("importUrl") != m.end() && !m["importUrl"].empty()) {
      importUrl = make_shared<string>(boost::any_cast<string>(m["importUrl"]));
    }
    if (m.find("initStandardService") != m.end() && !m["initStandardService"].empty()) {
      initStandardService = make_shared<bool>(boost::any_cast<bool>(m["initStandardService"]));
    }
    if (m.find("isCryptoEnabled") != m.end() && !m["isCryptoEnabled"].empty()) {
      isCryptoEnabled = make_shared<bool>(boost::any_cast<bool>(m["isCryptoEnabled"]));
    }
    if (m.find("localImportUrl") != m.end() && !m["localImportUrl"].empty()) {
      localImportUrl = make_shared<string>(boost::any_cast<string>(m["localImportUrl"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("namespaceId") != m.end() && !m["namespaceId"].empty()) {
      namespaceId = make_shared<long>(boost::any_cast<long>(m["namespaceId"]));
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("readmeType") != m.end() && !m["readmeType"].empty()) {
      readmeType = make_shared<string>(boost::any_cast<string>(m["readmeType"]));
    }
    if (m.find("visibilityLevel") != m.end() && !m["visibilityLevel"].empty()) {
      visibilityLevel = make_shared<long>(boost::any_cast<long>(m["visibilityLevel"]));
    }
    if (m.find("createParentPath") != m.end() && !m["createParentPath"].empty()) {
      createParentPath = make_shared<bool>(boost::any_cast<bool>(m["createParentPath"]));
    }
    if (m.find("organizationId") != m.end() && !m["organizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["organizationId"]));
    }
    if (m.find("sync") != m.end() && !m["sync"].empty()) {
      sync = make_shared<bool>(boost::any_cast<bool>(m["sync"]));
    }
  }


  virtual ~CreateRepositoryRequest() = default;
};
class CreateRepositoryResponseBodyResultNamespace : public Darabonba::Model {
public:
  shared_ptr<string> avatar{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> description{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> path{};
  shared_ptr<bool> public_{};
  shared_ptr<string> updatedAt{};
  shared_ptr<string> visibilityLevel{};

  CreateRepositoryResponseBodyResultNamespace() {}

  explicit CreateRepositoryResponseBodyResultNamespace(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avatar) {
      res["avatar"] = boost::any(*avatar);
    }
    if (createdAt) {
      res["createdAt"] = boost::any(*createdAt);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (ownerId) {
      res["ownerId"] = boost::any(*ownerId);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (public_) {
      res["public"] = boost::any(*public_);
    }
    if (updatedAt) {
      res["updatedAt"] = boost::any(*updatedAt);
    }
    if (visibilityLevel) {
      res["visibilityLevel"] = boost::any(*visibilityLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("avatar") != m.end() && !m["avatar"].empty()) {
      avatar = make_shared<string>(boost::any_cast<string>(m["avatar"]));
    }
    if (m.find("createdAt") != m.end() && !m["createdAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["createdAt"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("ownerId") != m.end() && !m["ownerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["ownerId"]));
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("public") != m.end() && !m["public"].empty()) {
      public_ = make_shared<bool>(boost::any_cast<bool>(m["public"]));
    }
    if (m.find("updatedAt") != m.end() && !m["updatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["updatedAt"]));
    }
    if (m.find("visibilityLevel") != m.end() && !m["visibilityLevel"].empty()) {
      visibilityLevel = make_shared<string>(boost::any_cast<string>(m["visibilityLevel"]));
    }
  }


  virtual ~CreateRepositoryResponseBodyResultNamespace() = default;
};
class CreateRepositoryResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> importFromSvn{};
  shared_ptr<bool> archived{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> createdAt{};
  shared_ptr<long> creatorId{};
  shared_ptr<string> defaultBranch{};
  shared_ptr<bool> demoProject{};
  shared_ptr<string> description{};
  shared_ptr<string> httpUrlToRepo{};
  shared_ptr<long> id{};
  shared_ptr<string> lastActivityAt{};
  shared_ptr<string> name{};
  shared_ptr<string> nameWithNamespace{};
  shared_ptr<CreateRepositoryResponseBodyResultNamespace> namespace_{};
  shared_ptr<string> path{};
  shared_ptr<string> pathWithNamespace{};
  shared_ptr<string> sshUrlToRepo{};
  shared_ptr<string> visibilityLevel{};
  shared_ptr<string> webUrl{};

  CreateRepositoryResponseBodyResult() {}

  explicit CreateRepositoryResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (importFromSvn) {
      res["Import_from_svn"] = boost::any(*importFromSvn);
    }
    if (archived) {
      res["archived"] = boost::any(*archived);
    }
    if (avatarUrl) {
      res["avatar_url"] = boost::any(*avatarUrl);
    }
    if (createdAt) {
      res["createdAt"] = boost::any(*createdAt);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (defaultBranch) {
      res["defaultBranch"] = boost::any(*defaultBranch);
    }
    if (demoProject) {
      res["demoProject"] = boost::any(*demoProject);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (httpUrlToRepo) {
      res["httpUrlToRepo"] = boost::any(*httpUrlToRepo);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (lastActivityAt) {
      res["lastActivityAt"] = boost::any(*lastActivityAt);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nameWithNamespace) {
      res["nameWithNamespace"] = boost::any(*nameWithNamespace);
    }
    if (namespace_) {
      res["namespace"] = namespace_ ? boost::any(namespace_->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (pathWithNamespace) {
      res["pathWithNamespace"] = boost::any(*pathWithNamespace);
    }
    if (sshUrlToRepo) {
      res["sshUrlToRepo"] = boost::any(*sshUrlToRepo);
    }
    if (visibilityLevel) {
      res["visibilityLevel"] = boost::any(*visibilityLevel);
    }
    if (webUrl) {
      res["webUrl"] = boost::any(*webUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Import_from_svn") != m.end() && !m["Import_from_svn"].empty()) {
      importFromSvn = make_shared<bool>(boost::any_cast<bool>(m["Import_from_svn"]));
    }
    if (m.find("archived") != m.end() && !m["archived"].empty()) {
      archived = make_shared<bool>(boost::any_cast<bool>(m["archived"]));
    }
    if (m.find("avatar_url") != m.end() && !m["avatar_url"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["avatar_url"]));
    }
    if (m.find("createdAt") != m.end() && !m["createdAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["createdAt"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<long>(boost::any_cast<long>(m["creatorId"]));
    }
    if (m.find("defaultBranch") != m.end() && !m["defaultBranch"].empty()) {
      defaultBranch = make_shared<string>(boost::any_cast<string>(m["defaultBranch"]));
    }
    if (m.find("demoProject") != m.end() && !m["demoProject"].empty()) {
      demoProject = make_shared<bool>(boost::any_cast<bool>(m["demoProject"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("httpUrlToRepo") != m.end() && !m["httpUrlToRepo"].empty()) {
      httpUrlToRepo = make_shared<string>(boost::any_cast<string>(m["httpUrlToRepo"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("lastActivityAt") != m.end() && !m["lastActivityAt"].empty()) {
      lastActivityAt = make_shared<string>(boost::any_cast<string>(m["lastActivityAt"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nameWithNamespace") != m.end() && !m["nameWithNamespace"].empty()) {
      nameWithNamespace = make_shared<string>(boost::any_cast<string>(m["nameWithNamespace"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      if (typeid(map<string, boost::any>) == m["namespace"].type()) {
        CreateRepositoryResponseBodyResultNamespace model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["namespace"]));
        namespace_ = make_shared<CreateRepositoryResponseBodyResultNamespace>(model1);
      }
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("pathWithNamespace") != m.end() && !m["pathWithNamespace"].empty()) {
      pathWithNamespace = make_shared<string>(boost::any_cast<string>(m["pathWithNamespace"]));
    }
    if (m.find("sshUrlToRepo") != m.end() && !m["sshUrlToRepo"].empty()) {
      sshUrlToRepo = make_shared<string>(boost::any_cast<string>(m["sshUrlToRepo"]));
    }
    if (m.find("visibilityLevel") != m.end() && !m["visibilityLevel"].empty()) {
      visibilityLevel = make_shared<string>(boost::any_cast<string>(m["visibilityLevel"]));
    }
    if (m.find("webUrl") != m.end() && !m["webUrl"].empty()) {
      webUrl = make_shared<string>(boost::any_cast<string>(m["webUrl"]));
    }
  }


  virtual ~CreateRepositoryResponseBodyResult() = default;
};
class CreateRepositoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<CreateRepositoryResponseBodyResult> result{};
  shared_ptr<bool> success{};

  CreateRepositoryResponseBody() {}

  explicit CreateRepositoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        CreateRepositoryResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<CreateRepositoryResponseBodyResult>(model1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreateRepositoryResponseBody() = default;
};
class CreateRepositoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRepositoryResponseBody> body{};

  CreateRepositoryResponse() {}

  explicit CreateRepositoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRepositoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRepositoryResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRepositoryResponse() = default;
};
class CreateResourceMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> roleName{};

  CreateResourceMemberRequest() {}

  explicit CreateResourceMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (roleName) {
      res["roleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("roleName") != m.end() && !m["roleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["roleName"]));
    }
  }


  virtual ~CreateResourceMemberRequest() = default;
};
class CreateResourceMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateResourceMemberResponseBody() {}

  explicit CreateResourceMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreateResourceMemberResponseBody() = default;
};
class CreateResourceMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateResourceMemberResponseBody> body{};

  CreateResourceMemberResponse() {}

  explicit CreateResourceMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateResourceMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateResourceMemberResponseBody>(model1);
      }
    }
  }


  virtual ~CreateResourceMemberResponse() = default;
};
class CreateSprintRequest : public Darabonba::Model {
public:
  shared_ptr<string> endDate{};
  shared_ptr<string> name{};
  shared_ptr<string> spaceIdentifier{};
  shared_ptr<vector<string>> staffIds{};
  shared_ptr<string> startDate{};

  CreateSprintRequest() {}

  explicit CreateSprintRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["endDate"] = boost::any(*endDate);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (spaceIdentifier) {
      res["spaceIdentifier"] = boost::any(*spaceIdentifier);
    }
    if (staffIds) {
      res["staffIds"] = boost::any(*staffIds);
    }
    if (startDate) {
      res["startDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endDate") != m.end() && !m["endDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["endDate"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("spaceIdentifier") != m.end() && !m["spaceIdentifier"].empty()) {
      spaceIdentifier = make_shared<string>(boost::any_cast<string>(m["spaceIdentifier"]));
    }
    if (m.find("staffIds") != m.end() && !m["staffIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["staffIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["staffIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      staffIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("startDate") != m.end() && !m["startDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["startDate"]));
    }
  }


  virtual ~CreateSprintRequest() = default;
};
class CreateSprintResponseBodySprint : public Darabonba::Model {
public:
  shared_ptr<string> creator{};
  shared_ptr<string> description{};
  shared_ptr<long> endDate{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> identifier{};
  shared_ptr<string> modifier{};
  shared_ptr<string> name{};
  shared_ptr<string> scope{};
  shared_ptr<string> spaceIdentifier{};
  shared_ptr<long> startDate{};
  shared_ptr<string> status{};

  CreateSprintResponseBodySprint() {}

  explicit CreateSprintResponseBodySprint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (endDate) {
      res["endDate"] = boost::any(*endDate);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (spaceIdentifier) {
      res["spaceIdentifier"] = boost::any(*spaceIdentifier);
    }
    if (startDate) {
      res["startDate"] = boost::any(*startDate);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("endDate") != m.end() && !m["endDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["endDate"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["gmtModified"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["modifier"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
    if (m.find("spaceIdentifier") != m.end() && !m["spaceIdentifier"].empty()) {
      spaceIdentifier = make_shared<string>(boost::any_cast<string>(m["spaceIdentifier"]));
    }
    if (m.find("startDate") != m.end() && !m["startDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["startDate"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~CreateSprintResponseBodySprint() = default;
};
class CreateSprintResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<CreateSprintResponseBodySprint> sprint{};
  shared_ptr<bool> success{};

  CreateSprintResponseBody() {}

  explicit CreateSprintResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sprint) {
      res["sprint"] = sprint ? boost::any(sprint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sprint") != m.end() && !m["sprint"].empty()) {
      if (typeid(map<string, boost::any>) == m["sprint"].type()) {
        CreateSprintResponseBodySprint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sprint"]));
        sprint = make_shared<CreateSprintResponseBodySprint>(model1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreateSprintResponseBody() = default;
};
class CreateSprintResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSprintResponseBody> body{};

  CreateSprintResponse() {}

  explicit CreateSprintResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSprintResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSprintResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSprintResponse() = default;
};
class CreateSshKeyResponseBodySshKey : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> publicKey{};

  CreateSshKeyResponseBodySshKey() {}

  explicit CreateSshKeyResponseBodySshKey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (publicKey) {
      res["publicKey"] = boost::any(*publicKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("publicKey") != m.end() && !m["publicKey"].empty()) {
      publicKey = make_shared<string>(boost::any_cast<string>(m["publicKey"]));
    }
  }


  virtual ~CreateSshKeyResponseBodySshKey() = default;
};
class CreateSshKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<CreateSshKeyResponseBodySshKey> sshKey{};
  shared_ptr<bool> success{};

  CreateSshKeyResponseBody() {}

  explicit CreateSshKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sshKey) {
      res["sshKey"] = sshKey ? boost::any(sshKey->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sshKey") != m.end() && !m["sshKey"].empty()) {
      if (typeid(map<string, boost::any>) == m["sshKey"].type()) {
        CreateSshKeyResponseBodySshKey model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sshKey"]));
        sshKey = make_shared<CreateSshKeyResponseBodySshKey>(model1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreateSshKeyResponseBody() = default;
};
class CreateSshKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSshKeyResponseBody> body{};

  CreateSshKeyResponse() {}

  explicit CreateSshKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSshKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSshKeyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSshKeyResponse() = default;
};
class CreateVariableGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> variables{};

  CreateVariableGroupRequest() {}

  explicit CreateVariableGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (variables) {
      res["variables"] = boost::any(*variables);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      variables = make_shared<string>(boost::any_cast<string>(m["variables"]));
    }
  }


  virtual ~CreateVariableGroupRequest() = default;
};
class CreateVariableGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> variableGroupId{};

  CreateVariableGroupResponseBody() {}

  explicit CreateVariableGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (variableGroupId) {
      res["variableGroupId"] = boost::any(*variableGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("variableGroupId") != m.end() && !m["variableGroupId"].empty()) {
      variableGroupId = make_shared<long>(boost::any_cast<long>(m["variableGroupId"]));
    }
  }


  virtual ~CreateVariableGroupResponseBody() = default;
};
class CreateVariableGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateVariableGroupResponseBody> body{};

  CreateVariableGroupResponse() {}

  explicit CreateVariableGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVariableGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVariableGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVariableGroupResponse() = default;
};
class CreateWorkitemRequestFieldValueList : public Darabonba::Model {
public:
  shared_ptr<string> fieldIdentifier{};
  shared_ptr<string> value{};
  shared_ptr<string> workitemIdentifier{};

  CreateWorkitemRequestFieldValueList() {}

  explicit CreateWorkitemRequestFieldValueList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldIdentifier) {
      res["fieldIdentifier"] = boost::any(*fieldIdentifier);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    if (workitemIdentifier) {
      res["workitemIdentifier"] = boost::any(*workitemIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fieldIdentifier") != m.end() && !m["fieldIdentifier"].empty()) {
      fieldIdentifier = make_shared<string>(boost::any_cast<string>(m["fieldIdentifier"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
    if (m.find("workitemIdentifier") != m.end() && !m["workitemIdentifier"].empty()) {
      workitemIdentifier = make_shared<string>(boost::any_cast<string>(m["workitemIdentifier"]));
    }
  }


  virtual ~CreateWorkitemRequestFieldValueList() = default;
};
class CreateWorkitemRequest : public Darabonba::Model {
public:
  shared_ptr<string> assignedTo{};
  shared_ptr<string> category{};
  shared_ptr<string> description{};
  shared_ptr<string> descriptionFormat{};
  shared_ptr<vector<CreateWorkitemRequestFieldValueList>> fieldValueList{};
  shared_ptr<string> parent{};
  shared_ptr<vector<string>> participant{};
  shared_ptr<string> space{};
  shared_ptr<string> spaceIdentifier{};
  shared_ptr<string> spaceType{};
  shared_ptr<vector<string>> sprint{};
  shared_ptr<string> subject{};
  shared_ptr<vector<string>> tracker{};
  shared_ptr<vector<string>> verifier{};
  shared_ptr<string> workitemType{};

  CreateWorkitemRequest() {}

  explicit CreateWorkitemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assignedTo) {
      res["assignedTo"] = boost::any(*assignedTo);
    }
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (descriptionFormat) {
      res["descriptionFormat"] = boost::any(*descriptionFormat);
    }
    if (fieldValueList) {
      vector<boost::any> temp1;
      for(auto item1:*fieldValueList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["fieldValueList"] = boost::any(temp1);
    }
    if (parent) {
      res["parent"] = boost::any(*parent);
    }
    if (participant) {
      res["participant"] = boost::any(*participant);
    }
    if (space) {
      res["space"] = boost::any(*space);
    }
    if (spaceIdentifier) {
      res["spaceIdentifier"] = boost::any(*spaceIdentifier);
    }
    if (spaceType) {
      res["spaceType"] = boost::any(*spaceType);
    }
    if (sprint) {
      res["sprint"] = boost::any(*sprint);
    }
    if (subject) {
      res["subject"] = boost::any(*subject);
    }
    if (tracker) {
      res["tracker"] = boost::any(*tracker);
    }
    if (verifier) {
      res["verifier"] = boost::any(*verifier);
    }
    if (workitemType) {
      res["workitemType"] = boost::any(*workitemType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("assignedTo") != m.end() && !m["assignedTo"].empty()) {
      assignedTo = make_shared<string>(boost::any_cast<string>(m["assignedTo"]));
    }
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("descriptionFormat") != m.end() && !m["descriptionFormat"].empty()) {
      descriptionFormat = make_shared<string>(boost::any_cast<string>(m["descriptionFormat"]));
    }
    if (m.find("fieldValueList") != m.end() && !m["fieldValueList"].empty()) {
      if (typeid(vector<boost::any>) == m["fieldValueList"].type()) {
        vector<CreateWorkitemRequestFieldValueList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["fieldValueList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateWorkitemRequestFieldValueList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fieldValueList = make_shared<vector<CreateWorkitemRequestFieldValueList>>(expect1);
      }
    }
    if (m.find("parent") != m.end() && !m["parent"].empty()) {
      parent = make_shared<string>(boost::any_cast<string>(m["parent"]));
    }
    if (m.find("participant") != m.end() && !m["participant"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["participant"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["participant"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      participant = make_shared<vector<string>>(toVec1);
    }
    if (m.find("space") != m.end() && !m["space"].empty()) {
      space = make_shared<string>(boost::any_cast<string>(m["space"]));
    }
    if (m.find("spaceIdentifier") != m.end() && !m["spaceIdentifier"].empty()) {
      spaceIdentifier = make_shared<string>(boost::any_cast<string>(m["spaceIdentifier"]));
    }
    if (m.find("spaceType") != m.end() && !m["spaceType"].empty()) {
      spaceType = make_shared<string>(boost::any_cast<string>(m["spaceType"]));
    }
    if (m.find("sprint") != m.end() && !m["sprint"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["sprint"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["sprint"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sprint = make_shared<vector<string>>(toVec1);
    }
    if (m.find("subject") != m.end() && !m["subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["subject"]));
    }
    if (m.find("tracker") != m.end() && !m["tracker"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["tracker"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["tracker"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tracker = make_shared<vector<string>>(toVec1);
    }
    if (m.find("verifier") != m.end() && !m["verifier"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["verifier"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["verifier"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      verifier = make_shared<vector<string>>(toVec1);
    }
    if (m.find("workitemType") != m.end() && !m["workitemType"].empty()) {
      workitemType = make_shared<string>(boost::any_cast<string>(m["workitemType"]));
    }
  }


  virtual ~CreateWorkitemRequest() = default;
};
class CreateWorkitemResponseBodyWorkitem : public Darabonba::Model {
public:
  shared_ptr<string> assignedTo{};
  shared_ptr<string> categoryIdentifier{};
  shared_ptr<string> creator{};
  shared_ptr<string> document{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> identifier{};
  shared_ptr<string> logicalStatus{};
  shared_ptr<string> modifier{};
  shared_ptr<string> parentIdentifier{};
  shared_ptr<string> serialNumber{};
  shared_ptr<string> spaceIdentifier{};
  shared_ptr<string> spaceName{};
  shared_ptr<string> spaceType{};
  shared_ptr<string> sprintIdentifier{};
  shared_ptr<string> status{};
  shared_ptr<string> statusIdentifier{};
  shared_ptr<string> statusStageIdentifier{};
  shared_ptr<string> subject{};
  shared_ptr<long> updateStatusAt{};
  shared_ptr<string> workitemTypeIdentifier{};

  CreateWorkitemResponseBodyWorkitem() {}

  explicit CreateWorkitemResponseBodyWorkitem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assignedTo) {
      res["assignedTo"] = boost::any(*assignedTo);
    }
    if (categoryIdentifier) {
      res["categoryIdentifier"] = boost::any(*categoryIdentifier);
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (document) {
      res["document"] = boost::any(*document);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (logicalStatus) {
      res["logicalStatus"] = boost::any(*logicalStatus);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    if (parentIdentifier) {
      res["parentIdentifier"] = boost::any(*parentIdentifier);
    }
    if (serialNumber) {
      res["serialNumber"] = boost::any(*serialNumber);
    }
    if (spaceIdentifier) {
      res["spaceIdentifier"] = boost::any(*spaceIdentifier);
    }
    if (spaceName) {
      res["spaceName"] = boost::any(*spaceName);
    }
    if (spaceType) {
      res["spaceType"] = boost::any(*spaceType);
    }
    if (sprintIdentifier) {
      res["sprintIdentifier"] = boost::any(*sprintIdentifier);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (statusIdentifier) {
      res["statusIdentifier"] = boost::any(*statusIdentifier);
    }
    if (statusStageIdentifier) {
      res["statusStageIdentifier"] = boost::any(*statusStageIdentifier);
    }
    if (subject) {
      res["subject"] = boost::any(*subject);
    }
    if (updateStatusAt) {
      res["updateStatusAt"] = boost::any(*updateStatusAt);
    }
    if (workitemTypeIdentifier) {
      res["workitemTypeIdentifier"] = boost::any(*workitemTypeIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("assignedTo") != m.end() && !m["assignedTo"].empty()) {
      assignedTo = make_shared<string>(boost::any_cast<string>(m["assignedTo"]));
    }
    if (m.find("categoryIdentifier") != m.end() && !m["categoryIdentifier"].empty()) {
      categoryIdentifier = make_shared<string>(boost::any_cast<string>(m["categoryIdentifier"]));
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("document") != m.end() && !m["document"].empty()) {
      document = make_shared<string>(boost::any_cast<string>(m["document"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["gmtModified"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("logicalStatus") != m.end() && !m["logicalStatus"].empty()) {
      logicalStatus = make_shared<string>(boost::any_cast<string>(m["logicalStatus"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["modifier"]));
    }
    if (m.find("parentIdentifier") != m.end() && !m["parentIdentifier"].empty()) {
      parentIdentifier = make_shared<string>(boost::any_cast<string>(m["parentIdentifier"]));
    }
    if (m.find("serialNumber") != m.end() && !m["serialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["serialNumber"]));
    }
    if (m.find("spaceIdentifier") != m.end() && !m["spaceIdentifier"].empty()) {
      spaceIdentifier = make_shared<string>(boost::any_cast<string>(m["spaceIdentifier"]));
    }
    if (m.find("spaceName") != m.end() && !m["spaceName"].empty()) {
      spaceName = make_shared<string>(boost::any_cast<string>(m["spaceName"]));
    }
    if (m.find("spaceType") != m.end() && !m["spaceType"].empty()) {
      spaceType = make_shared<string>(boost::any_cast<string>(m["spaceType"]));
    }
    if (m.find("sprintIdentifier") != m.end() && !m["sprintIdentifier"].empty()) {
      sprintIdentifier = make_shared<string>(boost::any_cast<string>(m["sprintIdentifier"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("statusIdentifier") != m.end() && !m["statusIdentifier"].empty()) {
      statusIdentifier = make_shared<string>(boost::any_cast<string>(m["statusIdentifier"]));
    }
    if (m.find("statusStageIdentifier") != m.end() && !m["statusStageIdentifier"].empty()) {
      statusStageIdentifier = make_shared<string>(boost::any_cast<string>(m["statusStageIdentifier"]));
    }
    if (m.find("subject") != m.end() && !m["subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["subject"]));
    }
    if (m.find("updateStatusAt") != m.end() && !m["updateStatusAt"].empty()) {
      updateStatusAt = make_shared<long>(boost::any_cast<long>(m["updateStatusAt"]));
    }
    if (m.find("workitemTypeIdentifier") != m.end() && !m["workitemTypeIdentifier"].empty()) {
      workitemTypeIdentifier = make_shared<string>(boost::any_cast<string>(m["workitemTypeIdentifier"]));
    }
  }


  virtual ~CreateWorkitemResponseBodyWorkitem() = default;
};
class CreateWorkitemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<CreateWorkitemResponseBodyWorkitem> workitem{};

  CreateWorkitemResponseBody() {}

  explicit CreateWorkitemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (workitem) {
      res["workitem"] = workitem ? boost::any(workitem->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("workitem") != m.end() && !m["workitem"].empty()) {
      if (typeid(map<string, boost::any>) == m["workitem"].type()) {
        CreateWorkitemResponseBodyWorkitem model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["workitem"]));
        workitem = make_shared<CreateWorkitemResponseBodyWorkitem>(model1);
      }
    }
  }


  virtual ~CreateWorkitemResponseBody() = default;
};
class CreateWorkitemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateWorkitemResponseBody> body{};

  CreateWorkitemResponse() {}

  explicit CreateWorkitemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateWorkitemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateWorkitemResponseBody>(model1);
      }
    }
  }


  virtual ~CreateWorkitemResponse() = default;
};
class CreateWorkspaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> codeUrl{};
  shared_ptr<string> codeVersion{};
  shared_ptr<string> filePath{};
  shared_ptr<string> name{};
  shared_ptr<string> requestFrom{};
  shared_ptr<string> resourceIdentifier{};
  shared_ptr<bool> reuse{};
  shared_ptr<string> workspaceTemplate{};

  CreateWorkspaceRequest() {}

  explicit CreateWorkspaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeUrl) {
      res["codeUrl"] = boost::any(*codeUrl);
    }
    if (codeVersion) {
      res["codeVersion"] = boost::any(*codeVersion);
    }
    if (filePath) {
      res["filePath"] = boost::any(*filePath);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (requestFrom) {
      res["requestFrom"] = boost::any(*requestFrom);
    }
    if (resourceIdentifier) {
      res["resourceIdentifier"] = boost::any(*resourceIdentifier);
    }
    if (reuse) {
      res["reuse"] = boost::any(*reuse);
    }
    if (workspaceTemplate) {
      res["workspaceTemplate"] = boost::any(*workspaceTemplate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("codeUrl") != m.end() && !m["codeUrl"].empty()) {
      codeUrl = make_shared<string>(boost::any_cast<string>(m["codeUrl"]));
    }
    if (m.find("codeVersion") != m.end() && !m["codeVersion"].empty()) {
      codeVersion = make_shared<string>(boost::any_cast<string>(m["codeVersion"]));
    }
    if (m.find("filePath") != m.end() && !m["filePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["filePath"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("requestFrom") != m.end() && !m["requestFrom"].empty()) {
      requestFrom = make_shared<string>(boost::any_cast<string>(m["requestFrom"]));
    }
    if (m.find("resourceIdentifier") != m.end() && !m["resourceIdentifier"].empty()) {
      resourceIdentifier = make_shared<string>(boost::any_cast<string>(m["resourceIdentifier"]));
    }
    if (m.find("reuse") != m.end() && !m["reuse"].empty()) {
      reuse = make_shared<bool>(boost::any_cast<bool>(m["reuse"]));
    }
    if (m.find("workspaceTemplate") != m.end() && !m["workspaceTemplate"].empty()) {
      workspaceTemplate = make_shared<string>(boost::any_cast<string>(m["workspaceTemplate"]));
    }
  }


  virtual ~CreateWorkspaceRequest() = default;
};
class CreateWorkspaceResponseBodyWorkspace : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> creator{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<string> template_{};

  CreateWorkspaceResponseBodyWorkspace() {}

  explicit CreateWorkspaceResponseBodyWorkspace(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (template_) {
      res["template"] = boost::any(*template_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("template") != m.end() && !m["template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["template"]));
    }
  }


  virtual ~CreateWorkspaceResponseBodyWorkspace() = default;
};
class CreateWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<CreateWorkspaceResponseBodyWorkspace> workspace{};

  CreateWorkspaceResponseBody() {}

  explicit CreateWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (workspace) {
      res["workspace"] = workspace ? boost::any(workspace->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      if (typeid(map<string, boost::any>) == m["workspace"].type()) {
        CreateWorkspaceResponseBodyWorkspace model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["workspace"]));
        workspace = make_shared<CreateWorkspaceResponseBodyWorkspace>(model1);
      }
    }
  }


  virtual ~CreateWorkspaceResponseBody() = default;
};
class CreateWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateWorkspaceResponseBody> body{};

  CreateWorkspaceResponse() {}

  explicit CreateWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateWorkspaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateWorkspaceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateWorkspaceResponse() = default;
};
class DeleteFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> branchName{};
  shared_ptr<string> commitMessage{};
  shared_ptr<string> filePath{};
  shared_ptr<string> organizationId{};

  DeleteFileRequest() {}

  explicit DeleteFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["accessToken"] = boost::any(*accessToken);
    }
    if (branchName) {
      res["branchName"] = boost::any(*branchName);
    }
    if (commitMessage) {
      res["commitMessage"] = boost::any(*commitMessage);
    }
    if (filePath) {
      res["filePath"] = boost::any(*filePath);
    }
    if (organizationId) {
      res["organizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessToken") != m.end() && !m["accessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["accessToken"]));
    }
    if (m.find("branchName") != m.end() && !m["branchName"].empty()) {
      branchName = make_shared<string>(boost::any_cast<string>(m["branchName"]));
    }
    if (m.find("commitMessage") != m.end() && !m["commitMessage"].empty()) {
      commitMessage = make_shared<string>(boost::any_cast<string>(m["commitMessage"]));
    }
    if (m.find("filePath") != m.end() && !m["filePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["filePath"]));
    }
    if (m.find("organizationId") != m.end() && !m["organizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["organizationId"]));
    }
  }


  virtual ~DeleteFileRequest() = default;
};
class DeleteFileResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> branchName{};
  shared_ptr<string> filePath{};

  DeleteFileResponseBodyResult() {}

  explicit DeleteFileResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (branchName) {
      res["branchName"] = boost::any(*branchName);
    }
    if (filePath) {
      res["filePath"] = boost::any(*filePath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("branchName") != m.end() && !m["branchName"].empty()) {
      branchName = make_shared<string>(boost::any_cast<string>(m["branchName"]));
    }
    if (m.find("filePath") != m.end() && !m["filePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["filePath"]));
    }
  }


  virtual ~DeleteFileResponseBodyResult() = default;
};
class DeleteFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<DeleteFileResponseBodyResult> result{};
  shared_ptr<bool> success{};

  DeleteFileResponseBody() {}

  explicit DeleteFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DeleteFileResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DeleteFileResponseBodyResult>(model1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeleteFileResponseBody() = default;
};
class DeleteFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFileResponseBody> body{};

  DeleteFileResponse() {}

  explicit DeleteFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFileResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFileResponse() = default;
};
class DeleteFlowTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteFlowTagResponseBody() {}

  explicit DeleteFlowTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeleteFlowTagResponseBody() = default;
};
class DeleteFlowTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFlowTagResponseBody> body{};

  DeleteFlowTagResponse() {}

  explicit DeleteFlowTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFlowTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFlowTagResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFlowTagResponse() = default;
};
class DeleteFlowTagGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteFlowTagGroupResponseBody() {}

  explicit DeleteFlowTagGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeleteFlowTagGroupResponseBody() = default;
};
class DeleteFlowTagGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFlowTagGroupResponseBody> body{};

  DeleteFlowTagGroupResponse() {}

  explicit DeleteFlowTagGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFlowTagGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFlowTagGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFlowTagGroupResponse() = default;
};
class DeleteHostGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteHostGroupResponseBody() {}

  explicit DeleteHostGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeleteHostGroupResponseBody() = default;
};
class DeleteHostGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteHostGroupResponseBody> body{};

  DeleteHostGroupResponse() {}

  explicit DeleteHostGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteHostGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteHostGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteHostGroupResponse() = default;
};
class DeletePipelineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeletePipelineResponseBody() {}

  explicit DeletePipelineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeletePipelineResponseBody() = default;
};
class DeletePipelineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePipelineResponseBody> body{};

  DeletePipelineResponse() {}

  explicit DeletePipelineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePipelineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePipelineResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePipelineResponse() = default;
};
class DeletePipelineGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeletePipelineGroupResponseBody() {}

  explicit DeletePipelineGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeletePipelineGroupResponseBody() = default;
};
class DeletePipelineGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePipelineGroupResponseBody> body{};

  DeletePipelineGroupResponse() {}

  explicit DeletePipelineGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePipelineGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePipelineGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePipelineGroupResponse() = default;
};
class DeleteProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> identifier{};

  DeleteProjectRequest() {}

  explicit DeleteProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
  }


  virtual ~DeleteProjectRequest() = default;
};
class DeleteProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  DeleteProjectResponseBody() {}

  explicit DeleteProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeleteProjectResponseBody() = default;
};
class DeleteProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteProjectResponseBody> body{};

  DeleteProjectResponse() {}

  explicit DeleteProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteProjectResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteProjectResponse() = default;
};
class DeleteRepositoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> reason{};
  shared_ptr<string> organizationId{};

  DeleteRepositoryRequest() {}

  explicit DeleteRepositoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["accessToken"] = boost::any(*accessToken);
    }
    if (reason) {
      res["reason"] = boost::any(*reason);
    }
    if (organizationId) {
      res["organizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessToken") != m.end() && !m["accessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["accessToken"]));
    }
    if (m.find("reason") != m.end() && !m["reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["reason"]));
    }
    if (m.find("organizationId") != m.end() && !m["organizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["organizationId"]));
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
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~DeleteRepositoryResponseBodyResult() = default;
};
class DeleteRepositoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<DeleteRepositoryResponseBodyResult> result{};
  shared_ptr<bool> success{};

  DeleteRepositoryResponseBody() {}

  explicit DeleteRepositoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DeleteRepositoryResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DeleteRepositoryResponseBodyResult>(model1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeleteRepositoryResponseBody() = default;
};
class DeleteRepositoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRepositoryResponseBody> body{};

  DeleteRepositoryResponse() {}

  explicit DeleteRepositoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRepositoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRepositoryResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRepositoryResponse() = default;
};
class DeleteResourceMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteResourceMemberResponseBody() {}

  explicit DeleteResourceMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeleteResourceMemberResponseBody() = default;
};
class DeleteResourceMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteResourceMemberResponseBody> body{};

  DeleteResourceMemberResponse() {}

  explicit DeleteResourceMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteResourceMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteResourceMemberResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteResourceMemberResponse() = default;
};
class DeleteVariableGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteVariableGroupResponseBody() {}

  explicit DeleteVariableGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeleteVariableGroupResponseBody() = default;
};
class DeleteVariableGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteVariableGroupResponseBody> body{};

  DeleteVariableGroupResponse() {}

  explicit DeleteVariableGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteVariableGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVariableGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVariableGroupResponse() = default;
};
class FrozenWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  FrozenWorkspaceResponseBody() {}

  explicit FrozenWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~FrozenWorkspaceResponseBody() = default;
};
class FrozenWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FrozenWorkspaceResponseBody> body{};

  FrozenWorkspaceResponse() {}

  explicit FrozenWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FrozenWorkspaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FrozenWorkspaceResponseBody>(model1);
      }
    }
  }


  virtual ~FrozenWorkspaceResponse() = default;
};
class GetCodeupOrganizationRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
  }


  virtual ~GetCodeupOrganizationRequest() = default;
};
class GetCodeupOrganizationResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<long> id{};
  shared_ptr<long> namespaceId{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> path{};
  shared_ptr<string> updatedAt{};
  shared_ptr<string> userRole{};

  GetCodeupOrganizationResponseBodyResult() {}

  explicit GetCodeupOrganizationResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    if (userRole) {
      res["UserRole"] = boost::any(*userRole);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<long>(boost::any_cast<long>(m["NamespaceId"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["UpdatedAt"]));
    }
    if (m.find("UserRole") != m.end() && !m["UserRole"].empty()) {
      userRole = make_shared<string>(boost::any_cast<string>(m["UserRole"]));
    }
  }


  virtual ~GetCodeupOrganizationResponseBodyResult() = default;
};
class GetCodeupOrganizationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<GetCodeupOrganizationResponseBodyResult> result{};
  shared_ptr<bool> success{};

  GetCodeupOrganizationResponseBody() {}

  explicit GetCodeupOrganizationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetCodeupOrganizationResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetCodeupOrganizationResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetCodeupOrganizationResponseBody() = default;
};
class GetCodeupOrganizationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCodeupOrganizationResponseBody> body{};

  GetCodeupOrganizationResponse() {}

  explicit GetCodeupOrganizationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCodeupOrganizationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCodeupOrganizationResponseBody>(model1);
      }
    }
  }


  virtual ~GetCodeupOrganizationResponse() = default;
};
class GetCustomFieldOptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> spaceIdentifier{};
  shared_ptr<string> spaceType{};
  shared_ptr<string> workitemTypeIdentifier{};

  GetCustomFieldOptionRequest() {}

  explicit GetCustomFieldOptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spaceIdentifier) {
      res["spaceIdentifier"] = boost::any(*spaceIdentifier);
    }
    if (spaceType) {
      res["spaceType"] = boost::any(*spaceType);
    }
    if (workitemTypeIdentifier) {
      res["workitemTypeIdentifier"] = boost::any(*workitemTypeIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("spaceIdentifier") != m.end() && !m["spaceIdentifier"].empty()) {
      spaceIdentifier = make_shared<string>(boost::any_cast<string>(m["spaceIdentifier"]));
    }
    if (m.find("spaceType") != m.end() && !m["spaceType"].empty()) {
      spaceType = make_shared<string>(boost::any_cast<string>(m["spaceType"]));
    }
    if (m.find("workitemTypeIdentifier") != m.end() && !m["workitemTypeIdentifier"].empty()) {
      workitemTypeIdentifier = make_shared<string>(boost::any_cast<string>(m["workitemTypeIdentifier"]));
    }
  }


  virtual ~GetCustomFieldOptionRequest() = default;
};
class GetCustomFieldOptionResponseBodyFileds : public Darabonba::Model {
public:
  shared_ptr<string> displayValue{};
  shared_ptr<string> fieldIdentifier{};
  shared_ptr<string> identifier{};
  shared_ptr<long> level{};
  shared_ptr<long> position{};
  shared_ptr<string> value{};
  shared_ptr<string> valueEn{};

  GetCustomFieldOptionResponseBodyFileds() {}

  explicit GetCustomFieldOptionResponseBodyFileds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayValue) {
      res["displayValue"] = boost::any(*displayValue);
    }
    if (fieldIdentifier) {
      res["fieldIdentifier"] = boost::any(*fieldIdentifier);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (level) {
      res["level"] = boost::any(*level);
    }
    if (position) {
      res["position"] = boost::any(*position);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    if (valueEn) {
      res["valueEn"] = boost::any(*valueEn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("displayValue") != m.end() && !m["displayValue"].empty()) {
      displayValue = make_shared<string>(boost::any_cast<string>(m["displayValue"]));
    }
    if (m.find("fieldIdentifier") != m.end() && !m["fieldIdentifier"].empty()) {
      fieldIdentifier = make_shared<string>(boost::any_cast<string>(m["fieldIdentifier"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["level"]));
    }
    if (m.find("position") != m.end() && !m["position"].empty()) {
      position = make_shared<long>(boost::any_cast<long>(m["position"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
    if (m.find("valueEn") != m.end() && !m["valueEn"].empty()) {
      valueEn = make_shared<string>(boost::any_cast<string>(m["valueEn"]));
    }
  }


  virtual ~GetCustomFieldOptionResponseBodyFileds() = default;
};
class GetCustomFieldOptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<vector<GetCustomFieldOptionResponseBodyFileds>> fileds{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetCustomFieldOptionResponseBody() {}

  explicit GetCustomFieldOptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (fileds) {
      vector<boost::any> temp1;
      for(auto item1:*fileds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["fileds"] = boost::any(temp1);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("fileds") != m.end() && !m["fileds"].empty()) {
      if (typeid(vector<boost::any>) == m["fileds"].type()) {
        vector<GetCustomFieldOptionResponseBodyFileds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["fileds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCustomFieldOptionResponseBodyFileds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileds = make_shared<vector<GetCustomFieldOptionResponseBodyFileds>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetCustomFieldOptionResponseBody() = default;
};
class GetCustomFieldOptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCustomFieldOptionResponseBody> body{};

  GetCustomFieldOptionResponse() {}

  explicit GetCustomFieldOptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCustomFieldOptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCustomFieldOptionResponseBody>(model1);
      }
    }
  }


  virtual ~GetCustomFieldOptionResponse() = default;
};
class GetFileBlobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> filePath{};
  shared_ptr<long> from{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> ref{};
  shared_ptr<long> to{};

  GetFileBlobsRequest() {}

  explicit GetFileBlobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["accessToken"] = boost::any(*accessToken);
    }
    if (filePath) {
      res["filePath"] = boost::any(*filePath);
    }
    if (from) {
      res["from"] = boost::any(*from);
    }
    if (organizationId) {
      res["organizationId"] = boost::any(*organizationId);
    }
    if (ref) {
      res["ref"] = boost::any(*ref);
    }
    if (to) {
      res["to"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessToken") != m.end() && !m["accessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["accessToken"]));
    }
    if (m.find("filePath") != m.end() && !m["filePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["filePath"]));
    }
    if (m.find("from") != m.end() && !m["from"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["from"]));
    }
    if (m.find("organizationId") != m.end() && !m["organizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["organizationId"]));
    }
    if (m.find("ref") != m.end() && !m["ref"].empty()) {
      ref = make_shared<string>(boost::any_cast<string>(m["ref"]));
    }
    if (m.find("to") != m.end() && !m["to"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["to"]));
    }
  }


  virtual ~GetFileBlobsRequest() = default;
};
class GetFileBlobsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<long> totalLines{};

  GetFileBlobsResponseBodyResult() {}

  explicit GetFileBlobsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (totalLines) {
      res["totalLines"] = boost::any(*totalLines);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("totalLines") != m.end() && !m["totalLines"].empty()) {
      totalLines = make_shared<long>(boost::any_cast<long>(m["totalLines"]));
    }
  }


  virtual ~GetFileBlobsResponseBodyResult() = default;
};
class GetFileBlobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<GetFileBlobsResponseBodyResult> result{};
  shared_ptr<bool> success{};

  GetFileBlobsResponseBody() {}

  explicit GetFileBlobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        GetFileBlobsResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<GetFileBlobsResponseBodyResult>(model1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetFileBlobsResponseBody() = default;
};
class GetFileBlobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFileBlobsResponseBody> body{};

  GetFileBlobsResponse() {}

  explicit GetFileBlobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFileBlobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFileBlobsResponseBody>(model1);
      }
    }
  }


  virtual ~GetFileBlobsResponse() = default;
};
class GetFileLastCommitRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> filepath{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> sha{};
  shared_ptr<bool> showSignature{};

  GetFileLastCommitRequest() {}

  explicit GetFileLastCommitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["accessToken"] = boost::any(*accessToken);
    }
    if (filepath) {
      res["filepath"] = boost::any(*filepath);
    }
    if (organizationId) {
      res["organizationId"] = boost::any(*organizationId);
    }
    if (sha) {
      res["sha"] = boost::any(*sha);
    }
    if (showSignature) {
      res["showSignature"] = boost::any(*showSignature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessToken") != m.end() && !m["accessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["accessToken"]));
    }
    if (m.find("filepath") != m.end() && !m["filepath"].empty()) {
      filepath = make_shared<string>(boost::any_cast<string>(m["filepath"]));
    }
    if (m.find("organizationId") != m.end() && !m["organizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["organizationId"]));
    }
    if (m.find("sha") != m.end() && !m["sha"].empty()) {
      sha = make_shared<string>(boost::any_cast<string>(m["sha"]));
    }
    if (m.find("showSignature") != m.end() && !m["showSignature"].empty()) {
      showSignature = make_shared<bool>(boost::any_cast<bool>(m["showSignature"]));
    }
  }


  virtual ~GetFileLastCommitRequest() = default;
};
class GetFileLastCommitResponseBodyResultSignature : public Darabonba::Model {
public:
  shared_ptr<string> gpgKeyId{};
  shared_ptr<string> verificationStatus{};

  GetFileLastCommitResponseBodyResultSignature() {}

  explicit GetFileLastCommitResponseBodyResultSignature(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gpgKeyId) {
      res["GpgKeyId"] = boost::any(*gpgKeyId);
    }
    if (verificationStatus) {
      res["VerificationStatus"] = boost::any(*verificationStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GpgKeyId") != m.end() && !m["GpgKeyId"].empty()) {
      gpgKeyId = make_shared<string>(boost::any_cast<string>(m["GpgKeyId"]));
    }
    if (m.find("VerificationStatus") != m.end() && !m["VerificationStatus"].empty()) {
      verificationStatus = make_shared<string>(boost::any_cast<string>(m["VerificationStatus"]));
    }
  }


  virtual ~GetFileLastCommitResponseBodyResultSignature() = default;
};
class GetFileLastCommitResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> authorDate{};
  shared_ptr<string> authorEmail{};
  shared_ptr<string> authorName{};
  shared_ptr<string> committedDate{};
  shared_ptr<string> committerEmail{};
  shared_ptr<string> committerName{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> id{};
  shared_ptr<string> message{};
  shared_ptr<vector<string>> parentIds{};
  shared_ptr<string> shortId{};
  shared_ptr<GetFileLastCommitResponseBodyResultSignature> signature{};
  shared_ptr<string> title{};

  GetFileLastCommitResponseBodyResult() {}

  explicit GetFileLastCommitResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorDate) {
      res["AuthorDate"] = boost::any(*authorDate);
    }
    if (authorEmail) {
      res["AuthorEmail"] = boost::any(*authorEmail);
    }
    if (authorName) {
      res["AuthorName"] = boost::any(*authorName);
    }
    if (committedDate) {
      res["CommittedDate"] = boost::any(*committedDate);
    }
    if (committerEmail) {
      res["CommitterEmail"] = boost::any(*committerEmail);
    }
    if (committerName) {
      res["CommitterName"] = boost::any(*committerName);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (parentIds) {
      res["ParentIds"] = boost::any(*parentIds);
    }
    if (shortId) {
      res["ShortId"] = boost::any(*shortId);
    }
    if (signature) {
      res["Signature"] = signature ? boost::any(signature->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorDate") != m.end() && !m["AuthorDate"].empty()) {
      authorDate = make_shared<string>(boost::any_cast<string>(m["AuthorDate"]));
    }
    if (m.find("AuthorEmail") != m.end() && !m["AuthorEmail"].empty()) {
      authorEmail = make_shared<string>(boost::any_cast<string>(m["AuthorEmail"]));
    }
    if (m.find("AuthorName") != m.end() && !m["AuthorName"].empty()) {
      authorName = make_shared<string>(boost::any_cast<string>(m["AuthorName"]));
    }
    if (m.find("CommittedDate") != m.end() && !m["CommittedDate"].empty()) {
      committedDate = make_shared<string>(boost::any_cast<string>(m["CommittedDate"]));
    }
    if (m.find("CommitterEmail") != m.end() && !m["CommitterEmail"].empty()) {
      committerEmail = make_shared<string>(boost::any_cast<string>(m["CommitterEmail"]));
    }
    if (m.find("CommitterName") != m.end() && !m["CommitterName"].empty()) {
      committerName = make_shared<string>(boost::any_cast<string>(m["CommitterName"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
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
    if (m.find("ShortId") != m.end() && !m["ShortId"].empty()) {
      shortId = make_shared<string>(boost::any_cast<string>(m["ShortId"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      if (typeid(map<string, boost::any>) == m["Signature"].type()) {
        GetFileLastCommitResponseBodyResultSignature model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Signature"]));
        signature = make_shared<GetFileLastCommitResponseBodyResultSignature>(model1);
      }
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~GetFileLastCommitResponseBodyResult() = default;
};
class GetFileLastCommitResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<GetFileLastCommitResponseBodyResult> result{};
  shared_ptr<bool> success{};

  GetFileLastCommitResponseBody() {}

  explicit GetFileLastCommitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetFileLastCommitResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetFileLastCommitResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetFileLastCommitResponseBody() = default;
};
class GetFileLastCommitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFileLastCommitResponseBody> body{};

  GetFileLastCommitResponse() {}

  explicit GetFileLastCommitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFileLastCommitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFileLastCommitResponseBody>(model1);
      }
    }
  }


  virtual ~GetFileLastCommitResponse() = default;
};
class GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList : public Darabonba::Model {
public:
  shared_ptr<string> color{};
  shared_ptr<string> creatorAccountId{};
  shared_ptr<long> id{};
  shared_ptr<string> modiferAccountId{};
  shared_ptr<string> name{};

  GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList() {}

  explicit GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (color) {
      res["color"] = boost::any(*color);
    }
    if (creatorAccountId) {
      res["creatorAccountId"] = boost::any(*creatorAccountId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (modiferAccountId) {
      res["modiferAccountId"] = boost::any(*modiferAccountId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("color") != m.end() && !m["color"].empty()) {
      color = make_shared<string>(boost::any_cast<string>(m["color"]));
    }
    if (m.find("creatorAccountId") != m.end() && !m["creatorAccountId"].empty()) {
      creatorAccountId = make_shared<string>(boost::any_cast<string>(m["creatorAccountId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("modiferAccountId") != m.end() && !m["modiferAccountId"].empty()) {
      modiferAccountId = make_shared<string>(boost::any_cast<string>(m["modiferAccountId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList() = default;
};
class GetFlowTagGroupResponseBodyFlowTagGroup : public Darabonba::Model {
public:
  shared_ptr<string> creatorAccountId{};
  shared_ptr<vector<GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList>> flowTagList{};
  shared_ptr<long> id{};
  shared_ptr<string> modiferAccountId{};
  shared_ptr<string> name{};

  GetFlowTagGroupResponseBodyFlowTagGroup() {}

  explicit GetFlowTagGroupResponseBodyFlowTagGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creatorAccountId) {
      res["creatorAccountId"] = boost::any(*creatorAccountId);
    }
    if (flowTagList) {
      vector<boost::any> temp1;
      for(auto item1:*flowTagList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["flowTagList"] = boost::any(temp1);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (modiferAccountId) {
      res["modiferAccountId"] = boost::any(*modiferAccountId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("creatorAccountId") != m.end() && !m["creatorAccountId"].empty()) {
      creatorAccountId = make_shared<string>(boost::any_cast<string>(m["creatorAccountId"]));
    }
    if (m.find("flowTagList") != m.end() && !m["flowTagList"].empty()) {
      if (typeid(vector<boost::any>) == m["flowTagList"].type()) {
        vector<GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["flowTagList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        flowTagList = make_shared<vector<GetFlowTagGroupResponseBodyFlowTagGroupFlowTagList>>(expect1);
      }
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("modiferAccountId") != m.end() && !m["modiferAccountId"].empty()) {
      modiferAccountId = make_shared<string>(boost::any_cast<string>(m["modiferAccountId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GetFlowTagGroupResponseBodyFlowTagGroup() = default;
};
class GetFlowTagGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<GetFlowTagGroupResponseBodyFlowTagGroup> flowTagGroup{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetFlowTagGroupResponseBody() {}

  explicit GetFlowTagGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (flowTagGroup) {
      res["flowTagGroup"] = flowTagGroup ? boost::any(flowTagGroup->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("flowTagGroup") != m.end() && !m["flowTagGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["flowTagGroup"].type()) {
        GetFlowTagGroupResponseBodyFlowTagGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["flowTagGroup"]));
        flowTagGroup = make_shared<GetFlowTagGroupResponseBodyFlowTagGroup>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetFlowTagGroupResponseBody() = default;
};
class GetFlowTagGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFlowTagGroupResponseBody> body{};

  GetFlowTagGroupResponse() {}

  explicit GetFlowTagGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFlowTagGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFlowTagGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetFlowTagGroupResponse() = default;
};
class GetHostGroupResponseBodyHostGroupHostInfos : public Darabonba::Model {
public:
  shared_ptr<string> aliyunRegionId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorAccountId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> ip{};
  shared_ptr<string> machineSn{};
  shared_ptr<string> modifierAccountId{};
  shared_ptr<string> objectType{};
  shared_ptr<long> updateTime{};

  GetHostGroupResponseBodyHostGroupHostInfos() {}

  explicit GetHostGroupResponseBodyHostGroupHostInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunRegionId) {
      res["aliyunRegionId"] = boost::any(*aliyunRegionId);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorAccountId) {
      res["creatorAccountId"] = boost::any(*creatorAccountId);
    }
    if (instanceName) {
      res["instanceName"] = boost::any(*instanceName);
    }
    if (ip) {
      res["ip"] = boost::any(*ip);
    }
    if (machineSn) {
      res["machineSn"] = boost::any(*machineSn);
    }
    if (modifierAccountId) {
      res["modifierAccountId"] = boost::any(*modifierAccountId);
    }
    if (objectType) {
      res["objectType"] = boost::any(*objectType);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aliyunRegionId") != m.end() && !m["aliyunRegionId"].empty()) {
      aliyunRegionId = make_shared<string>(boost::any_cast<string>(m["aliyunRegionId"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorAccountId") != m.end() && !m["creatorAccountId"].empty()) {
      creatorAccountId = make_shared<string>(boost::any_cast<string>(m["creatorAccountId"]));
    }
    if (m.find("instanceName") != m.end() && !m["instanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["instanceName"]));
    }
    if (m.find("ip") != m.end() && !m["ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["ip"]));
    }
    if (m.find("machineSn") != m.end() && !m["machineSn"].empty()) {
      machineSn = make_shared<string>(boost::any_cast<string>(m["machineSn"]));
    }
    if (m.find("modifierAccountId") != m.end() && !m["modifierAccountId"].empty()) {
      modifierAccountId = make_shared<string>(boost::any_cast<string>(m["modifierAccountId"]));
    }
    if (m.find("objectType") != m.end() && !m["objectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["objectType"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
  }


  virtual ~GetHostGroupResponseBodyHostGroupHostInfos() = default;
};
class GetHostGroupResponseBodyHostGroup : public Darabonba::Model {
public:
  shared_ptr<string> aliyunRegion{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorAccountId{};
  shared_ptr<string> description{};
  shared_ptr<string> ecsLabelKey{};
  shared_ptr<string> ecsLabelValue{};
  shared_ptr<string> ecsType{};
  shared_ptr<vector<GetHostGroupResponseBodyHostGroupHostInfos>> hostInfos{};
  shared_ptr<long> hostNum{};
  shared_ptr<long> id{};
  shared_ptr<string> modifierAccountId{};
  shared_ptr<string> name{};
  shared_ptr<long> serviceConnectionId{};
  shared_ptr<string> type{};
  shared_ptr<long> upateTIme{};

  GetHostGroupResponseBodyHostGroup() {}

  explicit GetHostGroupResponseBodyHostGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunRegion) {
      res["aliyunRegion"] = boost::any(*aliyunRegion);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorAccountId) {
      res["creatorAccountId"] = boost::any(*creatorAccountId);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (ecsLabelKey) {
      res["ecsLabelKey"] = boost::any(*ecsLabelKey);
    }
    if (ecsLabelValue) {
      res["ecsLabelValue"] = boost::any(*ecsLabelValue);
    }
    if (ecsType) {
      res["ecsType"] = boost::any(*ecsType);
    }
    if (hostInfos) {
      vector<boost::any> temp1;
      for(auto item1:*hostInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["hostInfos"] = boost::any(temp1);
    }
    if (hostNum) {
      res["hostNum"] = boost::any(*hostNum);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (modifierAccountId) {
      res["modifierAccountId"] = boost::any(*modifierAccountId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (serviceConnectionId) {
      res["serviceConnectionId"] = boost::any(*serviceConnectionId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (upateTIme) {
      res["upateTIme"] = boost::any(*upateTIme);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aliyunRegion") != m.end() && !m["aliyunRegion"].empty()) {
      aliyunRegion = make_shared<string>(boost::any_cast<string>(m["aliyunRegion"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorAccountId") != m.end() && !m["creatorAccountId"].empty()) {
      creatorAccountId = make_shared<string>(boost::any_cast<string>(m["creatorAccountId"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("ecsLabelKey") != m.end() && !m["ecsLabelKey"].empty()) {
      ecsLabelKey = make_shared<string>(boost::any_cast<string>(m["ecsLabelKey"]));
    }
    if (m.find("ecsLabelValue") != m.end() && !m["ecsLabelValue"].empty()) {
      ecsLabelValue = make_shared<string>(boost::any_cast<string>(m["ecsLabelValue"]));
    }
    if (m.find("ecsType") != m.end() && !m["ecsType"].empty()) {
      ecsType = make_shared<string>(boost::any_cast<string>(m["ecsType"]));
    }
    if (m.find("hostInfos") != m.end() && !m["hostInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["hostInfos"].type()) {
        vector<GetHostGroupResponseBodyHostGroupHostInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["hostInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetHostGroupResponseBodyHostGroupHostInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostInfos = make_shared<vector<GetHostGroupResponseBodyHostGroupHostInfos>>(expect1);
      }
    }
    if (m.find("hostNum") != m.end() && !m["hostNum"].empty()) {
      hostNum = make_shared<long>(boost::any_cast<long>(m["hostNum"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("modifierAccountId") != m.end() && !m["modifierAccountId"].empty()) {
      modifierAccountId = make_shared<string>(boost::any_cast<string>(m["modifierAccountId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("serviceConnectionId") != m.end() && !m["serviceConnectionId"].empty()) {
      serviceConnectionId = make_shared<long>(boost::any_cast<long>(m["serviceConnectionId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("upateTIme") != m.end() && !m["upateTIme"].empty()) {
      upateTIme = make_shared<long>(boost::any_cast<long>(m["upateTIme"]));
    }
  }


  virtual ~GetHostGroupResponseBodyHostGroup() = default;
};
class GetHostGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<GetHostGroupResponseBodyHostGroup> hostGroup{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetHostGroupResponseBody() {}

  explicit GetHostGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (hostGroup) {
      res["hostGroup"] = hostGroup ? boost::any(hostGroup->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("hostGroup") != m.end() && !m["hostGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["hostGroup"].type()) {
        GetHostGroupResponseBodyHostGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["hostGroup"]));
        hostGroup = make_shared<GetHostGroupResponseBodyHostGroup>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetHostGroupResponseBody() = default;
};
class GetHostGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetHostGroupResponseBody> body{};

  GetHostGroupResponse() {}

  explicit GetHostGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetHostGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHostGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetHostGroupResponse() = default;
};
class GetOrganizationMemberResponseBodyMemberIdentities : public Darabonba::Model {
public:
  shared_ptr<string> externUid{};
  shared_ptr<string> provider{};

  GetOrganizationMemberResponseBodyMemberIdentities() {}

  explicit GetOrganizationMemberResponseBodyMemberIdentities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUid) {
      res["externUid"] = boost::any(*externUid);
    }
    if (provider) {
      res["provider"] = boost::any(*provider);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("externUid") != m.end() && !m["externUid"].empty()) {
      externUid = make_shared<string>(boost::any_cast<string>(m["externUid"]));
    }
    if (m.find("provider") != m.end() && !m["provider"].empty()) {
      provider = make_shared<string>(boost::any_cast<string>(m["provider"]));
    }
  }


  virtual ~GetOrganizationMemberResponseBodyMemberIdentities() = default;
};
class GetOrganizationMemberResponseBodyMember : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<long> birthday{};
  shared_ptr<vector<string>> deptLists{};
  shared_ptr<string> email{};
  shared_ptr<long> hiredDate{};
  shared_ptr<GetOrganizationMemberResponseBodyMemberIdentities> identities{};
  shared_ptr<long> joinTime{};
  shared_ptr<long> lastVisitTime{};
  shared_ptr<string> mobile{};
  shared_ptr<string> organizationMemberName{};
  shared_ptr<string> organizationRoleId{};
  shared_ptr<string> organizationRoleName{};
  shared_ptr<string> state{};

  GetOrganizationMemberResponseBodyMember() {}

  explicit GetOrganizationMemberResponseBodyMember(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (birthday) {
      res["birthday"] = boost::any(*birthday);
    }
    if (deptLists) {
      res["deptLists"] = boost::any(*deptLists);
    }
    if (email) {
      res["email"] = boost::any(*email);
    }
    if (hiredDate) {
      res["hiredDate"] = boost::any(*hiredDate);
    }
    if (identities) {
      res["identities"] = identities ? boost::any(identities->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (joinTime) {
      res["joinTime"] = boost::any(*joinTime);
    }
    if (lastVisitTime) {
      res["lastVisitTime"] = boost::any(*lastVisitTime);
    }
    if (mobile) {
      res["mobile"] = boost::any(*mobile);
    }
    if (organizationMemberName) {
      res["organizationMemberName"] = boost::any(*organizationMemberName);
    }
    if (organizationRoleId) {
      res["organizationRoleId"] = boost::any(*organizationRoleId);
    }
    if (organizationRoleName) {
      res["organizationRoleName"] = boost::any(*organizationRoleName);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("birthday") != m.end() && !m["birthday"].empty()) {
      birthday = make_shared<long>(boost::any_cast<long>(m["birthday"]));
    }
    if (m.find("deptLists") != m.end() && !m["deptLists"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["deptLists"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["deptLists"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      deptLists = make_shared<vector<string>>(toVec1);
    }
    if (m.find("email") != m.end() && !m["email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["email"]));
    }
    if (m.find("hiredDate") != m.end() && !m["hiredDate"].empty()) {
      hiredDate = make_shared<long>(boost::any_cast<long>(m["hiredDate"]));
    }
    if (m.find("identities") != m.end() && !m["identities"].empty()) {
      if (typeid(map<string, boost::any>) == m["identities"].type()) {
        GetOrganizationMemberResponseBodyMemberIdentities model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["identities"]));
        identities = make_shared<GetOrganizationMemberResponseBodyMemberIdentities>(model1);
      }
    }
    if (m.find("joinTime") != m.end() && !m["joinTime"].empty()) {
      joinTime = make_shared<long>(boost::any_cast<long>(m["joinTime"]));
    }
    if (m.find("lastVisitTime") != m.end() && !m["lastVisitTime"].empty()) {
      lastVisitTime = make_shared<long>(boost::any_cast<long>(m["lastVisitTime"]));
    }
    if (m.find("mobile") != m.end() && !m["mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["mobile"]));
    }
    if (m.find("organizationMemberName") != m.end() && !m["organizationMemberName"].empty()) {
      organizationMemberName = make_shared<string>(boost::any_cast<string>(m["organizationMemberName"]));
    }
    if (m.find("organizationRoleId") != m.end() && !m["organizationRoleId"].empty()) {
      organizationRoleId = make_shared<string>(boost::any_cast<string>(m["organizationRoleId"]));
    }
    if (m.find("organizationRoleName") != m.end() && !m["organizationRoleName"].empty()) {
      organizationRoleName = make_shared<string>(boost::any_cast<string>(m["organizationRoleName"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
  }


  virtual ~GetOrganizationMemberResponseBodyMember() = default;
};
class GetOrganizationMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<GetOrganizationMemberResponseBodyMember> member{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetOrganizationMemberResponseBody() {}

  explicit GetOrganizationMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (member) {
      res["member"] = member ? boost::any(member->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("member") != m.end() && !m["member"].empty()) {
      if (typeid(map<string, boost::any>) == m["member"].type()) {
        GetOrganizationMemberResponseBodyMember model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["member"]));
        member = make_shared<GetOrganizationMemberResponseBodyMember>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetOrganizationMemberResponseBody() = default;
};
class GetOrganizationMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOrganizationMemberResponseBody> body{};

  GetOrganizationMemberResponse() {}

  explicit GetOrganizationMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOrganizationMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOrganizationMemberResponseBody>(model1);
      }
    }
  }


  virtual ~GetOrganizationMemberResponse() = default;
};
class GetPipelineResponseBodyPipelinePipelineConfigSourcesData : public Darabonba::Model {
public:
  shared_ptr<string> branch{};
  shared_ptr<long> cloneDepth{};
  shared_ptr<long> credentialId{};
  shared_ptr<string> credentialLabel{};
  shared_ptr<string> credentialType{};
  shared_ptr<vector<string>> events{};
  shared_ptr<bool> isBranchMode{};
  shared_ptr<bool> isCloneDepth{};
  shared_ptr<bool> isSubmodule{};
  shared_ptr<bool> isTrigger{};
  shared_ptr<string> label{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> repo{};
  shared_ptr<long> serviceConnectionId{};
  shared_ptr<string> triggerFilter{};
  shared_ptr<string> webhook{};

  GetPipelineResponseBodyPipelinePipelineConfigSourcesData() {}

  explicit GetPipelineResponseBodyPipelinePipelineConfigSourcesData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (branch) {
      res["branch"] = boost::any(*branch);
    }
    if (cloneDepth) {
      res["cloneDepth"] = boost::any(*cloneDepth);
    }
    if (credentialId) {
      res["credentialId"] = boost::any(*credentialId);
    }
    if (credentialLabel) {
      res["credentialLabel"] = boost::any(*credentialLabel);
    }
    if (credentialType) {
      res["credentialType"] = boost::any(*credentialType);
    }
    if (events) {
      res["events"] = boost::any(*events);
    }
    if (isBranchMode) {
      res["isBranchMode"] = boost::any(*isBranchMode);
    }
    if (isCloneDepth) {
      res["isCloneDepth"] = boost::any(*isCloneDepth);
    }
    if (isSubmodule) {
      res["isSubmodule"] = boost::any(*isSubmodule);
    }
    if (isTrigger) {
      res["isTrigger"] = boost::any(*isTrigger);
    }
    if (label) {
      res["label"] = boost::any(*label);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (repo) {
      res["repo"] = boost::any(*repo);
    }
    if (serviceConnectionId) {
      res["serviceConnectionId"] = boost::any(*serviceConnectionId);
    }
    if (triggerFilter) {
      res["triggerFilter"] = boost::any(*triggerFilter);
    }
    if (webhook) {
      res["webhook"] = boost::any(*webhook);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("branch") != m.end() && !m["branch"].empty()) {
      branch = make_shared<string>(boost::any_cast<string>(m["branch"]));
    }
    if (m.find("cloneDepth") != m.end() && !m["cloneDepth"].empty()) {
      cloneDepth = make_shared<long>(boost::any_cast<long>(m["cloneDepth"]));
    }
    if (m.find("credentialId") != m.end() && !m["credentialId"].empty()) {
      credentialId = make_shared<long>(boost::any_cast<long>(m["credentialId"]));
    }
    if (m.find("credentialLabel") != m.end() && !m["credentialLabel"].empty()) {
      credentialLabel = make_shared<string>(boost::any_cast<string>(m["credentialLabel"]));
    }
    if (m.find("credentialType") != m.end() && !m["credentialType"].empty()) {
      credentialType = make_shared<string>(boost::any_cast<string>(m["credentialType"]));
    }
    if (m.find("events") != m.end() && !m["events"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["events"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["events"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      events = make_shared<vector<string>>(toVec1);
    }
    if (m.find("isBranchMode") != m.end() && !m["isBranchMode"].empty()) {
      isBranchMode = make_shared<bool>(boost::any_cast<bool>(m["isBranchMode"]));
    }
    if (m.find("isCloneDepth") != m.end() && !m["isCloneDepth"].empty()) {
      isCloneDepth = make_shared<bool>(boost::any_cast<bool>(m["isCloneDepth"]));
    }
    if (m.find("isSubmodule") != m.end() && !m["isSubmodule"].empty()) {
      isSubmodule = make_shared<bool>(boost::any_cast<bool>(m["isSubmodule"]));
    }
    if (m.find("isTrigger") != m.end() && !m["isTrigger"].empty()) {
      isTrigger = make_shared<bool>(boost::any_cast<bool>(m["isTrigger"]));
    }
    if (m.find("label") != m.end() && !m["label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["label"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("repo") != m.end() && !m["repo"].empty()) {
      repo = make_shared<string>(boost::any_cast<string>(m["repo"]));
    }
    if (m.find("serviceConnectionId") != m.end() && !m["serviceConnectionId"].empty()) {
      serviceConnectionId = make_shared<long>(boost::any_cast<long>(m["serviceConnectionId"]));
    }
    if (m.find("triggerFilter") != m.end() && !m["triggerFilter"].empty()) {
      triggerFilter = make_shared<string>(boost::any_cast<string>(m["triggerFilter"]));
    }
    if (m.find("webhook") != m.end() && !m["webhook"].empty()) {
      webhook = make_shared<string>(boost::any_cast<string>(m["webhook"]));
    }
  }


  virtual ~GetPipelineResponseBodyPipelinePipelineConfigSourcesData() = default;
};
class GetPipelineResponseBodyPipelinePipelineConfigSources : public Darabonba::Model {
public:
  shared_ptr<GetPipelineResponseBodyPipelinePipelineConfigSourcesData> data{};
  shared_ptr<string> sign{};
  shared_ptr<string> type{};

  GetPipelineResponseBodyPipelinePipelineConfigSources() {}

  explicit GetPipelineResponseBodyPipelinePipelineConfigSources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sign) {
      res["sign"] = boost::any(*sign);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetPipelineResponseBodyPipelinePipelineConfigSourcesData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetPipelineResponseBodyPipelinePipelineConfigSourcesData>(model1);
      }
    }
    if (m.find("sign") != m.end() && !m["sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["sign"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetPipelineResponseBodyPipelinePipelineConfigSources() = default;
};
class GetPipelineResponseBodyPipelinePipelineConfig : public Darabonba::Model {
public:
  shared_ptr<string> flow{};
  shared_ptr<string> settings{};
  shared_ptr<vector<GetPipelineResponseBodyPipelinePipelineConfigSources>> sources{};

  GetPipelineResponseBodyPipelinePipelineConfig() {}

  explicit GetPipelineResponseBodyPipelinePipelineConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flow) {
      res["flow"] = boost::any(*flow);
    }
    if (settings) {
      res["settings"] = boost::any(*settings);
    }
    if (sources) {
      vector<boost::any> temp1;
      for(auto item1:*sources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["sources"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("flow") != m.end() && !m["flow"].empty()) {
      flow = make_shared<string>(boost::any_cast<string>(m["flow"]));
    }
    if (m.find("settings") != m.end() && !m["settings"].empty()) {
      settings = make_shared<string>(boost::any_cast<string>(m["settings"]));
    }
    if (m.find("sources") != m.end() && !m["sources"].empty()) {
      if (typeid(vector<boost::any>) == m["sources"].type()) {
        vector<GetPipelineResponseBodyPipelinePipelineConfigSources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["sources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPipelineResponseBodyPipelinePipelineConfigSources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sources = make_shared<vector<GetPipelineResponseBodyPipelinePipelineConfigSources>>(expect1);
      }
    }
  }


  virtual ~GetPipelineResponseBodyPipelinePipelineConfig() = default;
};
class GetPipelineResponseBodyPipelineTagList : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  GetPipelineResponseBodyPipelineTagList() {}

  explicit GetPipelineResponseBodyPipelineTagList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GetPipelineResponseBodyPipelineTagList() = default;
};
class GetPipelineResponseBodyPipeline : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorAccountId{};
  shared_ptr<long> envId{};
  shared_ptr<string> envName{};
  shared_ptr<long> groupId{};
  shared_ptr<string> modifierAccountId{};
  shared_ptr<string> name{};
  shared_ptr<GetPipelineResponseBodyPipelinePipelineConfig> pipelineConfig{};
  shared_ptr<vector<GetPipelineResponseBodyPipelineTagList>> tagList{};
  shared_ptr<long> updateTime{};

  GetPipelineResponseBodyPipeline() {}

  explicit GetPipelineResponseBodyPipeline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorAccountId) {
      res["creatorAccountId"] = boost::any(*creatorAccountId);
    }
    if (envId) {
      res["envId"] = boost::any(*envId);
    }
    if (envName) {
      res["envName"] = boost::any(*envName);
    }
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (modifierAccountId) {
      res["modifierAccountId"] = boost::any(*modifierAccountId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pipelineConfig) {
      res["pipelineConfig"] = pipelineConfig ? boost::any(pipelineConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tagList) {
      vector<boost::any> temp1;
      for(auto item1:*tagList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tagList"] = boost::any(temp1);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorAccountId") != m.end() && !m["creatorAccountId"].empty()) {
      creatorAccountId = make_shared<string>(boost::any_cast<string>(m["creatorAccountId"]));
    }
    if (m.find("envId") != m.end() && !m["envId"].empty()) {
      envId = make_shared<long>(boost::any_cast<long>(m["envId"]));
    }
    if (m.find("envName") != m.end() && !m["envName"].empty()) {
      envName = make_shared<string>(boost::any_cast<string>(m["envName"]));
    }
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<long>(boost::any_cast<long>(m["groupId"]));
    }
    if (m.find("modifierAccountId") != m.end() && !m["modifierAccountId"].empty()) {
      modifierAccountId = make_shared<string>(boost::any_cast<string>(m["modifierAccountId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pipelineConfig") != m.end() && !m["pipelineConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["pipelineConfig"].type()) {
        GetPipelineResponseBodyPipelinePipelineConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["pipelineConfig"]));
        pipelineConfig = make_shared<GetPipelineResponseBodyPipelinePipelineConfig>(model1);
      }
    }
    if (m.find("tagList") != m.end() && !m["tagList"].empty()) {
      if (typeid(vector<boost::any>) == m["tagList"].type()) {
        vector<GetPipelineResponseBodyPipelineTagList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tagList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPipelineResponseBodyPipelineTagList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagList = make_shared<vector<GetPipelineResponseBodyPipelineTagList>>(expect1);
      }
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
  }


  virtual ~GetPipelineResponseBodyPipeline() = default;
};
class GetPipelineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<GetPipelineResponseBodyPipeline> pipeline{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetPipelineResponseBody() {}

  explicit GetPipelineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (pipeline) {
      res["pipeline"] = pipeline ? boost::any(pipeline->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("pipeline") != m.end() && !m["pipeline"].empty()) {
      if (typeid(map<string, boost::any>) == m["pipeline"].type()) {
        GetPipelineResponseBodyPipeline model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["pipeline"]));
        pipeline = make_shared<GetPipelineResponseBodyPipeline>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetPipelineResponseBody() = default;
};
class GetPipelineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPipelineResponseBody> body{};

  GetPipelineResponse() {}

  explicit GetPipelineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPipelineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPipelineResponseBody>(model1);
      }
    }
  }


  virtual ~GetPipelineResponse() = default;
};
class GetPipelineArtifactUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> filePath{};

  GetPipelineArtifactUrlRequest() {}

  explicit GetPipelineArtifactUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (filePath) {
      res["filePath"] = boost::any(*filePath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("filePath") != m.end() && !m["filePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["filePath"]));
    }
  }


  virtual ~GetPipelineArtifactUrlRequest() = default;
};
class GetPipelineArtifactUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetPipelineArtifactUrlResponseBody() {}

  explicit GetPipelineArtifactUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (fileUrl) {
      res["fileUrl"] = boost::any(*fileUrl);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("fileUrl") != m.end() && !m["fileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["fileUrl"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetPipelineArtifactUrlResponseBody() = default;
};
class GetPipelineArtifactUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPipelineArtifactUrlResponseBody> body{};

  GetPipelineArtifactUrlResponse() {}

  explicit GetPipelineArtifactUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPipelineArtifactUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPipelineArtifactUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetPipelineArtifactUrlResponse() = default;
};
class GetPipelineEmasArtifactUrlRequest : public Darabonba::Model {
public:
  shared_ptr<long> serviceConnectionId{};

  GetPipelineEmasArtifactUrlRequest() {}

  explicit GetPipelineEmasArtifactUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceConnectionId) {
      res["serviceConnectionId"] = boost::any(*serviceConnectionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceConnectionId") != m.end() && !m["serviceConnectionId"].empty()) {
      serviceConnectionId = make_shared<long>(boost::any_cast<long>(m["serviceConnectionId"]));
    }
  }


  virtual ~GetPipelineEmasArtifactUrlRequest() = default;
};
class GetPipelineEmasArtifactUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetPipelineEmasArtifactUrlResponseBody() {}

  explicit GetPipelineEmasArtifactUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (fileUrl) {
      res["fileUrl"] = boost::any(*fileUrl);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("fileUrl") != m.end() && !m["fileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["fileUrl"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetPipelineEmasArtifactUrlResponseBody() = default;
};
class GetPipelineEmasArtifactUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPipelineEmasArtifactUrlResponseBody> body{};

  GetPipelineEmasArtifactUrlResponse() {}

  explicit GetPipelineEmasArtifactUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPipelineEmasArtifactUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPipelineEmasArtifactUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetPipelineEmasArtifactUrlResponse() = default;
};
class GetPipelineGroupResponseBodyPipelineGroup : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  GetPipelineGroupResponseBodyPipelineGroup() {}

  explicit GetPipelineGroupResponseBodyPipelineGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GetPipelineGroupResponseBodyPipelineGroup() = default;
};
class GetPipelineGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<GetPipelineGroupResponseBodyPipelineGroup> pipelineGroup{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetPipelineGroupResponseBody() {}

  explicit GetPipelineGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (pipelineGroup) {
      res["pipelineGroup"] = pipelineGroup ? boost::any(pipelineGroup->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("pipelineGroup") != m.end() && !m["pipelineGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["pipelineGroup"].type()) {
        GetPipelineGroupResponseBodyPipelineGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["pipelineGroup"]));
        pipelineGroup = make_shared<GetPipelineGroupResponseBodyPipelineGroup>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetPipelineGroupResponseBody() = default;
};
class GetPipelineGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPipelineGroupResponseBody> body{};

  GetPipelineGroupResponse() {}

  explicit GetPipelineGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPipelineGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPipelineGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetPipelineGroupResponse() = default;
};
class GetPipelineRunResponseBodyPipelineRunSourcesData : public Darabonba::Model {
public:
  shared_ptr<string> branch{};
  shared_ptr<string> commint{};
  shared_ptr<string> repo{};

  GetPipelineRunResponseBodyPipelineRunSourcesData() {}

  explicit GetPipelineRunResponseBodyPipelineRunSourcesData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (branch) {
      res["branch"] = boost::any(*branch);
    }
    if (commint) {
      res["commint"] = boost::any(*commint);
    }
    if (repo) {
      res["repo"] = boost::any(*repo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("branch") != m.end() && !m["branch"].empty()) {
      branch = make_shared<string>(boost::any_cast<string>(m["branch"]));
    }
    if (m.find("commint") != m.end() && !m["commint"].empty()) {
      commint = make_shared<string>(boost::any_cast<string>(m["commint"]));
    }
    if (m.find("repo") != m.end() && !m["repo"].empty()) {
      repo = make_shared<string>(boost::any_cast<string>(m["repo"]));
    }
  }


  virtual ~GetPipelineRunResponseBodyPipelineRunSourcesData() = default;
};
class GetPipelineRunResponseBodyPipelineRunSources : public Darabonba::Model {
public:
  shared_ptr<GetPipelineRunResponseBodyPipelineRunSourcesData> data{};
  shared_ptr<string> sign{};
  shared_ptr<string> type{};

  GetPipelineRunResponseBodyPipelineRunSources() {}

  explicit GetPipelineRunResponseBodyPipelineRunSources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sign) {
      res["sign"] = boost::any(*sign);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetPipelineRunResponseBodyPipelineRunSourcesData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetPipelineRunResponseBodyPipelineRunSourcesData>(model1);
      }
    }
    if (m.find("sign") != m.end() && !m["sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["sign"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetPipelineRunResponseBodyPipelineRunSources() = default;
};
class GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions : public Darabonba::Model {
public:
  shared_ptr<bool> disable{};
  shared_ptr<map<string, boost::any>> params{};
  shared_ptr<string> type{};

  GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions() {}

  explicit GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disable) {
      res["disable"] = boost::any(*disable);
    }
    if (params) {
      res["params"] = boost::any(*params);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("disable") != m.end() && !m["disable"].empty()) {
      disable = make_shared<bool>(boost::any_cast<bool>(m["disable"]));
    }
    if (m.find("params") != m.end() && !m["params"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["params"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      params = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions() = default;
};
class GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs : public Darabonba::Model {
public:
  shared_ptr<vector<GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions>> actions{};
  shared_ptr<long> endTime{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<string> params{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};

  GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs() {}

  explicit GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["actions"] = boost::any(temp1);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (params) {
      res["params"] = boost::any(*params);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["actions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        actions = make_shared<vector<GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions>>(expect1);
      }
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("params") != m.end() && !m["params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["params"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs() = default;
};
class GetPipelineRunResponseBodyPipelineRunStagesStageInfo : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<vector<GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs>> jobs{};
  shared_ptr<string> name{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};

  GetPipelineRunResponseBodyPipelineRunStagesStageInfo() {}

  explicit GetPipelineRunResponseBodyPipelineRunStagesStageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (jobs) {
      vector<boost::any> temp1;
      for(auto item1:*jobs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["jobs"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("jobs") != m.end() && !m["jobs"].empty()) {
      if (typeid(vector<boost::any>) == m["jobs"].type()) {
        vector<GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["jobs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobs = make_shared<vector<GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~GetPipelineRunResponseBodyPipelineRunStagesStageInfo() = default;
};
class GetPipelineRunResponseBodyPipelineRunStages : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<GetPipelineRunResponseBodyPipelineRunStagesStageInfo> stageInfo{};

  GetPipelineRunResponseBodyPipelineRunStages() {}

  explicit GetPipelineRunResponseBodyPipelineRunStages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (stageInfo) {
      res["stageInfo"] = stageInfo ? boost::any(stageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("stageInfo") != m.end() && !m["stageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["stageInfo"].type()) {
        GetPipelineRunResponseBodyPipelineRunStagesStageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["stageInfo"]));
        stageInfo = make_shared<GetPipelineRunResponseBodyPipelineRunStagesStageInfo>(model1);
      }
    }
  }


  virtual ~GetPipelineRunResponseBodyPipelineRunStages() = default;
};
class GetPipelineRunResponseBodyPipelineRun : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorAccountId{};
  shared_ptr<string> modifierAccountId{};
  shared_ptr<long> pipelineId{};
  shared_ptr<long> pipelineRunId{};
  shared_ptr<vector<GetPipelineRunResponseBodyPipelineRunSources>> sources{};
  shared_ptr<vector<vector<string>>> stageGroup{};
  shared_ptr<vector<GetPipelineRunResponseBodyPipelineRunStages>> stages{};
  shared_ptr<string> status{};
  shared_ptr<long> triggerMode{};
  shared_ptr<long> updateTime{};

  GetPipelineRunResponseBodyPipelineRun() {}

  explicit GetPipelineRunResponseBodyPipelineRun(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorAccountId) {
      res["creatorAccountId"] = boost::any(*creatorAccountId);
    }
    if (modifierAccountId) {
      res["modifierAccountId"] = boost::any(*modifierAccountId);
    }
    if (pipelineId) {
      res["pipelineId"] = boost::any(*pipelineId);
    }
    if (pipelineRunId) {
      res["pipelineRunId"] = boost::any(*pipelineRunId);
    }
    if (sources) {
      vector<boost::any> temp1;
      for(auto item1:*sources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["sources"] = boost::any(temp1);
    }
    if (stageGroup) {
      res["stageGroup"] = boost::any(*stageGroup);
    }
    if (stages) {
      vector<boost::any> temp1;
      for(auto item1:*stages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["stages"] = boost::any(temp1);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (triggerMode) {
      res["triggerMode"] = boost::any(*triggerMode);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorAccountId") != m.end() && !m["creatorAccountId"].empty()) {
      creatorAccountId = make_shared<string>(boost::any_cast<string>(m["creatorAccountId"]));
    }
    if (m.find("modifierAccountId") != m.end() && !m["modifierAccountId"].empty()) {
      modifierAccountId = make_shared<string>(boost::any_cast<string>(m["modifierAccountId"]));
    }
    if (m.find("pipelineId") != m.end() && !m["pipelineId"].empty()) {
      pipelineId = make_shared<long>(boost::any_cast<long>(m["pipelineId"]));
    }
    if (m.find("pipelineRunId") != m.end() && !m["pipelineRunId"].empty()) {
      pipelineRunId = make_shared<long>(boost::any_cast<long>(m["pipelineRunId"]));
    }
    if (m.find("sources") != m.end() && !m["sources"].empty()) {
      if (typeid(vector<boost::any>) == m["sources"].type()) {
        vector<GetPipelineRunResponseBodyPipelineRunSources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["sources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPipelineRunResponseBodyPipelineRunSources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sources = make_shared<vector<GetPipelineRunResponseBodyPipelineRunSources>>(expect1);
      }
    }
    if (m.find("stageGroup") != m.end() && !m["stageGroup"].empty()) {
      vector<vector<string>> toVec1;
      if (typeid(vector<boost::any>) == m["stageGroup"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["stageGroup"]);
        for (auto item:vec1) {
          vector<string> toVec2;
          if (typeid(vector<boost::any>) == item.type()) {
            vector<boost::any> vec2 = boost::any_cast<vector<boost::any>>(item);
            for (auto item:vec2) {
               toVec2.push_back(boost::any_cast<string>(item));
            }
          }
           toVec1 = toVec2;
        }
      }
      stageGroup = make_shared<vector<vector<string>>>(toVec1);
    }
    if (m.find("stages") != m.end() && !m["stages"].empty()) {
      if (typeid(vector<boost::any>) == m["stages"].type()) {
        vector<GetPipelineRunResponseBodyPipelineRunStages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["stages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPipelineRunResponseBodyPipelineRunStages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stages = make_shared<vector<GetPipelineRunResponseBodyPipelineRunStages>>(expect1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("triggerMode") != m.end() && !m["triggerMode"].empty()) {
      triggerMode = make_shared<long>(boost::any_cast<long>(m["triggerMode"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
  }


  virtual ~GetPipelineRunResponseBodyPipelineRun() = default;
};
class GetPipelineRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<GetPipelineRunResponseBodyPipelineRun> pipelineRun{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetPipelineRunResponseBody() {}

  explicit GetPipelineRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (pipelineRun) {
      res["pipelineRun"] = pipelineRun ? boost::any(pipelineRun->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("pipelineRun") != m.end() && !m["pipelineRun"].empty()) {
      if (typeid(map<string, boost::any>) == m["pipelineRun"].type()) {
        GetPipelineRunResponseBodyPipelineRun model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["pipelineRun"]));
        pipelineRun = make_shared<GetPipelineRunResponseBodyPipelineRun>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetPipelineRunResponseBody() = default;
};
class GetPipelineRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPipelineRunResponseBody> body{};

  GetPipelineRunResponse() {}

  explicit GetPipelineRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPipelineRunResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPipelineRunResponseBody>(model1);
      }
    }
  }


  virtual ~GetPipelineRunResponse() = default;
};
class GetPipelineScanReportUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> reportPath{};

  GetPipelineScanReportUrlRequest() {}

  explicit GetPipelineScanReportUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reportPath) {
      res["reportPath"] = boost::any(*reportPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("reportPath") != m.end() && !m["reportPath"].empty()) {
      reportPath = make_shared<string>(boost::any_cast<string>(m["reportPath"]));
    }
  }


  virtual ~GetPipelineScanReportUrlRequest() = default;
};
class GetPipelineScanReportUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> reportUrl{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetPipelineScanReportUrlResponseBody() {}

  explicit GetPipelineScanReportUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (reportUrl) {
      res["reportUrl"] = boost::any(*reportUrl);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("reportUrl") != m.end() && !m["reportUrl"].empty()) {
      reportUrl = make_shared<string>(boost::any_cast<string>(m["reportUrl"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetPipelineScanReportUrlResponseBody() = default;
};
class GetPipelineScanReportUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPipelineScanReportUrlResponseBody> body{};

  GetPipelineScanReportUrlResponse() {}

  explicit GetPipelineScanReportUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPipelineScanReportUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPipelineScanReportUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetPipelineScanReportUrlResponse() = default;
};
class GetProjectInfoResponseBodyProject : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> categoryIdentifier{};
  shared_ptr<string> creator{};
  shared_ptr<string> customCode{};
  shared_ptr<string> description{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> icon{};
  shared_ptr<string> iconBig{};
  shared_ptr<string> iconGroup{};
  shared_ptr<string> iconSmall{};
  shared_ptr<string> id{};
  shared_ptr<string> identifier{};
  shared_ptr<string> identifierPath{};
  shared_ptr<string> logicalStatus{};
  shared_ptr<string> modifier{};
  shared_ptr<string> name{};
  shared_ptr<string> organizationIdentifier{};
  shared_ptr<string> parentIdentifier{};
  shared_ptr<string> scope{};
  shared_ptr<string> statusIdentifier{};
  shared_ptr<string> statusStageIdentifier{};
  shared_ptr<string> subType{};
  shared_ptr<string> typeIdentifier{};

  GetProjectInfoResponseBodyProject() {}

  explicit GetProjectInfoResponseBodyProject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (categoryIdentifier) {
      res["categoryIdentifier"] = boost::any(*categoryIdentifier);
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (customCode) {
      res["customCode"] = boost::any(*customCode);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (icon) {
      res["icon"] = boost::any(*icon);
    }
    if (iconBig) {
      res["iconBig"] = boost::any(*iconBig);
    }
    if (iconGroup) {
      res["iconGroup"] = boost::any(*iconGroup);
    }
    if (iconSmall) {
      res["iconSmall"] = boost::any(*iconSmall);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (identifierPath) {
      res["identifierPath"] = boost::any(*identifierPath);
    }
    if (logicalStatus) {
      res["logicalStatus"] = boost::any(*logicalStatus);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (organizationIdentifier) {
      res["organizationIdentifier"] = boost::any(*organizationIdentifier);
    }
    if (parentIdentifier) {
      res["parentIdentifier"] = boost::any(*parentIdentifier);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (statusIdentifier) {
      res["statusIdentifier"] = boost::any(*statusIdentifier);
    }
    if (statusStageIdentifier) {
      res["statusStageIdentifier"] = boost::any(*statusStageIdentifier);
    }
    if (subType) {
      res["subType"] = boost::any(*subType);
    }
    if (typeIdentifier) {
      res["typeIdentifier"] = boost::any(*typeIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("categoryIdentifier") != m.end() && !m["categoryIdentifier"].empty()) {
      categoryIdentifier = make_shared<string>(boost::any_cast<string>(m["categoryIdentifier"]));
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("customCode") != m.end() && !m["customCode"].empty()) {
      customCode = make_shared<string>(boost::any_cast<string>(m["customCode"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["gmtModified"]));
    }
    if (m.find("icon") != m.end() && !m["icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["icon"]));
    }
    if (m.find("iconBig") != m.end() && !m["iconBig"].empty()) {
      iconBig = make_shared<string>(boost::any_cast<string>(m["iconBig"]));
    }
    if (m.find("iconGroup") != m.end() && !m["iconGroup"].empty()) {
      iconGroup = make_shared<string>(boost::any_cast<string>(m["iconGroup"]));
    }
    if (m.find("iconSmall") != m.end() && !m["iconSmall"].empty()) {
      iconSmall = make_shared<string>(boost::any_cast<string>(m["iconSmall"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("identifierPath") != m.end() && !m["identifierPath"].empty()) {
      identifierPath = make_shared<string>(boost::any_cast<string>(m["identifierPath"]));
    }
    if (m.find("logicalStatus") != m.end() && !m["logicalStatus"].empty()) {
      logicalStatus = make_shared<string>(boost::any_cast<string>(m["logicalStatus"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["modifier"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("organizationIdentifier") != m.end() && !m["organizationIdentifier"].empty()) {
      organizationIdentifier = make_shared<string>(boost::any_cast<string>(m["organizationIdentifier"]));
    }
    if (m.find("parentIdentifier") != m.end() && !m["parentIdentifier"].empty()) {
      parentIdentifier = make_shared<string>(boost::any_cast<string>(m["parentIdentifier"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
    if (m.find("statusIdentifier") != m.end() && !m["statusIdentifier"].empty()) {
      statusIdentifier = make_shared<string>(boost::any_cast<string>(m["statusIdentifier"]));
    }
    if (m.find("statusStageIdentifier") != m.end() && !m["statusStageIdentifier"].empty()) {
      statusStageIdentifier = make_shared<string>(boost::any_cast<string>(m["statusStageIdentifier"]));
    }
    if (m.find("subType") != m.end() && !m["subType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["subType"]));
    }
    if (m.find("typeIdentifier") != m.end() && !m["typeIdentifier"].empty()) {
      typeIdentifier = make_shared<string>(boost::any_cast<string>(m["typeIdentifier"]));
    }
  }


  virtual ~GetProjectInfoResponseBodyProject() = default;
};
class GetProjectInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<GetProjectInfoResponseBodyProject> project{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetProjectInfoResponseBody() {}

  explicit GetProjectInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (project) {
      res["project"] = project ? boost::any(project->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      if (typeid(map<string, boost::any>) == m["project"].type()) {
        GetProjectInfoResponseBodyProject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["project"]));
        project = make_shared<GetProjectInfoResponseBodyProject>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetProjectInfoResponseBody() = default;
};
class GetProjectInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProjectInfoResponseBody> body{};

  GetProjectInfoResponse() {}

  explicit GetProjectInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetProjectInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProjectInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetProjectInfoResponse() = default;
};
class GetProjectMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<long> repositoryId{};
  shared_ptr<string> userAliyunPk{};

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
    if (repositoryId) {
      res["repositoryId"] = boost::any(*repositoryId);
    }
    if (userAliyunPk) {
      res["userAliyunPk"] = boost::any(*userAliyunPk);
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
    if (m.find("repositoryId") != m.end() && !m["repositoryId"].empty()) {
      repositoryId = make_shared<long>(boost::any_cast<long>(m["repositoryId"]));
    }
    if (m.find("userAliyunPk") != m.end() && !m["userAliyunPk"].empty()) {
      userAliyunPk = make_shared<string>(boost::any_cast<string>(m["userAliyunPk"]));
    }
  }


  virtual ~GetProjectMemberRequest() = default;
};
class GetProjectMemberResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> accessLevel{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> externUserId{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  GetProjectMemberResponseBodyResult() {}

  explicit GetProjectMemberResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessLevel) {
      res["accessLevel"] = boost::any(*accessLevel);
    }
    if (avatarUrl) {
      res["avatarUrl"] = boost::any(*avatarUrl);
    }
    if (externUserId) {
      res["externUserId"] = boost::any(*externUserId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessLevel") != m.end() && !m["accessLevel"].empty()) {
      accessLevel = make_shared<long>(boost::any_cast<long>(m["accessLevel"]));
    }
    if (m.find("avatarUrl") != m.end() && !m["avatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["avatarUrl"]));
    }
    if (m.find("externUserId") != m.end() && !m["externUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["externUserId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GetProjectMemberResponseBodyResult() = default;
};
class GetProjectMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<GetProjectMemberResponseBodyResult> result{};
  shared_ptr<bool> success{};

  GetProjectMemberResponseBody() {}

  explicit GetProjectMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        GetProjectMemberResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<GetProjectMemberResponseBodyResult>(model1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetProjectMemberResponseBody() = default;
};
class GetProjectMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProjectMemberResponseBody> body{};

  GetProjectMemberResponse() {}

  explicit GetProjectMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetProjectMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProjectMemberResponseBody>(model1);
      }
    }
  }


  virtual ~GetProjectMemberResponse() = default;
};
class GetRepositoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> identity{};
  shared_ptr<string> organizationId{};

  GetRepositoryRequest() {}

  explicit GetRepositoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["accessToken"] = boost::any(*accessToken);
    }
    if (identity) {
      res["identity"] = boost::any(*identity);
    }
    if (organizationId) {
      res["organizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessToken") != m.end() && !m["accessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["accessToken"]));
    }
    if (m.find("identity") != m.end() && !m["identity"].empty()) {
      identity = make_shared<string>(boost::any_cast<string>(m["identity"]));
    }
    if (m.find("organizationId") != m.end() && !m["organizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["organizationId"]));
    }
  }


  virtual ~GetRepositoryRequest() = default;
};
class GetRepositoryResponseBodyRepositoryNamespace : public Darabonba::Model {
public:
  shared_ptr<string> avatar{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> description{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> path{};
  shared_ptr<string> updatedAt{};
  shared_ptr<long> visibilityLevel{};

  GetRepositoryResponseBodyRepositoryNamespace() {}

  explicit GetRepositoryResponseBodyRepositoryNamespace(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avatar) {
      res["avatar"] = boost::any(*avatar);
    }
    if (createdAt) {
      res["createdAt"] = boost::any(*createdAt);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (ownerId) {
      res["ownerId"] = boost::any(*ownerId);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (updatedAt) {
      res["updatedAt"] = boost::any(*updatedAt);
    }
    if (visibilityLevel) {
      res["visibilityLevel"] = boost::any(*visibilityLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("avatar") != m.end() && !m["avatar"].empty()) {
      avatar = make_shared<string>(boost::any_cast<string>(m["avatar"]));
    }
    if (m.find("createdAt") != m.end() && !m["createdAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["createdAt"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("ownerId") != m.end() && !m["ownerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["ownerId"]));
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("updatedAt") != m.end() && !m["updatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["updatedAt"]));
    }
    if (m.find("visibilityLevel") != m.end() && !m["visibilityLevel"].empty()) {
      visibilityLevel = make_shared<long>(boost::any_cast<long>(m["visibilityLevel"]));
    }
  }


  virtual ~GetRepositoryResponseBodyRepositoryNamespace() = default;
};
class GetRepositoryResponseBodyRepository : public Darabonba::Model {
public:
  shared_ptr<bool> archive{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> createdAt{};
  shared_ptr<long> creatorId{};
  shared_ptr<string> defaultBranch{};
  shared_ptr<bool> demoProjectStatus{};
  shared_ptr<string> description{};
  shared_ptr<string> httpUrlToRepository{};
  shared_ptr<long> id{};
  shared_ptr<string> lastActivityAt{};
  shared_ptr<string> name{};
  shared_ptr<string> nameWithNamespace{};
  shared_ptr<GetRepositoryResponseBodyRepositoryNamespace> namespace_{};
  shared_ptr<string> path{};
  shared_ptr<string> pathWithNamespace{};
  shared_ptr<string> sshUrlToRepository{};
  shared_ptr<long> visibilityLevel{};
  shared_ptr<string> webUrl{};

  GetRepositoryResponseBodyRepository() {}

  explicit GetRepositoryResponseBodyRepository(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (archive) {
      res["archive"] = boost::any(*archive);
    }
    if (avatarUrl) {
      res["avatarUrl"] = boost::any(*avatarUrl);
    }
    if (createdAt) {
      res["createdAt"] = boost::any(*createdAt);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (defaultBranch) {
      res["defaultBranch"] = boost::any(*defaultBranch);
    }
    if (demoProjectStatus) {
      res["demoProjectStatus"] = boost::any(*demoProjectStatus);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (httpUrlToRepository) {
      res["httpUrlToRepository"] = boost::any(*httpUrlToRepository);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (lastActivityAt) {
      res["lastActivityAt"] = boost::any(*lastActivityAt);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nameWithNamespace) {
      res["nameWithNamespace"] = boost::any(*nameWithNamespace);
    }
    if (namespace_) {
      res["namespace"] = namespace_ ? boost::any(namespace_->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (pathWithNamespace) {
      res["pathWithNamespace"] = boost::any(*pathWithNamespace);
    }
    if (sshUrlToRepository) {
      res["sshUrlToRepository"] = boost::any(*sshUrlToRepository);
    }
    if (visibilityLevel) {
      res["visibilityLevel"] = boost::any(*visibilityLevel);
    }
    if (webUrl) {
      res["webUrl"] = boost::any(*webUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("archive") != m.end() && !m["archive"].empty()) {
      archive = make_shared<bool>(boost::any_cast<bool>(m["archive"]));
    }
    if (m.find("avatarUrl") != m.end() && !m["avatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["avatarUrl"]));
    }
    if (m.find("createdAt") != m.end() && !m["createdAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["createdAt"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<long>(boost::any_cast<long>(m["creatorId"]));
    }
    if (m.find("defaultBranch") != m.end() && !m["defaultBranch"].empty()) {
      defaultBranch = make_shared<string>(boost::any_cast<string>(m["defaultBranch"]));
    }
    if (m.find("demoProjectStatus") != m.end() && !m["demoProjectStatus"].empty()) {
      demoProjectStatus = make_shared<bool>(boost::any_cast<bool>(m["demoProjectStatus"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("httpUrlToRepository") != m.end() && !m["httpUrlToRepository"].empty()) {
      httpUrlToRepository = make_shared<string>(boost::any_cast<string>(m["httpUrlToRepository"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("lastActivityAt") != m.end() && !m["lastActivityAt"].empty()) {
      lastActivityAt = make_shared<string>(boost::any_cast<string>(m["lastActivityAt"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nameWithNamespace") != m.end() && !m["nameWithNamespace"].empty()) {
      nameWithNamespace = make_shared<string>(boost::any_cast<string>(m["nameWithNamespace"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      if (typeid(map<string, boost::any>) == m["namespace"].type()) {
        GetRepositoryResponseBodyRepositoryNamespace model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["namespace"]));
        namespace_ = make_shared<GetRepositoryResponseBodyRepositoryNamespace>(model1);
      }
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("pathWithNamespace") != m.end() && !m["pathWithNamespace"].empty()) {
      pathWithNamespace = make_shared<string>(boost::any_cast<string>(m["pathWithNamespace"]));
    }
    if (m.find("sshUrlToRepository") != m.end() && !m["sshUrlToRepository"].empty()) {
      sshUrlToRepository = make_shared<string>(boost::any_cast<string>(m["sshUrlToRepository"]));
    }
    if (m.find("visibilityLevel") != m.end() && !m["visibilityLevel"].empty()) {
      visibilityLevel = make_shared<long>(boost::any_cast<long>(m["visibilityLevel"]));
    }
    if (m.find("webUrl") != m.end() && !m["webUrl"].empty()) {
      webUrl = make_shared<string>(boost::any_cast<string>(m["webUrl"]));
    }
  }


  virtual ~GetRepositoryResponseBodyRepository() = default;
};
class GetRepositoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<GetRepositoryResponseBodyRepository> repository{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetRepositoryResponseBody() {}

  explicit GetRepositoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (repository) {
      res["repository"] = repository ? boost::any(repository->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("repository") != m.end() && !m["repository"].empty()) {
      if (typeid(map<string, boost::any>) == m["repository"].type()) {
        GetRepositoryResponseBodyRepository model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["repository"]));
        repository = make_shared<GetRepositoryResponseBodyRepository>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetRepositoryResponseBody() = default;
};
class GetRepositoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRepositoryResponseBody> body{};

  GetRepositoryResponse() {}

  explicit GetRepositoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRepositoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRepositoryResponseBody>(model1);
      }
    }
  }


  virtual ~GetRepositoryResponse() = default;
};
class GetSprintInfoResponseBodySprint : public Darabonba::Model {
public:
  shared_ptr<string> creator{};
  shared_ptr<string> description{};
  shared_ptr<long> endDate{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> identifier{};
  shared_ptr<string> modifier{};
  shared_ptr<string> name{};
  shared_ptr<string> scope{};
  shared_ptr<string> spaceIdentifier{};
  shared_ptr<long> startDate{};
  shared_ptr<string> status{};

  GetSprintInfoResponseBodySprint() {}

  explicit GetSprintInfoResponseBodySprint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (endDate) {
      res["endDate"] = boost::any(*endDate);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (spaceIdentifier) {
      res["spaceIdentifier"] = boost::any(*spaceIdentifier);
    }
    if (startDate) {
      res["startDate"] = boost::any(*startDate);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("endDate") != m.end() && !m["endDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["endDate"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["gmtModified"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["modifier"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
    if (m.find("spaceIdentifier") != m.end() && !m["spaceIdentifier"].empty()) {
      spaceIdentifier = make_shared<string>(boost::any_cast<string>(m["spaceIdentifier"]));
    }
    if (m.find("startDate") != m.end() && !m["startDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["startDate"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~GetSprintInfoResponseBodySprint() = default;
};
class GetSprintInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<GetSprintInfoResponseBodySprint> sprint{};
  shared_ptr<bool> success{};

  GetSprintInfoResponseBody() {}

  explicit GetSprintInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sprint) {
      res["sprint"] = sprint ? boost::any(sprint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sprint") != m.end() && !m["sprint"].empty()) {
      if (typeid(map<string, boost::any>) == m["sprint"].type()) {
        GetSprintInfoResponseBodySprint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sprint"]));
        sprint = make_shared<GetSprintInfoResponseBodySprint>(model1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetSprintInfoResponseBody() = default;
};
class GetSprintInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSprintInfoResponseBody> body{};

  GetSprintInfoResponse() {}

  explicit GetSprintInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSprintInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSprintInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetSprintInfoResponse() = default;
};
class GetVMDeployOrderResponseBodyDeployOrderActions : public Darabonba::Model {
public:
  shared_ptr<bool> disable{};
  shared_ptr<boost::any> params{};
  shared_ptr<string> type{};

  GetVMDeployOrderResponseBodyDeployOrderActions() {}

  explicit GetVMDeployOrderResponseBodyDeployOrderActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disable) {
      res["disable"] = boost::any(*disable);
    }
    if (params) {
      res["params"] = boost::any(*params);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("disable") != m.end() && !m["disable"].empty()) {
      disable = make_shared<bool>(boost::any_cast<bool>(m["disable"]));
    }
    if (m.find("params") != m.end() && !m["params"].empty()) {
      params = make_shared<boost::any>(boost::any_cast<boost::any>(m["params"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetVMDeployOrderResponseBodyDeployOrderActions() = default;
};
class GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachinesActions : public Darabonba::Model {
public:
  shared_ptr<bool> disable{};
  shared_ptr<boost::any> params{};
  shared_ptr<string> type{};

  GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachinesActions() {}

  explicit GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachinesActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disable) {
      res["disable"] = boost::any(*disable);
    }
    if (params) {
      res["params"] = boost::any(*params);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("disable") != m.end() && !m["disable"].empty()) {
      disable = make_shared<bool>(boost::any_cast<bool>(m["disable"]));
    }
    if (m.find("params") != m.end() && !m["params"].empty()) {
      params = make_shared<boost::any>(boost::any_cast<boost::any>(m["params"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachinesActions() = default;
};
class GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines : public Darabonba::Model {
public:
  shared_ptr<vector<GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachinesActions>> actions{};
  shared_ptr<long> batchNum{};
  shared_ptr<string> clientStatus{};
  shared_ptr<long> createTime{};
  shared_ptr<string> ip{};
  shared_ptr<string> machineSn{};
  shared_ptr<string> status{};
  shared_ptr<long> updateTime{};

  GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines() {}

  explicit GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["actions"] = boost::any(temp1);
    }
    if (batchNum) {
      res["batchNum"] = boost::any(*batchNum);
    }
    if (clientStatus) {
      res["clientStatus"] = boost::any(*clientStatus);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (ip) {
      res["ip"] = boost::any(*ip);
    }
    if (machineSn) {
      res["machineSn"] = boost::any(*machineSn);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachinesActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["actions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachinesActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        actions = make_shared<vector<GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachinesActions>>(expect1);
      }
    }
    if (m.find("batchNum") != m.end() && !m["batchNum"].empty()) {
      batchNum = make_shared<long>(boost::any_cast<long>(m["batchNum"]));
    }
    if (m.find("clientStatus") != m.end() && !m["clientStatus"].empty()) {
      clientStatus = make_shared<string>(boost::any_cast<string>(m["clientStatus"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("ip") != m.end() && !m["ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["ip"]));
    }
    if (m.find("machineSn") != m.end() && !m["machineSn"].empty()) {
      machineSn = make_shared<string>(boost::any_cast<string>(m["machineSn"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
  }


  virtual ~GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines() = default;
};
class GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo : public Darabonba::Model {
public:
  shared_ptr<long> batchNum{};
  shared_ptr<vector<GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines>> deployMachines{};
  shared_ptr<long> hostGroupId{};

  GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo() {}

  explicit GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchNum) {
      res["batchNum"] = boost::any(*batchNum);
    }
    if (deployMachines) {
      vector<boost::any> temp1;
      for(auto item1:*deployMachines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["deployMachines"] = boost::any(temp1);
    }
    if (hostGroupId) {
      res["hostGroupId"] = boost::any(*hostGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("batchNum") != m.end() && !m["batchNum"].empty()) {
      batchNum = make_shared<long>(boost::any_cast<long>(m["batchNum"]));
    }
    if (m.find("deployMachines") != m.end() && !m["deployMachines"].empty()) {
      if (typeid(vector<boost::any>) == m["deployMachines"].type()) {
        vector<GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["deployMachines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deployMachines = make_shared<vector<GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines>>(expect1);
      }
    }
    if (m.find("hostGroupId") != m.end() && !m["hostGroupId"].empty()) {
      hostGroupId = make_shared<long>(boost::any_cast<long>(m["hostGroupId"]));
    }
  }


  virtual ~GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo() = default;
};
class GetVMDeployOrderResponseBodyDeployOrder : public Darabonba::Model {
public:
  shared_ptr<vector<GetVMDeployOrderResponseBodyDeployOrderActions>> actions{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creator{};
  shared_ptr<long> currentBatch{};
  shared_ptr<GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo> deployMachineInfo{};
  shared_ptr<string> deployOrderId{};
  shared_ptr<string> exceptionCode{};
  shared_ptr<string> status{};
  shared_ptr<long> totalBatch{};
  shared_ptr<long> updateTime{};

  GetVMDeployOrderResponseBodyDeployOrder() {}

  explicit GetVMDeployOrderResponseBodyDeployOrder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["actions"] = boost::any(temp1);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (currentBatch) {
      res["currentBatch"] = boost::any(*currentBatch);
    }
    if (deployMachineInfo) {
      res["deployMachineInfo"] = deployMachineInfo ? boost::any(deployMachineInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deployOrderId) {
      res["deployOrderId"] = boost::any(*deployOrderId);
    }
    if (exceptionCode) {
      res["exceptionCode"] = boost::any(*exceptionCode);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (totalBatch) {
      res["totalBatch"] = boost::any(*totalBatch);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<GetVMDeployOrderResponseBodyDeployOrderActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["actions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVMDeployOrderResponseBodyDeployOrderActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        actions = make_shared<vector<GetVMDeployOrderResponseBodyDeployOrderActions>>(expect1);
      }
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("currentBatch") != m.end() && !m["currentBatch"].empty()) {
      currentBatch = make_shared<long>(boost::any_cast<long>(m["currentBatch"]));
    }
    if (m.find("deployMachineInfo") != m.end() && !m["deployMachineInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["deployMachineInfo"].type()) {
        GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["deployMachineInfo"]));
        deployMachineInfo = make_shared<GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo>(model1);
      }
    }
    if (m.find("deployOrderId") != m.end() && !m["deployOrderId"].empty()) {
      deployOrderId = make_shared<string>(boost::any_cast<string>(m["deployOrderId"]));
    }
    if (m.find("exceptionCode") != m.end() && !m["exceptionCode"].empty()) {
      exceptionCode = make_shared<string>(boost::any_cast<string>(m["exceptionCode"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("totalBatch") != m.end() && !m["totalBatch"].empty()) {
      totalBatch = make_shared<long>(boost::any_cast<long>(m["totalBatch"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
  }


  virtual ~GetVMDeployOrderResponseBodyDeployOrder() = default;
};
class GetVMDeployOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetVMDeployOrderResponseBodyDeployOrder> deployOrder{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetVMDeployOrderResponseBody() {}

  explicit GetVMDeployOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deployOrder) {
      res["deployOrder"] = deployOrder ? boost::any(deployOrder->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("deployOrder") != m.end() && !m["deployOrder"].empty()) {
      if (typeid(map<string, boost::any>) == m["deployOrder"].type()) {
        GetVMDeployOrderResponseBodyDeployOrder model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["deployOrder"]));
        deployOrder = make_shared<GetVMDeployOrderResponseBodyDeployOrder>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetVMDeployOrderResponseBody() = default;
};
class GetVMDeployOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetVMDeployOrderResponseBody> body{};

  GetVMDeployOrderResponse() {}

  explicit GetVMDeployOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVMDeployOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVMDeployOrderResponseBody>(model1);
      }
    }
  }


  virtual ~GetVMDeployOrderResponse() = default;
};
class GetVariableGroupResponseBodyVariableGroupRelatedPipelines : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  GetVariableGroupResponseBodyVariableGroupRelatedPipelines() {}

  explicit GetVariableGroupResponseBodyVariableGroupRelatedPipelines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GetVariableGroupResponseBodyVariableGroupRelatedPipelines() = default;
};
class GetVariableGroupResponseBodyVariableGroupVariables : public Darabonba::Model {
public:
  shared_ptr<bool> isEncrypted{};
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  GetVariableGroupResponseBodyVariableGroupVariables() {}

  explicit GetVariableGroupResponseBodyVariableGroupVariables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isEncrypted) {
      res["isEncrypted"] = boost::any(*isEncrypted);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("isEncrypted") != m.end() && !m["isEncrypted"].empty()) {
      isEncrypted = make_shared<bool>(boost::any_cast<bool>(m["isEncrypted"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~GetVariableGroupResponseBodyVariableGroupVariables() = default;
};
class GetVariableGroupResponseBodyVariableGroup : public Darabonba::Model {
public:
  shared_ptr<string> ccreatorAccountId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<long> id{};
  shared_ptr<string> modifierAccountId{};
  shared_ptr<string> name{};
  shared_ptr<vector<GetVariableGroupResponseBodyVariableGroupRelatedPipelines>> relatedPipelines{};
  shared_ptr<long> updateTime{};
  shared_ptr<vector<GetVariableGroupResponseBodyVariableGroupVariables>> variables{};

  GetVariableGroupResponseBodyVariableGroup() {}

  explicit GetVariableGroupResponseBodyVariableGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ccreatorAccountId) {
      res["ccreatorAccountId"] = boost::any(*ccreatorAccountId);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (modifierAccountId) {
      res["modifierAccountId"] = boost::any(*modifierAccountId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (relatedPipelines) {
      vector<boost::any> temp1;
      for(auto item1:*relatedPipelines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["relatedPipelines"] = boost::any(temp1);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (variables) {
      vector<boost::any> temp1;
      for(auto item1:*variables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["variables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ccreatorAccountId") != m.end() && !m["ccreatorAccountId"].empty()) {
      ccreatorAccountId = make_shared<string>(boost::any_cast<string>(m["ccreatorAccountId"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("modifierAccountId") != m.end() && !m["modifierAccountId"].empty()) {
      modifierAccountId = make_shared<string>(boost::any_cast<string>(m["modifierAccountId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("relatedPipelines") != m.end() && !m["relatedPipelines"].empty()) {
      if (typeid(vector<boost::any>) == m["relatedPipelines"].type()) {
        vector<GetVariableGroupResponseBodyVariableGroupRelatedPipelines> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["relatedPipelines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVariableGroupResponseBodyVariableGroupRelatedPipelines model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relatedPipelines = make_shared<vector<GetVariableGroupResponseBodyVariableGroupRelatedPipelines>>(expect1);
      }
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      if (typeid(vector<boost::any>) == m["variables"].type()) {
        vector<GetVariableGroupResponseBodyVariableGroupVariables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["variables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVariableGroupResponseBodyVariableGroupVariables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        variables = make_shared<vector<GetVariableGroupResponseBodyVariableGroupVariables>>(expect1);
      }
    }
  }


  virtual ~GetVariableGroupResponseBodyVariableGroup() = default;
};
class GetVariableGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<GetVariableGroupResponseBodyVariableGroup> variableGroup{};

  GetVariableGroupResponseBody() {}

  explicit GetVariableGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (variableGroup) {
      res["variableGroup"] = variableGroup ? boost::any(variableGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("variableGroup") != m.end() && !m["variableGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["variableGroup"].type()) {
        GetVariableGroupResponseBodyVariableGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["variableGroup"]));
        variableGroup = make_shared<GetVariableGroupResponseBodyVariableGroup>(model1);
      }
    }
  }


  virtual ~GetVariableGroupResponseBody() = default;
};
class GetVariableGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetVariableGroupResponseBody> body{};

  GetVariableGroupResponse() {}

  explicit GetVariableGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVariableGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVariableGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetVariableGroupResponse() = default;
};
class GetWorkItemActivityResponseBodyActivitiesNewValue : public Darabonba::Model {
public:
  shared_ptr<string> displayValue{};
  shared_ptr<string> plainValue{};
  shared_ptr<string> resourceType{};

  GetWorkItemActivityResponseBodyActivitiesNewValue() {}

  explicit GetWorkItemActivityResponseBodyActivitiesNewValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayValue) {
      res["displayValue"] = boost::any(*displayValue);
    }
    if (plainValue) {
      res["plainValue"] = boost::any(*plainValue);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("displayValue") != m.end() && !m["displayValue"].empty()) {
      displayValue = make_shared<string>(boost::any_cast<string>(m["displayValue"]));
    }
    if (m.find("plainValue") != m.end() && !m["plainValue"].empty()) {
      plainValue = make_shared<string>(boost::any_cast<string>(m["plainValue"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~GetWorkItemActivityResponseBodyActivitiesNewValue() = default;
};
class GetWorkItemActivityResponseBodyActivitiesOldValue : public Darabonba::Model {
public:
  shared_ptr<string> displayValue{};
  shared_ptr<string> plainValue{};
  shared_ptr<string> resourceType{};

  GetWorkItemActivityResponseBodyActivitiesOldValue() {}

  explicit GetWorkItemActivityResponseBodyActivitiesOldValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayValue) {
      res["displayValue"] = boost::any(*displayValue);
    }
    if (plainValue) {
      res["plainValue"] = boost::any(*plainValue);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("displayValue") != m.end() && !m["displayValue"].empty()) {
      displayValue = make_shared<string>(boost::any_cast<string>(m["displayValue"]));
    }
    if (m.find("plainValue") != m.end() && !m["plainValue"].empty()) {
      plainValue = make_shared<string>(boost::any_cast<string>(m["plainValue"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~GetWorkItemActivityResponseBodyActivitiesOldValue() = default;
};
class GetWorkItemActivityResponseBodyActivitiesProperty : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> propertyIdentifier{};
  shared_ptr<string> propertyName{};
  shared_ptr<string> propertyType{};

  GetWorkItemActivityResponseBodyActivitiesProperty() {}

  explicit GetWorkItemActivityResponseBodyActivitiesProperty(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (propertyIdentifier) {
      res["propertyIdentifier"] = boost::any(*propertyIdentifier);
    }
    if (propertyName) {
      res["propertyName"] = boost::any(*propertyName);
    }
    if (propertyType) {
      res["propertyType"] = boost::any(*propertyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("propertyIdentifier") != m.end() && !m["propertyIdentifier"].empty()) {
      propertyIdentifier = make_shared<string>(boost::any_cast<string>(m["propertyIdentifier"]));
    }
    if (m.find("propertyName") != m.end() && !m["propertyName"].empty()) {
      propertyName = make_shared<string>(boost::any_cast<string>(m["propertyName"]));
    }
    if (m.find("propertyType") != m.end() && !m["propertyType"].empty()) {
      propertyType = make_shared<string>(boost::any_cast<string>(m["propertyType"]));
    }
  }


  virtual ~GetWorkItemActivityResponseBodyActivitiesProperty() = default;
};
class GetWorkItemActivityResponseBodyActivities : public Darabonba::Model {
public:
  shared_ptr<string> actionType{};
  shared_ptr<long> eventId{};
  shared_ptr<long> eventTime{};
  shared_ptr<string> eventType{};
  shared_ptr<vector<GetWorkItemActivityResponseBodyActivitiesNewValue>> newValue{};
  shared_ptr<vector<GetWorkItemActivityResponseBodyActivitiesOldValue>> oldValue{};
  shared_ptr<string> operator_{};
  shared_ptr<long> parentEventId{};
  shared_ptr<GetWorkItemActivityResponseBodyActivitiesProperty> property{};
  shared_ptr<string> resourceIdentifier{};

  GetWorkItemActivityResponseBodyActivities() {}

  explicit GetWorkItemActivityResponseBodyActivities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionType) {
      res["actionType"] = boost::any(*actionType);
    }
    if (eventId) {
      res["eventId"] = boost::any(*eventId);
    }
    if (eventTime) {
      res["eventTime"] = boost::any(*eventTime);
    }
    if (eventType) {
      res["eventType"] = boost::any(*eventType);
    }
    if (newValue) {
      vector<boost::any> temp1;
      for(auto item1:*newValue){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["newValue"] = boost::any(temp1);
    }
    if (oldValue) {
      vector<boost::any> temp1;
      for(auto item1:*oldValue){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["oldValue"] = boost::any(temp1);
    }
    if (operator_) {
      res["operator"] = boost::any(*operator_);
    }
    if (parentEventId) {
      res["parentEventId"] = boost::any(*parentEventId);
    }
    if (property) {
      res["property"] = property ? boost::any(property->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceIdentifier) {
      res["resourceIdentifier"] = boost::any(*resourceIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actionType") != m.end() && !m["actionType"].empty()) {
      actionType = make_shared<string>(boost::any_cast<string>(m["actionType"]));
    }
    if (m.find("eventId") != m.end() && !m["eventId"].empty()) {
      eventId = make_shared<long>(boost::any_cast<long>(m["eventId"]));
    }
    if (m.find("eventTime") != m.end() && !m["eventTime"].empty()) {
      eventTime = make_shared<long>(boost::any_cast<long>(m["eventTime"]));
    }
    if (m.find("eventType") != m.end() && !m["eventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["eventType"]));
    }
    if (m.find("newValue") != m.end() && !m["newValue"].empty()) {
      if (typeid(vector<boost::any>) == m["newValue"].type()) {
        vector<GetWorkItemActivityResponseBodyActivitiesNewValue> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["newValue"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetWorkItemActivityResponseBodyActivitiesNewValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        newValue = make_shared<vector<GetWorkItemActivityResponseBodyActivitiesNewValue>>(expect1);
      }
    }
    if (m.find("oldValue") != m.end() && !m["oldValue"].empty()) {
      if (typeid(vector<boost::any>) == m["oldValue"].type()) {
        vector<GetWorkItemActivityResponseBodyActivitiesOldValue> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["oldValue"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetWorkItemActivityResponseBodyActivitiesOldValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        oldValue = make_shared<vector<GetWorkItemActivityResponseBodyActivitiesOldValue>>(expect1);
      }
    }
    if (m.find("operator") != m.end() && !m["operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["operator"]));
    }
    if (m.find("parentEventId") != m.end() && !m["parentEventId"].empty()) {
      parentEventId = make_shared<long>(boost::any_cast<long>(m["parentEventId"]));
    }
    if (m.find("property") != m.end() && !m["property"].empty()) {
      if (typeid(map<string, boost::any>) == m["property"].type()) {
        GetWorkItemActivityResponseBodyActivitiesProperty model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["property"]));
        property = make_shared<GetWorkItemActivityResponseBodyActivitiesProperty>(model1);
      }
    }
    if (m.find("resourceIdentifier") != m.end() && !m["resourceIdentifier"].empty()) {
      resourceIdentifier = make_shared<string>(boost::any_cast<string>(m["resourceIdentifier"]));
    }
  }


  virtual ~GetWorkItemActivityResponseBodyActivities() = default;
};
class GetWorkItemActivityResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetWorkItemActivityResponseBodyActivities>> activities{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetWorkItemActivityResponseBody() {}

  explicit GetWorkItemActivityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activities) {
      vector<boost::any> temp1;
      for(auto item1:*activities){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["activities"] = boost::any(temp1);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
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
    if (m.find("activities") != m.end() && !m["activities"].empty()) {
      if (typeid(vector<boost::any>) == m["activities"].type()) {
        vector<GetWorkItemActivityResponseBodyActivities> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["activities"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetWorkItemActivityResponseBodyActivities model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        activities = make_shared<vector<GetWorkItemActivityResponseBodyActivities>>(expect1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetWorkItemActivityResponseBody() = default;
};
class GetWorkItemActivityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWorkItemActivityResponseBody> body{};

  GetWorkItemActivityResponse() {}

  explicit GetWorkItemActivityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWorkItemActivityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWorkItemActivityResponseBody>(model1);
      }
    }
  }


  virtual ~GetWorkItemActivityResponse() = default;
};
class GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList : public Darabonba::Model {
public:
  shared_ptr<string> displayValue{};
  shared_ptr<string> identifier{};
  shared_ptr<long> level{};
  shared_ptr<string> value{};
  shared_ptr<string> valueEn{};

  GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList() {}

  explicit GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayValue) {
      res["displayValue"] = boost::any(*displayValue);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (level) {
      res["level"] = boost::any(*level);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    if (valueEn) {
      res["valueEn"] = boost::any(*valueEn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("displayValue") != m.end() && !m["displayValue"].empty()) {
      displayValue = make_shared<string>(boost::any_cast<string>(m["displayValue"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["level"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
    if (m.find("valueEn") != m.end() && !m["valueEn"].empty()) {
      valueEn = make_shared<string>(boost::any_cast<string>(m["valueEn"]));
    }
  }


  virtual ~GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList() = default;
};
class GetWorkItemInfoResponseBodyWorkitemCustomFields : public Darabonba::Model {
public:
  shared_ptr<string> fieldClassName{};
  shared_ptr<string> fieldFormat{};
  shared_ptr<string> fieldIdentifier{};
  shared_ptr<long> level{};
  shared_ptr<string> objectValue{};
  shared_ptr<long> position{};
  shared_ptr<string> value{};
  shared_ptr<vector<GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList>> valueList{};
  shared_ptr<string> workitemIdentifier{};

  GetWorkItemInfoResponseBodyWorkitemCustomFields() {}

  explicit GetWorkItemInfoResponseBodyWorkitemCustomFields(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldClassName) {
      res["fieldClassName"] = boost::any(*fieldClassName);
    }
    if (fieldFormat) {
      res["fieldFormat"] = boost::any(*fieldFormat);
    }
    if (fieldIdentifier) {
      res["fieldIdentifier"] = boost::any(*fieldIdentifier);
    }
    if (level) {
      res["level"] = boost::any(*level);
    }
    if (objectValue) {
      res["objectValue"] = boost::any(*objectValue);
    }
    if (position) {
      res["position"] = boost::any(*position);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    if (valueList) {
      vector<boost::any> temp1;
      for(auto item1:*valueList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["valueList"] = boost::any(temp1);
    }
    if (workitemIdentifier) {
      res["workitemIdentifier"] = boost::any(*workitemIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fieldClassName") != m.end() && !m["fieldClassName"].empty()) {
      fieldClassName = make_shared<string>(boost::any_cast<string>(m["fieldClassName"]));
    }
    if (m.find("fieldFormat") != m.end() && !m["fieldFormat"].empty()) {
      fieldFormat = make_shared<string>(boost::any_cast<string>(m["fieldFormat"]));
    }
    if (m.find("fieldIdentifier") != m.end() && !m["fieldIdentifier"].empty()) {
      fieldIdentifier = make_shared<string>(boost::any_cast<string>(m["fieldIdentifier"]));
    }
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["level"]));
    }
    if (m.find("objectValue") != m.end() && !m["objectValue"].empty()) {
      objectValue = make_shared<string>(boost::any_cast<string>(m["objectValue"]));
    }
    if (m.find("position") != m.end() && !m["position"].empty()) {
      position = make_shared<long>(boost::any_cast<long>(m["position"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
    if (m.find("valueList") != m.end() && !m["valueList"].empty()) {
      if (typeid(vector<boost::any>) == m["valueList"].type()) {
        vector<GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["valueList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        valueList = make_shared<vector<GetWorkItemInfoResponseBodyWorkitemCustomFieldsValueList>>(expect1);
      }
    }
    if (m.find("workitemIdentifier") != m.end() && !m["workitemIdentifier"].empty()) {
      workitemIdentifier = make_shared<string>(boost::any_cast<string>(m["workitemIdentifier"]));
    }
  }


  virtual ~GetWorkItemInfoResponseBodyWorkitemCustomFields() = default;
};
class GetWorkItemInfoResponseBodyWorkitem : public Darabonba::Model {
public:
  shared_ptr<string> assignedTo{};
  shared_ptr<string> categoryIdentifier{};
  shared_ptr<string> creator{};
  shared_ptr<vector<GetWorkItemInfoResponseBodyWorkitemCustomFields>> customFields{};
  shared_ptr<string> document{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> identifier{};
  shared_ptr<string> logicalStatus{};
  shared_ptr<string> modifier{};
  shared_ptr<string> parentIdentifier{};
  shared_ptr<vector<string>> participant{};
  shared_ptr<string> serialNumber{};
  shared_ptr<string> spaceIdentifier{};
  shared_ptr<string> spaceName{};
  shared_ptr<string> spaceType{};
  shared_ptr<vector<string>> sprint{};
  shared_ptr<string> status{};
  shared_ptr<string> statusIdentifier{};
  shared_ptr<string> statusStageIdentifier{};
  shared_ptr<string> subject{};
  shared_ptr<vector<string>> tag{};
  shared_ptr<vector<string>> tracker{};
  shared_ptr<long> updateStatusAt{};
  shared_ptr<vector<string>> verifier{};
  shared_ptr<string> workitemTypeIdentifier{};

  GetWorkItemInfoResponseBodyWorkitem() {}

  explicit GetWorkItemInfoResponseBodyWorkitem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assignedTo) {
      res["assignedTo"] = boost::any(*assignedTo);
    }
    if (categoryIdentifier) {
      res["categoryIdentifier"] = boost::any(*categoryIdentifier);
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (customFields) {
      vector<boost::any> temp1;
      for(auto item1:*customFields){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["customFields"] = boost::any(temp1);
    }
    if (document) {
      res["document"] = boost::any(*document);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (logicalStatus) {
      res["logicalStatus"] = boost::any(*logicalStatus);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    if (parentIdentifier) {
      res["parentIdentifier"] = boost::any(*parentIdentifier);
    }
    if (participant) {
      res["participant"] = boost::any(*participant);
    }
    if (serialNumber) {
      res["serialNumber"] = boost::any(*serialNumber);
    }
    if (spaceIdentifier) {
      res["spaceIdentifier"] = boost::any(*spaceIdentifier);
    }
    if (spaceName) {
      res["spaceName"] = boost::any(*spaceName);
    }
    if (spaceType) {
      res["spaceType"] = boost::any(*spaceType);
    }
    if (sprint) {
      res["sprint"] = boost::any(*sprint);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (statusIdentifier) {
      res["statusIdentifier"] = boost::any(*statusIdentifier);
    }
    if (statusStageIdentifier) {
      res["statusStageIdentifier"] = boost::any(*statusStageIdentifier);
    }
    if (subject) {
      res["subject"] = boost::any(*subject);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (tracker) {
      res["tracker"] = boost::any(*tracker);
    }
    if (updateStatusAt) {
      res["updateStatusAt"] = boost::any(*updateStatusAt);
    }
    if (verifier) {
      res["verifier"] = boost::any(*verifier);
    }
    if (workitemTypeIdentifier) {
      res["workitemTypeIdentifier"] = boost::any(*workitemTypeIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("assignedTo") != m.end() && !m["assignedTo"].empty()) {
      assignedTo = make_shared<string>(boost::any_cast<string>(m["assignedTo"]));
    }
    if (m.find("categoryIdentifier") != m.end() && !m["categoryIdentifier"].empty()) {
      categoryIdentifier = make_shared<string>(boost::any_cast<string>(m["categoryIdentifier"]));
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("customFields") != m.end() && !m["customFields"].empty()) {
      if (typeid(vector<boost::any>) == m["customFields"].type()) {
        vector<GetWorkItemInfoResponseBodyWorkitemCustomFields> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["customFields"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetWorkItemInfoResponseBodyWorkitemCustomFields model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customFields = make_shared<vector<GetWorkItemInfoResponseBodyWorkitemCustomFields>>(expect1);
      }
    }
    if (m.find("document") != m.end() && !m["document"].empty()) {
      document = make_shared<string>(boost::any_cast<string>(m["document"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["gmtModified"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("logicalStatus") != m.end() && !m["logicalStatus"].empty()) {
      logicalStatus = make_shared<string>(boost::any_cast<string>(m["logicalStatus"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["modifier"]));
    }
    if (m.find("parentIdentifier") != m.end() && !m["parentIdentifier"].empty()) {
      parentIdentifier = make_shared<string>(boost::any_cast<string>(m["parentIdentifier"]));
    }
    if (m.find("participant") != m.end() && !m["participant"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["participant"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["participant"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      participant = make_shared<vector<string>>(toVec1);
    }
    if (m.find("serialNumber") != m.end() && !m["serialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["serialNumber"]));
    }
    if (m.find("spaceIdentifier") != m.end() && !m["spaceIdentifier"].empty()) {
      spaceIdentifier = make_shared<string>(boost::any_cast<string>(m["spaceIdentifier"]));
    }
    if (m.find("spaceName") != m.end() && !m["spaceName"].empty()) {
      spaceName = make_shared<string>(boost::any_cast<string>(m["spaceName"]));
    }
    if (m.find("spaceType") != m.end() && !m["spaceType"].empty()) {
      spaceType = make_shared<string>(boost::any_cast<string>(m["spaceType"]));
    }
    if (m.find("sprint") != m.end() && !m["sprint"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["sprint"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["sprint"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sprint = make_shared<vector<string>>(toVec1);
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("statusIdentifier") != m.end() && !m["statusIdentifier"].empty()) {
      statusIdentifier = make_shared<string>(boost::any_cast<string>(m["statusIdentifier"]));
    }
    if (m.find("statusStageIdentifier") != m.end() && !m["statusStageIdentifier"].empty()) {
      statusStageIdentifier = make_shared<string>(boost::any_cast<string>(m["statusStageIdentifier"]));
    }
    if (m.find("subject") != m.end() && !m["subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["subject"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["tag"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["tag"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tag = make_shared<vector<string>>(toVec1);
    }
    if (m.find("tracker") != m.end() && !m["tracker"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["tracker"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["tracker"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tracker = make_shared<vector<string>>(toVec1);
    }
    if (m.find("updateStatusAt") != m.end() && !m["updateStatusAt"].empty()) {
      updateStatusAt = make_shared<long>(boost::any_cast<long>(m["updateStatusAt"]));
    }
    if (m.find("verifier") != m.end() && !m["verifier"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["verifier"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["verifier"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      verifier = make_shared<vector<string>>(toVec1);
    }
    if (m.find("workitemTypeIdentifier") != m.end() && !m["workitemTypeIdentifier"].empty()) {
      workitemTypeIdentifier = make_shared<string>(boost::any_cast<string>(m["workitemTypeIdentifier"]));
    }
  }


  virtual ~GetWorkItemInfoResponseBodyWorkitem() = default;
};
class GetWorkItemInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<GetWorkItemInfoResponseBodyWorkitem> workitem{};

  GetWorkItemInfoResponseBody() {}

  explicit GetWorkItemInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (workitem) {
      res["workitem"] = workitem ? boost::any(workitem->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("workitem") != m.end() && !m["workitem"].empty()) {
      if (typeid(map<string, boost::any>) == m["workitem"].type()) {
        GetWorkItemInfoResponseBodyWorkitem model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["workitem"]));
        workitem = make_shared<GetWorkItemInfoResponseBodyWorkitem>(model1);
      }
    }
  }


  virtual ~GetWorkItemInfoResponseBody() = default;
};
class GetWorkItemInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWorkItemInfoResponseBody> body{};

  GetWorkItemInfoResponse() {}

  explicit GetWorkItemInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWorkItemInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWorkItemInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetWorkItemInfoResponse() = default;
};
class GetWorkItemWorkFlowInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> configurationId{};

  GetWorkItemWorkFlowInfoRequest() {}

  explicit GetWorkItemWorkFlowInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configurationId) {
      res["configurationId"] = boost::any(*configurationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configurationId") != m.end() && !m["configurationId"].empty()) {
      configurationId = make_shared<string>(boost::any_cast<string>(m["configurationId"]));
    }
  }


  virtual ~GetWorkItemWorkFlowInfoRequest() = default;
};
class GetWorkItemWorkFlowInfoResponseBodyWorkflowStatuses : public Darabonba::Model {
public:
  shared_ptr<string> creator{};
  shared_ptr<string> description{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> identifier{};
  shared_ptr<string> modifier{};
  shared_ptr<string> name{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> source{};
  shared_ptr<string> workflowStageIdentifier{};
  shared_ptr<string> workflowStageName{};

  GetWorkItemWorkFlowInfoResponseBodyWorkflowStatuses() {}

  explicit GetWorkItemWorkFlowInfoResponseBodyWorkflowStatuses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (workflowStageIdentifier) {
      res["workflowStageIdentifier"] = boost::any(*workflowStageIdentifier);
    }
    if (workflowStageName) {
      res["workflowStageName"] = boost::any(*workflowStageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["gmtModified"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["modifier"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("workflowStageIdentifier") != m.end() && !m["workflowStageIdentifier"].empty()) {
      workflowStageIdentifier = make_shared<string>(boost::any_cast<string>(m["workflowStageIdentifier"]));
    }
    if (m.find("workflowStageName") != m.end() && !m["workflowStageName"].empty()) {
      workflowStageName = make_shared<string>(boost::any_cast<string>(m["workflowStageName"]));
    }
  }


  virtual ~GetWorkItemWorkFlowInfoResponseBodyWorkflowStatuses() = default;
};
class GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nextWorkflowStatusIdentifier{};
  shared_ptr<string> workflowIdentifier{};
  shared_ptr<string> workflowStatusIdentifier{};

  GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions() {}

  explicit GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nextWorkflowStatusIdentifier) {
      res["nextWorkflowStatusIdentifier"] = boost::any(*nextWorkflowStatusIdentifier);
    }
    if (workflowIdentifier) {
      res["workflowIdentifier"] = boost::any(*workflowIdentifier);
    }
    if (workflowStatusIdentifier) {
      res["workflowStatusIdentifier"] = boost::any(*workflowStatusIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nextWorkflowStatusIdentifier") != m.end() && !m["nextWorkflowStatusIdentifier"].empty()) {
      nextWorkflowStatusIdentifier = make_shared<string>(boost::any_cast<string>(m["nextWorkflowStatusIdentifier"]));
    }
    if (m.find("workflowIdentifier") != m.end() && !m["workflowIdentifier"].empty()) {
      workflowIdentifier = make_shared<string>(boost::any_cast<string>(m["workflowIdentifier"]));
    }
    if (m.find("workflowStatusIdentifier") != m.end() && !m["workflowStatusIdentifier"].empty()) {
      workflowStatusIdentifier = make_shared<string>(boost::any_cast<string>(m["workflowStatusIdentifier"]));
    }
  }


  virtual ~GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions() = default;
};
class GetWorkItemWorkFlowInfoResponseBodyWorkflow : public Darabonba::Model {
public:
  shared_ptr<string> creator{};
  shared_ptr<string> defaultStatusIdentifier{};
  shared_ptr<string> description{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> identifier{};
  shared_ptr<string> modifier{};
  shared_ptr<string> name{};
  shared_ptr<string> ownerSpaceIdentifier{};
  shared_ptr<string> ownerSpaceType{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> source{};
  shared_ptr<string> statusOrder{};
  shared_ptr<vector<GetWorkItemWorkFlowInfoResponseBodyWorkflowStatuses>> statuses{};
  shared_ptr<vector<GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions>> workflowActions{};

  GetWorkItemWorkFlowInfoResponseBodyWorkflow() {}

  explicit GetWorkItemWorkFlowInfoResponseBodyWorkflow(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (defaultStatusIdentifier) {
      res["defaultStatusIdentifier"] = boost::any(*defaultStatusIdentifier);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (ownerSpaceIdentifier) {
      res["ownerSpaceIdentifier"] = boost::any(*ownerSpaceIdentifier);
    }
    if (ownerSpaceType) {
      res["ownerSpaceType"] = boost::any(*ownerSpaceType);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (statusOrder) {
      res["statusOrder"] = boost::any(*statusOrder);
    }
    if (statuses) {
      vector<boost::any> temp1;
      for(auto item1:*statuses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["statuses"] = boost::any(temp1);
    }
    if (workflowActions) {
      vector<boost::any> temp1;
      for(auto item1:*workflowActions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["workflowActions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("defaultStatusIdentifier") != m.end() && !m["defaultStatusIdentifier"].empty()) {
      defaultStatusIdentifier = make_shared<string>(boost::any_cast<string>(m["defaultStatusIdentifier"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["gmtModified"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["modifier"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("ownerSpaceIdentifier") != m.end() && !m["ownerSpaceIdentifier"].empty()) {
      ownerSpaceIdentifier = make_shared<string>(boost::any_cast<string>(m["ownerSpaceIdentifier"]));
    }
    if (m.find("ownerSpaceType") != m.end() && !m["ownerSpaceType"].empty()) {
      ownerSpaceType = make_shared<string>(boost::any_cast<string>(m["ownerSpaceType"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("statusOrder") != m.end() && !m["statusOrder"].empty()) {
      statusOrder = make_shared<string>(boost::any_cast<string>(m["statusOrder"]));
    }
    if (m.find("statuses") != m.end() && !m["statuses"].empty()) {
      if (typeid(vector<boost::any>) == m["statuses"].type()) {
        vector<GetWorkItemWorkFlowInfoResponseBodyWorkflowStatuses> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["statuses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetWorkItemWorkFlowInfoResponseBodyWorkflowStatuses model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        statuses = make_shared<vector<GetWorkItemWorkFlowInfoResponseBodyWorkflowStatuses>>(expect1);
      }
    }
    if (m.find("workflowActions") != m.end() && !m["workflowActions"].empty()) {
      if (typeid(vector<boost::any>) == m["workflowActions"].type()) {
        vector<GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["workflowActions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workflowActions = make_shared<vector<GetWorkItemWorkFlowInfoResponseBodyWorkflowWorkflowActions>>(expect1);
      }
    }
  }


  virtual ~GetWorkItemWorkFlowInfoResponseBodyWorkflow() = default;
};
class GetWorkItemWorkFlowInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<GetWorkItemWorkFlowInfoResponseBodyWorkflow> workflow{};

  GetWorkItemWorkFlowInfoResponseBody() {}

  explicit GetWorkItemWorkFlowInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (workflow) {
      res["workflow"] = workflow ? boost::any(workflow->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("workflow") != m.end() && !m["workflow"].empty()) {
      if (typeid(map<string, boost::any>) == m["workflow"].type()) {
        GetWorkItemWorkFlowInfoResponseBodyWorkflow model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["workflow"]));
        workflow = make_shared<GetWorkItemWorkFlowInfoResponseBodyWorkflow>(model1);
      }
    }
  }


  virtual ~GetWorkItemWorkFlowInfoResponseBody() = default;
};
class GetWorkItemWorkFlowInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWorkItemWorkFlowInfoResponseBody> body{};

  GetWorkItemWorkFlowInfoResponse() {}

  explicit GetWorkItemWorkFlowInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWorkItemWorkFlowInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWorkItemWorkFlowInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetWorkItemWorkFlowInfoResponse() = default;
};
class GetWorkspaceResponseBodyWorkspace : public Darabonba::Model {
public:
  shared_ptr<string> codeUrl{};
  shared_ptr<string> codeVersion{};
  shared_ptr<string> createTime{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> spec{};
  shared_ptr<string> status{};
  shared_ptr<string> template_{};
  shared_ptr<string> userId{};

  GetWorkspaceResponseBodyWorkspace() {}

  explicit GetWorkspaceResponseBodyWorkspace(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeUrl) {
      res["codeUrl"] = boost::any(*codeUrl);
    }
    if (codeVersion) {
      res["codeVersion"] = boost::any(*codeVersion);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (spec) {
      res["spec"] = boost::any(*spec);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (template_) {
      res["template"] = boost::any(*template_);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("codeUrl") != m.end() && !m["codeUrl"].empty()) {
      codeUrl = make_shared<string>(boost::any_cast<string>(m["codeUrl"]));
    }
    if (m.find("codeVersion") != m.end() && !m["codeVersion"].empty()) {
      codeVersion = make_shared<string>(boost::any_cast<string>(m["codeVersion"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["spec"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("template") != m.end() && !m["template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["template"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~GetWorkspaceResponseBodyWorkspace() = default;
};
class GetWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<GetWorkspaceResponseBodyWorkspace> workspace{};

  GetWorkspaceResponseBody() {}

  explicit GetWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (workspace) {
      res["workspace"] = workspace ? boost::any(workspace->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      if (typeid(map<string, boost::any>) == m["workspace"].type()) {
        GetWorkspaceResponseBodyWorkspace model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["workspace"]));
        workspace = make_shared<GetWorkspaceResponseBodyWorkspace>(model1);
      }
    }
  }


  virtual ~GetWorkspaceResponseBody() = default;
};
class GetWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWorkspaceResponseBody> body{};

  GetWorkspaceResponse() {}

  explicit GetWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWorkspaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWorkspaceResponseBody>(model1);
      }
    }
  }


  virtual ~GetWorkspaceResponse() = default;
};
class JoinPipelineGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> groupId{};
  shared_ptr<string> pipelineIds{};

  JoinPipelineGroupRequest() {}

  explicit JoinPipelineGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (pipelineIds) {
      res["pipelineIds"] = boost::any(*pipelineIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<long>(boost::any_cast<long>(m["groupId"]));
    }
    if (m.find("pipelineIds") != m.end() && !m["pipelineIds"].empty()) {
      pipelineIds = make_shared<string>(boost::any_cast<string>(m["pipelineIds"]));
    }
  }


  virtual ~JoinPipelineGroupRequest() = default;
};
class JoinPipelineGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  JoinPipelineGroupResponseBody() {}

  explicit JoinPipelineGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~JoinPipelineGroupResponseBody() = default;
};
class JoinPipelineGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<JoinPipelineGroupResponseBody> body{};

  JoinPipelineGroupResponse() {}

  explicit JoinPipelineGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        JoinPipelineGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<JoinPipelineGroupResponseBody>(model1);
      }
    }
  }


  virtual ~JoinPipelineGroupResponse() = default;
};
class ListFlowTagGroupsResponseBodyFlowTagGroups : public Darabonba::Model {
public:
  shared_ptr<string> creatorAccountId{};
  shared_ptr<long> id{};
  shared_ptr<string> modiferAccountId{};
  shared_ptr<string> name{};

  ListFlowTagGroupsResponseBodyFlowTagGroups() {}

  explicit ListFlowTagGroupsResponseBodyFlowTagGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creatorAccountId) {
      res["creatorAccountId"] = boost::any(*creatorAccountId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (modiferAccountId) {
      res["modiferAccountId"] = boost::any(*modiferAccountId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("creatorAccountId") != m.end() && !m["creatorAccountId"].empty()) {
      creatorAccountId = make_shared<string>(boost::any_cast<string>(m["creatorAccountId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("modiferAccountId") != m.end() && !m["modiferAccountId"].empty()) {
      modiferAccountId = make_shared<string>(boost::any_cast<string>(m["modiferAccountId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ListFlowTagGroupsResponseBodyFlowTagGroups() = default;
};
class ListFlowTagGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<vector<ListFlowTagGroupsResponseBodyFlowTagGroups>> flowTagGroups{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListFlowTagGroupsResponseBody() {}

  explicit ListFlowTagGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (flowTagGroups) {
      vector<boost::any> temp1;
      for(auto item1:*flowTagGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["flowTagGroups"] = boost::any(temp1);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("flowTagGroups") != m.end() && !m["flowTagGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["flowTagGroups"].type()) {
        vector<ListFlowTagGroupsResponseBodyFlowTagGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["flowTagGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFlowTagGroupsResponseBodyFlowTagGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        flowTagGroups = make_shared<vector<ListFlowTagGroupsResponseBodyFlowTagGroups>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ListFlowTagGroupsResponseBody() = default;
};
class ListFlowTagGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFlowTagGroupsResponseBody> body{};

  ListFlowTagGroupsResponse() {}

  explicit ListFlowTagGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFlowTagGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFlowTagGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFlowTagGroupsResponse() = default;
};
class ListHostGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<long> createEndTime{};
  shared_ptr<long> createStartTime{};
  shared_ptr<string> creatorAccountIds{};
  shared_ptr<string> ids{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> pageOrder{};
  shared_ptr<string> pageSort{};

  ListHostGroupsRequest() {}

  explicit ListHostGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createEndTime) {
      res["createEndTime"] = boost::any(*createEndTime);
    }
    if (createStartTime) {
      res["createStartTime"] = boost::any(*createStartTime);
    }
    if (creatorAccountIds) {
      res["creatorAccountIds"] = boost::any(*creatorAccountIds);
    }
    if (ids) {
      res["ids"] = boost::any(*ids);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (pageOrder) {
      res["pageOrder"] = boost::any(*pageOrder);
    }
    if (pageSort) {
      res["pageSort"] = boost::any(*pageSort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createEndTime") != m.end() && !m["createEndTime"].empty()) {
      createEndTime = make_shared<long>(boost::any_cast<long>(m["createEndTime"]));
    }
    if (m.find("createStartTime") != m.end() && !m["createStartTime"].empty()) {
      createStartTime = make_shared<long>(boost::any_cast<long>(m["createStartTime"]));
    }
    if (m.find("creatorAccountIds") != m.end() && !m["creatorAccountIds"].empty()) {
      creatorAccountIds = make_shared<string>(boost::any_cast<string>(m["creatorAccountIds"]));
    }
    if (m.find("ids") != m.end() && !m["ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["ids"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("pageOrder") != m.end() && !m["pageOrder"].empty()) {
      pageOrder = make_shared<string>(boost::any_cast<string>(m["pageOrder"]));
    }
    if (m.find("pageSort") != m.end() && !m["pageSort"].empty()) {
      pageSort = make_shared<string>(boost::any_cast<string>(m["pageSort"]));
    }
  }


  virtual ~ListHostGroupsRequest() = default;
};
class ListHostGroupsResponseBodyHostGroups : public Darabonba::Model {
public:
  shared_ptr<string> aliyunRegion{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorAccountId{};
  shared_ptr<string> description{};
  shared_ptr<string> ecsLabelKey{};
  shared_ptr<string> ecsLabelValue{};
  shared_ptr<string> ecsType{};
  shared_ptr<long> hostNum{};
  shared_ptr<long> id{};
  shared_ptr<string> modifierAccountId{};
  shared_ptr<string> name{};
  shared_ptr<long> serviceConnectionId{};
  shared_ptr<string> type{};
  shared_ptr<long> updateTime{};

  ListHostGroupsResponseBodyHostGroups() {}

  explicit ListHostGroupsResponseBodyHostGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunRegion) {
      res["aliyunRegion"] = boost::any(*aliyunRegion);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorAccountId) {
      res["creatorAccountId"] = boost::any(*creatorAccountId);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (ecsLabelKey) {
      res["ecsLabelKey"] = boost::any(*ecsLabelKey);
    }
    if (ecsLabelValue) {
      res["ecsLabelValue"] = boost::any(*ecsLabelValue);
    }
    if (ecsType) {
      res["ecsType"] = boost::any(*ecsType);
    }
    if (hostNum) {
      res["hostNum"] = boost::any(*hostNum);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (modifierAccountId) {
      res["modifierAccountId"] = boost::any(*modifierAccountId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (serviceConnectionId) {
      res["serviceConnectionId"] = boost::any(*serviceConnectionId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aliyunRegion") != m.end() && !m["aliyunRegion"].empty()) {
      aliyunRegion = make_shared<string>(boost::any_cast<string>(m["aliyunRegion"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorAccountId") != m.end() && !m["creatorAccountId"].empty()) {
      creatorAccountId = make_shared<string>(boost::any_cast<string>(m["creatorAccountId"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("ecsLabelKey") != m.end() && !m["ecsLabelKey"].empty()) {
      ecsLabelKey = make_shared<string>(boost::any_cast<string>(m["ecsLabelKey"]));
    }
    if (m.find("ecsLabelValue") != m.end() && !m["ecsLabelValue"].empty()) {
      ecsLabelValue = make_shared<string>(boost::any_cast<string>(m["ecsLabelValue"]));
    }
    if (m.find("ecsType") != m.end() && !m["ecsType"].empty()) {
      ecsType = make_shared<string>(boost::any_cast<string>(m["ecsType"]));
    }
    if (m.find("hostNum") != m.end() && !m["hostNum"].empty()) {
      hostNum = make_shared<long>(boost::any_cast<long>(m["hostNum"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("modifierAccountId") != m.end() && !m["modifierAccountId"].empty()) {
      modifierAccountId = make_shared<string>(boost::any_cast<string>(m["modifierAccountId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("serviceConnectionId") != m.end() && !m["serviceConnectionId"].empty()) {
      serviceConnectionId = make_shared<long>(boost::any_cast<long>(m["serviceConnectionId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
  }


  virtual ~ListHostGroupsResponseBodyHostGroups() = default;
};
class ListHostGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<vector<ListHostGroupsResponseBodyHostGroups>> hostGroups{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListHostGroupsResponseBody() {}

  explicit ListHostGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (hostGroups) {
      vector<boost::any> temp1;
      for(auto item1:*hostGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["hostGroups"] = boost::any(temp1);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("hostGroups") != m.end() && !m["hostGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["hostGroups"].type()) {
        vector<ListHostGroupsResponseBodyHostGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["hostGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHostGroupsResponseBodyHostGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostGroups = make_shared<vector<ListHostGroupsResponseBodyHostGroups>>(expect1);
      }
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListHostGroupsResponseBody() = default;
};
class ListHostGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListHostGroupsResponseBody> body{};

  ListHostGroupsResponse() {}

  explicit ListHostGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListHostGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHostGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListHostGroupsResponse() = default;
};
class ListOrganizationMembersRequest : public Darabonba::Model {
public:
  shared_ptr<string> externUid{};
  shared_ptr<long> joinTimeFrom{};
  shared_ptr<long> joinTimeTo{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> organizationMemberName{};
  shared_ptr<string> provider{};
  shared_ptr<string> state{};

  ListOrganizationMembersRequest() {}

  explicit ListOrganizationMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUid) {
      res["externUid"] = boost::any(*externUid);
    }
    if (joinTimeFrom) {
      res["joinTimeFrom"] = boost::any(*joinTimeFrom);
    }
    if (joinTimeTo) {
      res["joinTimeTo"] = boost::any(*joinTimeTo);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (organizationMemberName) {
      res["organizationMemberName"] = boost::any(*organizationMemberName);
    }
    if (provider) {
      res["provider"] = boost::any(*provider);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("externUid") != m.end() && !m["externUid"].empty()) {
      externUid = make_shared<string>(boost::any_cast<string>(m["externUid"]));
    }
    if (m.find("joinTimeFrom") != m.end() && !m["joinTimeFrom"].empty()) {
      joinTimeFrom = make_shared<long>(boost::any_cast<long>(m["joinTimeFrom"]));
    }
    if (m.find("joinTimeTo") != m.end() && !m["joinTimeTo"].empty()) {
      joinTimeTo = make_shared<long>(boost::any_cast<long>(m["joinTimeTo"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("organizationMemberName") != m.end() && !m["organizationMemberName"].empty()) {
      organizationMemberName = make_shared<string>(boost::any_cast<string>(m["organizationMemberName"]));
    }
    if (m.find("provider") != m.end() && !m["provider"].empty()) {
      provider = make_shared<string>(boost::any_cast<string>(m["provider"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
  }


  virtual ~ListOrganizationMembersRequest() = default;
};
class ListOrganizationMembersResponseBodyMembersIdentities : public Darabonba::Model {
public:
  shared_ptr<string> externUid{};
  shared_ptr<string> provider{};

  ListOrganizationMembersResponseBodyMembersIdentities() {}

  explicit ListOrganizationMembersResponseBodyMembersIdentities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUid) {
      res["externUid"] = boost::any(*externUid);
    }
    if (provider) {
      res["provider"] = boost::any(*provider);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("externUid") != m.end() && !m["externUid"].empty()) {
      externUid = make_shared<string>(boost::any_cast<string>(m["externUid"]));
    }
    if (m.find("provider") != m.end() && !m["provider"].empty()) {
      provider = make_shared<string>(boost::any_cast<string>(m["provider"]));
    }
  }


  virtual ~ListOrganizationMembersResponseBodyMembersIdentities() = default;
};
class ListOrganizationMembersResponseBodyMembers : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<long> birthday{};
  shared_ptr<vector<string>> deptLists{};
  shared_ptr<string> email{};
  shared_ptr<long> hiredDate{};
  shared_ptr<ListOrganizationMembersResponseBodyMembersIdentities> identities{};
  shared_ptr<long> joinTime{};
  shared_ptr<long> lastVisitTime{};
  shared_ptr<string> mobile{};
  shared_ptr<string> organizationMemberName{};
  shared_ptr<string> organizationRoleId{};
  shared_ptr<string> organizationRoleName{};
  shared_ptr<string> state{};

  ListOrganizationMembersResponseBodyMembers() {}

  explicit ListOrganizationMembersResponseBodyMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (birthday) {
      res["birthday"] = boost::any(*birthday);
    }
    if (deptLists) {
      res["deptLists"] = boost::any(*deptLists);
    }
    if (email) {
      res["email"] = boost::any(*email);
    }
    if (hiredDate) {
      res["hiredDate"] = boost::any(*hiredDate);
    }
    if (identities) {
      res["identities"] = identities ? boost::any(identities->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (joinTime) {
      res["joinTime"] = boost::any(*joinTime);
    }
    if (lastVisitTime) {
      res["lastVisitTime"] = boost::any(*lastVisitTime);
    }
    if (mobile) {
      res["mobile"] = boost::any(*mobile);
    }
    if (organizationMemberName) {
      res["organizationMemberName"] = boost::any(*organizationMemberName);
    }
    if (organizationRoleId) {
      res["organizationRoleId"] = boost::any(*organizationRoleId);
    }
    if (organizationRoleName) {
      res["organizationRoleName"] = boost::any(*organizationRoleName);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("birthday") != m.end() && !m["birthday"].empty()) {
      birthday = make_shared<long>(boost::any_cast<long>(m["birthday"]));
    }
    if (m.find("deptLists") != m.end() && !m["deptLists"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["deptLists"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["deptLists"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      deptLists = make_shared<vector<string>>(toVec1);
    }
    if (m.find("email") != m.end() && !m["email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["email"]));
    }
    if (m.find("hiredDate") != m.end() && !m["hiredDate"].empty()) {
      hiredDate = make_shared<long>(boost::any_cast<long>(m["hiredDate"]));
    }
    if (m.find("identities") != m.end() && !m["identities"].empty()) {
      if (typeid(map<string, boost::any>) == m["identities"].type()) {
        ListOrganizationMembersResponseBodyMembersIdentities model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["identities"]));
        identities = make_shared<ListOrganizationMembersResponseBodyMembersIdentities>(model1);
      }
    }
    if (m.find("joinTime") != m.end() && !m["joinTime"].empty()) {
      joinTime = make_shared<long>(boost::any_cast<long>(m["joinTime"]));
    }
    if (m.find("lastVisitTime") != m.end() && !m["lastVisitTime"].empty()) {
      lastVisitTime = make_shared<long>(boost::any_cast<long>(m["lastVisitTime"]));
    }
    if (m.find("mobile") != m.end() && !m["mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["mobile"]));
    }
    if (m.find("organizationMemberName") != m.end() && !m["organizationMemberName"].empty()) {
      organizationMemberName = make_shared<string>(boost::any_cast<string>(m["organizationMemberName"]));
    }
    if (m.find("organizationRoleId") != m.end() && !m["organizationRoleId"].empty()) {
      organizationRoleId = make_shared<string>(boost::any_cast<string>(m["organizationRoleId"]));
    }
    if (m.find("organizationRoleName") != m.end() && !m["organizationRoleName"].empty()) {
      organizationRoleName = make_shared<string>(boost::any_cast<string>(m["organizationRoleName"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
  }


  virtual ~ListOrganizationMembersResponseBodyMembers() = default;
};
class ListOrganizationMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<vector<ListOrganizationMembersResponseBodyMembers>> members{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListOrganizationMembersResponseBody() {}

  explicit ListOrganizationMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (members) {
      vector<boost::any> temp1;
      for(auto item1:*members){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["members"] = boost::any(temp1);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("members") != m.end() && !m["members"].empty()) {
      if (typeid(vector<boost::any>) == m["members"].type()) {
        vector<ListOrganizationMembersResponseBodyMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["members"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOrganizationMembersResponseBodyMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        members = make_shared<vector<ListOrganizationMembersResponseBodyMembers>>(expect1);
      }
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListOrganizationMembersResponseBody() = default;
};
class ListOrganizationMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListOrganizationMembersResponseBody> body{};

  ListOrganizationMembersResponse() {}

  explicit ListOrganizationMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOrganizationMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOrganizationMembersResponseBody>(model1);
      }
    }
  }


  virtual ~ListOrganizationMembersResponse() = default;
};
class ListPipelineGroupPipelinesRequest : public Darabonba::Model {
public:
  shared_ptr<long> createEndTime{};
  shared_ptr<long> createStartTime{};
  shared_ptr<long> executeEndTime{};
  shared_ptr<long> executeStartTime{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> pipelineName{};
  shared_ptr<string> resultStatusList{};

  ListPipelineGroupPipelinesRequest() {}

  explicit ListPipelineGroupPipelinesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createEndTime) {
      res["createEndTime"] = boost::any(*createEndTime);
    }
    if (createStartTime) {
      res["createStartTime"] = boost::any(*createStartTime);
    }
    if (executeEndTime) {
      res["executeEndTime"] = boost::any(*executeEndTime);
    }
    if (executeStartTime) {
      res["executeStartTime"] = boost::any(*executeStartTime);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (pipelineName) {
      res["pipelineName"] = boost::any(*pipelineName);
    }
    if (resultStatusList) {
      res["resultStatusList"] = boost::any(*resultStatusList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createEndTime") != m.end() && !m["createEndTime"].empty()) {
      createEndTime = make_shared<long>(boost::any_cast<long>(m["createEndTime"]));
    }
    if (m.find("createStartTime") != m.end() && !m["createStartTime"].empty()) {
      createStartTime = make_shared<long>(boost::any_cast<long>(m["createStartTime"]));
    }
    if (m.find("executeEndTime") != m.end() && !m["executeEndTime"].empty()) {
      executeEndTime = make_shared<long>(boost::any_cast<long>(m["executeEndTime"]));
    }
    if (m.find("executeStartTime") != m.end() && !m["executeStartTime"].empty()) {
      executeStartTime = make_shared<long>(boost::any_cast<long>(m["executeStartTime"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("pipelineName") != m.end() && !m["pipelineName"].empty()) {
      pipelineName = make_shared<string>(boost::any_cast<string>(m["pipelineName"]));
    }
    if (m.find("resultStatusList") != m.end() && !m["resultStatusList"].empty()) {
      resultStatusList = make_shared<string>(boost::any_cast<string>(m["resultStatusList"]));
    }
  }


  virtual ~ListPipelineGroupPipelinesRequest() = default;
};
class ListPipelineGroupPipelinesResponseBodyPipelines : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<long> pipelineId{};
  shared_ptr<string> pipelineName{};

  ListPipelineGroupPipelinesResponseBodyPipelines() {}

  explicit ListPipelineGroupPipelinesResponseBodyPipelines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (pipelineId) {
      res["pipelineId"] = boost::any(*pipelineId);
    }
    if (pipelineName) {
      res["pipelineName"] = boost::any(*pipelineName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("pipelineId") != m.end() && !m["pipelineId"].empty()) {
      pipelineId = make_shared<long>(boost::any_cast<long>(m["pipelineId"]));
    }
    if (m.find("pipelineName") != m.end() && !m["pipelineName"].empty()) {
      pipelineName = make_shared<string>(boost::any_cast<string>(m["pipelineName"]));
    }
  }


  virtual ~ListPipelineGroupPipelinesResponseBodyPipelines() = default;
};
class ListPipelineGroupPipelinesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListPipelineGroupPipelinesResponseBodyPipelines>> pipelines{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListPipelineGroupPipelinesResponseBody() {}

  explicit ListPipelineGroupPipelinesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (pipelines) {
      vector<boost::any> temp1;
      for(auto item1:*pipelines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["pipelines"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("pipelines") != m.end() && !m["pipelines"].empty()) {
      if (typeid(vector<boost::any>) == m["pipelines"].type()) {
        vector<ListPipelineGroupPipelinesResponseBodyPipelines> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["pipelines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPipelineGroupPipelinesResponseBodyPipelines model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pipelines = make_shared<vector<ListPipelineGroupPipelinesResponseBodyPipelines>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListPipelineGroupPipelinesResponseBody() = default;
};
class ListPipelineGroupPipelinesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPipelineGroupPipelinesResponseBody> body{};

  ListPipelineGroupPipelinesResponse() {}

  explicit ListPipelineGroupPipelinesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPipelineGroupPipelinesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPipelineGroupPipelinesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPipelineGroupPipelinesResponse() = default;
};
class ListPipelineGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListPipelineGroupsRequest() {}

  explicit ListPipelineGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListPipelineGroupsRequest() = default;
};
class ListPipelineGroupsResponseBodyPipelineGroups : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  ListPipelineGroupsResponseBodyPipelineGroups() {}

  explicit ListPipelineGroupsResponseBodyPipelineGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ListPipelineGroupsResponseBodyPipelineGroups() = default;
};
class ListPipelineGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListPipelineGroupsResponseBodyPipelineGroups>> pipelineGroups{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListPipelineGroupsResponseBody() {}

  explicit ListPipelineGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (pipelineGroups) {
      vector<boost::any> temp1;
      for(auto item1:*pipelineGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["pipelineGroups"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("pipelineGroups") != m.end() && !m["pipelineGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["pipelineGroups"].type()) {
        vector<ListPipelineGroupsResponseBodyPipelineGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["pipelineGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPipelineGroupsResponseBodyPipelineGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pipelineGroups = make_shared<vector<ListPipelineGroupsResponseBodyPipelineGroups>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListPipelineGroupsResponseBody() = default;
};
class ListPipelineGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPipelineGroupsResponseBody> body{};

  ListPipelineGroupsResponse() {}

  explicit ListPipelineGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPipelineGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPipelineGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListPipelineGroupsResponse() = default;
};
class ListPipelineJobHistorysRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> identifier{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListPipelineJobHistorysRequest() {}

  explicit ListPipelineJobHistorysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListPipelineJobHistorysRequest() = default;
};
class ListPipelineJobHistorysResponseBodyJobs : public Darabonba::Model {
public:
  shared_ptr<long> executeNumber{};
  shared_ptr<string> identifier{};
  shared_ptr<long> jobId{};
  shared_ptr<string> jobName{};
  shared_ptr<string> operatorAccountId{};
  shared_ptr<long> pipelineId{};
  shared_ptr<long> pipelineRunId{};
  shared_ptr<string> sources{};
  shared_ptr<string> status{};

  ListPipelineJobHistorysResponseBodyJobs() {}

  explicit ListPipelineJobHistorysResponseBodyJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executeNumber) {
      res["executeNumber"] = boost::any(*executeNumber);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (jobId) {
      res["jobId"] = boost::any(*jobId);
    }
    if (jobName) {
      res["jobName"] = boost::any(*jobName);
    }
    if (operatorAccountId) {
      res["operatorAccountId"] = boost::any(*operatorAccountId);
    }
    if (pipelineId) {
      res["pipelineId"] = boost::any(*pipelineId);
    }
    if (pipelineRunId) {
      res["pipelineRunId"] = boost::any(*pipelineRunId);
    }
    if (sources) {
      res["sources"] = boost::any(*sources);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("executeNumber") != m.end() && !m["executeNumber"].empty()) {
      executeNumber = make_shared<long>(boost::any_cast<long>(m["executeNumber"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("jobId") != m.end() && !m["jobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["jobId"]));
    }
    if (m.find("jobName") != m.end() && !m["jobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["jobName"]));
    }
    if (m.find("operatorAccountId") != m.end() && !m["operatorAccountId"].empty()) {
      operatorAccountId = make_shared<string>(boost::any_cast<string>(m["operatorAccountId"]));
    }
    if (m.find("pipelineId") != m.end() && !m["pipelineId"].empty()) {
      pipelineId = make_shared<long>(boost::any_cast<long>(m["pipelineId"]));
    }
    if (m.find("pipelineRunId") != m.end() && !m["pipelineRunId"].empty()) {
      pipelineRunId = make_shared<long>(boost::any_cast<long>(m["pipelineRunId"]));
    }
    if (m.find("sources") != m.end() && !m["sources"].empty()) {
      sources = make_shared<string>(boost::any_cast<string>(m["sources"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListPipelineJobHistorysResponseBodyJobs() = default;
};
class ListPipelineJobHistorysResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<vector<ListPipelineJobHistorysResponseBodyJobs>> jobs{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListPipelineJobHistorysResponseBody() {}

  explicit ListPipelineJobHistorysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (jobs) {
      vector<boost::any> temp1;
      for(auto item1:*jobs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["jobs"] = boost::any(temp1);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("jobs") != m.end() && !m["jobs"].empty()) {
      if (typeid(vector<boost::any>) == m["jobs"].type()) {
        vector<ListPipelineJobHistorysResponseBodyJobs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["jobs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPipelineJobHistorysResponseBodyJobs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobs = make_shared<vector<ListPipelineJobHistorysResponseBodyJobs>>(expect1);
      }
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListPipelineJobHistorysResponseBody() = default;
};
class ListPipelineJobHistorysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPipelineJobHistorysResponseBody> body{};

  ListPipelineJobHistorysResponse() {}

  explicit ListPipelineJobHistorysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPipelineJobHistorysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPipelineJobHistorysResponseBody>(model1);
      }
    }
  }


  virtual ~ListPipelineJobHistorysResponse() = default;
};
class ListPipelineJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};

  ListPipelineJobsRequest() {}

  explicit ListPipelineJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
  }


  virtual ~ListPipelineJobsRequest() = default;
};
class ListPipelineJobsResponseBodyJobs : public Darabonba::Model {
public:
  shared_ptr<string> identifier{};
  shared_ptr<string> jobName{};
  shared_ptr<long> lastJobId{};
  shared_ptr<string> lastJobParams{};

  ListPipelineJobsResponseBodyJobs() {}

  explicit ListPipelineJobsResponseBodyJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (jobName) {
      res["jobName"] = boost::any(*jobName);
    }
    if (lastJobId) {
      res["lastJobId"] = boost::any(*lastJobId);
    }
    if (lastJobParams) {
      res["lastJobParams"] = boost::any(*lastJobParams);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("jobName") != m.end() && !m["jobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["jobName"]));
    }
    if (m.find("lastJobId") != m.end() && !m["lastJobId"].empty()) {
      lastJobId = make_shared<long>(boost::any_cast<long>(m["lastJobId"]));
    }
    if (m.find("lastJobParams") != m.end() && !m["lastJobParams"].empty()) {
      lastJobParams = make_shared<string>(boost::any_cast<string>(m["lastJobParams"]));
    }
  }


  virtual ~ListPipelineJobsResponseBodyJobs() = default;
};
class ListPipelineJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<vector<ListPipelineJobsResponseBodyJobs>> jobs{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListPipelineJobsResponseBody() {}

  explicit ListPipelineJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (jobs) {
      vector<boost::any> temp1;
      for(auto item1:*jobs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["jobs"] = boost::any(temp1);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("jobs") != m.end() && !m["jobs"].empty()) {
      if (typeid(vector<boost::any>) == m["jobs"].type()) {
        vector<ListPipelineJobsResponseBodyJobs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["jobs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPipelineJobsResponseBodyJobs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobs = make_shared<vector<ListPipelineJobsResponseBodyJobs>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ListPipelineJobsResponseBody() = default;
};
class ListPipelineJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPipelineJobsResponseBody> body{};

  ListPipelineJobsResponse() {}

  explicit ListPipelineJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPipelineJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPipelineJobsResponseBody>(model1);
      }
    }
  }


  virtual ~ListPipelineJobsResponse() = default;
};
class ListPipelineRunsRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};
  shared_ptr<long> triggerMode{};

  ListPipelineRunsRequest() {}

  explicit ListPipelineRunsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (triggerMode) {
      res["triggerMode"] = boost::any(*triggerMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("triggerMode") != m.end() && !m["triggerMode"].empty()) {
      triggerMode = make_shared<long>(boost::any_cast<long>(m["triggerMode"]));
    }
  }


  virtual ~ListPipelineRunsRequest() = default;
};
class ListPipelineRunsResponseBodyPipelineRuns : public Darabonba::Model {
public:
  shared_ptr<string> creatorAccountId{};
  shared_ptr<long> endTime{};
  shared_ptr<long> pipelineId{};
  shared_ptr<long> pipelineRunId{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};
  shared_ptr<long> triggerMode{};

  ListPipelineRunsResponseBodyPipelineRuns() {}

  explicit ListPipelineRunsResponseBodyPipelineRuns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creatorAccountId) {
      res["creatorAccountId"] = boost::any(*creatorAccountId);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (pipelineId) {
      res["pipelineId"] = boost::any(*pipelineId);
    }
    if (pipelineRunId) {
      res["pipelineRunId"] = boost::any(*pipelineRunId);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (triggerMode) {
      res["triggerMode"] = boost::any(*triggerMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("creatorAccountId") != m.end() && !m["creatorAccountId"].empty()) {
      creatorAccountId = make_shared<string>(boost::any_cast<string>(m["creatorAccountId"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("pipelineId") != m.end() && !m["pipelineId"].empty()) {
      pipelineId = make_shared<long>(boost::any_cast<long>(m["pipelineId"]));
    }
    if (m.find("pipelineRunId") != m.end() && !m["pipelineRunId"].empty()) {
      pipelineRunId = make_shared<long>(boost::any_cast<long>(m["pipelineRunId"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("triggerMode") != m.end() && !m["triggerMode"].empty()) {
      triggerMode = make_shared<long>(boost::any_cast<long>(m["triggerMode"]));
    }
  }


  virtual ~ListPipelineRunsResponseBodyPipelineRuns() = default;
};
class ListPipelineRunsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListPipelineRunsResponseBodyPipelineRuns>> pipelineRuns{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListPipelineRunsResponseBody() {}

  explicit ListPipelineRunsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (pipelineRuns) {
      vector<boost::any> temp1;
      for(auto item1:*pipelineRuns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["pipelineRuns"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("pipelineRuns") != m.end() && !m["pipelineRuns"].empty()) {
      if (typeid(vector<boost::any>) == m["pipelineRuns"].type()) {
        vector<ListPipelineRunsResponseBodyPipelineRuns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["pipelineRuns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPipelineRunsResponseBodyPipelineRuns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pipelineRuns = make_shared<vector<ListPipelineRunsResponseBodyPipelineRuns>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListPipelineRunsResponseBody() = default;
};
class ListPipelineRunsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPipelineRunsResponseBody> body{};

  ListPipelineRunsResponse() {}

  explicit ListPipelineRunsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPipelineRunsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPipelineRunsResponseBody>(model1);
      }
    }
  }


  virtual ~ListPipelineRunsResponse() = default;
};
class ListPipelinesRequest : public Darabonba::Model {
public:
  shared_ptr<long> createEndTime{};
  shared_ptr<long> createStartTime{};
  shared_ptr<string> creatorAccountIds{};
  shared_ptr<string> executeAccountIds{};
  shared_ptr<long> executeEndTime{};
  shared_ptr<long> executeStartTime{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> pipelineName{};
  shared_ptr<string> statusList{};

  ListPipelinesRequest() {}

  explicit ListPipelinesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createEndTime) {
      res["createEndTime"] = boost::any(*createEndTime);
    }
    if (createStartTime) {
      res["createStartTime"] = boost::any(*createStartTime);
    }
    if (creatorAccountIds) {
      res["creatorAccountIds"] = boost::any(*creatorAccountIds);
    }
    if (executeAccountIds) {
      res["executeAccountIds"] = boost::any(*executeAccountIds);
    }
    if (executeEndTime) {
      res["executeEndTime"] = boost::any(*executeEndTime);
    }
    if (executeStartTime) {
      res["executeStartTime"] = boost::any(*executeStartTime);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (pipelineName) {
      res["pipelineName"] = boost::any(*pipelineName);
    }
    if (statusList) {
      res["statusList"] = boost::any(*statusList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createEndTime") != m.end() && !m["createEndTime"].empty()) {
      createEndTime = make_shared<long>(boost::any_cast<long>(m["createEndTime"]));
    }
    if (m.find("createStartTime") != m.end() && !m["createStartTime"].empty()) {
      createStartTime = make_shared<long>(boost::any_cast<long>(m["createStartTime"]));
    }
    if (m.find("creatorAccountIds") != m.end() && !m["creatorAccountIds"].empty()) {
      creatorAccountIds = make_shared<string>(boost::any_cast<string>(m["creatorAccountIds"]));
    }
    if (m.find("executeAccountIds") != m.end() && !m["executeAccountIds"].empty()) {
      executeAccountIds = make_shared<string>(boost::any_cast<string>(m["executeAccountIds"]));
    }
    if (m.find("executeEndTime") != m.end() && !m["executeEndTime"].empty()) {
      executeEndTime = make_shared<long>(boost::any_cast<long>(m["executeEndTime"]));
    }
    if (m.find("executeStartTime") != m.end() && !m["executeStartTime"].empty()) {
      executeStartTime = make_shared<long>(boost::any_cast<long>(m["executeStartTime"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("pipelineName") != m.end() && !m["pipelineName"].empty()) {
      pipelineName = make_shared<string>(boost::any_cast<string>(m["pipelineName"]));
    }
    if (m.find("statusList") != m.end() && !m["statusList"].empty()) {
      statusList = make_shared<string>(boost::any_cast<string>(m["statusList"]));
    }
  }


  virtual ~ListPipelinesRequest() = default;
};
class ListPipelinesResponseBodyPipelines : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorAccountId{};
  shared_ptr<long> groupId{};
  shared_ptr<long> pipelineId{};
  shared_ptr<string> pipelineName{};

  ListPipelinesResponseBodyPipelines() {}

  explicit ListPipelinesResponseBodyPipelines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorAccountId) {
      res["creatorAccountId"] = boost::any(*creatorAccountId);
    }
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (pipelineId) {
      res["pipelineId"] = boost::any(*pipelineId);
    }
    if (pipelineName) {
      res["pipelineName"] = boost::any(*pipelineName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorAccountId") != m.end() && !m["creatorAccountId"].empty()) {
      creatorAccountId = make_shared<string>(boost::any_cast<string>(m["creatorAccountId"]));
    }
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<long>(boost::any_cast<long>(m["groupId"]));
    }
    if (m.find("pipelineId") != m.end() && !m["pipelineId"].empty()) {
      pipelineId = make_shared<long>(boost::any_cast<long>(m["pipelineId"]));
    }
    if (m.find("pipelineName") != m.end() && !m["pipelineName"].empty()) {
      pipelineName = make_shared<string>(boost::any_cast<string>(m["pipelineName"]));
    }
  }


  virtual ~ListPipelinesResponseBodyPipelines() = default;
};
class ListPipelinesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListPipelinesResponseBodyPipelines>> pipelines{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListPipelinesResponseBody() {}

  explicit ListPipelinesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (pipelines) {
      vector<boost::any> temp1;
      for(auto item1:*pipelines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["pipelines"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("pipelines") != m.end() && !m["pipelines"].empty()) {
      if (typeid(vector<boost::any>) == m["pipelines"].type()) {
        vector<ListPipelinesResponseBodyPipelines> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["pipelines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPipelinesResponseBodyPipelines model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pipelines = make_shared<vector<ListPipelinesResponseBodyPipelines>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListPipelinesResponseBody() = default;
};
class ListPipelinesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPipelinesResponseBody> body{};

  ListPipelinesResponse() {}

  explicit ListPipelinesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPipelinesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPipelinesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPipelinesResponse() = default;
};
class ListProjectMembersRequest : public Darabonba::Model {
public:
  shared_ptr<string> targetType{};

  ListProjectMembersRequest() {}

  explicit ListProjectMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (targetType) {
      res["targetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("targetType") != m.end() && !m["targetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["targetType"]));
    }
  }


  virtual ~ListProjectMembersRequest() = default;
};
class ListProjectMembersResponseBodyMembersDivision : public Darabonba::Model {
public:
  shared_ptr<string> identifier{};

  ListProjectMembersResponseBodyMembersDivision() {}

  explicit ListProjectMembersResponseBodyMembersDivision(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
  }


  virtual ~ListProjectMembersResponseBodyMembersDivision() = default;
};
class ListProjectMembersResponseBodyMembersOrganizationUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> organizationIdentifier{};

  ListProjectMembersResponseBodyMembersOrganizationUserInfo() {}

  explicit ListProjectMembersResponseBodyMembersOrganizationUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (organizationIdentifier) {
      res["organizationIdentifier"] = boost::any(*organizationIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("organizationIdentifier") != m.end() && !m["organizationIdentifier"].empty()) {
      organizationIdentifier = make_shared<string>(boost::any_cast<string>(m["organizationIdentifier"]));
    }
  }


  virtual ~ListProjectMembersResponseBodyMembersOrganizationUserInfo() = default;
};
class ListProjectMembersResponseBodyMembers : public Darabonba::Model {
public:
  shared_ptr<string> account{};
  shared_ptr<string> avatar{};
  shared_ptr<string> dingTalkId{};
  shared_ptr<string> displayName{};
  shared_ptr<string> displayNickName{};
  shared_ptr<string> displayRealName{};
  shared_ptr<ListProjectMembersResponseBodyMembersDivision> division{};
  shared_ptr<string> email{};
  shared_ptr<string> gender{};
  shared_ptr<string> identifier{};
  shared_ptr<string> mobile{};
  shared_ptr<string> nameEn{};
  shared_ptr<string> nickName{};
  shared_ptr<string> nickNamePinyin{};
  shared_ptr<ListProjectMembersResponseBodyMembersOrganizationUserInfo> organizationUserInfo{};
  shared_ptr<string> realName{};
  shared_ptr<string> realNamePinyin{};
  shared_ptr<string> stamp{};
  shared_ptr<string> tbRoleId{};

  ListProjectMembersResponseBodyMembers() {}

  explicit ListProjectMembersResponseBodyMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["account"] = boost::any(*account);
    }
    if (avatar) {
      res["avatar"] = boost::any(*avatar);
    }
    if (dingTalkId) {
      res["dingTalkId"] = boost::any(*dingTalkId);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (displayNickName) {
      res["displayNickName"] = boost::any(*displayNickName);
    }
    if (displayRealName) {
      res["displayRealName"] = boost::any(*displayRealName);
    }
    if (division) {
      res["division"] = division ? boost::any(division->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (email) {
      res["email"] = boost::any(*email);
    }
    if (gender) {
      res["gender"] = boost::any(*gender);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (mobile) {
      res["mobile"] = boost::any(*mobile);
    }
    if (nameEn) {
      res["nameEn"] = boost::any(*nameEn);
    }
    if (nickName) {
      res["nickName"] = boost::any(*nickName);
    }
    if (nickNamePinyin) {
      res["nickNamePinyin"] = boost::any(*nickNamePinyin);
    }
    if (organizationUserInfo) {
      res["organizationUserInfo"] = organizationUserInfo ? boost::any(organizationUserInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (realName) {
      res["realName"] = boost::any(*realName);
    }
    if (realNamePinyin) {
      res["realNamePinyin"] = boost::any(*realNamePinyin);
    }
    if (stamp) {
      res["stamp"] = boost::any(*stamp);
    }
    if (tbRoleId) {
      res["tbRoleId"] = boost::any(*tbRoleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("account") != m.end() && !m["account"].empty()) {
      account = make_shared<string>(boost::any_cast<string>(m["account"]));
    }
    if (m.find("avatar") != m.end() && !m["avatar"].empty()) {
      avatar = make_shared<string>(boost::any_cast<string>(m["avatar"]));
    }
    if (m.find("dingTalkId") != m.end() && !m["dingTalkId"].empty()) {
      dingTalkId = make_shared<string>(boost::any_cast<string>(m["dingTalkId"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("displayNickName") != m.end() && !m["displayNickName"].empty()) {
      displayNickName = make_shared<string>(boost::any_cast<string>(m["displayNickName"]));
    }
    if (m.find("displayRealName") != m.end() && !m["displayRealName"].empty()) {
      displayRealName = make_shared<string>(boost::any_cast<string>(m["displayRealName"]));
    }
    if (m.find("division") != m.end() && !m["division"].empty()) {
      if (typeid(map<string, boost::any>) == m["division"].type()) {
        ListProjectMembersResponseBodyMembersDivision model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["division"]));
        division = make_shared<ListProjectMembersResponseBodyMembersDivision>(model1);
      }
    }
    if (m.find("email") != m.end() && !m["email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["email"]));
    }
    if (m.find("gender") != m.end() && !m["gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["gender"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("mobile") != m.end() && !m["mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["mobile"]));
    }
    if (m.find("nameEn") != m.end() && !m["nameEn"].empty()) {
      nameEn = make_shared<string>(boost::any_cast<string>(m["nameEn"]));
    }
    if (m.find("nickName") != m.end() && !m["nickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["nickName"]));
    }
    if (m.find("nickNamePinyin") != m.end() && !m["nickNamePinyin"].empty()) {
      nickNamePinyin = make_shared<string>(boost::any_cast<string>(m["nickNamePinyin"]));
    }
    if (m.find("organizationUserInfo") != m.end() && !m["organizationUserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["organizationUserInfo"].type()) {
        ListProjectMembersResponseBodyMembersOrganizationUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["organizationUserInfo"]));
        organizationUserInfo = make_shared<ListProjectMembersResponseBodyMembersOrganizationUserInfo>(model1);
      }
    }
    if (m.find("realName") != m.end() && !m["realName"].empty()) {
      realName = make_shared<string>(boost::any_cast<string>(m["realName"]));
    }
    if (m.find("realNamePinyin") != m.end() && !m["realNamePinyin"].empty()) {
      realNamePinyin = make_shared<string>(boost::any_cast<string>(m["realNamePinyin"]));
    }
    if (m.find("stamp") != m.end() && !m["stamp"].empty()) {
      stamp = make_shared<string>(boost::any_cast<string>(m["stamp"]));
    }
    if (m.find("tbRoleId") != m.end() && !m["tbRoleId"].empty()) {
      tbRoleId = make_shared<string>(boost::any_cast<string>(m["tbRoleId"]));
    }
  }


  virtual ~ListProjectMembersResponseBodyMembers() = default;
};
class ListProjectMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<vector<ListProjectMembersResponseBodyMembers>> members{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListProjectMembersResponseBody() {}

  explicit ListProjectMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (members) {
      vector<boost::any> temp1;
      for(auto item1:*members){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["members"] = boost::any(temp1);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("members") != m.end() && !m["members"].empty()) {
      if (typeid(vector<boost::any>) == m["members"].type()) {
        vector<ListProjectMembersResponseBodyMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["members"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProjectMembersResponseBodyMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        members = make_shared<vector<ListProjectMembersResponseBodyMembers>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ListProjectMembersResponseBody() = default;
};
class ListProjectMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProjectMembersResponseBody> body{};

  ListProjectMembersResponse() {}

  explicit ListProjectMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProjectMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProjectMembersResponseBody>(model1);
      }
    }
  }


  virtual ~ListProjectMembersResponse() = default;
};
class ListProjectTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};

  ListProjectTemplatesRequest() {}

  explicit ListProjectTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
  }


  virtual ~ListProjectTemplatesRequest() = default;
};
class ListProjectTemplatesResponseBodyTemplates : public Darabonba::Model {
public:
  shared_ptr<string> copyFrom{};
  shared_ptr<string> creator{};
  shared_ptr<string> description{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> icon{};
  shared_ptr<string> identifier{};
  shared_ptr<string> modifier{};
  shared_ptr<string> name{};
  shared_ptr<string> nameEn{};
  shared_ptr<string> resourceCategory{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> spaceIdentifier{};
  shared_ptr<string> spaceType{};
  shared_ptr<long> type{};

  ListProjectTemplatesResponseBodyTemplates() {}

  explicit ListProjectTemplatesResponseBodyTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (copyFrom) {
      res["copyFrom"] = boost::any(*copyFrom);
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (icon) {
      res["icon"] = boost::any(*icon);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nameEn) {
      res["nameEn"] = boost::any(*nameEn);
    }
    if (resourceCategory) {
      res["resourceCategory"] = boost::any(*resourceCategory);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (spaceIdentifier) {
      res["spaceIdentifier"] = boost::any(*spaceIdentifier);
    }
    if (spaceType) {
      res["spaceType"] = boost::any(*spaceType);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("copyFrom") != m.end() && !m["copyFrom"].empty()) {
      copyFrom = make_shared<string>(boost::any_cast<string>(m["copyFrom"]));
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["gmtModified"]));
    }
    if (m.find("icon") != m.end() && !m["icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["icon"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["modifier"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nameEn") != m.end() && !m["nameEn"].empty()) {
      nameEn = make_shared<string>(boost::any_cast<string>(m["nameEn"]));
    }
    if (m.find("resourceCategory") != m.end() && !m["resourceCategory"].empty()) {
      resourceCategory = make_shared<string>(boost::any_cast<string>(m["resourceCategory"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("spaceIdentifier") != m.end() && !m["spaceIdentifier"].empty()) {
      spaceIdentifier = make_shared<string>(boost::any_cast<string>(m["spaceIdentifier"]));
    }
    if (m.find("spaceType") != m.end() && !m["spaceType"].empty()) {
      spaceType = make_shared<string>(boost::any_cast<string>(m["spaceType"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~ListProjectTemplatesResponseBodyTemplates() = default;
};
class ListProjectTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<vector<ListProjectTemplatesResponseBodyTemplates>> templates{};

  ListProjectTemplatesResponseBody() {}

  explicit ListProjectTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (templates) {
      vector<boost::any> temp1;
      for(auto item1:*templates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["templates"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("templates") != m.end() && !m["templates"].empty()) {
      if (typeid(vector<boost::any>) == m["templates"].type()) {
        vector<ListProjectTemplatesResponseBodyTemplates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["templates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProjectTemplatesResponseBodyTemplates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templates = make_shared<vector<ListProjectTemplatesResponseBodyTemplates>>(expect1);
      }
    }
  }


  virtual ~ListProjectTemplatesResponseBody() = default;
};
class ListProjectTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProjectTemplatesResponseBody> body{};

  ListProjectTemplatesResponse() {}

  explicit ListProjectTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProjectTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProjectTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListProjectTemplatesResponse() = default;
};
class ListProjectWorkitemTypesRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> spaceType{};

  ListProjectWorkitemTypesRequest() {}

  explicit ListProjectWorkitemTypesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (spaceType) {
      res["spaceType"] = boost::any(*spaceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("spaceType") != m.end() && !m["spaceType"].empty()) {
      spaceType = make_shared<string>(boost::any_cast<string>(m["spaceType"]));
    }
  }


  virtual ~ListProjectWorkitemTypesRequest() = default;
};
class ListProjectWorkitemTypesResponseBodyWorkitemTypes : public Darabonba::Model {
public:
  shared_ptr<string> addUser{};
  shared_ptr<string> categoryIdentifier{};
  shared_ptr<string> creator{};
  shared_ptr<bool> defaultType{};
  shared_ptr<string> description{};
  shared_ptr<bool> enable{};
  shared_ptr<long> gmtAdd{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<string> identifier{};
  shared_ptr<string> name{};
  shared_ptr<string> nameEn{};
  shared_ptr<bool> systemDefault{};

  ListProjectWorkitemTypesResponseBodyWorkitemTypes() {}

  explicit ListProjectWorkitemTypesResponseBodyWorkitemTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addUser) {
      res["addUser"] = boost::any(*addUser);
    }
    if (categoryIdentifier) {
      res["categoryIdentifier"] = boost::any(*categoryIdentifier);
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (defaultType) {
      res["defaultType"] = boost::any(*defaultType);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (gmtAdd) {
      res["gmtAdd"] = boost::any(*gmtAdd);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nameEn) {
      res["nameEn"] = boost::any(*nameEn);
    }
    if (systemDefault) {
      res["systemDefault"] = boost::any(*systemDefault);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("addUser") != m.end() && !m["addUser"].empty()) {
      addUser = make_shared<string>(boost::any_cast<string>(m["addUser"]));
    }
    if (m.find("categoryIdentifier") != m.end() && !m["categoryIdentifier"].empty()) {
      categoryIdentifier = make_shared<string>(boost::any_cast<string>(m["categoryIdentifier"]));
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("defaultType") != m.end() && !m["defaultType"].empty()) {
      defaultType = make_shared<bool>(boost::any_cast<bool>(m["defaultType"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("gmtAdd") != m.end() && !m["gmtAdd"].empty()) {
      gmtAdd = make_shared<long>(boost::any_cast<long>(m["gmtAdd"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmtCreate"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nameEn") != m.end() && !m["nameEn"].empty()) {
      nameEn = make_shared<string>(boost::any_cast<string>(m["nameEn"]));
    }
    if (m.find("systemDefault") != m.end() && !m["systemDefault"].empty()) {
      systemDefault = make_shared<bool>(boost::any_cast<bool>(m["systemDefault"]));
    }
  }


  virtual ~ListProjectWorkitemTypesResponseBodyWorkitemTypes() = default;
};
class ListProjectWorkitemTypesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<vector<ListProjectWorkitemTypesResponseBodyWorkitemTypes>> workitemTypes{};

  ListProjectWorkitemTypesResponseBody() {}

  explicit ListProjectWorkitemTypesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (workitemTypes) {
      vector<boost::any> temp1;
      for(auto item1:*workitemTypes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["workitemTypes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("workitemTypes") != m.end() && !m["workitemTypes"].empty()) {
      if (typeid(vector<boost::any>) == m["workitemTypes"].type()) {
        vector<ListProjectWorkitemTypesResponseBodyWorkitemTypes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["workitemTypes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProjectWorkitemTypesResponseBodyWorkitemTypes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workitemTypes = make_shared<vector<ListProjectWorkitemTypesResponseBodyWorkitemTypes>>(expect1);
      }
    }
  }


  virtual ~ListProjectWorkitemTypesResponseBody() = default;
};
class ListProjectWorkitemTypesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProjectWorkitemTypesResponseBody> body{};

  ListProjectWorkitemTypesResponse() {}

  explicit ListProjectWorkitemTypesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProjectWorkitemTypesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProjectWorkitemTypesResponseBody>(model1);
      }
    }
  }


  virtual ~ListProjectWorkitemTypesResponse() = default;
};
class ListProjectsRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> conditions{};
  shared_ptr<string> extraConditions{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> scope{};

  ListProjectsRequest() {}

  explicit ListProjectsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (conditions) {
      res["conditions"] = boost::any(*conditions);
    }
    if (extraConditions) {
      res["extraConditions"] = boost::any(*extraConditions);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("conditions") != m.end() && !m["conditions"].empty()) {
      conditions = make_shared<string>(boost::any_cast<string>(m["conditions"]));
    }
    if (m.find("extraConditions") != m.end() && !m["extraConditions"].empty()) {
      extraConditions = make_shared<string>(boost::any_cast<string>(m["extraConditions"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
  }


  virtual ~ListProjectsRequest() = default;
};
class ListProjectsResponseBodyProjects : public Darabonba::Model {
public:
  shared_ptr<string> categoryIdentifier{};
  shared_ptr<string> creator{};
  shared_ptr<string> customCode{};
  shared_ptr<long> deleteTime{};
  shared_ptr<string> description{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<string> icon{};
  shared_ptr<string> identifier{};
  shared_ptr<string> logicalStatus{};
  shared_ptr<string> name{};
  shared_ptr<string> scope{};
  shared_ptr<string> statusStageIdentifier{};
  shared_ptr<string> typeIdentifier{};

  ListProjectsResponseBodyProjects() {}

  explicit ListProjectsResponseBodyProjects(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryIdentifier) {
      res["categoryIdentifier"] = boost::any(*categoryIdentifier);
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (customCode) {
      res["customCode"] = boost::any(*customCode);
    }
    if (deleteTime) {
      res["deleteTime"] = boost::any(*deleteTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (icon) {
      res["icon"] = boost::any(*icon);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (logicalStatus) {
      res["logicalStatus"] = boost::any(*logicalStatus);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (statusStageIdentifier) {
      res["statusStageIdentifier"] = boost::any(*statusStageIdentifier);
    }
    if (typeIdentifier) {
      res["typeIdentifier"] = boost::any(*typeIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("categoryIdentifier") != m.end() && !m["categoryIdentifier"].empty()) {
      categoryIdentifier = make_shared<string>(boost::any_cast<string>(m["categoryIdentifier"]));
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("customCode") != m.end() && !m["customCode"].empty()) {
      customCode = make_shared<string>(boost::any_cast<string>(m["customCode"]));
    }
    if (m.find("deleteTime") != m.end() && !m["deleteTime"].empty()) {
      deleteTime = make_shared<long>(boost::any_cast<long>(m["deleteTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmtCreate"]));
    }
    if (m.find("icon") != m.end() && !m["icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["icon"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("logicalStatus") != m.end() && !m["logicalStatus"].empty()) {
      logicalStatus = make_shared<string>(boost::any_cast<string>(m["logicalStatus"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
    if (m.find("statusStageIdentifier") != m.end() && !m["statusStageIdentifier"].empty()) {
      statusStageIdentifier = make_shared<string>(boost::any_cast<string>(m["statusStageIdentifier"]));
    }
    if (m.find("typeIdentifier") != m.end() && !m["typeIdentifier"].empty()) {
      typeIdentifier = make_shared<string>(boost::any_cast<string>(m["typeIdentifier"]));
    }
  }


  virtual ~ListProjectsResponseBodyProjects() = default;
};
class ListProjectsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListProjectsResponseBodyProjects>> projects{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListProjectsResponseBody() {}

  explicit ListProjectsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (projects) {
      vector<boost::any> temp1;
      for(auto item1:*projects){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["projects"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("projects") != m.end() && !m["projects"].empty()) {
      if (typeid(vector<boost::any>) == m["projects"].type()) {
        vector<ListProjectsResponseBodyProjects> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["projects"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProjectsResponseBodyProjects model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        projects = make_shared<vector<ListProjectsResponseBodyProjects>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListProjectsResponseBody() = default;
};
class ListProjectsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProjectsResponseBody> body{};

  ListProjectsResponse() {}

  explicit ListProjectsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProjectsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProjectsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProjectsResponse() = default;
};
class ListRepositoriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<bool> archived{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> organizationId{};
  shared_ptr<long> page{};
  shared_ptr<long> perPage{};
  shared_ptr<string> search{};
  shared_ptr<string> sort{};

  ListRepositoriesRequest() {}

  explicit ListRepositoriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["accessToken"] = boost::any(*accessToken);
    }
    if (archived) {
      res["archived"] = boost::any(*archived);
    }
    if (orderBy) {
      res["orderBy"] = boost::any(*orderBy);
    }
    if (organizationId) {
      res["organizationId"] = boost::any(*organizationId);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (perPage) {
      res["perPage"] = boost::any(*perPage);
    }
    if (search) {
      res["search"] = boost::any(*search);
    }
    if (sort) {
      res["sort"] = boost::any(*sort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessToken") != m.end() && !m["accessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["accessToken"]));
    }
    if (m.find("archived") != m.end() && !m["archived"].empty()) {
      archived = make_shared<bool>(boost::any_cast<bool>(m["archived"]));
    }
    if (m.find("orderBy") != m.end() && !m["orderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["orderBy"]));
    }
    if (m.find("organizationId") != m.end() && !m["organizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["organizationId"]));
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("perPage") != m.end() && !m["perPage"].empty()) {
      perPage = make_shared<long>(boost::any_cast<long>(m["perPage"]));
    }
    if (m.find("search") != m.end() && !m["search"].empty()) {
      search = make_shared<string>(boost::any_cast<string>(m["search"]));
    }
    if (m.find("sort") != m.end() && !m["sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["sort"]));
    }
  }


  virtual ~ListRepositoriesRequest() = default;
};
class ListRepositoriesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<long> accessLevel{};
  shared_ptr<bool> archive{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> description{};
  shared_ptr<string> importStatus{};
  shared_ptr<string> lastActivityAt{};
  shared_ptr<string> name{};
  shared_ptr<string> nameWithNamespace{};
  shared_ptr<long> namespaceId{};
  shared_ptr<string> path{};
  shared_ptr<string> pathWithNamespace{};
  shared_ptr<bool> star{};
  shared_ptr<long> starCount{};
  shared_ptr<string> updatedAt{};
  shared_ptr<string> visibilityLevel{};
  shared_ptr<string> webUrl{};

  ListRepositoriesResponseBodyResult() {}

  explicit ListRepositoriesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (accessLevel) {
      res["accessLevel"] = boost::any(*accessLevel);
    }
    if (archive) {
      res["archive"] = boost::any(*archive);
    }
    if (avatarUrl) {
      res["avatarUrl"] = boost::any(*avatarUrl);
    }
    if (createdAt) {
      res["createdAt"] = boost::any(*createdAt);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (importStatus) {
      res["importStatus"] = boost::any(*importStatus);
    }
    if (lastActivityAt) {
      res["lastActivityAt"] = boost::any(*lastActivityAt);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nameWithNamespace) {
      res["nameWithNamespace"] = boost::any(*nameWithNamespace);
    }
    if (namespaceId) {
      res["namespaceId"] = boost::any(*namespaceId);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (pathWithNamespace) {
      res["pathWithNamespace"] = boost::any(*pathWithNamespace);
    }
    if (star) {
      res["star"] = boost::any(*star);
    }
    if (starCount) {
      res["starCount"] = boost::any(*starCount);
    }
    if (updatedAt) {
      res["updatedAt"] = boost::any(*updatedAt);
    }
    if (visibilityLevel) {
      res["visibilityLevel"] = boost::any(*visibilityLevel);
    }
    if (webUrl) {
      res["webUrl"] = boost::any(*webUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("accessLevel") != m.end() && !m["accessLevel"].empty()) {
      accessLevel = make_shared<long>(boost::any_cast<long>(m["accessLevel"]));
    }
    if (m.find("archive") != m.end() && !m["archive"].empty()) {
      archive = make_shared<bool>(boost::any_cast<bool>(m["archive"]));
    }
    if (m.find("avatarUrl") != m.end() && !m["avatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["avatarUrl"]));
    }
    if (m.find("createdAt") != m.end() && !m["createdAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["createdAt"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("importStatus") != m.end() && !m["importStatus"].empty()) {
      importStatus = make_shared<string>(boost::any_cast<string>(m["importStatus"]));
    }
    if (m.find("lastActivityAt") != m.end() && !m["lastActivityAt"].empty()) {
      lastActivityAt = make_shared<string>(boost::any_cast<string>(m["lastActivityAt"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nameWithNamespace") != m.end() && !m["nameWithNamespace"].empty()) {
      nameWithNamespace = make_shared<string>(boost::any_cast<string>(m["nameWithNamespace"]));
    }
    if (m.find("namespaceId") != m.end() && !m["namespaceId"].empty()) {
      namespaceId = make_shared<long>(boost::any_cast<long>(m["namespaceId"]));
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("pathWithNamespace") != m.end() && !m["pathWithNamespace"].empty()) {
      pathWithNamespace = make_shared<string>(boost::any_cast<string>(m["pathWithNamespace"]));
    }
    if (m.find("star") != m.end() && !m["star"].empty()) {
      star = make_shared<bool>(boost::any_cast<bool>(m["star"]));
    }
    if (m.find("starCount") != m.end() && !m["starCount"].empty()) {
      starCount = make_shared<long>(boost::any_cast<long>(m["starCount"]));
    }
    if (m.find("updatedAt") != m.end() && !m["updatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["updatedAt"]));
    }
    if (m.find("visibilityLevel") != m.end() && !m["visibilityLevel"].empty()) {
      visibilityLevel = make_shared<string>(boost::any_cast<string>(m["visibilityLevel"]));
    }
    if (m.find("webUrl") != m.end() && !m["webUrl"].empty()) {
      webUrl = make_shared<string>(boost::any_cast<string>(m["webUrl"]));
    }
  }


  virtual ~ListRepositoriesResponseBodyResult() = default;
};
class ListRepositoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListRepositoriesResponseBodyResult>> result{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  ListRepositoriesResponseBody() {}

  explicit ListRepositoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListRepositoriesResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRepositoriesResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListRepositoriesResponseBodyResult>>(expect1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListRepositoriesResponseBody() = default;
};
class ListRepositoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRepositoriesResponseBody> body{};

  ListRepositoriesResponse() {}

  explicit ListRepositoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRepositoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRepositoriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListRepositoriesResponse() = default;
};
class ListRepositoryCommitDiffRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<long> contextLine{};
  shared_ptr<string> organizationId{};

  ListRepositoryCommitDiffRequest() {}

  explicit ListRepositoryCommitDiffRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["accessToken"] = boost::any(*accessToken);
    }
    if (contextLine) {
      res["contextLine"] = boost::any(*contextLine);
    }
    if (organizationId) {
      res["organizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessToken") != m.end() && !m["accessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["accessToken"]));
    }
    if (m.find("contextLine") != m.end() && !m["contextLine"].empty()) {
      contextLine = make_shared<long>(boost::any_cast<long>(m["contextLine"]));
    }
    if (m.find("organizationId") != m.end() && !m["organizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["organizationId"]));
    }
  }


  virtual ~ListRepositoryCommitDiffRequest() = default;
};
class ListRepositoryCommitDiffResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> aMode{};
  shared_ptr<string> bMode{};
  shared_ptr<bool> deletedFile{};
  shared_ptr<string> diff{};
  shared_ptr<bool> isBinary{};
  shared_ptr<bool> isNewLfs{};
  shared_ptr<bool> isOldLfs{};
  shared_ptr<bool> newFile{};
  shared_ptr<string> newId{};
  shared_ptr<string> newPath{};
  shared_ptr<string> oldId{};
  shared_ptr<string> oldPath{};
  shared_ptr<bool> renamedFile{};

  ListRepositoryCommitDiffResponseBodyResult() {}

  explicit ListRepositoryCommitDiffResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aMode) {
      res["aMode"] = boost::any(*aMode);
    }
    if (bMode) {
      res["bMode"] = boost::any(*bMode);
    }
    if (deletedFile) {
      res["deletedFile"] = boost::any(*deletedFile);
    }
    if (diff) {
      res["diff"] = boost::any(*diff);
    }
    if (isBinary) {
      res["isBinary"] = boost::any(*isBinary);
    }
    if (isNewLfs) {
      res["isNewLfs"] = boost::any(*isNewLfs);
    }
    if (isOldLfs) {
      res["isOldLfs"] = boost::any(*isOldLfs);
    }
    if (newFile) {
      res["newFile"] = boost::any(*newFile);
    }
    if (newId) {
      res["newId"] = boost::any(*newId);
    }
    if (newPath) {
      res["newPath"] = boost::any(*newPath);
    }
    if (oldId) {
      res["oldId"] = boost::any(*oldId);
    }
    if (oldPath) {
      res["oldPath"] = boost::any(*oldPath);
    }
    if (renamedFile) {
      res["renamedFile"] = boost::any(*renamedFile);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aMode") != m.end() && !m["aMode"].empty()) {
      aMode = make_shared<string>(boost::any_cast<string>(m["aMode"]));
    }
    if (m.find("bMode") != m.end() && !m["bMode"].empty()) {
      bMode = make_shared<string>(boost::any_cast<string>(m["bMode"]));
    }
    if (m.find("deletedFile") != m.end() && !m["deletedFile"].empty()) {
      deletedFile = make_shared<bool>(boost::any_cast<bool>(m["deletedFile"]));
    }
    if (m.find("diff") != m.end() && !m["diff"].empty()) {
      diff = make_shared<string>(boost::any_cast<string>(m["diff"]));
    }
    if (m.find("isBinary") != m.end() && !m["isBinary"].empty()) {
      isBinary = make_shared<bool>(boost::any_cast<bool>(m["isBinary"]));
    }
    if (m.find("isNewLfs") != m.end() && !m["isNewLfs"].empty()) {
      isNewLfs = make_shared<bool>(boost::any_cast<bool>(m["isNewLfs"]));
    }
    if (m.find("isOldLfs") != m.end() && !m["isOldLfs"].empty()) {
      isOldLfs = make_shared<bool>(boost::any_cast<bool>(m["isOldLfs"]));
    }
    if (m.find("newFile") != m.end() && !m["newFile"].empty()) {
      newFile = make_shared<bool>(boost::any_cast<bool>(m["newFile"]));
    }
    if (m.find("newId") != m.end() && !m["newId"].empty()) {
      newId = make_shared<string>(boost::any_cast<string>(m["newId"]));
    }
    if (m.find("newPath") != m.end() && !m["newPath"].empty()) {
      newPath = make_shared<string>(boost::any_cast<string>(m["newPath"]));
    }
    if (m.find("oldId") != m.end() && !m["oldId"].empty()) {
      oldId = make_shared<string>(boost::any_cast<string>(m["oldId"]));
    }
    if (m.find("oldPath") != m.end() && !m["oldPath"].empty()) {
      oldPath = make_shared<string>(boost::any_cast<string>(m["oldPath"]));
    }
    if (m.find("renamedFile") != m.end() && !m["renamedFile"].empty()) {
      renamedFile = make_shared<bool>(boost::any_cast<bool>(m["renamedFile"]));
    }
  }


  virtual ~ListRepositoryCommitDiffResponseBodyResult() = default;
};
class ListRepositoryCommitDiffResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListRepositoryCommitDiffResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  ListRepositoryCommitDiffResponseBody() {}

  explicit ListRepositoryCommitDiffResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListRepositoryCommitDiffResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRepositoryCommitDiffResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListRepositoryCommitDiffResponseBodyResult>>(expect1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ListRepositoryCommitDiffResponseBody() = default;
};
class ListRepositoryCommitDiffResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRepositoryCommitDiffResponseBody> body{};

  ListRepositoryCommitDiffResponse() {}

  explicit ListRepositoryCommitDiffResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRepositoryCommitDiffResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRepositoryCommitDiffResponseBody>(model1);
      }
    }
  }


  virtual ~ListRepositoryCommitDiffResponse() = default;
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
      res["accessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["organizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessToken") != m.end() && !m["accessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["accessToken"]));
    }
    if (m.find("organizationId") != m.end() && !m["organizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["organizationId"]));
    }
  }


  virtual ~ListRepositoryMemberWithInheritedRequest() = default;
};
class ListRepositoryMemberWithInheritedResponseBodyResultInherited : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nameWithNamespace{};
  shared_ptr<string> path{};
  shared_ptr<string> pathWithNamespace{};
  shared_ptr<string> type{};
  shared_ptr<string> visibilityLevel{};

  ListRepositoryMemberWithInheritedResponseBodyResultInherited() {}

  explicit ListRepositoryMemberWithInheritedResponseBodyResultInherited(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nameWithNamespace) {
      res["nameWithNamespace"] = boost::any(*nameWithNamespace);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (pathWithNamespace) {
      res["pathWithNamespace"] = boost::any(*pathWithNamespace);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (visibilityLevel) {
      res["visibilityLevel"] = boost::any(*visibilityLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nameWithNamespace") != m.end() && !m["nameWithNamespace"].empty()) {
      nameWithNamespace = make_shared<string>(boost::any_cast<string>(m["nameWithNamespace"]));
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("pathWithNamespace") != m.end() && !m["pathWithNamespace"].empty()) {
      pathWithNamespace = make_shared<string>(boost::any_cast<string>(m["pathWithNamespace"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("visibilityLevel") != m.end() && !m["visibilityLevel"].empty()) {
      visibilityLevel = make_shared<string>(boost::any_cast<string>(m["visibilityLevel"]));
    }
  }


  virtual ~ListRepositoryMemberWithInheritedResponseBodyResultInherited() = default;
};
class ListRepositoryMemberWithInheritedResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> accessLevel{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> email{};
  shared_ptr<string> externUserId{};
  shared_ptr<long> id{};
  shared_ptr<ListRepositoryMemberWithInheritedResponseBodyResultInherited> inherited{};
  shared_ptr<string> name{};
  shared_ptr<string> state{};
  shared_ptr<string> username{};

  ListRepositoryMemberWithInheritedResponseBodyResult() {}

  explicit ListRepositoryMemberWithInheritedResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessLevel) {
      res["accessLevel"] = boost::any(*accessLevel);
    }
    if (avatarUrl) {
      res["avatarUrl"] = boost::any(*avatarUrl);
    }
    if (email) {
      res["email"] = boost::any(*email);
    }
    if (externUserId) {
      res["externUserId"] = boost::any(*externUserId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (inherited) {
      res["inherited"] = inherited ? boost::any(inherited->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessLevel") != m.end() && !m["accessLevel"].empty()) {
      accessLevel = make_shared<long>(boost::any_cast<long>(m["accessLevel"]));
    }
    if (m.find("avatarUrl") != m.end() && !m["avatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["avatarUrl"]));
    }
    if (m.find("email") != m.end() && !m["email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["email"]));
    }
    if (m.find("externUserId") != m.end() && !m["externUserId"].empty()) {
      externUserId = make_shared<string>(boost::any_cast<string>(m["externUserId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("inherited") != m.end() && !m["inherited"].empty()) {
      if (typeid(map<string, boost::any>) == m["inherited"].type()) {
        ListRepositoryMemberWithInheritedResponseBodyResultInherited model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["inherited"]));
        inherited = make_shared<ListRepositoryMemberWithInheritedResponseBodyResultInherited>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
  }


  virtual ~ListRepositoryMemberWithInheritedResponseBodyResult() = default;
};
class ListRepositoryMemberWithInheritedResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListRepositoryMemberWithInheritedResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  ListRepositoryMemberWithInheritedResponseBody() {}

  explicit ListRepositoryMemberWithInheritedResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListRepositoryMemberWithInheritedResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRepositoryMemberWithInheritedResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListRepositoryMemberWithInheritedResponseBodyResult>>(expect1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ListRepositoryMemberWithInheritedResponseBody() = default;
};
class ListRepositoryMemberWithInheritedResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRepositoryMemberWithInheritedResponseBody> body{};

  ListRepositoryMemberWithInheritedResponse() {}

  explicit ListRepositoryMemberWithInheritedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRepositoryMemberWithInheritedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRepositoryMemberWithInheritedResponseBody>(model1);
      }
    }
  }


  virtual ~ListRepositoryMemberWithInheritedResponse() = default;
};
class ListRepositoryTreeRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> path{};
  shared_ptr<string> refName{};
  shared_ptr<string> type{};

  ListRepositoryTreeRequest() {}

  explicit ListRepositoryTreeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["accessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["organizationId"] = boost::any(*organizationId);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (refName) {
      res["refName"] = boost::any(*refName);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessToken") != m.end() && !m["accessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["accessToken"]));
    }
    if (m.find("organizationId") != m.end() && !m["organizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["organizationId"]));
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("refName") != m.end() && !m["refName"].empty()) {
      refName = make_shared<string>(boost::any_cast<string>(m["refName"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListRepositoryTreeRequest() = default;
};
class ListRepositoryTreeResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<bool> isLFS{};
  shared_ptr<string> mode{};
  shared_ptr<string> name{};
  shared_ptr<string> path{};
  shared_ptr<string> type{};

  ListRepositoryTreeResponseBodyResult() {}

  explicit ListRepositoryTreeResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (isLFS) {
      res["isLFS"] = boost::any(*isLFS);
    }
    if (mode) {
      res["mode"] = boost::any(*mode);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("isLFS") != m.end() && !m["isLFS"].empty()) {
      isLFS = make_shared<bool>(boost::any_cast<bool>(m["isLFS"]));
    }
    if (m.find("mode") != m.end() && !m["mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["mode"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListRepositoryTreeResponseBodyResult() = default;
};
class ListRepositoryTreeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListRepositoryTreeResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  ListRepositoryTreeResponseBody() {}

  explicit ListRepositoryTreeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListRepositoryTreeResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRepositoryTreeResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListRepositoryTreeResponseBodyResult>>(expect1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ListRepositoryTreeResponseBody() = default;
};
class ListRepositoryTreeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRepositoryTreeResponseBody> body{};

  ListRepositoryTreeResponse() {}

  explicit ListRepositoryTreeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRepositoryTreeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRepositoryTreeResponseBody>(model1);
      }
    }
  }


  virtual ~ListRepositoryTreeResponse() = default;
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
      res["accessToken"] = boost::any(*accessToken);
    }
    if (organizationId) {
      res["organizationId"] = boost::any(*organizationId);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessToken") != m.end() && !m["accessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["accessToken"]));
    }
    if (m.find("organizationId") != m.end() && !m["organizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["organizationId"]));
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListRepositoryWebhookRequest() = default;
};
class ListRepositoryWebhookResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> description{};
  shared_ptr<bool> enableSslVerification{};
  shared_ptr<long> id{};
  shared_ptr<string> lastTestResult{};
  shared_ptr<bool> mergeRequestsEvents{};
  shared_ptr<bool> noteEvents{};
  shared_ptr<long> projectId{};
  shared_ptr<bool> pushEvents{};
  shared_ptr<string> secretToken{};
  shared_ptr<bool> tagPushEvents{};
  shared_ptr<string> url{};

  ListRepositoryWebhookResponseBodyResult() {}

  explicit ListRepositoryWebhookResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["createdAt"] = boost::any(*createdAt);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (enableSslVerification) {
      res["enableSslVerification"] = boost::any(*enableSslVerification);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (lastTestResult) {
      res["lastTestResult"] = boost::any(*lastTestResult);
    }
    if (mergeRequestsEvents) {
      res["mergeRequestsEvents"] = boost::any(*mergeRequestsEvents);
    }
    if (noteEvents) {
      res["noteEvents"] = boost::any(*noteEvents);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (pushEvents) {
      res["pushEvents"] = boost::any(*pushEvents);
    }
    if (secretToken) {
      res["secretToken"] = boost::any(*secretToken);
    }
    if (tagPushEvents) {
      res["tagPushEvents"] = boost::any(*tagPushEvents);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createdAt") != m.end() && !m["createdAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["createdAt"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("enableSslVerification") != m.end() && !m["enableSslVerification"].empty()) {
      enableSslVerification = make_shared<bool>(boost::any_cast<bool>(m["enableSslVerification"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("lastTestResult") != m.end() && !m["lastTestResult"].empty()) {
      lastTestResult = make_shared<string>(boost::any_cast<string>(m["lastTestResult"]));
    }
    if (m.find("mergeRequestsEvents") != m.end() && !m["mergeRequestsEvents"].empty()) {
      mergeRequestsEvents = make_shared<bool>(boost::any_cast<bool>(m["mergeRequestsEvents"]));
    }
    if (m.find("noteEvents") != m.end() && !m["noteEvents"].empty()) {
      noteEvents = make_shared<bool>(boost::any_cast<bool>(m["noteEvents"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["projectId"]));
    }
    if (m.find("pushEvents") != m.end() && !m["pushEvents"].empty()) {
      pushEvents = make_shared<bool>(boost::any_cast<bool>(m["pushEvents"]));
    }
    if (m.find("secretToken") != m.end() && !m["secretToken"].empty()) {
      secretToken = make_shared<string>(boost::any_cast<string>(m["secretToken"]));
    }
    if (m.find("tagPushEvents") != m.end() && !m["tagPushEvents"].empty()) {
      tagPushEvents = make_shared<bool>(boost::any_cast<bool>(m["tagPushEvents"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~ListRepositoryWebhookResponseBodyResult() = default;
};
class ListRepositoryWebhookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListRepositoryWebhookResponseBodyResult>> result{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  ListRepositoryWebhookResponseBody() {}

  explicit ListRepositoryWebhookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListRepositoryWebhookResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRepositoryWebhookResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListRepositoryWebhookResponseBodyResult>>(expect1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListRepositoryWebhookResponseBody() = default;
};
class ListRepositoryWebhookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRepositoryWebhookResponseBody> body{};

  ListRepositoryWebhookResponse() {}

  explicit ListRepositoryWebhookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRepositoryWebhookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRepositoryWebhookResponseBody>(model1);
      }
    }
  }


  virtual ~ListRepositoryWebhookResponse() = default;
};
class ListResourceMembersResponseBodyResourceMembers : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> roleName{};
  shared_ptr<string> username{};

  ListResourceMembersResponseBodyResourceMembers() {}

  explicit ListResourceMembersResponseBodyResourceMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (roleName) {
      res["roleName"] = boost::any(*roleName);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("roleName") != m.end() && !m["roleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["roleName"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
  }


  virtual ~ListResourceMembersResponseBodyResourceMembers() = default;
};
class ListResourceMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListResourceMembersResponseBodyResourceMembers>> resourceMembers{};
  shared_ptr<bool> success{};

  ListResourceMembersResponseBody() {}

  explicit ListResourceMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (resourceMembers) {
      vector<boost::any> temp1;
      for(auto item1:*resourceMembers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["resourceMembers"] = boost::any(temp1);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("resourceMembers") != m.end() && !m["resourceMembers"].empty()) {
      if (typeid(vector<boost::any>) == m["resourceMembers"].type()) {
        vector<ListResourceMembersResponseBodyResourceMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["resourceMembers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourceMembersResponseBodyResourceMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceMembers = make_shared<vector<ListResourceMembersResponseBodyResourceMembers>>(expect1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ListResourceMembersResponseBody() = default;
};
class ListResourceMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourceMembersResponseBody> body{};

  ListResourceMembersResponse() {}

  explicit ListResourceMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListResourceMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourceMembersResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourceMembersResponse() = default;
};
class ListServiceConnectionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> sericeConnectionType{};

  ListServiceConnectionsRequest() {}

  explicit ListServiceConnectionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sericeConnectionType) {
      res["sericeConnectionType"] = boost::any(*sericeConnectionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sericeConnectionType") != m.end() && !m["sericeConnectionType"].empty()) {
      sericeConnectionType = make_shared<string>(boost::any_cast<string>(m["sericeConnectionType"]));
    }
  }


  virtual ~ListServiceConnectionsRequest() = default;
};
class ListServiceConnectionsResponseBodyServiceConnections : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerAccountId{};
  shared_ptr<string> type{};

  ListServiceConnectionsResponseBodyServiceConnections() {}

  explicit ListServiceConnectionsResponseBodyServiceConnections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (ownerAccountId) {
      res["ownerAccountId"] = boost::any(*ownerAccountId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("ownerAccountId") != m.end() && !m["ownerAccountId"].empty()) {
      ownerAccountId = make_shared<long>(boost::any_cast<long>(m["ownerAccountId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListServiceConnectionsResponseBodyServiceConnections() = default;
};
class ListServiceConnectionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListServiceConnectionsResponseBodyServiceConnections>> serviceConnections{};
  shared_ptr<bool> success{};

  ListServiceConnectionsResponseBody() {}

  explicit ListServiceConnectionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (serviceConnections) {
      vector<boost::any> temp1;
      for(auto item1:*serviceConnections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceConnections"] = boost::any(temp1);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("serviceConnections") != m.end() && !m["serviceConnections"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceConnections"].type()) {
        vector<ListServiceConnectionsResponseBodyServiceConnections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceConnections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceConnectionsResponseBodyServiceConnections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceConnections = make_shared<vector<ListServiceConnectionsResponseBodyServiceConnections>>(expect1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ListServiceConnectionsResponseBody() = default;
};
class ListServiceConnectionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServiceConnectionsResponseBody> body{};

  ListServiceConnectionsResponse() {}

  explicit ListServiceConnectionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListServiceConnectionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServiceConnectionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListServiceConnectionsResponse() = default;
};
class ListSprintsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> spaceIdentifier{};
  shared_ptr<string> spaceType{};

  ListSprintsRequest() {}

  explicit ListSprintsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (spaceIdentifier) {
      res["spaceIdentifier"] = boost::any(*spaceIdentifier);
    }
    if (spaceType) {
      res["spaceType"] = boost::any(*spaceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("spaceIdentifier") != m.end() && !m["spaceIdentifier"].empty()) {
      spaceIdentifier = make_shared<string>(boost::any_cast<string>(m["spaceIdentifier"]));
    }
    if (m.find("spaceType") != m.end() && !m["spaceType"].empty()) {
      spaceType = make_shared<string>(boost::any_cast<string>(m["spaceType"]));
    }
  }


  virtual ~ListSprintsRequest() = default;
};
class ListSprintsResponseBodySprints : public Darabonba::Model {
public:
  shared_ptr<string> creator{};
  shared_ptr<string> description{};
  shared_ptr<long> endDate{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> identifier{};
  shared_ptr<string> modifier{};
  shared_ptr<string> name{};
  shared_ptr<string> scope{};
  shared_ptr<string> spaceIdentifier{};
  shared_ptr<long> startDate{};
  shared_ptr<string> status{};

  ListSprintsResponseBodySprints() {}

  explicit ListSprintsResponseBodySprints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (endDate) {
      res["endDate"] = boost::any(*endDate);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (spaceIdentifier) {
      res["spaceIdentifier"] = boost::any(*spaceIdentifier);
    }
    if (startDate) {
      res["startDate"] = boost::any(*startDate);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("endDate") != m.end() && !m["endDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["endDate"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["gmtModified"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["modifier"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
    if (m.find("spaceIdentifier") != m.end() && !m["spaceIdentifier"].empty()) {
      spaceIdentifier = make_shared<string>(boost::any_cast<string>(m["spaceIdentifier"]));
    }
    if (m.find("startDate") != m.end() && !m["startDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["startDate"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListSprintsResponseBodySprints() = default;
};
class ListSprintsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSprintsResponseBodySprints>> sprints{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListSprintsResponseBody() {}

  explicit ListSprintsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sprints) {
      vector<boost::any> temp1;
      for(auto item1:*sprints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["sprints"] = boost::any(temp1);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sprints") != m.end() && !m["sprints"].empty()) {
      if (typeid(vector<boost::any>) == m["sprints"].type()) {
        vector<ListSprintsResponseBodySprints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["sprints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSprintsResponseBodySprints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sprints = make_shared<vector<ListSprintsResponseBodySprints>>(expect1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListSprintsResponseBody() = default;
};
class ListSprintsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSprintsResponseBody> body{};

  ListSprintsResponse() {}

  explicit ListSprintsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSprintsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSprintsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSprintsResponse() = default;
};
class ListVariableGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> pageOrder{};
  shared_ptr<string> pageSort{};

  ListVariableGroupsRequest() {}

  explicit ListVariableGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (pageOrder) {
      res["pageOrder"] = boost::any(*pageOrder);
    }
    if (pageSort) {
      res["pageSort"] = boost::any(*pageSort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("pageOrder") != m.end() && !m["pageOrder"].empty()) {
      pageOrder = make_shared<string>(boost::any_cast<string>(m["pageOrder"]));
    }
    if (m.find("pageSort") != m.end() && !m["pageSort"].empty()) {
      pageSort = make_shared<string>(boost::any_cast<string>(m["pageSort"]));
    }
  }


  virtual ~ListVariableGroupsRequest() = default;
};
class ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines() {}

  explicit ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines() = default;
};
class ListVariableGroupsResponseBodyVariableGroupsVariables : public Darabonba::Model {
public:
  shared_ptr<bool> isEncrypted{};
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  ListVariableGroupsResponseBodyVariableGroupsVariables() {}

  explicit ListVariableGroupsResponseBodyVariableGroupsVariables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isEncrypted) {
      res["isEncrypted"] = boost::any(*isEncrypted);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("isEncrypted") != m.end() && !m["isEncrypted"].empty()) {
      isEncrypted = make_shared<bool>(boost::any_cast<bool>(m["isEncrypted"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ListVariableGroupsResponseBodyVariableGroupsVariables() = default;
};
class ListVariableGroupsResponseBodyVariableGroups : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorAccountId{};
  shared_ptr<string> description{};
  shared_ptr<long> id{};
  shared_ptr<string> modifierAccountId{};
  shared_ptr<string> name{};
  shared_ptr<vector<ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines>> relatedPipelines{};
  shared_ptr<long> updateTime{};
  shared_ptr<vector<ListVariableGroupsResponseBodyVariableGroupsVariables>> variables{};

  ListVariableGroupsResponseBodyVariableGroups() {}

  explicit ListVariableGroupsResponseBodyVariableGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorAccountId) {
      res["creatorAccountId"] = boost::any(*creatorAccountId);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (modifierAccountId) {
      res["modifierAccountId"] = boost::any(*modifierAccountId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (relatedPipelines) {
      vector<boost::any> temp1;
      for(auto item1:*relatedPipelines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["relatedPipelines"] = boost::any(temp1);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (variables) {
      vector<boost::any> temp1;
      for(auto item1:*variables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["variables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorAccountId") != m.end() && !m["creatorAccountId"].empty()) {
      creatorAccountId = make_shared<string>(boost::any_cast<string>(m["creatorAccountId"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("modifierAccountId") != m.end() && !m["modifierAccountId"].empty()) {
      modifierAccountId = make_shared<string>(boost::any_cast<string>(m["modifierAccountId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("relatedPipelines") != m.end() && !m["relatedPipelines"].empty()) {
      if (typeid(vector<boost::any>) == m["relatedPipelines"].type()) {
        vector<ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["relatedPipelines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relatedPipelines = make_shared<vector<ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines>>(expect1);
      }
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      if (typeid(vector<boost::any>) == m["variables"].type()) {
        vector<ListVariableGroupsResponseBodyVariableGroupsVariables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["variables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVariableGroupsResponseBodyVariableGroupsVariables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        variables = make_shared<vector<ListVariableGroupsResponseBodyVariableGroupsVariables>>(expect1);
      }
    }
  }


  virtual ~ListVariableGroupsResponseBodyVariableGroups() = default;
};
class ListVariableGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListVariableGroupsResponseBodyVariableGroups>> variableGroups{};

  ListVariableGroupsResponseBody() {}

  explicit ListVariableGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (variableGroups) {
      vector<boost::any> temp1;
      for(auto item1:*variableGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["variableGroups"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("variableGroups") != m.end() && !m["variableGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["variableGroups"].type()) {
        vector<ListVariableGroupsResponseBodyVariableGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["variableGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVariableGroupsResponseBodyVariableGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        variableGroups = make_shared<vector<ListVariableGroupsResponseBodyVariableGroups>>(expect1);
      }
    }
  }


  virtual ~ListVariableGroupsResponseBody() = default;
};
class ListVariableGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVariableGroupsResponseBody> body{};

  ListVariableGroupsResponse() {}

  explicit ListVariableGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListVariableGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVariableGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListVariableGroupsResponse() = default;
};
class ListWorkItemAllFieldsRequest : public Darabonba::Model {
public:
  shared_ptr<string> spaceIdentifier{};
  shared_ptr<string> spaceType{};
  shared_ptr<string> workitemTypeIdentifier{};

  ListWorkItemAllFieldsRequest() {}

  explicit ListWorkItemAllFieldsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spaceIdentifier) {
      res["spaceIdentifier"] = boost::any(*spaceIdentifier);
    }
    if (spaceType) {
      res["spaceType"] = boost::any(*spaceType);
    }
    if (workitemTypeIdentifier) {
      res["workitemTypeIdentifier"] = boost::any(*workitemTypeIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("spaceIdentifier") != m.end() && !m["spaceIdentifier"].empty()) {
      spaceIdentifier = make_shared<string>(boost::any_cast<string>(m["spaceIdentifier"]));
    }
    if (m.find("spaceType") != m.end() && !m["spaceType"].empty()) {
      spaceType = make_shared<string>(boost::any_cast<string>(m["spaceType"]));
    }
    if (m.find("workitemTypeIdentifier") != m.end() && !m["workitemTypeIdentifier"].empty()) {
      workitemTypeIdentifier = make_shared<string>(boost::any_cast<string>(m["workitemTypeIdentifier"]));
    }
  }


  virtual ~ListWorkItemAllFieldsRequest() = default;
};
class ListWorkItemAllFieldsResponseBodyFieldsOptions : public Darabonba::Model {
public:
  shared_ptr<string> displayValue{};
  shared_ptr<string> fieldIdentifier{};
  shared_ptr<string> identifier{};
  shared_ptr<long> level{};
  shared_ptr<long> position{};
  shared_ptr<string> value{};
  shared_ptr<string> valueEn{};

  ListWorkItemAllFieldsResponseBodyFieldsOptions() {}

  explicit ListWorkItemAllFieldsResponseBodyFieldsOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayValue) {
      res["displayValue"] = boost::any(*displayValue);
    }
    if (fieldIdentifier) {
      res["fieldIdentifier"] = boost::any(*fieldIdentifier);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (level) {
      res["level"] = boost::any(*level);
    }
    if (position) {
      res["position"] = boost::any(*position);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    if (valueEn) {
      res["valueEn"] = boost::any(*valueEn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("displayValue") != m.end() && !m["displayValue"].empty()) {
      displayValue = make_shared<string>(boost::any_cast<string>(m["displayValue"]));
    }
    if (m.find("fieldIdentifier") != m.end() && !m["fieldIdentifier"].empty()) {
      fieldIdentifier = make_shared<string>(boost::any_cast<string>(m["fieldIdentifier"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["level"]));
    }
    if (m.find("position") != m.end() && !m["position"].empty()) {
      position = make_shared<long>(boost::any_cast<long>(m["position"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
    if (m.find("valueEn") != m.end() && !m["valueEn"].empty()) {
      valueEn = make_shared<string>(boost::any_cast<string>(m["valueEn"]));
    }
  }


  virtual ~ListWorkItemAllFieldsResponseBodyFieldsOptions() = default;
};
class ListWorkItemAllFieldsResponseBodyFields : public Darabonba::Model {
public:
  shared_ptr<string> className{};
  shared_ptr<string> creator{};
  shared_ptr<string> defaultValue{};
  shared_ptr<string> description{};
  shared_ptr<string> format{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> identifier{};
  shared_ptr<bool> isRequired{};
  shared_ptr<bool> isShowWhenCreate{};
  shared_ptr<bool> isSystemRequired{};
  shared_ptr<string> linkWithService{};
  shared_ptr<string> modifier{};
  shared_ptr<string> name{};
  shared_ptr<vector<ListWorkItemAllFieldsResponseBodyFieldsOptions>> options{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> type{};

  ListWorkItemAllFieldsResponseBodyFields() {}

  explicit ListWorkItemAllFieldsResponseBodyFields(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (className) {
      res["className"] = boost::any(*className);
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (defaultValue) {
      res["defaultValue"] = boost::any(*defaultValue);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (format) {
      res["format"] = boost::any(*format);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (isRequired) {
      res["isRequired"] = boost::any(*isRequired);
    }
    if (isShowWhenCreate) {
      res["isShowWhenCreate"] = boost::any(*isShowWhenCreate);
    }
    if (isSystemRequired) {
      res["isSystemRequired"] = boost::any(*isSystemRequired);
    }
    if (linkWithService) {
      res["linkWithService"] = boost::any(*linkWithService);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (options) {
      vector<boost::any> temp1;
      for(auto item1:*options){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["options"] = boost::any(temp1);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("className") != m.end() && !m["className"].empty()) {
      className = make_shared<string>(boost::any_cast<string>(m["className"]));
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("defaultValue") != m.end() && !m["defaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["defaultValue"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("format") != m.end() && !m["format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["format"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["gmtModified"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("isRequired") != m.end() && !m["isRequired"].empty()) {
      isRequired = make_shared<bool>(boost::any_cast<bool>(m["isRequired"]));
    }
    if (m.find("isShowWhenCreate") != m.end() && !m["isShowWhenCreate"].empty()) {
      isShowWhenCreate = make_shared<bool>(boost::any_cast<bool>(m["isShowWhenCreate"]));
    }
    if (m.find("isSystemRequired") != m.end() && !m["isSystemRequired"].empty()) {
      isSystemRequired = make_shared<bool>(boost::any_cast<bool>(m["isSystemRequired"]));
    }
    if (m.find("linkWithService") != m.end() && !m["linkWithService"].empty()) {
      linkWithService = make_shared<string>(boost::any_cast<string>(m["linkWithService"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["modifier"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("options") != m.end() && !m["options"].empty()) {
      if (typeid(vector<boost::any>) == m["options"].type()) {
        vector<ListWorkItemAllFieldsResponseBodyFieldsOptions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["options"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWorkItemAllFieldsResponseBodyFieldsOptions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        options = make_shared<vector<ListWorkItemAllFieldsResponseBodyFieldsOptions>>(expect1);
      }
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListWorkItemAllFieldsResponseBodyFields() = default;
};
class ListWorkItemAllFieldsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<vector<ListWorkItemAllFieldsResponseBodyFields>> fields{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListWorkItemAllFieldsResponseBody() {}

  explicit ListWorkItemAllFieldsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (fields) {
      vector<boost::any> temp1;
      for(auto item1:*fields){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["fields"] = boost::any(temp1);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("fields") != m.end() && !m["fields"].empty()) {
      if (typeid(vector<boost::any>) == m["fields"].type()) {
        vector<ListWorkItemAllFieldsResponseBodyFields> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["fields"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWorkItemAllFieldsResponseBodyFields model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fields = make_shared<vector<ListWorkItemAllFieldsResponseBodyFields>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ListWorkItemAllFieldsResponseBody() = default;
};
class ListWorkItemAllFieldsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListWorkItemAllFieldsResponseBody> body{};

  ListWorkItemAllFieldsResponse() {}

  explicit ListWorkItemAllFieldsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListWorkItemAllFieldsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListWorkItemAllFieldsResponseBody>(model1);
      }
    }
  }


  virtual ~ListWorkItemAllFieldsResponse() = default;
};
class ListWorkItemWorkFlowStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> spaceIdentifier{};
  shared_ptr<string> spaceType{};
  shared_ptr<string> workitemCategoryIdentifier{};
  shared_ptr<string> workitemTypeIdentifier{};

  ListWorkItemWorkFlowStatusRequest() {}

  explicit ListWorkItemWorkFlowStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spaceIdentifier) {
      res["spaceIdentifier"] = boost::any(*spaceIdentifier);
    }
    if (spaceType) {
      res["spaceType"] = boost::any(*spaceType);
    }
    if (workitemCategoryIdentifier) {
      res["workitemCategoryIdentifier"] = boost::any(*workitemCategoryIdentifier);
    }
    if (workitemTypeIdentifier) {
      res["workitemTypeIdentifier"] = boost::any(*workitemTypeIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("spaceIdentifier") != m.end() && !m["spaceIdentifier"].empty()) {
      spaceIdentifier = make_shared<string>(boost::any_cast<string>(m["spaceIdentifier"]));
    }
    if (m.find("spaceType") != m.end() && !m["spaceType"].empty()) {
      spaceType = make_shared<string>(boost::any_cast<string>(m["spaceType"]));
    }
    if (m.find("workitemCategoryIdentifier") != m.end() && !m["workitemCategoryIdentifier"].empty()) {
      workitemCategoryIdentifier = make_shared<string>(boost::any_cast<string>(m["workitemCategoryIdentifier"]));
    }
    if (m.find("workitemTypeIdentifier") != m.end() && !m["workitemTypeIdentifier"].empty()) {
      workitemTypeIdentifier = make_shared<string>(boost::any_cast<string>(m["workitemTypeIdentifier"]));
    }
  }


  virtual ~ListWorkItemWorkFlowStatusRequest() = default;
};
class ListWorkItemWorkFlowStatusResponseBodyStatuses : public Darabonba::Model {
public:
  shared_ptr<string> creator{};
  shared_ptr<string> description{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> identifier{};
  shared_ptr<string> modifier{};
  shared_ptr<string> name{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> source{};
  shared_ptr<string> workflowStageIdentifier{};
  shared_ptr<string> workflowStageName{};

  ListWorkItemWorkFlowStatusResponseBodyStatuses() {}

  explicit ListWorkItemWorkFlowStatusResponseBodyStatuses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (workflowStageIdentifier) {
      res["workflowStageIdentifier"] = boost::any(*workflowStageIdentifier);
    }
    if (workflowStageName) {
      res["workflowStageName"] = boost::any(*workflowStageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["gmtModified"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["modifier"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("workflowStageIdentifier") != m.end() && !m["workflowStageIdentifier"].empty()) {
      workflowStageIdentifier = make_shared<string>(boost::any_cast<string>(m["workflowStageIdentifier"]));
    }
    if (m.find("workflowStageName") != m.end() && !m["workflowStageName"].empty()) {
      workflowStageName = make_shared<string>(boost::any_cast<string>(m["workflowStageName"]));
    }
  }


  virtual ~ListWorkItemWorkFlowStatusResponseBodyStatuses() = default;
};
class ListWorkItemWorkFlowStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListWorkItemWorkFlowStatusResponseBodyStatuses>> statuses{};
  shared_ptr<bool> success{};

  ListWorkItemWorkFlowStatusResponseBody() {}

  explicit ListWorkItemWorkFlowStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (statuses) {
      vector<boost::any> temp1;
      for(auto item1:*statuses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["statuses"] = boost::any(temp1);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("statuses") != m.end() && !m["statuses"].empty()) {
      if (typeid(vector<boost::any>) == m["statuses"].type()) {
        vector<ListWorkItemWorkFlowStatusResponseBodyStatuses> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["statuses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWorkItemWorkFlowStatusResponseBodyStatuses model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        statuses = make_shared<vector<ListWorkItemWorkFlowStatusResponseBodyStatuses>>(expect1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ListWorkItemWorkFlowStatusResponseBody() = default;
};
class ListWorkItemWorkFlowStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListWorkItemWorkFlowStatusResponseBody> body{};

  ListWorkItemWorkFlowStatusResponse() {}

  explicit ListWorkItemWorkFlowStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListWorkItemWorkFlowStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListWorkItemWorkFlowStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ListWorkItemWorkFlowStatusResponse() = default;
};
class ListWorkitemTimeResponseBodyWorkitemTime : public Darabonba::Model {
public:
  shared_ptr<long> actualTime{};
  shared_ptr<string> description{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtEnd{};
  shared_ptr<long> gmtModified{};
  shared_ptr<long> gmtStart{};
  shared_ptr<string> identifier{};
  shared_ptr<string> recordUser{};
  shared_ptr<string> type{};
  shared_ptr<string> workitemIdentifier{};

  ListWorkitemTimeResponseBodyWorkitemTime() {}

  explicit ListWorkitemTimeResponseBodyWorkitemTime(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actualTime) {
      res["actualTime"] = boost::any(*actualTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtEnd) {
      res["gmtEnd"] = boost::any(*gmtEnd);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (gmtStart) {
      res["gmtStart"] = boost::any(*gmtStart);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (recordUser) {
      res["recordUser"] = boost::any(*recordUser);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (workitemIdentifier) {
      res["workitemIdentifier"] = boost::any(*workitemIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actualTime") != m.end() && !m["actualTime"].empty()) {
      actualTime = make_shared<long>(boost::any_cast<long>(m["actualTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmtCreate"]));
    }
    if (m.find("gmtEnd") != m.end() && !m["gmtEnd"].empty()) {
      gmtEnd = make_shared<long>(boost::any_cast<long>(m["gmtEnd"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["gmtModified"]));
    }
    if (m.find("gmtStart") != m.end() && !m["gmtStart"].empty()) {
      gmtStart = make_shared<long>(boost::any_cast<long>(m["gmtStart"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("recordUser") != m.end() && !m["recordUser"].empty()) {
      recordUser = make_shared<string>(boost::any_cast<string>(m["recordUser"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("workitemIdentifier") != m.end() && !m["workitemIdentifier"].empty()) {
      workitemIdentifier = make_shared<string>(boost::any_cast<string>(m["workitemIdentifier"]));
    }
  }


  virtual ~ListWorkitemTimeResponseBodyWorkitemTime() = default;
};
class ListWorkitemTimeResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<vector<ListWorkitemTimeResponseBodyWorkitemTime>> workitemTime{};

  ListWorkitemTimeResponseBody() {}

  explicit ListWorkitemTimeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (workitemTime) {
      vector<boost::any> temp1;
      for(auto item1:*workitemTime){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["workitemTime"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("workitemTime") != m.end() && !m["workitemTime"].empty()) {
      if (typeid(vector<boost::any>) == m["workitemTime"].type()) {
        vector<ListWorkitemTimeResponseBodyWorkitemTime> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["workitemTime"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWorkitemTimeResponseBodyWorkitemTime model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workitemTime = make_shared<vector<ListWorkitemTimeResponseBodyWorkitemTime>>(expect1);
      }
    }
  }


  virtual ~ListWorkitemTimeResponseBody() = default;
};
class ListWorkitemTimeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListWorkitemTimeResponseBody> body{};

  ListWorkitemTimeResponse() {}

  explicit ListWorkitemTimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListWorkitemTimeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListWorkitemTimeResponseBody>(model1);
      }
    }
  }


  virtual ~ListWorkitemTimeResponse() = default;
};
class ListWorkitemsRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> conditions{};
  shared_ptr<string> extraConditions{};
  shared_ptr<string> groupCondition{};
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> searchType{};
  shared_ptr<string> spaceIdentifier{};
  shared_ptr<string> spaceType{};

  ListWorkitemsRequest() {}

  explicit ListWorkitemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (conditions) {
      res["conditions"] = boost::any(*conditions);
    }
    if (extraConditions) {
      res["extraConditions"] = boost::any(*extraConditions);
    }
    if (groupCondition) {
      res["groupCondition"] = boost::any(*groupCondition);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (orderBy) {
      res["orderBy"] = boost::any(*orderBy);
    }
    if (searchType) {
      res["searchType"] = boost::any(*searchType);
    }
    if (spaceIdentifier) {
      res["spaceIdentifier"] = boost::any(*spaceIdentifier);
    }
    if (spaceType) {
      res["spaceType"] = boost::any(*spaceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("conditions") != m.end() && !m["conditions"].empty()) {
      conditions = make_shared<string>(boost::any_cast<string>(m["conditions"]));
    }
    if (m.find("extraConditions") != m.end() && !m["extraConditions"].empty()) {
      extraConditions = make_shared<string>(boost::any_cast<string>(m["extraConditions"]));
    }
    if (m.find("groupCondition") != m.end() && !m["groupCondition"].empty()) {
      groupCondition = make_shared<string>(boost::any_cast<string>(m["groupCondition"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("orderBy") != m.end() && !m["orderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["orderBy"]));
    }
    if (m.find("searchType") != m.end() && !m["searchType"].empty()) {
      searchType = make_shared<string>(boost::any_cast<string>(m["searchType"]));
    }
    if (m.find("spaceIdentifier") != m.end() && !m["spaceIdentifier"].empty()) {
      spaceIdentifier = make_shared<string>(boost::any_cast<string>(m["spaceIdentifier"]));
    }
    if (m.find("spaceType") != m.end() && !m["spaceType"].empty()) {
      spaceType = make_shared<string>(boost::any_cast<string>(m["spaceType"]));
    }
  }


  virtual ~ListWorkitemsRequest() = default;
};
class ListWorkitemsResponseBodyWorkitems : public Darabonba::Model {
public:
  shared_ptr<string> assignedTo{};
  shared_ptr<string> categoryIdentifier{};
  shared_ptr<string> creator{};
  shared_ptr<string> document{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> identifier{};
  shared_ptr<string> logicalStatus{};
  shared_ptr<string> modifier{};
  shared_ptr<string> parentIdentifier{};
  shared_ptr<string> serialNumber{};
  shared_ptr<string> spaceIdentifier{};
  shared_ptr<string> spaceName{};
  shared_ptr<string> spaceType{};
  shared_ptr<string> sprintIdentifier{};
  shared_ptr<string> status{};
  shared_ptr<string> statusIdentifier{};
  shared_ptr<string> statusStageIdentifier{};
  shared_ptr<string> subject{};
  shared_ptr<long> updateStatusAt{};
  shared_ptr<string> workitemTypeIdentifier{};

  ListWorkitemsResponseBodyWorkitems() {}

  explicit ListWorkitemsResponseBodyWorkitems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assignedTo) {
      res["assignedTo"] = boost::any(*assignedTo);
    }
    if (categoryIdentifier) {
      res["categoryIdentifier"] = boost::any(*categoryIdentifier);
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (document) {
      res["document"] = boost::any(*document);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (logicalStatus) {
      res["logicalStatus"] = boost::any(*logicalStatus);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    if (parentIdentifier) {
      res["parentIdentifier"] = boost::any(*parentIdentifier);
    }
    if (serialNumber) {
      res["serialNumber"] = boost::any(*serialNumber);
    }
    if (spaceIdentifier) {
      res["spaceIdentifier"] = boost::any(*spaceIdentifier);
    }
    if (spaceName) {
      res["spaceName"] = boost::any(*spaceName);
    }
    if (spaceType) {
      res["spaceType"] = boost::any(*spaceType);
    }
    if (sprintIdentifier) {
      res["sprintIdentifier"] = boost::any(*sprintIdentifier);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (statusIdentifier) {
      res["statusIdentifier"] = boost::any(*statusIdentifier);
    }
    if (statusStageIdentifier) {
      res["statusStageIdentifier"] = boost::any(*statusStageIdentifier);
    }
    if (subject) {
      res["subject"] = boost::any(*subject);
    }
    if (updateStatusAt) {
      res["updateStatusAt"] = boost::any(*updateStatusAt);
    }
    if (workitemTypeIdentifier) {
      res["workitemTypeIdentifier"] = boost::any(*workitemTypeIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("assignedTo") != m.end() && !m["assignedTo"].empty()) {
      assignedTo = make_shared<string>(boost::any_cast<string>(m["assignedTo"]));
    }
    if (m.find("categoryIdentifier") != m.end() && !m["categoryIdentifier"].empty()) {
      categoryIdentifier = make_shared<string>(boost::any_cast<string>(m["categoryIdentifier"]));
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("document") != m.end() && !m["document"].empty()) {
      document = make_shared<string>(boost::any_cast<string>(m["document"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["gmtModified"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("logicalStatus") != m.end() && !m["logicalStatus"].empty()) {
      logicalStatus = make_shared<string>(boost::any_cast<string>(m["logicalStatus"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["modifier"]));
    }
    if (m.find("parentIdentifier") != m.end() && !m["parentIdentifier"].empty()) {
      parentIdentifier = make_shared<string>(boost::any_cast<string>(m["parentIdentifier"]));
    }
    if (m.find("serialNumber") != m.end() && !m["serialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["serialNumber"]));
    }
    if (m.find("spaceIdentifier") != m.end() && !m["spaceIdentifier"].empty()) {
      spaceIdentifier = make_shared<string>(boost::any_cast<string>(m["spaceIdentifier"]));
    }
    if (m.find("spaceName") != m.end() && !m["spaceName"].empty()) {
      spaceName = make_shared<string>(boost::any_cast<string>(m["spaceName"]));
    }
    if (m.find("spaceType") != m.end() && !m["spaceType"].empty()) {
      spaceType = make_shared<string>(boost::any_cast<string>(m["spaceType"]));
    }
    if (m.find("sprintIdentifier") != m.end() && !m["sprintIdentifier"].empty()) {
      sprintIdentifier = make_shared<string>(boost::any_cast<string>(m["sprintIdentifier"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("statusIdentifier") != m.end() && !m["statusIdentifier"].empty()) {
      statusIdentifier = make_shared<string>(boost::any_cast<string>(m["statusIdentifier"]));
    }
    if (m.find("statusStageIdentifier") != m.end() && !m["statusStageIdentifier"].empty()) {
      statusStageIdentifier = make_shared<string>(boost::any_cast<string>(m["statusStageIdentifier"]));
    }
    if (m.find("subject") != m.end() && !m["subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["subject"]));
    }
    if (m.find("updateStatusAt") != m.end() && !m["updateStatusAt"].empty()) {
      updateStatusAt = make_shared<long>(boost::any_cast<long>(m["updateStatusAt"]));
    }
    if (m.find("workitemTypeIdentifier") != m.end() && !m["workitemTypeIdentifier"].empty()) {
      workitemTypeIdentifier = make_shared<string>(boost::any_cast<string>(m["workitemTypeIdentifier"]));
    }
  }


  virtual ~ListWorkitemsResponseBodyWorkitems() = default;
};
class ListWorkitemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListWorkitemsResponseBodyWorkitems>> workitems{};

  ListWorkitemsResponseBody() {}

  explicit ListWorkitemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (workitems) {
      vector<boost::any> temp1;
      for(auto item1:*workitems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["workitems"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("workitems") != m.end() && !m["workitems"].empty()) {
      if (typeid(vector<boost::any>) == m["workitems"].type()) {
        vector<ListWorkitemsResponseBodyWorkitems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["workitems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWorkitemsResponseBodyWorkitems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workitems = make_shared<vector<ListWorkitemsResponseBodyWorkitems>>(expect1);
      }
    }
  }


  virtual ~ListWorkitemsResponseBody() = default;
};
class ListWorkitemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListWorkitemsResponseBody> body{};

  ListWorkitemsResponse() {}

  explicit ListWorkitemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListWorkitemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListWorkitemsResponseBody>(model1);
      }
    }
  }


  virtual ~ListWorkitemsResponse() = default;
};
class ListWorkspacesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> statusList{};
  shared_ptr<vector<string>> workspaceTemplateList{};

  ListWorkspacesRequest() {}

  explicit ListWorkspacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (statusList) {
      res["statusList"] = boost::any(*statusList);
    }
    if (workspaceTemplateList) {
      res["workspaceTemplateList"] = boost::any(*workspaceTemplateList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("statusList") != m.end() && !m["statusList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["statusList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["statusList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      statusList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("workspaceTemplateList") != m.end() && !m["workspaceTemplateList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["workspaceTemplateList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["workspaceTemplateList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      workspaceTemplateList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListWorkspacesRequest() = default;
};
class ListWorkspacesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> statusListShrink{};
  shared_ptr<string> workspaceTemplateListShrink{};

  ListWorkspacesShrinkRequest() {}

  explicit ListWorkspacesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (statusListShrink) {
      res["statusList"] = boost::any(*statusListShrink);
    }
    if (workspaceTemplateListShrink) {
      res["workspaceTemplateList"] = boost::any(*workspaceTemplateListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("statusList") != m.end() && !m["statusList"].empty()) {
      statusListShrink = make_shared<string>(boost::any_cast<string>(m["statusList"]));
    }
    if (m.find("workspaceTemplateList") != m.end() && !m["workspaceTemplateList"].empty()) {
      workspaceTemplateListShrink = make_shared<string>(boost::any_cast<string>(m["workspaceTemplateList"]));
    }
  }


  virtual ~ListWorkspacesShrinkRequest() = default;
};
class ListWorkspacesResponseBodyWorkspaces : public Darabonba::Model {
public:
  shared_ptr<string> codeUrl{};
  shared_ptr<string> codeVersion{};
  shared_ptr<string> createTime{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> spec{};
  shared_ptr<string> status{};
  shared_ptr<string> template_{};
  shared_ptr<string> userId{};

  ListWorkspacesResponseBodyWorkspaces() {}

  explicit ListWorkspacesResponseBodyWorkspaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeUrl) {
      res["codeUrl"] = boost::any(*codeUrl);
    }
    if (codeVersion) {
      res["codeVersion"] = boost::any(*codeVersion);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (spec) {
      res["spec"] = boost::any(*spec);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (template_) {
      res["template"] = boost::any(*template_);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("codeUrl") != m.end() && !m["codeUrl"].empty()) {
      codeUrl = make_shared<string>(boost::any_cast<string>(m["codeUrl"]));
    }
    if (m.find("codeVersion") != m.end() && !m["codeVersion"].empty()) {
      codeVersion = make_shared<string>(boost::any_cast<string>(m["codeVersion"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["spec"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("template") != m.end() && !m["template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["template"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~ListWorkspacesResponseBodyWorkspaces() = default;
};
class ListWorkspacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListWorkspacesResponseBodyWorkspaces>> workspaces{};

  ListWorkspacesResponseBody() {}

  explicit ListWorkspacesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (workspaces) {
      vector<boost::any> temp1;
      for(auto item1:*workspaces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["workspaces"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("workspaces") != m.end() && !m["workspaces"].empty()) {
      if (typeid(vector<boost::any>) == m["workspaces"].type()) {
        vector<ListWorkspacesResponseBodyWorkspaces> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["workspaces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWorkspacesResponseBodyWorkspaces model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workspaces = make_shared<vector<ListWorkspacesResponseBodyWorkspaces>>(expect1);
      }
    }
  }


  virtual ~ListWorkspacesResponseBody() = default;
};
class ListWorkspacesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListWorkspacesResponseBody> body{};

  ListWorkspacesResponse() {}

  explicit ListWorkspacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListWorkspacesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListWorkspacesResponseBody>(model1);
      }
    }
  }


  virtual ~ListWorkspacesResponse() = default;
};
class LogPipelineJobRunResponseBodyLog : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<bool> more{};

  LogPipelineJobRunResponseBodyLog() {}

  explicit LogPipelineJobRunResponseBodyLog(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (more) {
      res["more"] = boost::any(*more);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("more") != m.end() && !m["more"].empty()) {
      more = make_shared<bool>(boost::any_cast<bool>(m["more"]));
    }
  }


  virtual ~LogPipelineJobRunResponseBodyLog() = default;
};
class LogPipelineJobRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<LogPipelineJobRunResponseBodyLog> log{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  LogPipelineJobRunResponseBody() {}

  explicit LogPipelineJobRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (log) {
      res["log"] = log ? boost::any(log->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("log") != m.end() && !m["log"].empty()) {
      if (typeid(map<string, boost::any>) == m["log"].type()) {
        LogPipelineJobRunResponseBodyLog model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["log"]));
        log = make_shared<LogPipelineJobRunResponseBodyLog>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~LogPipelineJobRunResponseBody() = default;
};
class LogPipelineJobRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LogPipelineJobRunResponseBody> body{};

  LogPipelineJobRunResponse() {}

  explicit LogPipelineJobRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LogPipelineJobRunResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LogPipelineJobRunResponseBody>(model1);
      }
    }
  }


  virtual ~LogPipelineJobRunResponse() = default;
};
class LogVMDeployMachineResponseBodyDeployMachineLog : public Darabonba::Model {
public:
  shared_ptr<string> aliyunRegion{};
  shared_ptr<long> deployBeginTime{};
  shared_ptr<long> deployEndTime{};
  shared_ptr<string> deployLog{};
  shared_ptr<string> deployLogPath{};

  LogVMDeployMachineResponseBodyDeployMachineLog() {}

  explicit LogVMDeployMachineResponseBodyDeployMachineLog(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunRegion) {
      res["aliyunRegion"] = boost::any(*aliyunRegion);
    }
    if (deployBeginTime) {
      res["deployBeginTime"] = boost::any(*deployBeginTime);
    }
    if (deployEndTime) {
      res["deployEndTime"] = boost::any(*deployEndTime);
    }
    if (deployLog) {
      res["deployLog"] = boost::any(*deployLog);
    }
    if (deployLogPath) {
      res["deployLogPath"] = boost::any(*deployLogPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aliyunRegion") != m.end() && !m["aliyunRegion"].empty()) {
      aliyunRegion = make_shared<string>(boost::any_cast<string>(m["aliyunRegion"]));
    }
    if (m.find("deployBeginTime") != m.end() && !m["deployBeginTime"].empty()) {
      deployBeginTime = make_shared<long>(boost::any_cast<long>(m["deployBeginTime"]));
    }
    if (m.find("deployEndTime") != m.end() && !m["deployEndTime"].empty()) {
      deployEndTime = make_shared<long>(boost::any_cast<long>(m["deployEndTime"]));
    }
    if (m.find("deployLog") != m.end() && !m["deployLog"].empty()) {
      deployLog = make_shared<string>(boost::any_cast<string>(m["deployLog"]));
    }
    if (m.find("deployLogPath") != m.end() && !m["deployLogPath"].empty()) {
      deployLogPath = make_shared<string>(boost::any_cast<string>(m["deployLogPath"]));
    }
  }


  virtual ~LogVMDeployMachineResponseBodyDeployMachineLog() = default;
};
class LogVMDeployMachineResponseBody : public Darabonba::Model {
public:
  shared_ptr<LogVMDeployMachineResponseBodyDeployMachineLog> deployMachineLog{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  LogVMDeployMachineResponseBody() {}

  explicit LogVMDeployMachineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deployMachineLog) {
      res["deployMachineLog"] = deployMachineLog ? boost::any(deployMachineLog->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("deployMachineLog") != m.end() && !m["deployMachineLog"].empty()) {
      if (typeid(map<string, boost::any>) == m["deployMachineLog"].type()) {
        LogVMDeployMachineResponseBodyDeployMachineLog model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["deployMachineLog"]));
        deployMachineLog = make_shared<LogVMDeployMachineResponseBodyDeployMachineLog>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~LogVMDeployMachineResponseBody() = default;
};
class LogVMDeployMachineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LogVMDeployMachineResponseBody> body{};

  LogVMDeployMachineResponse() {}

  explicit LogVMDeployMachineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LogVMDeployMachineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LogVMDeployMachineResponseBody>(model1);
      }
    }
  }


  virtual ~LogVMDeployMachineResponse() = default;
};
class PassPipelineValidateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PassPipelineValidateResponseBody() {}

  explicit PassPipelineValidateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~PassPipelineValidateResponseBody() = default;
};
class PassPipelineValidateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PassPipelineValidateResponseBody> body{};

  PassPipelineValidateResponse() {}

  explicit PassPipelineValidateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PassPipelineValidateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PassPipelineValidateResponseBody>(model1);
      }
    }
  }


  virtual ~PassPipelineValidateResponse() = default;
};
class RefusePipelineValidateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RefusePipelineValidateResponseBody() {}

  explicit RefusePipelineValidateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~RefusePipelineValidateResponseBody() = default;
};
class RefusePipelineValidateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RefusePipelineValidateResponseBody> body{};

  RefusePipelineValidateResponse() {}

  explicit RefusePipelineValidateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefusePipelineValidateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefusePipelineValidateResponseBody>(model1);
      }
    }
  }


  virtual ~RefusePipelineValidateResponse() = default;
};
class ReleaseWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ReleaseWorkspaceResponseBody() {}

  explicit ReleaseWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ReleaseWorkspaceResponseBody() = default;
};
class ReleaseWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseWorkspaceResponseBody> body{};

  ReleaseWorkspaceResponse() {}

  explicit ReleaseWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReleaseWorkspaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseWorkspaceResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseWorkspaceResponse() = default;
};
class ResetSshKeyResponseBodySshKey : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> publicKey{};

  ResetSshKeyResponseBodySshKey() {}

  explicit ResetSshKeyResponseBodySshKey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (publicKey) {
      res["publicKey"] = boost::any(*publicKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("publicKey") != m.end() && !m["publicKey"].empty()) {
      publicKey = make_shared<string>(boost::any_cast<string>(m["publicKey"]));
    }
  }


  virtual ~ResetSshKeyResponseBodySshKey() = default;
};
class ResetSshKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<ResetSshKeyResponseBodySshKey> sshKey{};
  shared_ptr<bool> success{};

  ResetSshKeyResponseBody() {}

  explicit ResetSshKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sshKey) {
      res["sshKey"] = sshKey ? boost::any(sshKey->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sshKey") != m.end() && !m["sshKey"].empty()) {
      if (typeid(map<string, boost::any>) == m["sshKey"].type()) {
        ResetSshKeyResponseBodySshKey model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sshKey"]));
        sshKey = make_shared<ResetSshKeyResponseBodySshKey>(model1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ResetSshKeyResponseBody() = default;
};
class ResetSshKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetSshKeyResponseBody> body{};

  ResetSshKeyResponse() {}

  explicit ResetSshKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResetSshKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetSshKeyResponseBody>(model1);
      }
    }
  }


  virtual ~ResetSshKeyResponse() = default;
};
class ResumeVMDeployOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ResumeVMDeployOrderResponseBody() {}

  explicit ResumeVMDeployOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ResumeVMDeployOrderResponseBody() = default;
};
class ResumeVMDeployOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResumeVMDeployOrderResponseBody> body{};

  ResumeVMDeployOrderResponse() {}

  explicit ResumeVMDeployOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResumeVMDeployOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResumeVMDeployOrderResponseBody>(model1);
      }
    }
  }


  virtual ~ResumeVMDeployOrderResponse() = default;
};
class RetryPipelineJobRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RetryPipelineJobRunResponseBody() {}

  explicit RetryPipelineJobRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~RetryPipelineJobRunResponseBody() = default;
};
class RetryPipelineJobRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RetryPipelineJobRunResponseBody> body{};

  RetryPipelineJobRunResponse() {}

  explicit RetryPipelineJobRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RetryPipelineJobRunResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RetryPipelineJobRunResponseBody>(model1);
      }
    }
  }


  virtual ~RetryPipelineJobRunResponse() = default;
};
class RetryVMDeployMachineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RetryVMDeployMachineResponseBody() {}

  explicit RetryVMDeployMachineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~RetryVMDeployMachineResponseBody() = default;
};
class RetryVMDeployMachineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RetryVMDeployMachineResponseBody> body{};

  RetryVMDeployMachineResponse() {}

  explicit RetryVMDeployMachineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RetryVMDeployMachineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RetryVMDeployMachineResponseBody>(model1);
      }
    }
  }


  virtual ~RetryVMDeployMachineResponse() = default;
};
class SkipPipelineJobRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SkipPipelineJobRunResponseBody() {}

  explicit SkipPipelineJobRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~SkipPipelineJobRunResponseBody() = default;
};
class SkipPipelineJobRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SkipPipelineJobRunResponseBody> body{};

  SkipPipelineJobRunResponse() {}

  explicit SkipPipelineJobRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SkipPipelineJobRunResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SkipPipelineJobRunResponseBody>(model1);
      }
    }
  }


  virtual ~SkipPipelineJobRunResponse() = default;
};
class SkipVMDeployMachineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SkipVMDeployMachineResponseBody() {}

  explicit SkipVMDeployMachineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~SkipVMDeployMachineResponseBody() = default;
};
class SkipVMDeployMachineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SkipVMDeployMachineResponseBody> body{};

  SkipVMDeployMachineResponse() {}

  explicit SkipVMDeployMachineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SkipVMDeployMachineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SkipVMDeployMachineResponseBody>(model1);
      }
    }
  }


  virtual ~SkipVMDeployMachineResponse() = default;
};
class StartPipelineRunRequest : public Darabonba::Model {
public:
  shared_ptr<string> params{};

  StartPipelineRunRequest() {}

  explicit StartPipelineRunRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (params) {
      res["params"] = boost::any(*params);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("params") != m.end() && !m["params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["params"]));
    }
  }


  virtual ~StartPipelineRunRequest() = default;
};
class StartPipelineRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> pipelineRunId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StartPipelineRunResponseBody() {}

  explicit StartPipelineRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (pipelineRunId) {
      res["pipelineRunId"] = boost::any(*pipelineRunId);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("pipelineRunId") != m.end() && !m["pipelineRunId"].empty()) {
      pipelineRunId = make_shared<long>(boost::any_cast<long>(m["pipelineRunId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~StartPipelineRunResponseBody() = default;
};
class StartPipelineRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartPipelineRunResponseBody> body{};

  StartPipelineRunResponse() {}

  explicit StartPipelineRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartPipelineRunResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartPipelineRunResponseBody>(model1);
      }
    }
  }


  virtual ~StartPipelineRunResponse() = default;
};
class StopPipelineJobRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StopPipelineJobRunResponseBody() {}

  explicit StopPipelineJobRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~StopPipelineJobRunResponseBody() = default;
};
class StopPipelineJobRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopPipelineJobRunResponseBody> body{};

  StopPipelineJobRunResponse() {}

  explicit StopPipelineJobRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopPipelineJobRunResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopPipelineJobRunResponseBody>(model1);
      }
    }
  }


  virtual ~StopPipelineJobRunResponse() = default;
};
class StopPipelineRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StopPipelineRunResponseBody() {}

  explicit StopPipelineRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~StopPipelineRunResponseBody() = default;
};
class StopPipelineRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopPipelineRunResponseBody> body{};

  StopPipelineRunResponse() {}

  explicit StopPipelineRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopPipelineRunResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopPipelineRunResponseBody>(model1);
      }
    }
  }


  virtual ~StopPipelineRunResponse() = default;
};
class StopVMDeployOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StopVMDeployOrderResponseBody() {}

  explicit StopVMDeployOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~StopVMDeployOrderResponseBody() = default;
};
class StopVMDeployOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopVMDeployOrderResponseBody> body{};

  StopVMDeployOrderResponse() {}

  explicit StopVMDeployOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopVMDeployOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopVMDeployOrderResponseBody>(model1);
      }
    }
  }


  virtual ~StopVMDeployOrderResponse() = default;
};
class TriggerRepositoryMirrorSyncRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> account{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> token{};

  TriggerRepositoryMirrorSyncRequest() {}

  explicit TriggerRepositoryMirrorSyncRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["accessToken"] = boost::any(*accessToken);
    }
    if (account) {
      res["account"] = boost::any(*account);
    }
    if (organizationId) {
      res["organizationId"] = boost::any(*organizationId);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessToken") != m.end() && !m["accessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["accessToken"]));
    }
    if (m.find("account") != m.end() && !m["account"].empty()) {
      account = make_shared<string>(boost::any_cast<string>(m["account"]));
    }
    if (m.find("organizationId") != m.end() && !m["organizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["organizationId"]));
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["token"]));
    }
  }


  virtual ~TriggerRepositoryMirrorSyncRequest() = default;
};
class TriggerRepositoryMirrorSyncResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> result{};

  TriggerRepositoryMirrorSyncResponseBodyResult() {}

  explicit TriggerRepositoryMirrorSyncResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~TriggerRepositoryMirrorSyncResponseBodyResult() = default;
};
class TriggerRepositoryMirrorSyncResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<TriggerRepositoryMirrorSyncResponseBodyResult> result{};
  shared_ptr<bool> success{};

  TriggerRepositoryMirrorSyncResponseBody() {}

  explicit TriggerRepositoryMirrorSyncResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        TriggerRepositoryMirrorSyncResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<TriggerRepositoryMirrorSyncResponseBodyResult>(model1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~TriggerRepositoryMirrorSyncResponseBody() = default;
};
class TriggerRepositoryMirrorSyncResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TriggerRepositoryMirrorSyncResponseBody> body{};

  TriggerRepositoryMirrorSyncResponse() {}

  explicit TriggerRepositoryMirrorSyncResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TriggerRepositoryMirrorSyncResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TriggerRepositoryMirrorSyncResponseBody>(model1);
      }
    }
  }


  virtual ~TriggerRepositoryMirrorSyncResponse() = default;
};
class UpdateFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> branchName{};
  shared_ptr<string> commitMessage{};
  shared_ptr<string> content{};
  shared_ptr<string> encoding{};
  shared_ptr<string> newPath{};
  shared_ptr<string> oldPath{};
  shared_ptr<string> organizationId{};

  UpdateFileRequest() {}

  explicit UpdateFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["accessToken"] = boost::any(*accessToken);
    }
    if (branchName) {
      res["branchName"] = boost::any(*branchName);
    }
    if (commitMessage) {
      res["commitMessage"] = boost::any(*commitMessage);
    }
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (encoding) {
      res["encoding"] = boost::any(*encoding);
    }
    if (newPath) {
      res["newPath"] = boost::any(*newPath);
    }
    if (oldPath) {
      res["oldPath"] = boost::any(*oldPath);
    }
    if (organizationId) {
      res["organizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessToken") != m.end() && !m["accessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["accessToken"]));
    }
    if (m.find("branchName") != m.end() && !m["branchName"].empty()) {
      branchName = make_shared<string>(boost::any_cast<string>(m["branchName"]));
    }
    if (m.find("commitMessage") != m.end() && !m["commitMessage"].empty()) {
      commitMessage = make_shared<string>(boost::any_cast<string>(m["commitMessage"]));
    }
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("encoding") != m.end() && !m["encoding"].empty()) {
      encoding = make_shared<string>(boost::any_cast<string>(m["encoding"]));
    }
    if (m.find("newPath") != m.end() && !m["newPath"].empty()) {
      newPath = make_shared<string>(boost::any_cast<string>(m["newPath"]));
    }
    if (m.find("oldPath") != m.end() && !m["oldPath"].empty()) {
      oldPath = make_shared<string>(boost::any_cast<string>(m["oldPath"]));
    }
    if (m.find("organizationId") != m.end() && !m["organizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["organizationId"]));
    }
  }


  virtual ~UpdateFileRequest() = default;
};
class UpdateFileResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> branchName{};
  shared_ptr<string> filePath{};

  UpdateFileResponseBodyResult() {}

  explicit UpdateFileResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (branchName) {
      res["branchName"] = boost::any(*branchName);
    }
    if (filePath) {
      res["filePath"] = boost::any(*filePath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("branchName") != m.end() && !m["branchName"].empty()) {
      branchName = make_shared<string>(boost::any_cast<string>(m["branchName"]));
    }
    if (m.find("filePath") != m.end() && !m["filePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["filePath"]));
    }
  }


  virtual ~UpdateFileResponseBodyResult() = default;
};
class UpdateFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<UpdateFileResponseBodyResult> result{};
  shared_ptr<bool> success{};

  UpdateFileResponseBody() {}

  explicit UpdateFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        UpdateFileResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<UpdateFileResponseBodyResult>(model1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateFileResponseBody() = default;
};
class UpdateFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateFileResponseBody> body{};

  UpdateFileResponse() {}

  explicit UpdateFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFileResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFileResponse() = default;
};
class UpdateFlowTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> color{};
  shared_ptr<long> flowTagGroupId{};
  shared_ptr<string> name{};

  UpdateFlowTagRequest() {}

  explicit UpdateFlowTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (color) {
      res["color"] = boost::any(*color);
    }
    if (flowTagGroupId) {
      res["flowTagGroupId"] = boost::any(*flowTagGroupId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("color") != m.end() && !m["color"].empty()) {
      color = make_shared<string>(boost::any_cast<string>(m["color"]));
    }
    if (m.find("flowTagGroupId") != m.end() && !m["flowTagGroupId"].empty()) {
      flowTagGroupId = make_shared<long>(boost::any_cast<long>(m["flowTagGroupId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~UpdateFlowTagRequest() = default;
};
class UpdateFlowTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateFlowTagResponseBody() {}

  explicit UpdateFlowTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateFlowTagResponseBody() = default;
};
class UpdateFlowTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateFlowTagResponseBody> body{};

  UpdateFlowTagResponse() {}

  explicit UpdateFlowTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateFlowTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFlowTagResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFlowTagResponse() = default;
};
class UpdateFlowTagGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  UpdateFlowTagGroupRequest() {}

  explicit UpdateFlowTagGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~UpdateFlowTagGroupRequest() = default;
};
class UpdateFlowTagGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateFlowTagGroupResponseBody() {}

  explicit UpdateFlowTagGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateFlowTagGroupResponseBody() = default;
};
class UpdateFlowTagGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateFlowTagGroupResponseBody> body{};

  UpdateFlowTagGroupResponse() {}

  explicit UpdateFlowTagGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateFlowTagGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFlowTagGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFlowTagGroupResponse() = default;
};
class UpdateHostGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliyunRegion{};
  shared_ptr<string> ecsLabelKey{};
  shared_ptr<string> ecsLabelValue{};
  shared_ptr<string> ecsType{};
  shared_ptr<string> envId{};
  shared_ptr<string> machineInfos{};
  shared_ptr<string> name{};
  shared_ptr<long> serviceConnectionId{};
  shared_ptr<string> tagIds{};
  shared_ptr<string> type{};

  UpdateHostGroupRequest() {}

  explicit UpdateHostGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunRegion) {
      res["aliyunRegion"] = boost::any(*aliyunRegion);
    }
    if (ecsLabelKey) {
      res["ecsLabelKey"] = boost::any(*ecsLabelKey);
    }
    if (ecsLabelValue) {
      res["ecsLabelValue"] = boost::any(*ecsLabelValue);
    }
    if (ecsType) {
      res["ecsType"] = boost::any(*ecsType);
    }
    if (envId) {
      res["envId"] = boost::any(*envId);
    }
    if (machineInfos) {
      res["machineInfos"] = boost::any(*machineInfos);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (serviceConnectionId) {
      res["serviceConnectionId"] = boost::any(*serviceConnectionId);
    }
    if (tagIds) {
      res["tagIds"] = boost::any(*tagIds);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aliyunRegion") != m.end() && !m["aliyunRegion"].empty()) {
      aliyunRegion = make_shared<string>(boost::any_cast<string>(m["aliyunRegion"]));
    }
    if (m.find("ecsLabelKey") != m.end() && !m["ecsLabelKey"].empty()) {
      ecsLabelKey = make_shared<string>(boost::any_cast<string>(m["ecsLabelKey"]));
    }
    if (m.find("ecsLabelValue") != m.end() && !m["ecsLabelValue"].empty()) {
      ecsLabelValue = make_shared<string>(boost::any_cast<string>(m["ecsLabelValue"]));
    }
    if (m.find("ecsType") != m.end() && !m["ecsType"].empty()) {
      ecsType = make_shared<string>(boost::any_cast<string>(m["ecsType"]));
    }
    if (m.find("envId") != m.end() && !m["envId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["envId"]));
    }
    if (m.find("machineInfos") != m.end() && !m["machineInfos"].empty()) {
      machineInfos = make_shared<string>(boost::any_cast<string>(m["machineInfos"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("serviceConnectionId") != m.end() && !m["serviceConnectionId"].empty()) {
      serviceConnectionId = make_shared<long>(boost::any_cast<long>(m["serviceConnectionId"]));
    }
    if (m.find("tagIds") != m.end() && !m["tagIds"].empty()) {
      tagIds = make_shared<string>(boost::any_cast<string>(m["tagIds"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~UpdateHostGroupRequest() = default;
};
class UpdateHostGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateHostGroupResponseBody() {}

  explicit UpdateHostGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateHostGroupResponseBody() = default;
};
class UpdateHostGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateHostGroupResponseBody> body{};

  UpdateHostGroupResponse() {}

  explicit UpdateHostGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateHostGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateHostGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateHostGroupResponse() = default;
};
class UpdatePipelineBaseInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> envId{};
  shared_ptr<string> pipelineName{};
  shared_ptr<string> tagList{};

  UpdatePipelineBaseInfoRequest() {}

  explicit UpdatePipelineBaseInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envId) {
      res["envId"] = boost::any(*envId);
    }
    if (pipelineName) {
      res["pipelineName"] = boost::any(*pipelineName);
    }
    if (tagList) {
      res["tagList"] = boost::any(*tagList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("envId") != m.end() && !m["envId"].empty()) {
      envId = make_shared<long>(boost::any_cast<long>(m["envId"]));
    }
    if (m.find("pipelineName") != m.end() && !m["pipelineName"].empty()) {
      pipelineName = make_shared<string>(boost::any_cast<string>(m["pipelineName"]));
    }
    if (m.find("tagList") != m.end() && !m["tagList"].empty()) {
      tagList = make_shared<string>(boost::any_cast<string>(m["tagList"]));
    }
  }


  virtual ~UpdatePipelineBaseInfoRequest() = default;
};
class UpdatePipelineBaseInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdatePipelineBaseInfoResponseBody() {}

  explicit UpdatePipelineBaseInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdatePipelineBaseInfoResponseBody() = default;
};
class UpdatePipelineBaseInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdatePipelineBaseInfoResponseBody> body{};

  UpdatePipelineBaseInfoResponse() {}

  explicit UpdatePipelineBaseInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdatePipelineBaseInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePipelineBaseInfoResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePipelineBaseInfoResponse() = default;
};
class UpdatePipelineGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  UpdatePipelineGroupRequest() {}

  explicit UpdatePipelineGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~UpdatePipelineGroupRequest() = default;
};
class UpdatePipelineGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdatePipelineGroupResponseBody() {}

  explicit UpdatePipelineGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdatePipelineGroupResponseBody() = default;
};
class UpdatePipelineGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdatePipelineGroupResponseBody> body{};

  UpdatePipelineGroupResponse() {}

  explicit UpdatePipelineGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdatePipelineGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePipelineGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePipelineGroupResponse() = default;
};
class UpdateProjectMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> roleIdentifier{};
  shared_ptr<string> targetIdentifier{};
  shared_ptr<string> targetType{};
  shared_ptr<string> userIdentifier{};
  shared_ptr<string> userType{};

  UpdateProjectMemberRequest() {}

  explicit UpdateProjectMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleIdentifier) {
      res["roleIdentifier"] = boost::any(*roleIdentifier);
    }
    if (targetIdentifier) {
      res["targetIdentifier"] = boost::any(*targetIdentifier);
    }
    if (targetType) {
      res["targetType"] = boost::any(*targetType);
    }
    if (userIdentifier) {
      res["userIdentifier"] = boost::any(*userIdentifier);
    }
    if (userType) {
      res["userType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("roleIdentifier") != m.end() && !m["roleIdentifier"].empty()) {
      roleIdentifier = make_shared<string>(boost::any_cast<string>(m["roleIdentifier"]));
    }
    if (m.find("targetIdentifier") != m.end() && !m["targetIdentifier"].empty()) {
      targetIdentifier = make_shared<string>(boost::any_cast<string>(m["targetIdentifier"]));
    }
    if (m.find("targetType") != m.end() && !m["targetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["targetType"]));
    }
    if (m.find("userIdentifier") != m.end() && !m["userIdentifier"].empty()) {
      userIdentifier = make_shared<string>(boost::any_cast<string>(m["userIdentifier"]));
    }
    if (m.find("userType") != m.end() && !m["userType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["userType"]));
    }
  }


  virtual ~UpdateProjectMemberRequest() = default;
};
class UpdateProjectMemberResponseBodyMember : public Darabonba::Model {
public:
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> id{};
  shared_ptr<string> roleIdentifier{};
  shared_ptr<string> targetIdentifier{};
  shared_ptr<string> targetType{};
  shared_ptr<string> userIdentifier{};
  shared_ptr<string> userType{};

  UpdateProjectMemberResponseBodyMember() {}

  explicit UpdateProjectMemberResponseBodyMember(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (roleIdentifier) {
      res["roleIdentifier"] = boost::any(*roleIdentifier);
    }
    if (targetIdentifier) {
      res["targetIdentifier"] = boost::any(*targetIdentifier);
    }
    if (targetType) {
      res["targetType"] = boost::any(*targetType);
    }
    if (userIdentifier) {
      res["userIdentifier"] = boost::any(*userIdentifier);
    }
    if (userType) {
      res["userType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("roleIdentifier") != m.end() && !m["roleIdentifier"].empty()) {
      roleIdentifier = make_shared<string>(boost::any_cast<string>(m["roleIdentifier"]));
    }
    if (m.find("targetIdentifier") != m.end() && !m["targetIdentifier"].empty()) {
      targetIdentifier = make_shared<string>(boost::any_cast<string>(m["targetIdentifier"]));
    }
    if (m.find("targetType") != m.end() && !m["targetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["targetType"]));
    }
    if (m.find("userIdentifier") != m.end() && !m["userIdentifier"].empty()) {
      userIdentifier = make_shared<string>(boost::any_cast<string>(m["userIdentifier"]));
    }
    if (m.find("userType") != m.end() && !m["userType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["userType"]));
    }
  }


  virtual ~UpdateProjectMemberResponseBodyMember() = default;
};
class UpdateProjectMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<UpdateProjectMemberResponseBodyMember> member{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateProjectMemberResponseBody() {}

  explicit UpdateProjectMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (member) {
      res["member"] = member ? boost::any(member->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("member") != m.end() && !m["member"].empty()) {
      if (typeid(map<string, boost::any>) == m["member"].type()) {
        UpdateProjectMemberResponseBodyMember model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["member"]));
        member = make_shared<UpdateProjectMemberResponseBodyMember>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateProjectMemberResponseBody() = default;
};
class UpdateProjectMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateProjectMemberResponseBody> body{};

  UpdateProjectMemberResponse() {}

  explicit UpdateProjectMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateProjectMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProjectMemberResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProjectMemberResponse() = default;
};
class UpdateProtectedBranchesRequestMergeRequestSetting : public Darabonba::Model {
public:
  shared_ptr<vector<long>> allowMergeRequestRoles{};
  shared_ptr<vector<long>> defaultAssignees{};
  shared_ptr<bool> isAllowSelfApproval{};
  shared_ptr<bool> isRequireDiscussionProcessed{};
  shared_ptr<bool> isRequired{};
  shared_ptr<bool> isResetApprovalWhenNewPush{};
  shared_ptr<long> minimumApproval{};
  shared_ptr<string> mrMode{};
  shared_ptr<string> whiteList{};

  UpdateProtectedBranchesRequestMergeRequestSetting() {}

  explicit UpdateProtectedBranchesRequestMergeRequestSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowMergeRequestRoles) {
      res["allowMergeRequestRoles"] = boost::any(*allowMergeRequestRoles);
    }
    if (defaultAssignees) {
      res["defaultAssignees"] = boost::any(*defaultAssignees);
    }
    if (isAllowSelfApproval) {
      res["isAllowSelfApproval"] = boost::any(*isAllowSelfApproval);
    }
    if (isRequireDiscussionProcessed) {
      res["isRequireDiscussionProcessed"] = boost::any(*isRequireDiscussionProcessed);
    }
    if (isRequired) {
      res["isRequired"] = boost::any(*isRequired);
    }
    if (isResetApprovalWhenNewPush) {
      res["isResetApprovalWhenNewPush"] = boost::any(*isResetApprovalWhenNewPush);
    }
    if (minimumApproval) {
      res["minimumApproval"] = boost::any(*minimumApproval);
    }
    if (mrMode) {
      res["mrMode"] = boost::any(*mrMode);
    }
    if (whiteList) {
      res["whiteList"] = boost::any(*whiteList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("allowMergeRequestRoles") != m.end() && !m["allowMergeRequestRoles"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["allowMergeRequestRoles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["allowMergeRequestRoles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      allowMergeRequestRoles = make_shared<vector<long>>(toVec1);
    }
    if (m.find("defaultAssignees") != m.end() && !m["defaultAssignees"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["defaultAssignees"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["defaultAssignees"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      defaultAssignees = make_shared<vector<long>>(toVec1);
    }
    if (m.find("isAllowSelfApproval") != m.end() && !m["isAllowSelfApproval"].empty()) {
      isAllowSelfApproval = make_shared<bool>(boost::any_cast<bool>(m["isAllowSelfApproval"]));
    }
    if (m.find("isRequireDiscussionProcessed") != m.end() && !m["isRequireDiscussionProcessed"].empty()) {
      isRequireDiscussionProcessed = make_shared<bool>(boost::any_cast<bool>(m["isRequireDiscussionProcessed"]));
    }
    if (m.find("isRequired") != m.end() && !m["isRequired"].empty()) {
      isRequired = make_shared<bool>(boost::any_cast<bool>(m["isRequired"]));
    }
    if (m.find("isResetApprovalWhenNewPush") != m.end() && !m["isResetApprovalWhenNewPush"].empty()) {
      isResetApprovalWhenNewPush = make_shared<bool>(boost::any_cast<bool>(m["isResetApprovalWhenNewPush"]));
    }
    if (m.find("minimumApproval") != m.end() && !m["minimumApproval"].empty()) {
      minimumApproval = make_shared<long>(boost::any_cast<long>(m["minimumApproval"]));
    }
    if (m.find("mrMode") != m.end() && !m["mrMode"].empty()) {
      mrMode = make_shared<string>(boost::any_cast<string>(m["mrMode"]));
    }
    if (m.find("whiteList") != m.end() && !m["whiteList"].empty()) {
      whiteList = make_shared<string>(boost::any_cast<string>(m["whiteList"]));
    }
  }


  virtual ~UpdateProtectedBranchesRequestMergeRequestSetting() = default;
};
class UpdateProtectedBranchesRequestTestSettingDTOCheckConfigCheckItems : public Darabonba::Model {
public:
  shared_ptr<bool> isRequired{};
  shared_ptr<string> name{};

  UpdateProtectedBranchesRequestTestSettingDTOCheckConfigCheckItems() {}

  explicit UpdateProtectedBranchesRequestTestSettingDTOCheckConfigCheckItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isRequired) {
      res["isRequired"] = boost::any(*isRequired);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("isRequired") != m.end() && !m["isRequired"].empty()) {
      isRequired = make_shared<bool>(boost::any_cast<bool>(m["isRequired"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~UpdateProtectedBranchesRequestTestSettingDTOCheckConfigCheckItems() = default;
};
class UpdateProtectedBranchesRequestTestSettingDTOCheckConfig : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateProtectedBranchesRequestTestSettingDTOCheckConfigCheckItems>> checkItems{};

  UpdateProtectedBranchesRequestTestSettingDTOCheckConfig() {}

  explicit UpdateProtectedBranchesRequestTestSettingDTOCheckConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["checkItems"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("checkItems") != m.end() && !m["checkItems"].empty()) {
      if (typeid(vector<boost::any>) == m["checkItems"].type()) {
        vector<UpdateProtectedBranchesRequestTestSettingDTOCheckConfigCheckItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["checkItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateProtectedBranchesRequestTestSettingDTOCheckConfigCheckItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        checkItems = make_shared<vector<UpdateProtectedBranchesRequestTestSettingDTOCheckConfigCheckItems>>(expect1);
      }
    }
  }


  virtual ~UpdateProtectedBranchesRequestTestSettingDTOCheckConfig() = default;
};
class UpdateProtectedBranchesRequestTestSettingDTOCheckTaskQualityConfig : public Darabonba::Model {
public:
  shared_ptr<string> bizNo{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> message{};
  shared_ptr<string> taskName{};

  UpdateProtectedBranchesRequestTestSettingDTOCheckTaskQualityConfig() {}

  explicit UpdateProtectedBranchesRequestTestSettingDTOCheckTaskQualityConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizNo) {
      res["bizNo"] = boost::any(*bizNo);
    }
    if (enabled) {
      res["enabled"] = boost::any(*enabled);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (taskName) {
      res["taskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bizNo") != m.end() && !m["bizNo"].empty()) {
      bizNo = make_shared<string>(boost::any_cast<string>(m["bizNo"]));
    }
    if (m.find("enabled") != m.end() && !m["enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["enabled"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("taskName") != m.end() && !m["taskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["taskName"]));
    }
  }


  virtual ~UpdateProtectedBranchesRequestTestSettingDTOCheckTaskQualityConfig() = default;
};
class UpdateProtectedBranchesRequestTestSettingDTOCodeGuidelinesDetection : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<string> message{};

  UpdateProtectedBranchesRequestTestSettingDTOCodeGuidelinesDetection() {}

  explicit UpdateProtectedBranchesRequestTestSettingDTOCodeGuidelinesDetection(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["enabled"] = boost::any(*enabled);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enabled") != m.end() && !m["enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["enabled"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~UpdateProtectedBranchesRequestTestSettingDTOCodeGuidelinesDetection() = default;
};
class UpdateProtectedBranchesRequestTestSettingDTOSensitiveInfoDetection : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<string> message{};

  UpdateProtectedBranchesRequestTestSettingDTOSensitiveInfoDetection() {}

  explicit UpdateProtectedBranchesRequestTestSettingDTOSensitiveInfoDetection(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["enabled"] = boost::any(*enabled);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enabled") != m.end() && !m["enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["enabled"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~UpdateProtectedBranchesRequestTestSettingDTOSensitiveInfoDetection() = default;
};
class UpdateProtectedBranchesRequestTestSettingDTO : public Darabonba::Model {
public:
  shared_ptr<UpdateProtectedBranchesRequestTestSettingDTOCheckConfig> checkConfig{};
  shared_ptr<UpdateProtectedBranchesRequestTestSettingDTOCheckTaskQualityConfig> checkTaskQualityConfig{};
  shared_ptr<UpdateProtectedBranchesRequestTestSettingDTOCodeGuidelinesDetection> codeGuidelinesDetection{};
  shared_ptr<bool> isRequired{};
  shared_ptr<UpdateProtectedBranchesRequestTestSettingDTOSensitiveInfoDetection> sensitiveInfoDetection{};

  UpdateProtectedBranchesRequestTestSettingDTO() {}

  explicit UpdateProtectedBranchesRequestTestSettingDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkConfig) {
      res["checkConfig"] = checkConfig ? boost::any(checkConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (checkTaskQualityConfig) {
      res["checkTaskQualityConfig"] = checkTaskQualityConfig ? boost::any(checkTaskQualityConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (codeGuidelinesDetection) {
      res["codeGuidelinesDetection"] = codeGuidelinesDetection ? boost::any(codeGuidelinesDetection->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (isRequired) {
      res["isRequired"] = boost::any(*isRequired);
    }
    if (sensitiveInfoDetection) {
      res["sensitiveInfoDetection"] = sensitiveInfoDetection ? boost::any(sensitiveInfoDetection->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("checkConfig") != m.end() && !m["checkConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["checkConfig"].type()) {
        UpdateProtectedBranchesRequestTestSettingDTOCheckConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["checkConfig"]));
        checkConfig = make_shared<UpdateProtectedBranchesRequestTestSettingDTOCheckConfig>(model1);
      }
    }
    if (m.find("checkTaskQualityConfig") != m.end() && !m["checkTaskQualityConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["checkTaskQualityConfig"].type()) {
        UpdateProtectedBranchesRequestTestSettingDTOCheckTaskQualityConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["checkTaskQualityConfig"]));
        checkTaskQualityConfig = make_shared<UpdateProtectedBranchesRequestTestSettingDTOCheckTaskQualityConfig>(model1);
      }
    }
    if (m.find("codeGuidelinesDetection") != m.end() && !m["codeGuidelinesDetection"].empty()) {
      if (typeid(map<string, boost::any>) == m["codeGuidelinesDetection"].type()) {
        UpdateProtectedBranchesRequestTestSettingDTOCodeGuidelinesDetection model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["codeGuidelinesDetection"]));
        codeGuidelinesDetection = make_shared<UpdateProtectedBranchesRequestTestSettingDTOCodeGuidelinesDetection>(model1);
      }
    }
    if (m.find("isRequired") != m.end() && !m["isRequired"].empty()) {
      isRequired = make_shared<bool>(boost::any_cast<bool>(m["isRequired"]));
    }
    if (m.find("sensitiveInfoDetection") != m.end() && !m["sensitiveInfoDetection"].empty()) {
      if (typeid(map<string, boost::any>) == m["sensitiveInfoDetection"].type()) {
        UpdateProtectedBranchesRequestTestSettingDTOSensitiveInfoDetection model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sensitiveInfoDetection"]));
        sensitiveInfoDetection = make_shared<UpdateProtectedBranchesRequestTestSettingDTOSensitiveInfoDetection>(model1);
      }
    }
  }


  virtual ~UpdateProtectedBranchesRequestTestSettingDTO() = default;
};
class UpdateProtectedBranchesRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<vector<long>> allowMergeRoles{};
  shared_ptr<vector<long>> allowMergeUserIds{};
  shared_ptr<vector<long>> allowPushRoles{};
  shared_ptr<vector<long>> allowPushUserIds{};
  shared_ptr<string> branch{};
  shared_ptr<long> id{};
  shared_ptr<UpdateProtectedBranchesRequestMergeRequestSetting> mergeRequestSetting{};
  shared_ptr<UpdateProtectedBranchesRequestTestSettingDTO> testSettingDTO{};
  shared_ptr<string> organizationId{};

  UpdateProtectedBranchesRequest() {}

  explicit UpdateProtectedBranchesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["accessToken"] = boost::any(*accessToken);
    }
    if (allowMergeRoles) {
      res["allowMergeRoles"] = boost::any(*allowMergeRoles);
    }
    if (allowMergeUserIds) {
      res["allowMergeUserIds"] = boost::any(*allowMergeUserIds);
    }
    if (allowPushRoles) {
      res["allowPushRoles"] = boost::any(*allowPushRoles);
    }
    if (allowPushUserIds) {
      res["allowPushUserIds"] = boost::any(*allowPushUserIds);
    }
    if (branch) {
      res["branch"] = boost::any(*branch);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (mergeRequestSetting) {
      res["mergeRequestSetting"] = mergeRequestSetting ? boost::any(mergeRequestSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (testSettingDTO) {
      res["testSettingDTO"] = testSettingDTO ? boost::any(testSettingDTO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (organizationId) {
      res["organizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessToken") != m.end() && !m["accessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["accessToken"]));
    }
    if (m.find("allowMergeRoles") != m.end() && !m["allowMergeRoles"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["allowMergeRoles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["allowMergeRoles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      allowMergeRoles = make_shared<vector<long>>(toVec1);
    }
    if (m.find("allowMergeUserIds") != m.end() && !m["allowMergeUserIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["allowMergeUserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["allowMergeUserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      allowMergeUserIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("allowPushRoles") != m.end() && !m["allowPushRoles"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["allowPushRoles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["allowPushRoles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      allowPushRoles = make_shared<vector<long>>(toVec1);
    }
    if (m.find("allowPushUserIds") != m.end() && !m["allowPushUserIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["allowPushUserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["allowPushUserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      allowPushUserIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("branch") != m.end() && !m["branch"].empty()) {
      branch = make_shared<string>(boost::any_cast<string>(m["branch"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("mergeRequestSetting") != m.end() && !m["mergeRequestSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["mergeRequestSetting"].type()) {
        UpdateProtectedBranchesRequestMergeRequestSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["mergeRequestSetting"]));
        mergeRequestSetting = make_shared<UpdateProtectedBranchesRequestMergeRequestSetting>(model1);
      }
    }
    if (m.find("testSettingDTO") != m.end() && !m["testSettingDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["testSettingDTO"].type()) {
        UpdateProtectedBranchesRequestTestSettingDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["testSettingDTO"]));
        testSettingDTO = make_shared<UpdateProtectedBranchesRequestTestSettingDTO>(model1);
      }
    }
    if (m.find("organizationId") != m.end() && !m["organizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["organizationId"]));
    }
  }


  virtual ~UpdateProtectedBranchesRequest() = default;
};
class UpdateProtectedBranchesResponseBodyResultMergeRequestSetting : public Darabonba::Model {
public:
  shared_ptr<vector<long>> allowMergeRequestRoles{};
  shared_ptr<vector<long>> defaultAssignees{};
  shared_ptr<bool> isAllowSelfApproval{};
  shared_ptr<bool> isRequireDiscussionProcessed{};
  shared_ptr<bool> isRequired{};
  shared_ptr<bool> isResetApprovalWhenNewPush{};
  shared_ptr<long> minimumApproval{};
  shared_ptr<string> mrMode{};
  shared_ptr<string> whiteList{};

  UpdateProtectedBranchesResponseBodyResultMergeRequestSetting() {}

  explicit UpdateProtectedBranchesResponseBodyResultMergeRequestSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowMergeRequestRoles) {
      res["allowMergeRequestRoles"] = boost::any(*allowMergeRequestRoles);
    }
    if (defaultAssignees) {
      res["defaultAssignees"] = boost::any(*defaultAssignees);
    }
    if (isAllowSelfApproval) {
      res["isAllowSelfApproval"] = boost::any(*isAllowSelfApproval);
    }
    if (isRequireDiscussionProcessed) {
      res["isRequireDiscussionProcessed"] = boost::any(*isRequireDiscussionProcessed);
    }
    if (isRequired) {
      res["isRequired"] = boost::any(*isRequired);
    }
    if (isResetApprovalWhenNewPush) {
      res["isResetApprovalWhenNewPush"] = boost::any(*isResetApprovalWhenNewPush);
    }
    if (minimumApproval) {
      res["minimumApproval"] = boost::any(*minimumApproval);
    }
    if (mrMode) {
      res["mrMode"] = boost::any(*mrMode);
    }
    if (whiteList) {
      res["whiteList"] = boost::any(*whiteList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("allowMergeRequestRoles") != m.end() && !m["allowMergeRequestRoles"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["allowMergeRequestRoles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["allowMergeRequestRoles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      allowMergeRequestRoles = make_shared<vector<long>>(toVec1);
    }
    if (m.find("defaultAssignees") != m.end() && !m["defaultAssignees"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["defaultAssignees"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["defaultAssignees"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      defaultAssignees = make_shared<vector<long>>(toVec1);
    }
    if (m.find("isAllowSelfApproval") != m.end() && !m["isAllowSelfApproval"].empty()) {
      isAllowSelfApproval = make_shared<bool>(boost::any_cast<bool>(m["isAllowSelfApproval"]));
    }
    if (m.find("isRequireDiscussionProcessed") != m.end() && !m["isRequireDiscussionProcessed"].empty()) {
      isRequireDiscussionProcessed = make_shared<bool>(boost::any_cast<bool>(m["isRequireDiscussionProcessed"]));
    }
    if (m.find("isRequired") != m.end() && !m["isRequired"].empty()) {
      isRequired = make_shared<bool>(boost::any_cast<bool>(m["isRequired"]));
    }
    if (m.find("isResetApprovalWhenNewPush") != m.end() && !m["isResetApprovalWhenNewPush"].empty()) {
      isResetApprovalWhenNewPush = make_shared<bool>(boost::any_cast<bool>(m["isResetApprovalWhenNewPush"]));
    }
    if (m.find("minimumApproval") != m.end() && !m["minimumApproval"].empty()) {
      minimumApproval = make_shared<long>(boost::any_cast<long>(m["minimumApproval"]));
    }
    if (m.find("mrMode") != m.end() && !m["mrMode"].empty()) {
      mrMode = make_shared<string>(boost::any_cast<string>(m["mrMode"]));
    }
    if (m.find("whiteList") != m.end() && !m["whiteList"].empty()) {
      whiteList = make_shared<string>(boost::any_cast<string>(m["whiteList"]));
    }
  }


  virtual ~UpdateProtectedBranchesResponseBodyResultMergeRequestSetting() = default;
};
class UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckConfigCheckItems : public Darabonba::Model {
public:
  shared_ptr<bool> isRequired{};
  shared_ptr<string> name{};

  UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckConfigCheckItems() {}

  explicit UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckConfigCheckItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isRequired) {
      res["isRequired"] = boost::any(*isRequired);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("isRequired") != m.end() && !m["isRequired"].empty()) {
      isRequired = make_shared<bool>(boost::any_cast<bool>(m["isRequired"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckConfigCheckItems() = default;
};
class UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckConfig : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckConfigCheckItems>> checkItems{};

  UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckConfig() {}

  explicit UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["checkItems"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("checkItems") != m.end() && !m["checkItems"].empty()) {
      if (typeid(vector<boost::any>) == m["checkItems"].type()) {
        vector<UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckConfigCheckItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["checkItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckConfigCheckItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        checkItems = make_shared<vector<UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckConfigCheckItems>>(expect1);
      }
    }
  }


  virtual ~UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckConfig() = default;
};
class UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckTaskQualityConfig : public Darabonba::Model {
public:
  shared_ptr<string> bizNo{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> message{};
  shared_ptr<string> taskName{};

  UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckTaskQualityConfig() {}

  explicit UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckTaskQualityConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizNo) {
      res["bizNo"] = boost::any(*bizNo);
    }
    if (enabled) {
      res["enabled"] = boost::any(*enabled);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (taskName) {
      res["taskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bizNo") != m.end() && !m["bizNo"].empty()) {
      bizNo = make_shared<string>(boost::any_cast<string>(m["bizNo"]));
    }
    if (m.find("enabled") != m.end() && !m["enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["enabled"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("taskName") != m.end() && !m["taskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["taskName"]));
    }
  }


  virtual ~UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckTaskQualityConfig() = default;
};
class UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<string> message{};

  UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection() {}

  explicit UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["enabled"] = boost::any(*enabled);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enabled") != m.end() && !m["enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["enabled"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection() = default;
};
class UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<string> message{};

  UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection() {}

  explicit UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["enabled"] = boost::any(*enabled);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enabled") != m.end() && !m["enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["enabled"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection() = default;
};
class UpdateProtectedBranchesResponseBodyResultTestSettingDTO : public Darabonba::Model {
public:
  shared_ptr<UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckConfig> checkConfig{};
  shared_ptr<UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckTaskQualityConfig> checkTaskQualityConfig{};
  shared_ptr<UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection> codeGuidelinesDetection{};
  shared_ptr<bool> isRequired{};
  shared_ptr<UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection> sensitiveInfoDetection{};

  UpdateProtectedBranchesResponseBodyResultTestSettingDTO() {}

  explicit UpdateProtectedBranchesResponseBodyResultTestSettingDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkConfig) {
      res["checkConfig"] = checkConfig ? boost::any(checkConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (checkTaskQualityConfig) {
      res["checkTaskQualityConfig"] = checkTaskQualityConfig ? boost::any(checkTaskQualityConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (codeGuidelinesDetection) {
      res["codeGuidelinesDetection"] = codeGuidelinesDetection ? boost::any(codeGuidelinesDetection->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (isRequired) {
      res["isRequired"] = boost::any(*isRequired);
    }
    if (sensitiveInfoDetection) {
      res["sensitiveInfoDetection"] = sensitiveInfoDetection ? boost::any(sensitiveInfoDetection->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("checkConfig") != m.end() && !m["checkConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["checkConfig"].type()) {
        UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["checkConfig"]));
        checkConfig = make_shared<UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckConfig>(model1);
      }
    }
    if (m.find("checkTaskQualityConfig") != m.end() && !m["checkTaskQualityConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["checkTaskQualityConfig"].type()) {
        UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckTaskQualityConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["checkTaskQualityConfig"]));
        checkTaskQualityConfig = make_shared<UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckTaskQualityConfig>(model1);
      }
    }
    if (m.find("codeGuidelinesDetection") != m.end() && !m["codeGuidelinesDetection"].empty()) {
      if (typeid(map<string, boost::any>) == m["codeGuidelinesDetection"].type()) {
        UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["codeGuidelinesDetection"]));
        codeGuidelinesDetection = make_shared<UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection>(model1);
      }
    }
    if (m.find("isRequired") != m.end() && !m["isRequired"].empty()) {
      isRequired = make_shared<bool>(boost::any_cast<bool>(m["isRequired"]));
    }
    if (m.find("sensitiveInfoDetection") != m.end() && !m["sensitiveInfoDetection"].empty()) {
      if (typeid(map<string, boost::any>) == m["sensitiveInfoDetection"].type()) {
        UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sensitiveInfoDetection"]));
        sensitiveInfoDetection = make_shared<UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection>(model1);
      }
    }
  }


  virtual ~UpdateProtectedBranchesResponseBodyResultTestSettingDTO() = default;
};
class UpdateProtectedBranchesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<long>> allowMergeRoles{};
  shared_ptr<vector<long>> allowMergeUserIds{};
  shared_ptr<vector<long>> allowPushRoles{};
  shared_ptr<vector<long>> allowPushUserIds{};
  shared_ptr<string> branch{};
  shared_ptr<long> id{};
  shared_ptr<UpdateProtectedBranchesResponseBodyResultMergeRequestSetting> mergeRequestSetting{};
  shared_ptr<UpdateProtectedBranchesResponseBodyResultTestSettingDTO> testSettingDTO{};

  UpdateProtectedBranchesResponseBodyResult() {}

  explicit UpdateProtectedBranchesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowMergeRoles) {
      res["allowMergeRoles"] = boost::any(*allowMergeRoles);
    }
    if (allowMergeUserIds) {
      res["allowMergeUserIds"] = boost::any(*allowMergeUserIds);
    }
    if (allowPushRoles) {
      res["allowPushRoles"] = boost::any(*allowPushRoles);
    }
    if (allowPushUserIds) {
      res["allowPushUserIds"] = boost::any(*allowPushUserIds);
    }
    if (branch) {
      res["branch"] = boost::any(*branch);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (mergeRequestSetting) {
      res["mergeRequestSetting"] = mergeRequestSetting ? boost::any(mergeRequestSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (testSettingDTO) {
      res["testSettingDTO"] = testSettingDTO ? boost::any(testSettingDTO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("allowMergeRoles") != m.end() && !m["allowMergeRoles"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["allowMergeRoles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["allowMergeRoles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      allowMergeRoles = make_shared<vector<long>>(toVec1);
    }
    if (m.find("allowMergeUserIds") != m.end() && !m["allowMergeUserIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["allowMergeUserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["allowMergeUserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      allowMergeUserIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("allowPushRoles") != m.end() && !m["allowPushRoles"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["allowPushRoles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["allowPushRoles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      allowPushRoles = make_shared<vector<long>>(toVec1);
    }
    if (m.find("allowPushUserIds") != m.end() && !m["allowPushUserIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["allowPushUserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["allowPushUserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      allowPushUserIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("branch") != m.end() && !m["branch"].empty()) {
      branch = make_shared<string>(boost::any_cast<string>(m["branch"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("mergeRequestSetting") != m.end() && !m["mergeRequestSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["mergeRequestSetting"].type()) {
        UpdateProtectedBranchesResponseBodyResultMergeRequestSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["mergeRequestSetting"]));
        mergeRequestSetting = make_shared<UpdateProtectedBranchesResponseBodyResultMergeRequestSetting>(model1);
      }
    }
    if (m.find("testSettingDTO") != m.end() && !m["testSettingDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["testSettingDTO"].type()) {
        UpdateProtectedBranchesResponseBodyResultTestSettingDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["testSettingDTO"]));
        testSettingDTO = make_shared<UpdateProtectedBranchesResponseBodyResultTestSettingDTO>(model1);
      }
    }
  }


  virtual ~UpdateProtectedBranchesResponseBodyResult() = default;
};
class UpdateProtectedBranchesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<UpdateProtectedBranchesResponseBodyResult> result{};
  shared_ptr<bool> success{};

  UpdateProtectedBranchesResponseBody() {}

  explicit UpdateProtectedBranchesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        UpdateProtectedBranchesResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<UpdateProtectedBranchesResponseBodyResult>(model1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateProtectedBranchesResponseBody() = default;
};
class UpdateProtectedBranchesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateProtectedBranchesResponseBody> body{};

  UpdateProtectedBranchesResponse() {}

  explicit UpdateProtectedBranchesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateProtectedBranchesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProtectedBranchesResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProtectedBranchesResponse() = default;
};
class UpdateRepositoryRequestProjectCloneDownloadMethodList : public Darabonba::Model {
public:
  shared_ptr<bool> allowed{};
  shared_ptr<string> permissionCode{};

  UpdateRepositoryRequestProjectCloneDownloadMethodList() {}

  explicit UpdateRepositoryRequestProjectCloneDownloadMethodList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowed) {
      res["allowed"] = boost::any(*allowed);
    }
    if (permissionCode) {
      res["permissionCode"] = boost::any(*permissionCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("allowed") != m.end() && !m["allowed"].empty()) {
      allowed = make_shared<bool>(boost::any_cast<bool>(m["allowed"]));
    }
    if (m.find("permissionCode") != m.end() && !m["permissionCode"].empty()) {
      permissionCode = make_shared<string>(boost::any_cast<string>(m["permissionCode"]));
    }
  }


  virtual ~UpdateRepositoryRequestProjectCloneDownloadMethodList() = default;
};
class UpdateRepositoryRequestProjectCloneDownloadRoleList : public Darabonba::Model {
public:
  shared_ptr<bool> allowed{};
  shared_ptr<long> roleCode{};

  UpdateRepositoryRequestProjectCloneDownloadRoleList() {}

  explicit UpdateRepositoryRequestProjectCloneDownloadRoleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowed) {
      res["allowed"] = boost::any(*allowed);
    }
    if (roleCode) {
      res["roleCode"] = boost::any(*roleCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("allowed") != m.end() && !m["allowed"].empty()) {
      allowed = make_shared<bool>(boost::any_cast<bool>(m["allowed"]));
    }
    if (m.find("roleCode") != m.end() && !m["roleCode"].empty()) {
      roleCode = make_shared<long>(boost::any_cast<long>(m["roleCode"]));
    }
  }


  virtual ~UpdateRepositoryRequestProjectCloneDownloadRoleList() = default;
};
class UpdateRepositoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> adminSettingLanguage{};
  shared_ptr<string> avatar{};
  shared_ptr<bool> buildsEnabled{};
  shared_ptr<bool> checkEmail{};
  shared_ptr<string> defaultBranch{};
  shared_ptr<string> description{};
  shared_ptr<long> id{};
  shared_ptr<bool> issuesEnabled{};
  shared_ptr<bool> mergeRequestsEnabled{};
  shared_ptr<string> name{};
  shared_ptr<bool> openCloneDownloadControl{};
  shared_ptr<string> path{};
  shared_ptr<vector<UpdateRepositoryRequestProjectCloneDownloadMethodList>> projectCloneDownloadMethodList{};
  shared_ptr<vector<UpdateRepositoryRequestProjectCloneDownloadRoleList>> projectCloneDownloadRoleList{};
  shared_ptr<bool> snippetsEnabled{};
  shared_ptr<long> visibilityLevel{};
  shared_ptr<bool> wikiEnabled{};
  shared_ptr<string> organizationId{};

  UpdateRepositoryRequest() {}

  explicit UpdateRepositoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["accessToken"] = boost::any(*accessToken);
    }
    if (adminSettingLanguage) {
      res["adminSettingLanguage"] = boost::any(*adminSettingLanguage);
    }
    if (avatar) {
      res["avatar"] = boost::any(*avatar);
    }
    if (buildsEnabled) {
      res["buildsEnabled"] = boost::any(*buildsEnabled);
    }
    if (checkEmail) {
      res["checkEmail"] = boost::any(*checkEmail);
    }
    if (defaultBranch) {
      res["defaultBranch"] = boost::any(*defaultBranch);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (issuesEnabled) {
      res["issuesEnabled"] = boost::any(*issuesEnabled);
    }
    if (mergeRequestsEnabled) {
      res["mergeRequestsEnabled"] = boost::any(*mergeRequestsEnabled);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (openCloneDownloadControl) {
      res["openCloneDownloadControl"] = boost::any(*openCloneDownloadControl);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (projectCloneDownloadMethodList) {
      vector<boost::any> temp1;
      for(auto item1:*projectCloneDownloadMethodList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["projectCloneDownloadMethodList"] = boost::any(temp1);
    }
    if (projectCloneDownloadRoleList) {
      vector<boost::any> temp1;
      for(auto item1:*projectCloneDownloadRoleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["projectCloneDownloadRoleList"] = boost::any(temp1);
    }
    if (snippetsEnabled) {
      res["snippetsEnabled"] = boost::any(*snippetsEnabled);
    }
    if (visibilityLevel) {
      res["visibilityLevel"] = boost::any(*visibilityLevel);
    }
    if (wikiEnabled) {
      res["wikiEnabled"] = boost::any(*wikiEnabled);
    }
    if (organizationId) {
      res["organizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessToken") != m.end() && !m["accessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["accessToken"]));
    }
    if (m.find("adminSettingLanguage") != m.end() && !m["adminSettingLanguage"].empty()) {
      adminSettingLanguage = make_shared<string>(boost::any_cast<string>(m["adminSettingLanguage"]));
    }
    if (m.find("avatar") != m.end() && !m["avatar"].empty()) {
      avatar = make_shared<string>(boost::any_cast<string>(m["avatar"]));
    }
    if (m.find("buildsEnabled") != m.end() && !m["buildsEnabled"].empty()) {
      buildsEnabled = make_shared<bool>(boost::any_cast<bool>(m["buildsEnabled"]));
    }
    if (m.find("checkEmail") != m.end() && !m["checkEmail"].empty()) {
      checkEmail = make_shared<bool>(boost::any_cast<bool>(m["checkEmail"]));
    }
    if (m.find("defaultBranch") != m.end() && !m["defaultBranch"].empty()) {
      defaultBranch = make_shared<string>(boost::any_cast<string>(m["defaultBranch"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("issuesEnabled") != m.end() && !m["issuesEnabled"].empty()) {
      issuesEnabled = make_shared<bool>(boost::any_cast<bool>(m["issuesEnabled"]));
    }
    if (m.find("mergeRequestsEnabled") != m.end() && !m["mergeRequestsEnabled"].empty()) {
      mergeRequestsEnabled = make_shared<bool>(boost::any_cast<bool>(m["mergeRequestsEnabled"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("openCloneDownloadControl") != m.end() && !m["openCloneDownloadControl"].empty()) {
      openCloneDownloadControl = make_shared<bool>(boost::any_cast<bool>(m["openCloneDownloadControl"]));
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("projectCloneDownloadMethodList") != m.end() && !m["projectCloneDownloadMethodList"].empty()) {
      if (typeid(vector<boost::any>) == m["projectCloneDownloadMethodList"].type()) {
        vector<UpdateRepositoryRequestProjectCloneDownloadMethodList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["projectCloneDownloadMethodList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRepositoryRequestProjectCloneDownloadMethodList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        projectCloneDownloadMethodList = make_shared<vector<UpdateRepositoryRequestProjectCloneDownloadMethodList>>(expect1);
      }
    }
    if (m.find("projectCloneDownloadRoleList") != m.end() && !m["projectCloneDownloadRoleList"].empty()) {
      if (typeid(vector<boost::any>) == m["projectCloneDownloadRoleList"].type()) {
        vector<UpdateRepositoryRequestProjectCloneDownloadRoleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["projectCloneDownloadRoleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRepositoryRequestProjectCloneDownloadRoleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        projectCloneDownloadRoleList = make_shared<vector<UpdateRepositoryRequestProjectCloneDownloadRoleList>>(expect1);
      }
    }
    if (m.find("snippetsEnabled") != m.end() && !m["snippetsEnabled"].empty()) {
      snippetsEnabled = make_shared<bool>(boost::any_cast<bool>(m["snippetsEnabled"]));
    }
    if (m.find("visibilityLevel") != m.end() && !m["visibilityLevel"].empty()) {
      visibilityLevel = make_shared<long>(boost::any_cast<long>(m["visibilityLevel"]));
    }
    if (m.find("wikiEnabled") != m.end() && !m["wikiEnabled"].empty()) {
      wikiEnabled = make_shared<bool>(boost::any_cast<bool>(m["wikiEnabled"]));
    }
    if (m.find("organizationId") != m.end() && !m["organizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["organizationId"]));
    }
  }


  virtual ~UpdateRepositoryRequest() = default;
};
class UpdateRepositoryResponseBodyResultNamespace : public Darabonba::Model {
public:
  shared_ptr<string> avatar{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> description{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> path{};
  shared_ptr<string> updatedAt{};
  shared_ptr<long> visibilityLevel{};

  UpdateRepositoryResponseBodyResultNamespace() {}

  explicit UpdateRepositoryResponseBodyResultNamespace(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avatar) {
      res["avatar"] = boost::any(*avatar);
    }
    if (createdAt) {
      res["createdAt"] = boost::any(*createdAt);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (ownerId) {
      res["ownerId"] = boost::any(*ownerId);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (updatedAt) {
      res["updatedAt"] = boost::any(*updatedAt);
    }
    if (visibilityLevel) {
      res["visibilityLevel"] = boost::any(*visibilityLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("avatar") != m.end() && !m["avatar"].empty()) {
      avatar = make_shared<string>(boost::any_cast<string>(m["avatar"]));
    }
    if (m.find("createdAt") != m.end() && !m["createdAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["createdAt"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("ownerId") != m.end() && !m["ownerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["ownerId"]));
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("updatedAt") != m.end() && !m["updatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["updatedAt"]));
    }
    if (m.find("visibilityLevel") != m.end() && !m["visibilityLevel"].empty()) {
      visibilityLevel = make_shared<long>(boost::any_cast<long>(m["visibilityLevel"]));
    }
  }


  virtual ~UpdateRepositoryResponseBodyResultNamespace() = default;
};
class UpdateRepositoryResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> archived{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<bool> buildsEnabled{};
  shared_ptr<string> createdAt{};
  shared_ptr<long> creatorId{};
  shared_ptr<string> defaultBranch{};
  shared_ptr<string> description{};
  shared_ptr<string> httpUrlToRepo{};
  shared_ptr<long> id{};
  shared_ptr<bool> issuesEnabled{};
  shared_ptr<string> lastActivityAt{};
  shared_ptr<bool> mergeRequestsEnabled{};
  shared_ptr<string> name{};
  shared_ptr<string> nameWithNamespace{};
  shared_ptr<UpdateRepositoryResponseBodyResultNamespace> namespace_{};
  shared_ptr<string> path{};
  shared_ptr<string> pathWithNamespace{};
  shared_ptr<bool> snippetsEnabled{};
  shared_ptr<string> sshUrlToRepo{};
  shared_ptr<long> visibilityLevel{};
  shared_ptr<string> webUrl{};
  shared_ptr<bool> wikiEnabled{};

  UpdateRepositoryResponseBodyResult() {}

  explicit UpdateRepositoryResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (archived) {
      res["archived"] = boost::any(*archived);
    }
    if (avatarUrl) {
      res["avatarUrl"] = boost::any(*avatarUrl);
    }
    if (buildsEnabled) {
      res["buildsEnabled"] = boost::any(*buildsEnabled);
    }
    if (createdAt) {
      res["createdAt"] = boost::any(*createdAt);
    }
    if (creatorId) {
      res["creatorId"] = boost::any(*creatorId);
    }
    if (defaultBranch) {
      res["defaultBranch"] = boost::any(*defaultBranch);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (httpUrlToRepo) {
      res["httpUrlToRepo"] = boost::any(*httpUrlToRepo);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (issuesEnabled) {
      res["issuesEnabled"] = boost::any(*issuesEnabled);
    }
    if (lastActivityAt) {
      res["lastActivityAt"] = boost::any(*lastActivityAt);
    }
    if (mergeRequestsEnabled) {
      res["mergeRequestsEnabled"] = boost::any(*mergeRequestsEnabled);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nameWithNamespace) {
      res["nameWithNamespace"] = boost::any(*nameWithNamespace);
    }
    if (namespace_) {
      res["namespace"] = namespace_ ? boost::any(namespace_->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (pathWithNamespace) {
      res["pathWithNamespace"] = boost::any(*pathWithNamespace);
    }
    if (snippetsEnabled) {
      res["snippetsEnabled"] = boost::any(*snippetsEnabled);
    }
    if (sshUrlToRepo) {
      res["sshUrlToRepo"] = boost::any(*sshUrlToRepo);
    }
    if (visibilityLevel) {
      res["visibilityLevel"] = boost::any(*visibilityLevel);
    }
    if (webUrl) {
      res["webUrl"] = boost::any(*webUrl);
    }
    if (wikiEnabled) {
      res["wikiEnabled"] = boost::any(*wikiEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("archived") != m.end() && !m["archived"].empty()) {
      archived = make_shared<bool>(boost::any_cast<bool>(m["archived"]));
    }
    if (m.find("avatarUrl") != m.end() && !m["avatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["avatarUrl"]));
    }
    if (m.find("buildsEnabled") != m.end() && !m["buildsEnabled"].empty()) {
      buildsEnabled = make_shared<bool>(boost::any_cast<bool>(m["buildsEnabled"]));
    }
    if (m.find("createdAt") != m.end() && !m["createdAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["createdAt"]));
    }
    if (m.find("creatorId") != m.end() && !m["creatorId"].empty()) {
      creatorId = make_shared<long>(boost::any_cast<long>(m["creatorId"]));
    }
    if (m.find("defaultBranch") != m.end() && !m["defaultBranch"].empty()) {
      defaultBranch = make_shared<string>(boost::any_cast<string>(m["defaultBranch"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("httpUrlToRepo") != m.end() && !m["httpUrlToRepo"].empty()) {
      httpUrlToRepo = make_shared<string>(boost::any_cast<string>(m["httpUrlToRepo"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("issuesEnabled") != m.end() && !m["issuesEnabled"].empty()) {
      issuesEnabled = make_shared<bool>(boost::any_cast<bool>(m["issuesEnabled"]));
    }
    if (m.find("lastActivityAt") != m.end() && !m["lastActivityAt"].empty()) {
      lastActivityAt = make_shared<string>(boost::any_cast<string>(m["lastActivityAt"]));
    }
    if (m.find("mergeRequestsEnabled") != m.end() && !m["mergeRequestsEnabled"].empty()) {
      mergeRequestsEnabled = make_shared<bool>(boost::any_cast<bool>(m["mergeRequestsEnabled"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nameWithNamespace") != m.end() && !m["nameWithNamespace"].empty()) {
      nameWithNamespace = make_shared<string>(boost::any_cast<string>(m["nameWithNamespace"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      if (typeid(map<string, boost::any>) == m["namespace"].type()) {
        UpdateRepositoryResponseBodyResultNamespace model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["namespace"]));
        namespace_ = make_shared<UpdateRepositoryResponseBodyResultNamespace>(model1);
      }
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("pathWithNamespace") != m.end() && !m["pathWithNamespace"].empty()) {
      pathWithNamespace = make_shared<string>(boost::any_cast<string>(m["pathWithNamespace"]));
    }
    if (m.find("snippetsEnabled") != m.end() && !m["snippetsEnabled"].empty()) {
      snippetsEnabled = make_shared<bool>(boost::any_cast<bool>(m["snippetsEnabled"]));
    }
    if (m.find("sshUrlToRepo") != m.end() && !m["sshUrlToRepo"].empty()) {
      sshUrlToRepo = make_shared<string>(boost::any_cast<string>(m["sshUrlToRepo"]));
    }
    if (m.find("visibilityLevel") != m.end() && !m["visibilityLevel"].empty()) {
      visibilityLevel = make_shared<long>(boost::any_cast<long>(m["visibilityLevel"]));
    }
    if (m.find("webUrl") != m.end() && !m["webUrl"].empty()) {
      webUrl = make_shared<string>(boost::any_cast<string>(m["webUrl"]));
    }
    if (m.find("wikiEnabled") != m.end() && !m["wikiEnabled"].empty()) {
      wikiEnabled = make_shared<bool>(boost::any_cast<bool>(m["wikiEnabled"]));
    }
  }


  virtual ~UpdateRepositoryResponseBodyResult() = default;
};
class UpdateRepositoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<UpdateRepositoryResponseBodyResult> result{};
  shared_ptr<bool> success{};

  UpdateRepositoryResponseBody() {}

  explicit UpdateRepositoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        UpdateRepositoryResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<UpdateRepositoryResponseBodyResult>(model1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateRepositoryResponseBody() = default;
};
class UpdateRepositoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateRepositoryResponseBody> body{};

  UpdateRepositoryResponse() {}

  explicit UpdateRepositoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateRepositoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRepositoryResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRepositoryResponse() = default;
};
class UpdateRepositoryMemberRequestRelatedInfos : public Darabonba::Model {
public:
  shared_ptr<string> relatedId{};
  shared_ptr<long> sourceId{};
  shared_ptr<string> sourceType{};

  UpdateRepositoryMemberRequestRelatedInfos() {}

  explicit UpdateRepositoryMemberRequestRelatedInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (relatedId) {
      res["relatedId"] = boost::any(*relatedId);
    }
    if (sourceId) {
      res["sourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["sourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("relatedId") != m.end() && !m["relatedId"].empty()) {
      relatedId = make_shared<string>(boost::any_cast<string>(m["relatedId"]));
    }
    if (m.find("sourceId") != m.end() && !m["sourceId"].empty()) {
      sourceId = make_shared<long>(boost::any_cast<long>(m["sourceId"]));
    }
    if (m.find("sourceType") != m.end() && !m["sourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["sourceType"]));
    }
  }


  virtual ~UpdateRepositoryMemberRequestRelatedInfos() = default;
};
class UpdateRepositoryMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<long> accessLevel{};
  shared_ptr<string> expireAt{};
  shared_ptr<string> memberType{};
  shared_ptr<string> relatedId{};
  shared_ptr<vector<UpdateRepositoryMemberRequestRelatedInfos>> relatedInfos{};
  shared_ptr<string> organizationId{};

  UpdateRepositoryMemberRequest() {}

  explicit UpdateRepositoryMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["accessToken"] = boost::any(*accessToken);
    }
    if (accessLevel) {
      res["accessLevel"] = boost::any(*accessLevel);
    }
    if (expireAt) {
      res["expireAt"] = boost::any(*expireAt);
    }
    if (memberType) {
      res["memberType"] = boost::any(*memberType);
    }
    if (relatedId) {
      res["relatedId"] = boost::any(*relatedId);
    }
    if (relatedInfos) {
      vector<boost::any> temp1;
      for(auto item1:*relatedInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["relatedInfos"] = boost::any(temp1);
    }
    if (organizationId) {
      res["organizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessToken") != m.end() && !m["accessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["accessToken"]));
    }
    if (m.find("accessLevel") != m.end() && !m["accessLevel"].empty()) {
      accessLevel = make_shared<long>(boost::any_cast<long>(m["accessLevel"]));
    }
    if (m.find("expireAt") != m.end() && !m["expireAt"].empty()) {
      expireAt = make_shared<string>(boost::any_cast<string>(m["expireAt"]));
    }
    if (m.find("memberType") != m.end() && !m["memberType"].empty()) {
      memberType = make_shared<string>(boost::any_cast<string>(m["memberType"]));
    }
    if (m.find("relatedId") != m.end() && !m["relatedId"].empty()) {
      relatedId = make_shared<string>(boost::any_cast<string>(m["relatedId"]));
    }
    if (m.find("relatedInfos") != m.end() && !m["relatedInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["relatedInfos"].type()) {
        vector<UpdateRepositoryMemberRequestRelatedInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["relatedInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRepositoryMemberRequestRelatedInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relatedInfos = make_shared<vector<UpdateRepositoryMemberRequestRelatedInfos>>(expect1);
      }
    }
    if (m.find("organizationId") != m.end() && !m["organizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["organizationId"]));
    }
  }


  virtual ~UpdateRepositoryMemberRequest() = default;
};
class UpdateRepositoryMemberResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> accessLevel{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> email{};
  shared_ptr<string> expireAt{};
  shared_ptr<string> externUid{};
  shared_ptr<long> id{};
  shared_ptr<string> memberName{};
  shared_ptr<string> memberType{};
  shared_ptr<string> name{};
  shared_ptr<long> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> state{};
  shared_ptr<string> tbUserId{};
  shared_ptr<string> username{};
  shared_ptr<string> webUrl{};

  UpdateRepositoryMemberResponseBodyResult() {}

  explicit UpdateRepositoryMemberResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessLevel) {
      res["accessLevel"] = boost::any(*accessLevel);
    }
    if (avatarUrl) {
      res["avatarUrl"] = boost::any(*avatarUrl);
    }
    if (email) {
      res["email"] = boost::any(*email);
    }
    if (expireAt) {
      res["expireAt"] = boost::any(*expireAt);
    }
    if (externUid) {
      res["externUid"] = boost::any(*externUid);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (memberName) {
      res["memberName"] = boost::any(*memberName);
    }
    if (memberType) {
      res["memberType"] = boost::any(*memberType);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (sourceId) {
      res["sourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["sourceType"] = boost::any(*sourceType);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    if (tbUserId) {
      res["tbUserId"] = boost::any(*tbUserId);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    if (webUrl) {
      res["webUrl"] = boost::any(*webUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessLevel") != m.end() && !m["accessLevel"].empty()) {
      accessLevel = make_shared<long>(boost::any_cast<long>(m["accessLevel"]));
    }
    if (m.find("avatarUrl") != m.end() && !m["avatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["avatarUrl"]));
    }
    if (m.find("email") != m.end() && !m["email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["email"]));
    }
    if (m.find("expireAt") != m.end() && !m["expireAt"].empty()) {
      expireAt = make_shared<string>(boost::any_cast<string>(m["expireAt"]));
    }
    if (m.find("externUid") != m.end() && !m["externUid"].empty()) {
      externUid = make_shared<string>(boost::any_cast<string>(m["externUid"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("memberName") != m.end() && !m["memberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["memberName"]));
    }
    if (m.find("memberType") != m.end() && !m["memberType"].empty()) {
      memberType = make_shared<string>(boost::any_cast<string>(m["memberType"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("sourceId") != m.end() && !m["sourceId"].empty()) {
      sourceId = make_shared<long>(boost::any_cast<long>(m["sourceId"]));
    }
    if (m.find("sourceType") != m.end() && !m["sourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["sourceType"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
    if (m.find("tbUserId") != m.end() && !m["tbUserId"].empty()) {
      tbUserId = make_shared<string>(boost::any_cast<string>(m["tbUserId"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
    if (m.find("webUrl") != m.end() && !m["webUrl"].empty()) {
      webUrl = make_shared<string>(boost::any_cast<string>(m["webUrl"]));
    }
  }


  virtual ~UpdateRepositoryMemberResponseBodyResult() = default;
};
class UpdateRepositoryMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<UpdateRepositoryMemberResponseBodyResult> result{};
  shared_ptr<bool> success{};

  UpdateRepositoryMemberResponseBody() {}

  explicit UpdateRepositoryMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        UpdateRepositoryMemberResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<UpdateRepositoryMemberResponseBodyResult>(model1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateRepositoryMemberResponseBody() = default;
};
class UpdateRepositoryMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateRepositoryMemberResponseBody> body{};

  UpdateRepositoryMemberResponse() {}

  explicit UpdateRepositoryMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateRepositoryMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRepositoryMemberResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRepositoryMemberResponse() = default;
};
class UpdateResourceMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> roleName{};

  UpdateResourceMemberRequest() {}

  explicit UpdateResourceMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleName) {
      res["roleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("roleName") != m.end() && !m["roleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["roleName"]));
    }
  }


  virtual ~UpdateResourceMemberRequest() = default;
};
class UpdateResourceMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateResourceMemberResponseBody() {}

  explicit UpdateResourceMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateResourceMemberResponseBody() = default;
};
class UpdateResourceMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateResourceMemberResponseBody> body{};

  UpdateResourceMemberResponse() {}

  explicit UpdateResourceMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateResourceMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateResourceMemberResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateResourceMemberResponse() = default;
};
class UpdateVariableGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> variables{};

  UpdateVariableGroupRequest() {}

  explicit UpdateVariableGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (variables) {
      res["variables"] = boost::any(*variables);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      variables = make_shared<string>(boost::any_cast<string>(m["variables"]));
    }
  }


  virtual ~UpdateVariableGroupRequest() = default;
};
class UpdateVariableGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateVariableGroupResponseBody() {}

  explicit UpdateVariableGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateVariableGroupResponseBody() = default;
};
class UpdateVariableGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateVariableGroupResponseBody> body{};

  UpdateVariableGroupResponse() {}

  explicit UpdateVariableGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateVariableGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateVariableGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateVariableGroupResponse() = default;
};
class UpdateWorkItemRequest : public Darabonba::Model {
public:
  shared_ptr<string> fieldType{};
  shared_ptr<string> identifier{};
  shared_ptr<string> propertyKey{};
  shared_ptr<string> propertyValue{};

  UpdateWorkItemRequest() {}

  explicit UpdateWorkItemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldType) {
      res["fieldType"] = boost::any(*fieldType);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (propertyKey) {
      res["propertyKey"] = boost::any(*propertyKey);
    }
    if (propertyValue) {
      res["propertyValue"] = boost::any(*propertyValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fieldType") != m.end() && !m["fieldType"].empty()) {
      fieldType = make_shared<string>(boost::any_cast<string>(m["fieldType"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("propertyKey") != m.end() && !m["propertyKey"].empty()) {
      propertyKey = make_shared<string>(boost::any_cast<string>(m["propertyKey"]));
    }
    if (m.find("propertyValue") != m.end() && !m["propertyValue"].empty()) {
      propertyValue = make_shared<string>(boost::any_cast<string>(m["propertyValue"]));
    }
  }


  virtual ~UpdateWorkItemRequest() = default;
};
class UpdateWorkItemResponseBodyWorkitem : public Darabonba::Model {
public:
  shared_ptr<string> assignedTo{};
  shared_ptr<string> categoryIdentifier{};
  shared_ptr<string> creator{};
  shared_ptr<string> document{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> identifier{};
  shared_ptr<string> logicalStatus{};
  shared_ptr<string> modifier{};
  shared_ptr<string> parentIdentifier{};
  shared_ptr<string> serialNumber{};
  shared_ptr<string> spaceIdentifier{};
  shared_ptr<string> spaceName{};
  shared_ptr<string> spaceType{};
  shared_ptr<string> sprintIdentifier{};
  shared_ptr<string> status{};
  shared_ptr<string> statusIdentifier{};
  shared_ptr<string> statusStageIdentifier{};
  shared_ptr<string> subject{};
  shared_ptr<long> updateStatusAt{};
  shared_ptr<string> workitemTypeIdentifier{};

  UpdateWorkItemResponseBodyWorkitem() {}

  explicit UpdateWorkItemResponseBodyWorkitem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assignedTo) {
      res["assignedTo"] = boost::any(*assignedTo);
    }
    if (categoryIdentifier) {
      res["categoryIdentifier"] = boost::any(*categoryIdentifier);
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (document) {
      res["document"] = boost::any(*document);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (logicalStatus) {
      res["logicalStatus"] = boost::any(*logicalStatus);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    if (parentIdentifier) {
      res["parentIdentifier"] = boost::any(*parentIdentifier);
    }
    if (serialNumber) {
      res["serialNumber"] = boost::any(*serialNumber);
    }
    if (spaceIdentifier) {
      res["spaceIdentifier"] = boost::any(*spaceIdentifier);
    }
    if (spaceName) {
      res["spaceName"] = boost::any(*spaceName);
    }
    if (spaceType) {
      res["spaceType"] = boost::any(*spaceType);
    }
    if (sprintIdentifier) {
      res["sprintIdentifier"] = boost::any(*sprintIdentifier);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (statusIdentifier) {
      res["statusIdentifier"] = boost::any(*statusIdentifier);
    }
    if (statusStageIdentifier) {
      res["statusStageIdentifier"] = boost::any(*statusStageIdentifier);
    }
    if (subject) {
      res["subject"] = boost::any(*subject);
    }
    if (updateStatusAt) {
      res["updateStatusAt"] = boost::any(*updateStatusAt);
    }
    if (workitemTypeIdentifier) {
      res["workitemTypeIdentifier"] = boost::any(*workitemTypeIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("assignedTo") != m.end() && !m["assignedTo"].empty()) {
      assignedTo = make_shared<string>(boost::any_cast<string>(m["assignedTo"]));
    }
    if (m.find("categoryIdentifier") != m.end() && !m["categoryIdentifier"].empty()) {
      categoryIdentifier = make_shared<string>(boost::any_cast<string>(m["categoryIdentifier"]));
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("document") != m.end() && !m["document"].empty()) {
      document = make_shared<string>(boost::any_cast<string>(m["document"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["gmtModified"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("logicalStatus") != m.end() && !m["logicalStatus"].empty()) {
      logicalStatus = make_shared<string>(boost::any_cast<string>(m["logicalStatus"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["modifier"]));
    }
    if (m.find("parentIdentifier") != m.end() && !m["parentIdentifier"].empty()) {
      parentIdentifier = make_shared<string>(boost::any_cast<string>(m["parentIdentifier"]));
    }
    if (m.find("serialNumber") != m.end() && !m["serialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["serialNumber"]));
    }
    if (m.find("spaceIdentifier") != m.end() && !m["spaceIdentifier"].empty()) {
      spaceIdentifier = make_shared<string>(boost::any_cast<string>(m["spaceIdentifier"]));
    }
    if (m.find("spaceName") != m.end() && !m["spaceName"].empty()) {
      spaceName = make_shared<string>(boost::any_cast<string>(m["spaceName"]));
    }
    if (m.find("spaceType") != m.end() && !m["spaceType"].empty()) {
      spaceType = make_shared<string>(boost::any_cast<string>(m["spaceType"]));
    }
    if (m.find("sprintIdentifier") != m.end() && !m["sprintIdentifier"].empty()) {
      sprintIdentifier = make_shared<string>(boost::any_cast<string>(m["sprintIdentifier"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("statusIdentifier") != m.end() && !m["statusIdentifier"].empty()) {
      statusIdentifier = make_shared<string>(boost::any_cast<string>(m["statusIdentifier"]));
    }
    if (m.find("statusStageIdentifier") != m.end() && !m["statusStageIdentifier"].empty()) {
      statusStageIdentifier = make_shared<string>(boost::any_cast<string>(m["statusStageIdentifier"]));
    }
    if (m.find("subject") != m.end() && !m["subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["subject"]));
    }
    if (m.find("updateStatusAt") != m.end() && !m["updateStatusAt"].empty()) {
      updateStatusAt = make_shared<long>(boost::any_cast<long>(m["updateStatusAt"]));
    }
    if (m.find("workitemTypeIdentifier") != m.end() && !m["workitemTypeIdentifier"].empty()) {
      workitemTypeIdentifier = make_shared<string>(boost::any_cast<string>(m["workitemTypeIdentifier"]));
    }
  }


  virtual ~UpdateWorkItemResponseBodyWorkitem() = default;
};
class UpdateWorkItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<UpdateWorkItemResponseBodyWorkitem> workitem{};

  UpdateWorkItemResponseBody() {}

  explicit UpdateWorkItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (workitem) {
      res["workitem"] = workitem ? boost::any(workitem->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("workitem") != m.end() && !m["workitem"].empty()) {
      if (typeid(map<string, boost::any>) == m["workitem"].type()) {
        UpdateWorkItemResponseBodyWorkitem model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["workitem"]));
        workitem = make_shared<UpdateWorkItemResponseBodyWorkitem>(model1);
      }
    }
  }


  virtual ~UpdateWorkItemResponseBody() = default;
};
class UpdateWorkItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateWorkItemResponseBody> body{};

  UpdateWorkItemResponse() {}

  explicit UpdateWorkItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateWorkItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateWorkItemResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateWorkItemResponse() = default;
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
  AddRepositoryMemberResponse addRepositoryMember(shared_ptr<string> repositoryId, shared_ptr<AddRepositoryMemberRequest> request);
  AddRepositoryMemberResponse addRepositoryMemberWithOptions(shared_ptr<string> repositoryId,
                                                             shared_ptr<AddRepositoryMemberRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddWebhookResponse addWebhook(shared_ptr<string> repositoryId, shared_ptr<AddWebhookRequest> request);
  AddWebhookResponse addWebhookWithOptions(shared_ptr<string> repositoryId,
                                           shared_ptr<AddWebhookRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFileResponse createFile(shared_ptr<string> repositoryId, shared_ptr<CreateFileRequest> request);
  CreateFileResponse createFileWithOptions(shared_ptr<string> repositoryId,
                                           shared_ptr<CreateFileRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFlowTagResponse createFlowTag(shared_ptr<string> organizationId, shared_ptr<CreateFlowTagRequest> request);
  CreateFlowTagResponse createFlowTagWithOptions(shared_ptr<string> organizationId,
                                                 shared_ptr<CreateFlowTagRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFlowTagGroupResponse createFlowTagGroup(shared_ptr<string> organizationId, shared_ptr<CreateFlowTagGroupRequest> request);
  CreateFlowTagGroupResponse createFlowTagGroupWithOptions(shared_ptr<string> organizationId,
                                                           shared_ptr<CreateFlowTagGroupRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateHostGroupResponse createHostGroup(shared_ptr<string> organizationId, shared_ptr<CreateHostGroupRequest> request);
  CreateHostGroupResponse createHostGroupWithOptions(shared_ptr<string> organizationId,
                                                     shared_ptr<CreateHostGroupRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateOAuthTokenResponse createOAuthToken(shared_ptr<CreateOAuthTokenRequest> request);
  CreateOAuthTokenResponse createOAuthTokenWithOptions(shared_ptr<CreateOAuthTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePipelineGroupResponse createPipelineGroup(shared_ptr<string> organizationId, shared_ptr<CreatePipelineGroupRequest> request);
  CreatePipelineGroupResponse createPipelineGroupWithOptions(shared_ptr<string> organizationId,
                                                             shared_ptr<CreatePipelineGroupRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProjectResponse createProject(shared_ptr<string> organizationId, shared_ptr<CreateProjectRequest> request);
  CreateProjectResponse createProjectWithOptions(shared_ptr<string> organizationId,
                                                 shared_ptr<CreateProjectRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRepositoryResponse createRepository(shared_ptr<CreateRepositoryRequest> request);
  CreateRepositoryResponse createRepositoryWithOptions(shared_ptr<CreateRepositoryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateResourceMemberResponse createResourceMember(shared_ptr<string> organizationId,
                                                    shared_ptr<string> resourceType,
                                                    shared_ptr<string> resourceId,
                                                    shared_ptr<CreateResourceMemberRequest> request);
  CreateResourceMemberResponse createResourceMemberWithOptions(shared_ptr<string> organizationId,
                                                               shared_ptr<string> resourceType,
                                                               shared_ptr<string> resourceId,
                                                               shared_ptr<CreateResourceMemberRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSprintResponse createSprint(shared_ptr<string> organizationId, shared_ptr<CreateSprintRequest> request);
  CreateSprintResponse createSprintWithOptions(shared_ptr<string> organizationId,
                                               shared_ptr<CreateSprintRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSshKeyResponse createSshKey(shared_ptr<string> organizationId);
  CreateSshKeyResponse createSshKeyWithOptions(shared_ptr<string> organizationId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVariableGroupResponse createVariableGroup(shared_ptr<string> organizationId, shared_ptr<CreateVariableGroupRequest> request);
  CreateVariableGroupResponse createVariableGroupWithOptions(shared_ptr<string> organizationId,
                                                             shared_ptr<CreateVariableGroupRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateWorkitemResponse createWorkitem(shared_ptr<string> organizationId, shared_ptr<CreateWorkitemRequest> request);
  CreateWorkitemResponse createWorkitemWithOptions(shared_ptr<string> organizationId,
                                                   shared_ptr<CreateWorkitemRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateWorkspaceResponse createWorkspace(shared_ptr<CreateWorkspaceRequest> request);
  CreateWorkspaceResponse createWorkspaceWithOptions(shared_ptr<CreateWorkspaceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFileResponse deleteFile(shared_ptr<string> repositoryId, shared_ptr<DeleteFileRequest> request);
  DeleteFileResponse deleteFileWithOptions(shared_ptr<string> repositoryId,
                                           shared_ptr<DeleteFileRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFlowTagResponse deleteFlowTag(shared_ptr<string> organizationId, shared_ptr<string> id);
  DeleteFlowTagResponse deleteFlowTagWithOptions(shared_ptr<string> organizationId,
                                                 shared_ptr<string> id,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFlowTagGroupResponse deleteFlowTagGroup(shared_ptr<string> organizationId, shared_ptr<string> id);
  DeleteFlowTagGroupResponse deleteFlowTagGroupWithOptions(shared_ptr<string> organizationId,
                                                           shared_ptr<string> id,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteHostGroupResponse deleteHostGroup(shared_ptr<string> organizationId, shared_ptr<string> id);
  DeleteHostGroupResponse deleteHostGroupWithOptions(shared_ptr<string> organizationId,
                                                     shared_ptr<string> id,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePipelineResponse deletePipeline(shared_ptr<string> organizationId, shared_ptr<string> pipelineId);
  DeletePipelineResponse deletePipelineWithOptions(shared_ptr<string> organizationId,
                                                   shared_ptr<string> pipelineId,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePipelineGroupResponse deletePipelineGroup(shared_ptr<string> organizationId, shared_ptr<string> groupId);
  DeletePipelineGroupResponse deletePipelineGroupWithOptions(shared_ptr<string> organizationId,
                                                             shared_ptr<string> groupId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProjectResponse deleteProject(shared_ptr<string> organizationId, shared_ptr<DeleteProjectRequest> request);
  DeleteProjectResponse deleteProjectWithOptions(shared_ptr<string> organizationId,
                                                 shared_ptr<DeleteProjectRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRepositoryResponse deleteRepository(shared_ptr<string> repositoryId, shared_ptr<DeleteRepositoryRequest> request);
  DeleteRepositoryResponse deleteRepositoryWithOptions(shared_ptr<string> repositoryId,
                                                       shared_ptr<DeleteRepositoryRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteResourceMemberResponse deleteResourceMember(shared_ptr<string> organizationId,
                                                    shared_ptr<string> resourceType,
                                                    shared_ptr<string> resourceId,
                                                    shared_ptr<string> accountId);
  DeleteResourceMemberResponse deleteResourceMemberWithOptions(shared_ptr<string> organizationId,
                                                               shared_ptr<string> resourceType,
                                                               shared_ptr<string> resourceId,
                                                               shared_ptr<string> accountId,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVariableGroupResponse deleteVariableGroup(shared_ptr<string> organizationId, shared_ptr<string> id);
  DeleteVariableGroupResponse deleteVariableGroupWithOptions(shared_ptr<string> organizationId,
                                                             shared_ptr<string> id,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FrozenWorkspaceResponse frozenWorkspace(shared_ptr<string> workspaceId);
  FrozenWorkspaceResponse frozenWorkspaceWithOptions(shared_ptr<string> workspaceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCodeupOrganizationResponse getCodeupOrganization(shared_ptr<string> identity, shared_ptr<GetCodeupOrganizationRequest> request);
  GetCodeupOrganizationResponse getCodeupOrganizationWithOptions(shared_ptr<string> identity,
                                                                 shared_ptr<GetCodeupOrganizationRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCustomFieldOptionResponse getCustomFieldOption(shared_ptr<string> organizationId, shared_ptr<string> fieldId, shared_ptr<GetCustomFieldOptionRequest> request);
  GetCustomFieldOptionResponse getCustomFieldOptionWithOptions(shared_ptr<string> organizationId,
                                                               shared_ptr<string> fieldId,
                                                               shared_ptr<GetCustomFieldOptionRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFileBlobsResponse getFileBlobs(shared_ptr<string> repositoryId, shared_ptr<GetFileBlobsRequest> request);
  GetFileBlobsResponse getFileBlobsWithOptions(shared_ptr<string> repositoryId,
                                               shared_ptr<GetFileBlobsRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFileLastCommitResponse getFileLastCommit(shared_ptr<string> repositoryId, shared_ptr<GetFileLastCommitRequest> request);
  GetFileLastCommitResponse getFileLastCommitWithOptions(shared_ptr<string> repositoryId,
                                                         shared_ptr<GetFileLastCommitRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFlowTagGroupResponse getFlowTagGroup(shared_ptr<string> organizationId, shared_ptr<string> id);
  GetFlowTagGroupResponse getFlowTagGroupWithOptions(shared_ptr<string> organizationId,
                                                     shared_ptr<string> id,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHostGroupResponse getHostGroup(shared_ptr<string> organizationId, shared_ptr<string> id);
  GetHostGroupResponse getHostGroupWithOptions(shared_ptr<string> organizationId,
                                               shared_ptr<string> id,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOrganizationMemberResponse getOrganizationMember(shared_ptr<string> organizationId, shared_ptr<string> accountId);
  GetOrganizationMemberResponse getOrganizationMemberWithOptions(shared_ptr<string> organizationId,
                                                                 shared_ptr<string> accountId,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPipelineResponse getPipeline(shared_ptr<string> organizationId, shared_ptr<string> pipelineId);
  GetPipelineResponse getPipelineWithOptions(shared_ptr<string> organizationId,
                                             shared_ptr<string> pipelineId,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPipelineArtifactUrlResponse getPipelineArtifactUrl(shared_ptr<string> organizationId, shared_ptr<GetPipelineArtifactUrlRequest> request);
  GetPipelineArtifactUrlResponse getPipelineArtifactUrlWithOptions(shared_ptr<string> organizationId,
                                                                   shared_ptr<GetPipelineArtifactUrlRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPipelineEmasArtifactUrlResponse getPipelineEmasArtifactUrl(shared_ptr<string> organizationId,
                                                                shared_ptr<string> emasJobInstanceId,
                                                                shared_ptr<string> md5,
                                                                shared_ptr<string> pipelineId,
                                                                shared_ptr<string> pipelineRunId,
                                                                shared_ptr<GetPipelineEmasArtifactUrlRequest> request);
  GetPipelineEmasArtifactUrlResponse getPipelineEmasArtifactUrlWithOptions(shared_ptr<string> organizationId,
                                                                           shared_ptr<string> emasJobInstanceId,
                                                                           shared_ptr<string> md5,
                                                                           shared_ptr<string> pipelineId,
                                                                           shared_ptr<string> pipelineRunId,
                                                                           shared_ptr<GetPipelineEmasArtifactUrlRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPipelineGroupResponse getPipelineGroup(shared_ptr<string> organizationId, shared_ptr<string> groupId);
  GetPipelineGroupResponse getPipelineGroupWithOptions(shared_ptr<string> organizationId,
                                                       shared_ptr<string> groupId,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPipelineRunResponse getPipelineRun(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<string> pipelineRunId);
  GetPipelineRunResponse getPipelineRunWithOptions(shared_ptr<string> organizationId,
                                                   shared_ptr<string> pipelineId,
                                                   shared_ptr<string> pipelineRunId,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPipelineScanReportUrlResponse getPipelineScanReportUrl(shared_ptr<string> organizationId, shared_ptr<GetPipelineScanReportUrlRequest> request);
  GetPipelineScanReportUrlResponse getPipelineScanReportUrlWithOptions(shared_ptr<string> organizationId,
                                                                       shared_ptr<GetPipelineScanReportUrlRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectInfoResponse getProjectInfo(shared_ptr<string> organizationId, shared_ptr<string> projectId);
  GetProjectInfoResponse getProjectInfoWithOptions(shared_ptr<string> organizationId,
                                                   shared_ptr<string> projectId,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectMemberResponse getProjectMember(shared_ptr<GetProjectMemberRequest> request);
  GetProjectMemberResponse getProjectMemberWithOptions(shared_ptr<GetProjectMemberRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRepositoryResponse getRepository(shared_ptr<GetRepositoryRequest> request);
  GetRepositoryResponse getRepositoryWithOptions(shared_ptr<GetRepositoryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSprintInfoResponse getSprintInfo(shared_ptr<string> organizationId, shared_ptr<string> sprintId);
  GetSprintInfoResponse getSprintInfoWithOptions(shared_ptr<string> organizationId,
                                                 shared_ptr<string> sprintId,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVMDeployOrderResponse getVMDeployOrder(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<string> deployOrderId);
  GetVMDeployOrderResponse getVMDeployOrderWithOptions(shared_ptr<string> organizationId,
                                                       shared_ptr<string> pipelineId,
                                                       shared_ptr<string> deployOrderId,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVariableGroupResponse getVariableGroup(shared_ptr<string> organizationId, shared_ptr<string> id);
  GetVariableGroupResponse getVariableGroupWithOptions(shared_ptr<string> organizationId,
                                                       shared_ptr<string> id,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWorkItemActivityResponse getWorkItemActivity(shared_ptr<string> organizationId, shared_ptr<string> workitemId);
  GetWorkItemActivityResponse getWorkItemActivityWithOptions(shared_ptr<string> organizationId,
                                                             shared_ptr<string> workitemId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWorkItemInfoResponse getWorkItemInfo(shared_ptr<string> organizationId, shared_ptr<string> workitemId);
  GetWorkItemInfoResponse getWorkItemInfoWithOptions(shared_ptr<string> organizationId,
                                                     shared_ptr<string> workitemId,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWorkItemWorkFlowInfoResponse getWorkItemWorkFlowInfo(shared_ptr<string> organizationId, shared_ptr<string> workitemId, shared_ptr<GetWorkItemWorkFlowInfoRequest> request);
  GetWorkItemWorkFlowInfoResponse getWorkItemWorkFlowInfoWithOptions(shared_ptr<string> organizationId,
                                                                     shared_ptr<string> workitemId,
                                                                     shared_ptr<GetWorkItemWorkFlowInfoRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWorkspaceResponse getWorkspace(shared_ptr<string> workspaceId);
  GetWorkspaceResponse getWorkspaceWithOptions(shared_ptr<string> workspaceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  JoinPipelineGroupResponse joinPipelineGroup(shared_ptr<string> organizationId, shared_ptr<JoinPipelineGroupRequest> request);
  JoinPipelineGroupResponse joinPipelineGroupWithOptions(shared_ptr<string> organizationId,
                                                         shared_ptr<JoinPipelineGroupRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFlowTagGroupsResponse listFlowTagGroups(shared_ptr<string> organizationId);
  ListFlowTagGroupsResponse listFlowTagGroupsWithOptions(shared_ptr<string> organizationId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHostGroupsResponse listHostGroups(shared_ptr<string> organizationId, shared_ptr<ListHostGroupsRequest> request);
  ListHostGroupsResponse listHostGroupsWithOptions(shared_ptr<string> organizationId,
                                                   shared_ptr<ListHostGroupsRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOrganizationMembersResponse listOrganizationMembers(shared_ptr<string> organizationId, shared_ptr<ListOrganizationMembersRequest> request);
  ListOrganizationMembersResponse listOrganizationMembersWithOptions(shared_ptr<string> organizationId,
                                                                     shared_ptr<ListOrganizationMembersRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPipelineGroupPipelinesResponse listPipelineGroupPipelines(shared_ptr<string> organizationId, shared_ptr<string> groupId, shared_ptr<ListPipelineGroupPipelinesRequest> request);
  ListPipelineGroupPipelinesResponse listPipelineGroupPipelinesWithOptions(shared_ptr<string> organizationId,
                                                                           shared_ptr<string> groupId,
                                                                           shared_ptr<ListPipelineGroupPipelinesRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPipelineGroupsResponse listPipelineGroups(shared_ptr<string> organizationId, shared_ptr<ListPipelineGroupsRequest> request);
  ListPipelineGroupsResponse listPipelineGroupsWithOptions(shared_ptr<string> organizationId,
                                                           shared_ptr<ListPipelineGroupsRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPipelineJobHistorysResponse listPipelineJobHistorys(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<ListPipelineJobHistorysRequest> request);
  ListPipelineJobHistorysResponse listPipelineJobHistorysWithOptions(shared_ptr<string> organizationId,
                                                                     shared_ptr<string> pipelineId,
                                                                     shared_ptr<ListPipelineJobHistorysRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPipelineJobsResponse listPipelineJobs(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<ListPipelineJobsRequest> request);
  ListPipelineJobsResponse listPipelineJobsWithOptions(shared_ptr<string> organizationId,
                                                       shared_ptr<string> pipelineId,
                                                       shared_ptr<ListPipelineJobsRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPipelineRunsResponse listPipelineRuns(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<ListPipelineRunsRequest> request);
  ListPipelineRunsResponse listPipelineRunsWithOptions(shared_ptr<string> organizationId,
                                                       shared_ptr<string> pipelineId,
                                                       shared_ptr<ListPipelineRunsRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPipelinesResponse listPipelines(shared_ptr<string> organizationId, shared_ptr<ListPipelinesRequest> request);
  ListPipelinesResponse listPipelinesWithOptions(shared_ptr<string> organizationId,
                                                 shared_ptr<ListPipelinesRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProjectMembersResponse listProjectMembers(shared_ptr<string> organizationId, shared_ptr<string> projectId, shared_ptr<ListProjectMembersRequest> request);
  ListProjectMembersResponse listProjectMembersWithOptions(shared_ptr<string> organizationId,
                                                           shared_ptr<string> projectId,
                                                           shared_ptr<ListProjectMembersRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProjectTemplatesResponse listProjectTemplates(shared_ptr<string> organizationId, shared_ptr<ListProjectTemplatesRequest> request);
  ListProjectTemplatesResponse listProjectTemplatesWithOptions(shared_ptr<string> organizationId,
                                                               shared_ptr<ListProjectTemplatesRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProjectWorkitemTypesResponse listProjectWorkitemTypes(shared_ptr<string> organizationId, shared_ptr<string> projectId, shared_ptr<ListProjectWorkitemTypesRequest> request);
  ListProjectWorkitemTypesResponse listProjectWorkitemTypesWithOptions(shared_ptr<string> organizationId,
                                                                       shared_ptr<string> projectId,
                                                                       shared_ptr<ListProjectWorkitemTypesRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProjectsResponse listProjects(shared_ptr<string> organizationId, shared_ptr<ListProjectsRequest> request);
  ListProjectsResponse listProjectsWithOptions(shared_ptr<string> organizationId,
                                               shared_ptr<ListProjectsRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRepositoriesResponse listRepositories(shared_ptr<ListRepositoriesRequest> request);
  ListRepositoriesResponse listRepositoriesWithOptions(shared_ptr<ListRepositoriesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRepositoryCommitDiffResponse listRepositoryCommitDiff(shared_ptr<string> repositoryId, shared_ptr<string> sha, shared_ptr<ListRepositoryCommitDiffRequest> request);
  ListRepositoryCommitDiffResponse listRepositoryCommitDiffWithOptions(shared_ptr<string> repositoryId,
                                                                       shared_ptr<string> sha,
                                                                       shared_ptr<ListRepositoryCommitDiffRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRepositoryMemberWithInheritedResponse listRepositoryMemberWithInherited(shared_ptr<string> repositoryId, shared_ptr<ListRepositoryMemberWithInheritedRequest> request);
  ListRepositoryMemberWithInheritedResponse listRepositoryMemberWithInheritedWithOptions(shared_ptr<string> repositoryId,
                                                                                         shared_ptr<ListRepositoryMemberWithInheritedRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRepositoryTreeResponse listRepositoryTree(shared_ptr<string> repositoryId, shared_ptr<ListRepositoryTreeRequest> request);
  ListRepositoryTreeResponse listRepositoryTreeWithOptions(shared_ptr<string> repositoryId,
                                                           shared_ptr<ListRepositoryTreeRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRepositoryWebhookResponse listRepositoryWebhook(shared_ptr<string> repositoryId, shared_ptr<ListRepositoryWebhookRequest> request);
  ListRepositoryWebhookResponse listRepositoryWebhookWithOptions(shared_ptr<string> repositoryId,
                                                                 shared_ptr<ListRepositoryWebhookRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourceMembersResponse listResourceMembers(shared_ptr<string> organizationId, shared_ptr<string> resourceType, shared_ptr<string> resourceId);
  ListResourceMembersResponse listResourceMembersWithOptions(shared_ptr<string> organizationId,
                                                             shared_ptr<string> resourceType,
                                                             shared_ptr<string> resourceId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceConnectionsResponse listServiceConnections(shared_ptr<string> organizationId, shared_ptr<ListServiceConnectionsRequest> request);
  ListServiceConnectionsResponse listServiceConnectionsWithOptions(shared_ptr<string> organizationId,
                                                                   shared_ptr<ListServiceConnectionsRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSprintsResponse listSprints(shared_ptr<string> organizationId, shared_ptr<ListSprintsRequest> request);
  ListSprintsResponse listSprintsWithOptions(shared_ptr<string> organizationId,
                                             shared_ptr<ListSprintsRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVariableGroupsResponse listVariableGroups(shared_ptr<string> organizationId, shared_ptr<ListVariableGroupsRequest> request);
  ListVariableGroupsResponse listVariableGroupsWithOptions(shared_ptr<string> organizationId,
                                                           shared_ptr<ListVariableGroupsRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWorkItemAllFieldsResponse listWorkItemAllFields(shared_ptr<string> organizationId, shared_ptr<ListWorkItemAllFieldsRequest> request);
  ListWorkItemAllFieldsResponse listWorkItemAllFieldsWithOptions(shared_ptr<string> organizationId,
                                                                 shared_ptr<ListWorkItemAllFieldsRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWorkItemWorkFlowStatusResponse listWorkItemWorkFlowStatus(shared_ptr<string> organizationId, shared_ptr<ListWorkItemWorkFlowStatusRequest> request);
  ListWorkItemWorkFlowStatusResponse listWorkItemWorkFlowStatusWithOptions(shared_ptr<string> organizationId,
                                                                           shared_ptr<ListWorkItemWorkFlowStatusRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWorkitemTimeResponse listWorkitemTime(shared_ptr<string> organizationId, shared_ptr<string> workitemId);
  ListWorkitemTimeResponse listWorkitemTimeWithOptions(shared_ptr<string> organizationId,
                                                       shared_ptr<string> workitemId,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWorkitemsResponse listWorkitems(shared_ptr<string> organizationId, shared_ptr<ListWorkitemsRequest> request);
  ListWorkitemsResponse listWorkitemsWithOptions(shared_ptr<string> organizationId,
                                                 shared_ptr<ListWorkitemsRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWorkspacesResponse listWorkspaces(shared_ptr<ListWorkspacesRequest> request);
  ListWorkspacesResponse listWorkspacesWithOptions(shared_ptr<ListWorkspacesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LogPipelineJobRunResponse logPipelineJobRun(shared_ptr<string> organizationId,
                                              shared_ptr<string> pipelineId,
                                              shared_ptr<string> jobId,
                                              shared_ptr<string> pipelineRunId);
  LogPipelineJobRunResponse logPipelineJobRunWithOptions(shared_ptr<string> organizationId,
                                                         shared_ptr<string> pipelineId,
                                                         shared_ptr<string> jobId,
                                                         shared_ptr<string> pipelineRunId,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LogVMDeployMachineResponse logVMDeployMachine(shared_ptr<string> organizationId,
                                                shared_ptr<string> pipelineId,
                                                shared_ptr<string> deployOrderId,
                                                shared_ptr<string> machineSn);
  LogVMDeployMachineResponse logVMDeployMachineWithOptions(shared_ptr<string> organizationId,
                                                           shared_ptr<string> pipelineId,
                                                           shared_ptr<string> deployOrderId,
                                                           shared_ptr<string> machineSn,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PassPipelineValidateResponse passPipelineValidate(shared_ptr<string> organizationId,
                                                    shared_ptr<string> pipelineId,
                                                    shared_ptr<string> pipelineRunId,
                                                    shared_ptr<string> jobId);
  PassPipelineValidateResponse passPipelineValidateWithOptions(shared_ptr<string> organizationId,
                                                               shared_ptr<string> pipelineId,
                                                               shared_ptr<string> pipelineRunId,
                                                               shared_ptr<string> jobId,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefusePipelineValidateResponse refusePipelineValidate(shared_ptr<string> organizationId,
                                                        shared_ptr<string> pipelineId,
                                                        shared_ptr<string> pipelineRunId,
                                                        shared_ptr<string> jobId);
  RefusePipelineValidateResponse refusePipelineValidateWithOptions(shared_ptr<string> organizationId,
                                                                   shared_ptr<string> pipelineId,
                                                                   shared_ptr<string> pipelineRunId,
                                                                   shared_ptr<string> jobId,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseWorkspaceResponse releaseWorkspace(shared_ptr<string> workspaceId);
  ReleaseWorkspaceResponse releaseWorkspaceWithOptions(shared_ptr<string> workspaceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetSshKeyResponse resetSshKey(shared_ptr<string> organizationId);
  ResetSshKeyResponse resetSshKeyWithOptions(shared_ptr<string> organizationId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResumeVMDeployOrderResponse resumeVMDeployOrder(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<string> deployOrderId);
  ResumeVMDeployOrderResponse resumeVMDeployOrderWithOptions(shared_ptr<string> organizationId,
                                                             shared_ptr<string> pipelineId,
                                                             shared_ptr<string> deployOrderId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RetryPipelineJobRunResponse retryPipelineJobRun(shared_ptr<string> organizationId,
                                                  shared_ptr<string> pipelineId,
                                                  shared_ptr<string> pipelineRunId,
                                                  shared_ptr<string> jobId);
  RetryPipelineJobRunResponse retryPipelineJobRunWithOptions(shared_ptr<string> organizationId,
                                                             shared_ptr<string> pipelineId,
                                                             shared_ptr<string> pipelineRunId,
                                                             shared_ptr<string> jobId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RetryVMDeployMachineResponse retryVMDeployMachine(shared_ptr<string> organizationId,
                                                    shared_ptr<string> pipelineId,
                                                    shared_ptr<string> deployOrderId,
                                                    shared_ptr<string> machineSn);
  RetryVMDeployMachineResponse retryVMDeployMachineWithOptions(shared_ptr<string> organizationId,
                                                               shared_ptr<string> pipelineId,
                                                               shared_ptr<string> deployOrderId,
                                                               shared_ptr<string> machineSn,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SkipPipelineJobRunResponse skipPipelineJobRun(shared_ptr<string> organizationId,
                                                shared_ptr<string> pipelineId,
                                                shared_ptr<string> pipelineRunId,
                                                shared_ptr<string> jobId);
  SkipPipelineJobRunResponse skipPipelineJobRunWithOptions(shared_ptr<string> organizationId,
                                                           shared_ptr<string> pipelineId,
                                                           shared_ptr<string> pipelineRunId,
                                                           shared_ptr<string> jobId,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SkipVMDeployMachineResponse skipVMDeployMachine(shared_ptr<string> organizationId,
                                                  shared_ptr<string> pipelineId,
                                                  shared_ptr<string> deployOrderId,
                                                  shared_ptr<string> machineSn);
  SkipVMDeployMachineResponse skipVMDeployMachineWithOptions(shared_ptr<string> organizationId,
                                                             shared_ptr<string> pipelineId,
                                                             shared_ptr<string> deployOrderId,
                                                             shared_ptr<string> machineSn,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartPipelineRunResponse startPipelineRun(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<StartPipelineRunRequest> request);
  StartPipelineRunResponse startPipelineRunWithOptions(shared_ptr<string> organizationId,
                                                       shared_ptr<string> pipelineId,
                                                       shared_ptr<StartPipelineRunRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopPipelineJobRunResponse stopPipelineJobRun(shared_ptr<string> organizationId,
                                                shared_ptr<string> pipelineId,
                                                shared_ptr<string> pipelineRunId,
                                                shared_ptr<string> jobId);
  StopPipelineJobRunResponse stopPipelineJobRunWithOptions(shared_ptr<string> organizationId,
                                                           shared_ptr<string> pipelineId,
                                                           shared_ptr<string> pipelineRunId,
                                                           shared_ptr<string> jobId,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopPipelineRunResponse stopPipelineRun(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<string> pipelineRunId);
  StopPipelineRunResponse stopPipelineRunWithOptions(shared_ptr<string> organizationId,
                                                     shared_ptr<string> pipelineId,
                                                     shared_ptr<string> pipelineRunId,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopVMDeployOrderResponse stopVMDeployOrder(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<string> deployOrderId);
  StopVMDeployOrderResponse stopVMDeployOrderWithOptions(shared_ptr<string> organizationId,
                                                         shared_ptr<string> pipelineId,
                                                         shared_ptr<string> deployOrderId,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TriggerRepositoryMirrorSyncResponse triggerRepositoryMirrorSync(shared_ptr<string> repositoryId, shared_ptr<TriggerRepositoryMirrorSyncRequest> request);
  TriggerRepositoryMirrorSyncResponse triggerRepositoryMirrorSyncWithOptions(shared_ptr<string> repositoryId,
                                                                             shared_ptr<TriggerRepositoryMirrorSyncRequest> request,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFileResponse updateFile(shared_ptr<string> repositoryId, shared_ptr<UpdateFileRequest> request);
  UpdateFileResponse updateFileWithOptions(shared_ptr<string> repositoryId,
                                           shared_ptr<UpdateFileRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFlowTagResponse updateFlowTag(shared_ptr<string> organizationId, shared_ptr<string> id, shared_ptr<UpdateFlowTagRequest> request);
  UpdateFlowTagResponse updateFlowTagWithOptions(shared_ptr<string> organizationId,
                                                 shared_ptr<string> id,
                                                 shared_ptr<UpdateFlowTagRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFlowTagGroupResponse updateFlowTagGroup(shared_ptr<string> organizationId, shared_ptr<string> id, shared_ptr<UpdateFlowTagGroupRequest> request);
  UpdateFlowTagGroupResponse updateFlowTagGroupWithOptions(shared_ptr<string> organizationId,
                                                           shared_ptr<string> id,
                                                           shared_ptr<UpdateFlowTagGroupRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateHostGroupResponse updateHostGroup(shared_ptr<string> organizationId, shared_ptr<string> id, shared_ptr<UpdateHostGroupRequest> request);
  UpdateHostGroupResponse updateHostGroupWithOptions(shared_ptr<string> organizationId,
                                                     shared_ptr<string> id,
                                                     shared_ptr<UpdateHostGroupRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePipelineBaseInfoResponse updatePipelineBaseInfo(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<UpdatePipelineBaseInfoRequest> request);
  UpdatePipelineBaseInfoResponse updatePipelineBaseInfoWithOptions(shared_ptr<string> organizationId,
                                                                   shared_ptr<string> pipelineId,
                                                                   shared_ptr<UpdatePipelineBaseInfoRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePipelineGroupResponse updatePipelineGroup(shared_ptr<string> organizationId, shared_ptr<string> groupId, shared_ptr<UpdatePipelineGroupRequest> request);
  UpdatePipelineGroupResponse updatePipelineGroupWithOptions(shared_ptr<string> organizationId,
                                                             shared_ptr<string> groupId,
                                                             shared_ptr<UpdatePipelineGroupRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProjectMemberResponse updateProjectMember(shared_ptr<string> organizationId, shared_ptr<string> projectId, shared_ptr<UpdateProjectMemberRequest> request);
  UpdateProjectMemberResponse updateProjectMemberWithOptions(shared_ptr<string> organizationId,
                                                             shared_ptr<string> projectId,
                                                             shared_ptr<UpdateProjectMemberRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProtectedBranchesResponse updateProtectedBranches(shared_ptr<string> repositoryId, shared_ptr<string> id, shared_ptr<UpdateProtectedBranchesRequest> request);
  UpdateProtectedBranchesResponse updateProtectedBranchesWithOptions(shared_ptr<string> repositoryId,
                                                                     shared_ptr<string> id,
                                                                     shared_ptr<UpdateProtectedBranchesRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRepositoryResponse updateRepository(shared_ptr<string> repositoryId, shared_ptr<UpdateRepositoryRequest> request);
  UpdateRepositoryResponse updateRepositoryWithOptions(shared_ptr<string> repositoryId,
                                                       shared_ptr<UpdateRepositoryRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRepositoryMemberResponse updateRepositoryMember(shared_ptr<string> repositoryId, shared_ptr<string> userId, shared_ptr<UpdateRepositoryMemberRequest> request);
  UpdateRepositoryMemberResponse updateRepositoryMemberWithOptions(shared_ptr<string> repositoryId,
                                                                   shared_ptr<string> userId,
                                                                   shared_ptr<UpdateRepositoryMemberRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateResourceMemberResponse updateResourceMember(shared_ptr<string> organizationId,
                                                    shared_ptr<string> resourceType,
                                                    shared_ptr<string> resourceId,
                                                    shared_ptr<string> accountId,
                                                    shared_ptr<UpdateResourceMemberRequest> request);
  UpdateResourceMemberResponse updateResourceMemberWithOptions(shared_ptr<string> organizationId,
                                                               shared_ptr<string> resourceType,
                                                               shared_ptr<string> resourceId,
                                                               shared_ptr<string> accountId,
                                                               shared_ptr<UpdateResourceMemberRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateVariableGroupResponse updateVariableGroup(shared_ptr<string> organizationId, shared_ptr<string> id, shared_ptr<UpdateVariableGroupRequest> request);
  UpdateVariableGroupResponse updateVariableGroupWithOptions(shared_ptr<string> organizationId,
                                                             shared_ptr<string> id,
                                                             shared_ptr<UpdateVariableGroupRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateWorkItemResponse updateWorkItem(shared_ptr<string> organizationId, shared_ptr<UpdateWorkItemRequest> request);
  UpdateWorkItemResponse updateWorkItemWithOptions(shared_ptr<string> organizationId,
                                                   shared_ptr<UpdateWorkItemRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Devops20210625

#endif
