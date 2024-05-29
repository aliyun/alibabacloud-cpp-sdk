// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EIAM20211201_H_
#define ALIBABACLOUD_EIAM20211201_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Eiam20211201 {
class AddUserToOrganizationalUnitsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> organizationalUnitIds{};
  shared_ptr<string> userId{};

  AddUserToOrganizationalUnitsRequest() {}

  explicit AddUserToOrganizationalUnitsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (organizationalUnitIds) {
      res["OrganizationalUnitIds"] = boost::any(*organizationalUnitIds);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrganizationalUnitIds") != m.end() && !m["OrganizationalUnitIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OrganizationalUnitIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OrganizationalUnitIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      organizationalUnitIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~AddUserToOrganizationalUnitsRequest() = default;
};
class AddUserToOrganizationalUnitsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddUserToOrganizationalUnitsResponseBody() {}

  explicit AddUserToOrganizationalUnitsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddUserToOrganizationalUnitsResponseBody() = default;
};
class AddUserToOrganizationalUnitsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddUserToOrganizationalUnitsResponseBody> body{};

  AddUserToOrganizationalUnitsResponse() {}

  explicit AddUserToOrganizationalUnitsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddUserToOrganizationalUnitsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddUserToOrganizationalUnitsResponseBody>(model1);
      }
    }
  }


  virtual ~AddUserToOrganizationalUnitsResponse() = default;
};
class AddUsersToGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> userIds{};

  AddUsersToGroupRequest() {}

  explicit AddUsersToGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (userIds) {
      res["UserIds"] = boost::any(*userIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("UserIds") != m.end() && !m["UserIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AddUsersToGroupRequest() = default;
};
class AddUsersToGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddUsersToGroupResponseBody() {}

  explicit AddUsersToGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddUsersToGroupResponseBody() = default;
};
class AddUsersToGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddUsersToGroupResponseBody> body{};

  AddUsersToGroupResponse() {}

  explicit AddUsersToGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddUsersToGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddUsersToGroupResponseBody>(model1);
      }
    }
  }


  virtual ~AddUsersToGroupResponse() = default;
};
class AuthorizeApplicationToGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<vector<string>> groupIds{};
  shared_ptr<string> instanceId{};

  AuthorizeApplicationToGroupsRequest() {}

  explicit AuthorizeApplicationToGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (groupIds) {
      res["GroupIds"] = boost::any(*groupIds);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["GroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      groupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~AuthorizeApplicationToGroupsRequest() = default;
};
class AuthorizeApplicationToGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AuthorizeApplicationToGroupsResponseBody() {}

  explicit AuthorizeApplicationToGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AuthorizeApplicationToGroupsResponseBody() = default;
};
class AuthorizeApplicationToGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AuthorizeApplicationToGroupsResponseBody> body{};

  AuthorizeApplicationToGroupsResponse() {}

  explicit AuthorizeApplicationToGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AuthorizeApplicationToGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AuthorizeApplicationToGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~AuthorizeApplicationToGroupsResponse() = default;
};
class AuthorizeApplicationToOrganizationalUnitsRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> organizationalUnitIds{};

  AuthorizeApplicationToOrganizationalUnitsRequest() {}

  explicit AuthorizeApplicationToOrganizationalUnitsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (organizationalUnitIds) {
      res["OrganizationalUnitIds"] = boost::any(*organizationalUnitIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrganizationalUnitIds") != m.end() && !m["OrganizationalUnitIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OrganizationalUnitIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OrganizationalUnitIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      organizationalUnitIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AuthorizeApplicationToOrganizationalUnitsRequest() = default;
};
class AuthorizeApplicationToOrganizationalUnitsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AuthorizeApplicationToOrganizationalUnitsResponseBody() {}

  explicit AuthorizeApplicationToOrganizationalUnitsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AuthorizeApplicationToOrganizationalUnitsResponseBody() = default;
};
class AuthorizeApplicationToOrganizationalUnitsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AuthorizeApplicationToOrganizationalUnitsResponseBody> body{};

  AuthorizeApplicationToOrganizationalUnitsResponse() {}

  explicit AuthorizeApplicationToOrganizationalUnitsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AuthorizeApplicationToOrganizationalUnitsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AuthorizeApplicationToOrganizationalUnitsResponseBody>(model1);
      }
    }
  }


  virtual ~AuthorizeApplicationToOrganizationalUnitsResponse() = default;
};
class AuthorizeApplicationToUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> userIds{};

  AuthorizeApplicationToUsersRequest() {}

  explicit AuthorizeApplicationToUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (userIds) {
      res["UserIds"] = boost::any(*userIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("UserIds") != m.end() && !m["UserIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AuthorizeApplicationToUsersRequest() = default;
};
class AuthorizeApplicationToUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AuthorizeApplicationToUsersResponseBody() {}

  explicit AuthorizeApplicationToUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AuthorizeApplicationToUsersResponseBody() = default;
};
class AuthorizeApplicationToUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AuthorizeApplicationToUsersResponseBody> body{};

  AuthorizeApplicationToUsersResponse() {}

  explicit AuthorizeApplicationToUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AuthorizeApplicationToUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AuthorizeApplicationToUsersResponseBody>(model1);
      }
    }
  }


  virtual ~AuthorizeApplicationToUsersResponse() = default;
};
class CreateApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationName{};
  shared_ptr<string> applicationSourceType{};
  shared_ptr<string> applicationTemplateId{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> logoUrl{};
  shared_ptr<string> ssoType{};

  CreateApplicationRequest() {}

  explicit CreateApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    if (applicationSourceType) {
      res["ApplicationSourceType"] = boost::any(*applicationSourceType);
    }
    if (applicationTemplateId) {
      res["ApplicationTemplateId"] = boost::any(*applicationTemplateId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (logoUrl) {
      res["LogoUrl"] = boost::any(*logoUrl);
    }
    if (ssoType) {
      res["SsoType"] = boost::any(*ssoType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
    if (m.find("ApplicationSourceType") != m.end() && !m["ApplicationSourceType"].empty()) {
      applicationSourceType = make_shared<string>(boost::any_cast<string>(m["ApplicationSourceType"]));
    }
    if (m.find("ApplicationTemplateId") != m.end() && !m["ApplicationTemplateId"].empty()) {
      applicationTemplateId = make_shared<string>(boost::any_cast<string>(m["ApplicationTemplateId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LogoUrl") != m.end() && !m["LogoUrl"].empty()) {
      logoUrl = make_shared<string>(boost::any_cast<string>(m["LogoUrl"]));
    }
    if (m.find("SsoType") != m.end() && !m["SsoType"].empty()) {
      ssoType = make_shared<string>(boost::any_cast<string>(m["SsoType"]));
    }
  }


  virtual ~CreateApplicationRequest() = default;
};
class CreateApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> requestId{};

  CreateApplicationResponseBody() {}

  explicit CreateApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateApplicationResponseBody() = default;
};
class CreateApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateApplicationResponseBody> body{};

  CreateApplicationResponse() {}

  explicit CreateApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateApplicationResponse() = default;
};
class CreateApplicationClientSecretRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> instanceId{};

  CreateApplicationClientSecretRequest() {}

  explicit CreateApplicationClientSecretRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~CreateApplicationClientSecretRequest() = default;
};
class CreateApplicationClientSecretResponseBodyApplicationClientSecret : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> clientSecret{};
  shared_ptr<string> secretId{};

  CreateApplicationClientSecretResponseBodyApplicationClientSecret() {}

  explicit CreateApplicationClientSecretResponseBodyApplicationClientSecret(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientSecret) {
      res["ClientSecret"] = boost::any(*clientSecret);
    }
    if (secretId) {
      res["SecretId"] = boost::any(*secretId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientSecret") != m.end() && !m["ClientSecret"].empty()) {
      clientSecret = make_shared<string>(boost::any_cast<string>(m["ClientSecret"]));
    }
    if (m.find("SecretId") != m.end() && !m["SecretId"].empty()) {
      secretId = make_shared<string>(boost::any_cast<string>(m["SecretId"]));
    }
  }


  virtual ~CreateApplicationClientSecretResponseBodyApplicationClientSecret() = default;
};
class CreateApplicationClientSecretResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateApplicationClientSecretResponseBodyApplicationClientSecret> applicationClientSecret{};
  shared_ptr<string> requestId{};

  CreateApplicationClientSecretResponseBody() {}

  explicit CreateApplicationClientSecretResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationClientSecret) {
      res["ApplicationClientSecret"] = applicationClientSecret ? boost::any(applicationClientSecret->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationClientSecret") != m.end() && !m["ApplicationClientSecret"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApplicationClientSecret"].type()) {
        CreateApplicationClientSecretResponseBodyApplicationClientSecret model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApplicationClientSecret"]));
        applicationClientSecret = make_shared<CreateApplicationClientSecretResponseBodyApplicationClientSecret>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateApplicationClientSecretResponseBody() = default;
};
class CreateApplicationClientSecretResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateApplicationClientSecretResponseBody> body{};

  CreateApplicationClientSecretResponse() {}

  explicit CreateApplicationClientSecretResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateApplicationClientSecretResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateApplicationClientSecretResponseBody>(model1);
      }
    }
  }


  virtual ~CreateApplicationClientSecretResponse() = default;
};
class CreateDomainRequestFiling : public Darabonba::Model {
public:
  shared_ptr<string> icpNumber{};

  CreateDomainRequestFiling() {}

  explicit CreateDomainRequestFiling(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (icpNumber) {
      res["IcpNumber"] = boost::any(*icpNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IcpNumber") != m.end() && !m["IcpNumber"].empty()) {
      icpNumber = make_shared<string>(boost::any_cast<string>(m["IcpNumber"]));
    }
  }


  virtual ~CreateDomainRequestFiling() = default;
};
class CreateDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<CreateDomainRequestFiling> filing{};
  shared_ptr<string> instanceId{};

  CreateDomainRequest() {}

  explicit CreateDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (filing) {
      res["Filing"] = filing ? boost::any(filing->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Filing") != m.end() && !m["Filing"].empty()) {
      if (typeid(map<string, boost::any>) == m["Filing"].type()) {
        CreateDomainRequestFiling model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Filing"]));
        filing = make_shared<CreateDomainRequestFiling>(model1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~CreateDomainRequest() = default;
};
class CreateDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> domainId{};
  shared_ptr<string> requestId{};

  CreateDomainResponseBody() {}

  explicit CreateDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDomainResponseBody() = default;
};
class CreateDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDomainResponseBody> body{};

  CreateDomainResponse() {}

  explicit CreateDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDomainResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDomainResponse() = default;
};
class CreateDomainProxyTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainId{};
  shared_ptr<string> instanceId{};

  CreateDomainProxyTokenRequest() {}

  explicit CreateDomainProxyTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~CreateDomainProxyTokenRequest() = default;
};
class CreateDomainProxyTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> domainProxyTokenId{};
  shared_ptr<string> requestId{};

  CreateDomainProxyTokenResponseBody() {}

  explicit CreateDomainProxyTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainProxyTokenId) {
      res["DomainProxyTokenId"] = boost::any(*domainProxyTokenId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainProxyTokenId") != m.end() && !m["DomainProxyTokenId"].empty()) {
      domainProxyTokenId = make_shared<string>(boost::any_cast<string>(m["DomainProxyTokenId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDomainProxyTokenResponseBody() = default;
};
class CreateDomainProxyTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDomainProxyTokenResponseBody> body{};

  CreateDomainProxyTokenResponse() {}

  explicit CreateDomainProxyTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDomainProxyTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDomainProxyTokenResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDomainProxyTokenResponse() = default;
};
class CreateGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> groupExternalId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> instanceId{};

  CreateGroupRequest() {}

  explicit CreateGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupExternalId) {
      res["GroupExternalId"] = boost::any(*groupExternalId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupExternalId") != m.end() && !m["GroupExternalId"].empty()) {
      groupExternalId = make_shared<string>(boost::any_cast<string>(m["GroupExternalId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~CreateGroupRequest() = default;
};
class CreateGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> requestId{};

  CreateGroupResponseBody() {}

  explicit CreateGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateGroupResponseBody() = default;
};
class CreateGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateGroupResponseBody> body{};

  CreateGroupResponse() {}

  explicit CreateGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGroupResponse() = default;
};
class CreateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};

  CreateInstanceRequest() {}

  explicit CreateInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~CreateInstanceRequest() = default;
};
class CreateInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestId{};

  CreateInstanceResponseBody() {}

  explicit CreateInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateInstanceResponseBody() = default;
};
class CreateInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateInstanceResponseBody> body{};

  CreateInstanceResponse() {}

  explicit CreateInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceResponse() = default;
};
class CreateNetworkAccessEndpointRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> networkAccessEndpointName{};
  shared_ptr<vector<string>> vSwitchIds{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcRegionId{};

  CreateNetworkAccessEndpointRequest() {}

  explicit CreateNetworkAccessEndpointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (networkAccessEndpointName) {
      res["NetworkAccessEndpointName"] = boost::any(*networkAccessEndpointName);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcRegionId) {
      res["VpcRegionId"] = boost::any(*vpcRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NetworkAccessEndpointName") != m.end() && !m["NetworkAccessEndpointName"].empty()) {
      networkAccessEndpointName = make_shared<string>(boost::any_cast<string>(m["NetworkAccessEndpointName"]));
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcRegionId") != m.end() && !m["VpcRegionId"].empty()) {
      vpcRegionId = make_shared<string>(boost::any_cast<string>(m["VpcRegionId"]));
    }
  }


  virtual ~CreateNetworkAccessEndpointRequest() = default;
};
class CreateNetworkAccessEndpointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> networkAccessEndpointId{};
  shared_ptr<string> requestId{};

  CreateNetworkAccessEndpointResponseBody() {}

  explicit CreateNetworkAccessEndpointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (networkAccessEndpointId) {
      res["NetworkAccessEndpointId"] = boost::any(*networkAccessEndpointId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetworkAccessEndpointId") != m.end() && !m["NetworkAccessEndpointId"].empty()) {
      networkAccessEndpointId = make_shared<string>(boost::any_cast<string>(m["NetworkAccessEndpointId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateNetworkAccessEndpointResponseBody() = default;
};
class CreateNetworkAccessEndpointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateNetworkAccessEndpointResponseBody> body{};

  CreateNetworkAccessEndpointResponse() {}

  explicit CreateNetworkAccessEndpointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateNetworkAccessEndpointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateNetworkAccessEndpointResponseBody>(model1);
      }
    }
  }


  virtual ~CreateNetworkAccessEndpointResponse() = default;
};
class CreateOrganizationalUnitRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> organizationalUnitExternalId{};
  shared_ptr<string> organizationalUnitName{};
  shared_ptr<string> parentId{};

  CreateOrganizationalUnitRequest() {}

  explicit CreateOrganizationalUnitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (organizationalUnitExternalId) {
      res["OrganizationalUnitExternalId"] = boost::any(*organizationalUnitExternalId);
    }
    if (organizationalUnitName) {
      res["OrganizationalUnitName"] = boost::any(*organizationalUnitName);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrganizationalUnitExternalId") != m.end() && !m["OrganizationalUnitExternalId"].empty()) {
      organizationalUnitExternalId = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitExternalId"]));
    }
    if (m.find("OrganizationalUnitName") != m.end() && !m["OrganizationalUnitName"].empty()) {
      organizationalUnitName = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitName"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
  }


  virtual ~CreateOrganizationalUnitRequest() = default;
};
class CreateOrganizationalUnitResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> organizationalUnitId{};
  shared_ptr<string> requestId{};

  CreateOrganizationalUnitResponseBody() {}

  explicit CreateOrganizationalUnitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (organizationalUnitId) {
      res["OrganizationalUnitId"] = boost::any(*organizationalUnitId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrganizationalUnitId") != m.end() && !m["OrganizationalUnitId"].empty()) {
      organizationalUnitId = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateOrganizationalUnitResponseBody() = default;
};
class CreateOrganizationalUnitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateOrganizationalUnitResponseBody> body{};

  CreateOrganizationalUnitResponse() {}

  explicit CreateOrganizationalUnitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateOrganizationalUnitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateOrganizationalUnitResponseBody>(model1);
      }
    }
  }


  virtual ~CreateOrganizationalUnitResponse() = default;
};
class CreateUserRequestCustomFields : public Darabonba::Model {
public:
  shared_ptr<string> fieldName{};
  shared_ptr<string> fieldValue{};

  CreateUserRequestCustomFields() {}

  explicit CreateUserRequestCustomFields(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldName) {
      res["FieldName"] = boost::any(*fieldName);
    }
    if (fieldValue) {
      res["FieldValue"] = boost::any(*fieldValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FieldName") != m.end() && !m["FieldName"].empty()) {
      fieldName = make_shared<string>(boost::any_cast<string>(m["FieldName"]));
    }
    if (m.find("FieldValue") != m.end() && !m["FieldValue"].empty()) {
      fieldValue = make_shared<string>(boost::any_cast<string>(m["FieldValue"]));
    }
  }


  virtual ~CreateUserRequestCustomFields() = default;
};
class CreateUserRequestPasswordInitializationConfig : public Darabonba::Model {
public:
  shared_ptr<string> passwordForcedUpdateStatus{};
  shared_ptr<string> passwordInitializationPolicyPriority{};
  shared_ptr<string> passwordInitializationType{};
  shared_ptr<vector<string>> userNotificationChannels{};

  CreateUserRequestPasswordInitializationConfig() {}

  explicit CreateUserRequestPasswordInitializationConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (passwordForcedUpdateStatus) {
      res["PasswordForcedUpdateStatus"] = boost::any(*passwordForcedUpdateStatus);
    }
    if (passwordInitializationPolicyPriority) {
      res["PasswordInitializationPolicyPriority"] = boost::any(*passwordInitializationPolicyPriority);
    }
    if (passwordInitializationType) {
      res["PasswordInitializationType"] = boost::any(*passwordInitializationType);
    }
    if (userNotificationChannels) {
      res["UserNotificationChannels"] = boost::any(*userNotificationChannels);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PasswordForcedUpdateStatus") != m.end() && !m["PasswordForcedUpdateStatus"].empty()) {
      passwordForcedUpdateStatus = make_shared<string>(boost::any_cast<string>(m["PasswordForcedUpdateStatus"]));
    }
    if (m.find("PasswordInitializationPolicyPriority") != m.end() && !m["PasswordInitializationPolicyPriority"].empty()) {
      passwordInitializationPolicyPriority = make_shared<string>(boost::any_cast<string>(m["PasswordInitializationPolicyPriority"]));
    }
    if (m.find("PasswordInitializationType") != m.end() && !m["PasswordInitializationType"].empty()) {
      passwordInitializationType = make_shared<string>(boost::any_cast<string>(m["PasswordInitializationType"]));
    }
    if (m.find("UserNotificationChannels") != m.end() && !m["UserNotificationChannels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserNotificationChannels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserNotificationChannels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userNotificationChannels = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateUserRequestPasswordInitializationConfig() = default;
};
class CreateUserRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateUserRequestCustomFields>> customFields{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> email{};
  shared_ptr<bool> emailVerified{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> organizationalUnitIds{};
  shared_ptr<string> password{};
  shared_ptr<CreateUserRequestPasswordInitializationConfig> passwordInitializationConfig{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<bool> phoneNumberVerified{};
  shared_ptr<string> phoneRegion{};
  shared_ptr<string> primaryOrganizationalUnitId{};
  shared_ptr<string> userExternalId{};
  shared_ptr<string> username{};

  CreateUserRequest() {}

  explicit CreateUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customFields) {
      vector<boost::any> temp1;
      for(auto item1:*customFields){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CustomFields"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (emailVerified) {
      res["EmailVerified"] = boost::any(*emailVerified);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (organizationalUnitIds) {
      res["OrganizationalUnitIds"] = boost::any(*organizationalUnitIds);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (passwordInitializationConfig) {
      res["PasswordInitializationConfig"] = passwordInitializationConfig ? boost::any(passwordInitializationConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (phoneNumberVerified) {
      res["PhoneNumberVerified"] = boost::any(*phoneNumberVerified);
    }
    if (phoneRegion) {
      res["PhoneRegion"] = boost::any(*phoneRegion);
    }
    if (primaryOrganizationalUnitId) {
      res["PrimaryOrganizationalUnitId"] = boost::any(*primaryOrganizationalUnitId);
    }
    if (userExternalId) {
      res["UserExternalId"] = boost::any(*userExternalId);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomFields") != m.end() && !m["CustomFields"].empty()) {
      if (typeid(vector<boost::any>) == m["CustomFields"].type()) {
        vector<CreateUserRequestCustomFields> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CustomFields"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateUserRequestCustomFields model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customFields = make_shared<vector<CreateUserRequestCustomFields>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("EmailVerified") != m.end() && !m["EmailVerified"].empty()) {
      emailVerified = make_shared<bool>(boost::any_cast<bool>(m["EmailVerified"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrganizationalUnitIds") != m.end() && !m["OrganizationalUnitIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OrganizationalUnitIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OrganizationalUnitIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      organizationalUnitIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("PasswordInitializationConfig") != m.end() && !m["PasswordInitializationConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["PasswordInitializationConfig"].type()) {
        CreateUserRequestPasswordInitializationConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PasswordInitializationConfig"]));
        passwordInitializationConfig = make_shared<CreateUserRequestPasswordInitializationConfig>(model1);
      }
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("PhoneNumberVerified") != m.end() && !m["PhoneNumberVerified"].empty()) {
      phoneNumberVerified = make_shared<bool>(boost::any_cast<bool>(m["PhoneNumberVerified"]));
    }
    if (m.find("PhoneRegion") != m.end() && !m["PhoneRegion"].empty()) {
      phoneRegion = make_shared<string>(boost::any_cast<string>(m["PhoneRegion"]));
    }
    if (m.find("PrimaryOrganizationalUnitId") != m.end() && !m["PrimaryOrganizationalUnitId"].empty()) {
      primaryOrganizationalUnitId = make_shared<string>(boost::any_cast<string>(m["PrimaryOrganizationalUnitId"]));
    }
    if (m.find("UserExternalId") != m.end() && !m["UserExternalId"].empty()) {
      userExternalId = make_shared<string>(boost::any_cast<string>(m["UserExternalId"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~CreateUserRequest() = default;
};
class CreateUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> userId{};

  CreateUserResponseBody() {}

  explicit CreateUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CreateUserResponseBody() = default;
};
class CreateUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateUserResponseBody> body{};

  CreateUserResponse() {}

  explicit CreateUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateUserResponseBody>(model1);
      }
    }
  }


  virtual ~CreateUserResponse() = default;
};
class DeleteApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> instanceId{};

  DeleteApplicationRequest() {}

  explicit DeleteApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DeleteApplicationRequest() = default;
};
class DeleteApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteApplicationResponseBody() {}

  explicit DeleteApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteApplicationResponseBody() = default;
};
class DeleteApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteApplicationResponseBody> body{};

  DeleteApplicationResponse() {}

  explicit DeleteApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteApplicationResponse() = default;
};
class DeleteApplicationClientSecretRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> secretId{};

  DeleteApplicationClientSecretRequest() {}

  explicit DeleteApplicationClientSecretRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (secretId) {
      res["SecretId"] = boost::any(*secretId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SecretId") != m.end() && !m["SecretId"].empty()) {
      secretId = make_shared<string>(boost::any_cast<string>(m["SecretId"]));
    }
  }


  virtual ~DeleteApplicationClientSecretRequest() = default;
};
class DeleteApplicationClientSecretResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteApplicationClientSecretResponseBody() {}

  explicit DeleteApplicationClientSecretResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteApplicationClientSecretResponseBody() = default;
};
class DeleteApplicationClientSecretResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteApplicationClientSecretResponseBody> body{};

  DeleteApplicationClientSecretResponse() {}

  explicit DeleteApplicationClientSecretResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteApplicationClientSecretResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteApplicationClientSecretResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteApplicationClientSecretResponse() = default;
};
class DeleteDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainId{};
  shared_ptr<string> instanceId{};

  DeleteDomainRequest() {}

  explicit DeleteDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DeleteDomainRequest() = default;
};
class DeleteDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDomainResponseBody() {}

  explicit DeleteDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDomainResponseBody() = default;
};
class DeleteDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDomainResponseBody> body{};

  DeleteDomainResponse() {}

  explicit DeleteDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDomainResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDomainResponse() = default;
};
class DeleteDomainProxyTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainId{};
  shared_ptr<string> domainProxyTokenId{};
  shared_ptr<string> instanceId{};

  DeleteDomainProxyTokenRequest() {}

  explicit DeleteDomainProxyTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (domainProxyTokenId) {
      res["DomainProxyTokenId"] = boost::any(*domainProxyTokenId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("DomainProxyTokenId") != m.end() && !m["DomainProxyTokenId"].empty()) {
      domainProxyTokenId = make_shared<string>(boost::any_cast<string>(m["DomainProxyTokenId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DeleteDomainProxyTokenRequest() = default;
};
class DeleteDomainProxyTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDomainProxyTokenResponseBody() {}

  explicit DeleteDomainProxyTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDomainProxyTokenResponseBody() = default;
};
class DeleteDomainProxyTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDomainProxyTokenResponseBody> body{};

  DeleteDomainProxyTokenResponse() {}

  explicit DeleteDomainProxyTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDomainProxyTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDomainProxyTokenResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDomainProxyTokenResponse() = default;
};
class DeleteGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> instanceId{};

  DeleteGroupRequest() {}

  explicit DeleteGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DeleteGroupRequest() = default;
};
class DeleteGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteGroupResponseBody() {}

  explicit DeleteGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteGroupResponseBody() = default;
};
class DeleteGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteGroupResponseBody> body{};

  DeleteGroupResponse() {}

  explicit DeleteGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGroupResponse() = default;
};
class DeleteInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DeleteInstanceRequest() {}

  explicit DeleteInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DeleteInstanceRequest() = default;
};
class DeleteInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteInstanceResponseBody() {}

  explicit DeleteInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteInstanceResponseBody() = default;
};
class DeleteInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteInstanceResponseBody> body{};

  DeleteInstanceResponse() {}

  explicit DeleteInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInstanceResponse() = default;
};
class DeleteNetworkAccessEndpointRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> networkAccessEndpointId{};

  DeleteNetworkAccessEndpointRequest() {}

  explicit DeleteNetworkAccessEndpointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (networkAccessEndpointId) {
      res["NetworkAccessEndpointId"] = boost::any(*networkAccessEndpointId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NetworkAccessEndpointId") != m.end() && !m["NetworkAccessEndpointId"].empty()) {
      networkAccessEndpointId = make_shared<string>(boost::any_cast<string>(m["NetworkAccessEndpointId"]));
    }
  }


  virtual ~DeleteNetworkAccessEndpointRequest() = default;
};
class DeleteNetworkAccessEndpointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteNetworkAccessEndpointResponseBody() {}

  explicit DeleteNetworkAccessEndpointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteNetworkAccessEndpointResponseBody() = default;
};
class DeleteNetworkAccessEndpointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteNetworkAccessEndpointResponseBody> body{};

  DeleteNetworkAccessEndpointResponse() {}

  explicit DeleteNetworkAccessEndpointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteNetworkAccessEndpointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteNetworkAccessEndpointResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteNetworkAccessEndpointResponse() = default;
};
class DeleteOrganizationalUnitRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> organizationalUnitId{};

  DeleteOrganizationalUnitRequest() {}

  explicit DeleteOrganizationalUnitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (organizationalUnitId) {
      res["OrganizationalUnitId"] = boost::any(*organizationalUnitId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrganizationalUnitId") != m.end() && !m["OrganizationalUnitId"].empty()) {
      organizationalUnitId = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitId"]));
    }
  }


  virtual ~DeleteOrganizationalUnitRequest() = default;
};
class DeleteOrganizationalUnitResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteOrganizationalUnitResponseBody() {}

  explicit DeleteOrganizationalUnitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteOrganizationalUnitResponseBody() = default;
};
class DeleteOrganizationalUnitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteOrganizationalUnitResponseBody> body{};

  DeleteOrganizationalUnitResponse() {}

  explicit DeleteOrganizationalUnitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteOrganizationalUnitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteOrganizationalUnitResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteOrganizationalUnitResponse() = default;
};
class DeleteUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> userId{};

  DeleteUserRequest() {}

  explicit DeleteUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DeleteUserRequest() = default;
};
class DeleteUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteUserResponseBody() {}

  explicit DeleteUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteUserResponseBody() = default;
};
class DeleteUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUserResponseBody> body{};

  DeleteUserResponse() {}

  explicit DeleteUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUserResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUserResponse() = default;
};
class DisableApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> instanceId{};

  DisableApplicationRequest() {}

  explicit DisableApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DisableApplicationRequest() = default;
};
class DisableApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableApplicationResponseBody() {}

  explicit DisableApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableApplicationResponseBody() = default;
};
class DisableApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableApplicationResponseBody> body{};

  DisableApplicationResponse() {}

  explicit DisableApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~DisableApplicationResponse() = default;
};
class DisableApplicationApiInvokeRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> instanceId{};

  DisableApplicationApiInvokeRequest() {}

  explicit DisableApplicationApiInvokeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DisableApplicationApiInvokeRequest() = default;
};
class DisableApplicationApiInvokeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableApplicationApiInvokeResponseBody() {}

  explicit DisableApplicationApiInvokeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableApplicationApiInvokeResponseBody() = default;
};
class DisableApplicationApiInvokeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableApplicationApiInvokeResponseBody> body{};

  DisableApplicationApiInvokeResponse() {}

  explicit DisableApplicationApiInvokeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableApplicationApiInvokeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableApplicationApiInvokeResponseBody>(model1);
      }
    }
  }


  virtual ~DisableApplicationApiInvokeResponse() = default;
};
class DisableApplicationClientSecretRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> secretId{};

  DisableApplicationClientSecretRequest() {}

  explicit DisableApplicationClientSecretRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (secretId) {
      res["SecretId"] = boost::any(*secretId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SecretId") != m.end() && !m["SecretId"].empty()) {
      secretId = make_shared<string>(boost::any_cast<string>(m["SecretId"]));
    }
  }


  virtual ~DisableApplicationClientSecretRequest() = default;
};
class DisableApplicationClientSecretResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableApplicationClientSecretResponseBody() {}

  explicit DisableApplicationClientSecretResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableApplicationClientSecretResponseBody() = default;
};
class DisableApplicationClientSecretResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableApplicationClientSecretResponseBody> body{};

  DisableApplicationClientSecretResponse() {}

  explicit DisableApplicationClientSecretResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableApplicationClientSecretResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableApplicationClientSecretResponseBody>(model1);
      }
    }
  }


  virtual ~DisableApplicationClientSecretResponse() = default;
};
class DisableApplicationProvisioningRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> instanceId{};

  DisableApplicationProvisioningRequest() {}

  explicit DisableApplicationProvisioningRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DisableApplicationProvisioningRequest() = default;
};
class DisableApplicationProvisioningResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableApplicationProvisioningResponseBody() {}

  explicit DisableApplicationProvisioningResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableApplicationProvisioningResponseBody() = default;
};
class DisableApplicationProvisioningResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableApplicationProvisioningResponseBody> body{};

  DisableApplicationProvisioningResponse() {}

  explicit DisableApplicationProvisioningResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableApplicationProvisioningResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableApplicationProvisioningResponseBody>(model1);
      }
    }
  }


  virtual ~DisableApplicationProvisioningResponse() = default;
};
class DisableApplicationSsoRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> instanceId{};

  DisableApplicationSsoRequest() {}

  explicit DisableApplicationSsoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DisableApplicationSsoRequest() = default;
};
class DisableApplicationSsoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableApplicationSsoResponseBody() {}

  explicit DisableApplicationSsoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableApplicationSsoResponseBody() = default;
};
class DisableApplicationSsoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableApplicationSsoResponseBody> body{};

  DisableApplicationSsoResponse() {}

  explicit DisableApplicationSsoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableApplicationSsoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableApplicationSsoResponseBody>(model1);
      }
    }
  }


  virtual ~DisableApplicationSsoResponse() = default;
};
class DisableDomainProxyTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainId{};
  shared_ptr<string> domainProxyTokenId{};
  shared_ptr<string> instanceId{};

  DisableDomainProxyTokenRequest() {}

  explicit DisableDomainProxyTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (domainProxyTokenId) {
      res["DomainProxyTokenId"] = boost::any(*domainProxyTokenId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("DomainProxyTokenId") != m.end() && !m["DomainProxyTokenId"].empty()) {
      domainProxyTokenId = make_shared<string>(boost::any_cast<string>(m["DomainProxyTokenId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DisableDomainProxyTokenRequest() = default;
};
class DisableDomainProxyTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableDomainProxyTokenResponseBody() {}

  explicit DisableDomainProxyTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableDomainProxyTokenResponseBody() = default;
};
class DisableDomainProxyTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableDomainProxyTokenResponseBody> body{};

  DisableDomainProxyTokenResponse() {}

  explicit DisableDomainProxyTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableDomainProxyTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableDomainProxyTokenResponseBody>(model1);
      }
    }
  }


  virtual ~DisableDomainProxyTokenResponse() = default;
};
class DisableInitDomainAutoRedirectRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DisableInitDomainAutoRedirectRequest() {}

  explicit DisableInitDomainAutoRedirectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DisableInitDomainAutoRedirectRequest() = default;
};
class DisableInitDomainAutoRedirectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableInitDomainAutoRedirectResponseBody() {}

  explicit DisableInitDomainAutoRedirectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableInitDomainAutoRedirectResponseBody() = default;
};
class DisableInitDomainAutoRedirectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableInitDomainAutoRedirectResponseBody> body{};

  DisableInitDomainAutoRedirectResponse() {}

  explicit DisableInitDomainAutoRedirectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableInitDomainAutoRedirectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableInitDomainAutoRedirectResponseBody>(model1);
      }
    }
  }


  virtual ~DisableInitDomainAutoRedirectResponse() = default;
};
class DisableUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> userId{};

  DisableUserRequest() {}

  explicit DisableUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DisableUserRequest() = default;
};
class DisableUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableUserResponseBody() {}

  explicit DisableUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableUserResponseBody() = default;
};
class DisableUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableUserResponseBody> body{};

  DisableUserResponse() {}

  explicit DisableUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableUserResponseBody>(model1);
      }
    }
  }


  virtual ~DisableUserResponse() = default;
};
class EnableApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> instanceId{};

  EnableApplicationRequest() {}

  explicit EnableApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~EnableApplicationRequest() = default;
};
class EnableApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableApplicationResponseBody() {}

  explicit EnableApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableApplicationResponseBody() = default;
};
class EnableApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableApplicationResponseBody> body{};

  EnableApplicationResponse() {}

  explicit EnableApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~EnableApplicationResponse() = default;
};
class EnableApplicationApiInvokeRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> instanceId{};

  EnableApplicationApiInvokeRequest() {}

  explicit EnableApplicationApiInvokeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~EnableApplicationApiInvokeRequest() = default;
};
class EnableApplicationApiInvokeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableApplicationApiInvokeResponseBody() {}

  explicit EnableApplicationApiInvokeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableApplicationApiInvokeResponseBody() = default;
};
class EnableApplicationApiInvokeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableApplicationApiInvokeResponseBody> body{};

  EnableApplicationApiInvokeResponse() {}

  explicit EnableApplicationApiInvokeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableApplicationApiInvokeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableApplicationApiInvokeResponseBody>(model1);
      }
    }
  }


  virtual ~EnableApplicationApiInvokeResponse() = default;
};
class EnableApplicationClientSecretRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> secretId{};

  EnableApplicationClientSecretRequest() {}

  explicit EnableApplicationClientSecretRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (secretId) {
      res["SecretId"] = boost::any(*secretId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SecretId") != m.end() && !m["SecretId"].empty()) {
      secretId = make_shared<string>(boost::any_cast<string>(m["SecretId"]));
    }
  }


  virtual ~EnableApplicationClientSecretRequest() = default;
};
class EnableApplicationClientSecretResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableApplicationClientSecretResponseBody() {}

  explicit EnableApplicationClientSecretResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableApplicationClientSecretResponseBody() = default;
};
class EnableApplicationClientSecretResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableApplicationClientSecretResponseBody> body{};

  EnableApplicationClientSecretResponse() {}

  explicit EnableApplicationClientSecretResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableApplicationClientSecretResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableApplicationClientSecretResponseBody>(model1);
      }
    }
  }


  virtual ~EnableApplicationClientSecretResponse() = default;
};
class EnableApplicationProvisioningRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> instanceId{};

  EnableApplicationProvisioningRequest() {}

  explicit EnableApplicationProvisioningRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~EnableApplicationProvisioningRequest() = default;
};
class EnableApplicationProvisioningResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableApplicationProvisioningResponseBody() {}

  explicit EnableApplicationProvisioningResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableApplicationProvisioningResponseBody() = default;
};
class EnableApplicationProvisioningResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableApplicationProvisioningResponseBody> body{};

  EnableApplicationProvisioningResponse() {}

  explicit EnableApplicationProvisioningResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableApplicationProvisioningResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableApplicationProvisioningResponseBody>(model1);
      }
    }
  }


  virtual ~EnableApplicationProvisioningResponse() = default;
};
class EnableApplicationSsoRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> instanceId{};

  EnableApplicationSsoRequest() {}

  explicit EnableApplicationSsoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~EnableApplicationSsoRequest() = default;
};
class EnableApplicationSsoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableApplicationSsoResponseBody() {}

  explicit EnableApplicationSsoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableApplicationSsoResponseBody() = default;
};
class EnableApplicationSsoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableApplicationSsoResponseBody> body{};

  EnableApplicationSsoResponse() {}

  explicit EnableApplicationSsoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableApplicationSsoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableApplicationSsoResponseBody>(model1);
      }
    }
  }


  virtual ~EnableApplicationSsoResponse() = default;
};
class EnableDomainProxyTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainId{};
  shared_ptr<string> domainProxyTokenId{};
  shared_ptr<string> instanceId{};

  EnableDomainProxyTokenRequest() {}

  explicit EnableDomainProxyTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (domainProxyTokenId) {
      res["DomainProxyTokenId"] = boost::any(*domainProxyTokenId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("DomainProxyTokenId") != m.end() && !m["DomainProxyTokenId"].empty()) {
      domainProxyTokenId = make_shared<string>(boost::any_cast<string>(m["DomainProxyTokenId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~EnableDomainProxyTokenRequest() = default;
};
class EnableDomainProxyTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableDomainProxyTokenResponseBody() {}

  explicit EnableDomainProxyTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableDomainProxyTokenResponseBody() = default;
};
class EnableDomainProxyTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableDomainProxyTokenResponseBody> body{};

  EnableDomainProxyTokenResponse() {}

  explicit EnableDomainProxyTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableDomainProxyTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableDomainProxyTokenResponseBody>(model1);
      }
    }
  }


  virtual ~EnableDomainProxyTokenResponse() = default;
};
class EnableInitDomainAutoRedirectRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  EnableInitDomainAutoRedirectRequest() {}

  explicit EnableInitDomainAutoRedirectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~EnableInitDomainAutoRedirectRequest() = default;
};
class EnableInitDomainAutoRedirectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableInitDomainAutoRedirectResponseBody() {}

  explicit EnableInitDomainAutoRedirectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableInitDomainAutoRedirectResponseBody() = default;
};
class EnableInitDomainAutoRedirectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableInitDomainAutoRedirectResponseBody> body{};

  EnableInitDomainAutoRedirectResponse() {}

  explicit EnableInitDomainAutoRedirectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableInitDomainAutoRedirectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableInitDomainAutoRedirectResponseBody>(model1);
      }
    }
  }


  virtual ~EnableInitDomainAutoRedirectResponse() = default;
};
class EnableUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> userId{};

  EnableUserRequest() {}

  explicit EnableUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~EnableUserRequest() = default;
};
class EnableUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableUserResponseBody() {}

  explicit EnableUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableUserResponseBody() = default;
};
class EnableUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableUserResponseBody> body{};

  EnableUserResponse() {}

  explicit EnableUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableUserResponseBody>(model1);
      }
    }
  }


  virtual ~EnableUserResponse() = default;
};
class GetApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> instanceId{};

  GetApplicationRequest() {}

  explicit GetApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetApplicationRequest() = default;
};
class GetApplicationResponseBodyApplication : public Darabonba::Model {
public:
  shared_ptr<string> apiInvokeStatus{};
  shared_ptr<string> applicationId{};
  shared_ptr<string> applicationName{};
  shared_ptr<string> applicationSourceType{};
  shared_ptr<string> applicationTemplateId{};
  shared_ptr<string> authorizationType{};
  shared_ptr<string> clientId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> features{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> logoUrl{};
  shared_ptr<string> managedServiceCode{};
  shared_ptr<bool> serviceManaged{};
  shared_ptr<string> ssoType{};
  shared_ptr<string> status{};
  shared_ptr<long> updateTime{};

  GetApplicationResponseBodyApplication() {}

  explicit GetApplicationResponseBodyApplication(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiInvokeStatus) {
      res["ApiInvokeStatus"] = boost::any(*apiInvokeStatus);
    }
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    if (applicationSourceType) {
      res["ApplicationSourceType"] = boost::any(*applicationSourceType);
    }
    if (applicationTemplateId) {
      res["ApplicationTemplateId"] = boost::any(*applicationTemplateId);
    }
    if (authorizationType) {
      res["AuthorizationType"] = boost::any(*authorizationType);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (features) {
      res["Features"] = boost::any(*features);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (logoUrl) {
      res["LogoUrl"] = boost::any(*logoUrl);
    }
    if (managedServiceCode) {
      res["ManagedServiceCode"] = boost::any(*managedServiceCode);
    }
    if (serviceManaged) {
      res["ServiceManaged"] = boost::any(*serviceManaged);
    }
    if (ssoType) {
      res["SsoType"] = boost::any(*ssoType);
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
    if (m.find("ApiInvokeStatus") != m.end() && !m["ApiInvokeStatus"].empty()) {
      apiInvokeStatus = make_shared<string>(boost::any_cast<string>(m["ApiInvokeStatus"]));
    }
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
    if (m.find("ApplicationSourceType") != m.end() && !m["ApplicationSourceType"].empty()) {
      applicationSourceType = make_shared<string>(boost::any_cast<string>(m["ApplicationSourceType"]));
    }
    if (m.find("ApplicationTemplateId") != m.end() && !m["ApplicationTemplateId"].empty()) {
      applicationTemplateId = make_shared<string>(boost::any_cast<string>(m["ApplicationTemplateId"]));
    }
    if (m.find("AuthorizationType") != m.end() && !m["AuthorizationType"].empty()) {
      authorizationType = make_shared<string>(boost::any_cast<string>(m["AuthorizationType"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Features") != m.end() && !m["Features"].empty()) {
      features = make_shared<string>(boost::any_cast<string>(m["Features"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LogoUrl") != m.end() && !m["LogoUrl"].empty()) {
      logoUrl = make_shared<string>(boost::any_cast<string>(m["LogoUrl"]));
    }
    if (m.find("ManagedServiceCode") != m.end() && !m["ManagedServiceCode"].empty()) {
      managedServiceCode = make_shared<string>(boost::any_cast<string>(m["ManagedServiceCode"]));
    }
    if (m.find("ServiceManaged") != m.end() && !m["ServiceManaged"].empty()) {
      serviceManaged = make_shared<bool>(boost::any_cast<bool>(m["ServiceManaged"]));
    }
    if (m.find("SsoType") != m.end() && !m["SsoType"].empty()) {
      ssoType = make_shared<string>(boost::any_cast<string>(m["SsoType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~GetApplicationResponseBodyApplication() = default;
};
class GetApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetApplicationResponseBodyApplication> application{};
  shared_ptr<string> requestId{};

  GetApplicationResponseBody() {}

  explicit GetApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (application) {
      res["Application"] = application ? boost::any(application->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Application") != m.end() && !m["Application"].empty()) {
      if (typeid(map<string, boost::any>) == m["Application"].type()) {
        GetApplicationResponseBodyApplication model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Application"]));
        application = make_shared<GetApplicationResponseBodyApplication>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetApplicationResponseBody() = default;
};
class GetApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetApplicationResponseBody> body{};

  GetApplicationResponse() {}

  explicit GetApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~GetApplicationResponse() = default;
};
class GetApplicationGrantScopeRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> instanceId{};

  GetApplicationGrantScopeRequest() {}

  explicit GetApplicationGrantScopeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetApplicationGrantScopeRequest() = default;
};
class GetApplicationGrantScopeResponseBodyApplicationGrantScope : public Darabonba::Model {
public:
  shared_ptr<vector<string>> grantScopes{};

  GetApplicationGrantScopeResponseBodyApplicationGrantScope() {}

  explicit GetApplicationGrantScopeResponseBodyApplicationGrantScope(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (grantScopes) {
      res["GrantScopes"] = boost::any(*grantScopes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GrantScopes") != m.end() && !m["GrantScopes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["GrantScopes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GrantScopes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      grantScopes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetApplicationGrantScopeResponseBodyApplicationGrantScope() = default;
};
class GetApplicationGrantScopeResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetApplicationGrantScopeResponseBodyApplicationGrantScope> applicationGrantScope{};
  shared_ptr<string> requestId{};

  GetApplicationGrantScopeResponseBody() {}

  explicit GetApplicationGrantScopeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationGrantScope) {
      res["ApplicationGrantScope"] = applicationGrantScope ? boost::any(applicationGrantScope->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationGrantScope") != m.end() && !m["ApplicationGrantScope"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApplicationGrantScope"].type()) {
        GetApplicationGrantScopeResponseBodyApplicationGrantScope model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApplicationGrantScope"]));
        applicationGrantScope = make_shared<GetApplicationGrantScopeResponseBodyApplicationGrantScope>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetApplicationGrantScopeResponseBody() = default;
};
class GetApplicationGrantScopeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetApplicationGrantScopeResponseBody> body{};

  GetApplicationGrantScopeResponse() {}

  explicit GetApplicationGrantScopeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetApplicationGrantScopeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetApplicationGrantScopeResponseBody>(model1);
      }
    }
  }


  virtual ~GetApplicationGrantScopeResponse() = default;
};
class GetApplicationProvisioningConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> instanceId{};

  GetApplicationProvisioningConfigRequest() {}

  explicit GetApplicationProvisioningConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetApplicationProvisioningConfigRequest() = default;
};
class GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigCallbackProvisioningConfig : public Darabonba::Model {
public:
  shared_ptr<string> callbackUrl{};
  shared_ptr<string> encryptKey{};
  shared_ptr<bool> encryptRequired{};
  shared_ptr<vector<string>> listenEventScopes{};

  GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigCallbackProvisioningConfig() {}

  explicit GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigCallbackProvisioningConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callbackUrl) {
      res["CallbackUrl"] = boost::any(*callbackUrl);
    }
    if (encryptKey) {
      res["EncryptKey"] = boost::any(*encryptKey);
    }
    if (encryptRequired) {
      res["EncryptRequired"] = boost::any(*encryptRequired);
    }
    if (listenEventScopes) {
      res["ListenEventScopes"] = boost::any(*listenEventScopes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallbackUrl") != m.end() && !m["CallbackUrl"].empty()) {
      callbackUrl = make_shared<string>(boost::any_cast<string>(m["CallbackUrl"]));
    }
    if (m.find("EncryptKey") != m.end() && !m["EncryptKey"].empty()) {
      encryptKey = make_shared<string>(boost::any_cast<string>(m["EncryptKey"]));
    }
    if (m.find("EncryptRequired") != m.end() && !m["EncryptRequired"].empty()) {
      encryptRequired = make_shared<bool>(boost::any_cast<bool>(m["EncryptRequired"]));
    }
    if (m.find("ListenEventScopes") != m.end() && !m["ListenEventScopes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ListenEventScopes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ListenEventScopes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      listenEventScopes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigCallbackProvisioningConfig() = default;
};
class GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfigAuthnConfigurationAuthnParam : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> authnMethod{};
  shared_ptr<string> clientId{};
  shared_ptr<string> clientSecret{};
  shared_ptr<string> tokenEndpoint{};

  GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfigAuthnConfigurationAuthnParam() {}

  explicit GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfigAuthnConfigurationAuthnParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (authnMethod) {
      res["AuthnMethod"] = boost::any(*authnMethod);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientSecret) {
      res["ClientSecret"] = boost::any(*clientSecret);
    }
    if (tokenEndpoint) {
      res["TokenEndpoint"] = boost::any(*tokenEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("AuthnMethod") != m.end() && !m["AuthnMethod"].empty()) {
      authnMethod = make_shared<string>(boost::any_cast<string>(m["AuthnMethod"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientSecret") != m.end() && !m["ClientSecret"].empty()) {
      clientSecret = make_shared<string>(boost::any_cast<string>(m["ClientSecret"]));
    }
    if (m.find("TokenEndpoint") != m.end() && !m["TokenEndpoint"].empty()) {
      tokenEndpoint = make_shared<string>(boost::any_cast<string>(m["TokenEndpoint"]));
    }
  }


  virtual ~GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfigAuthnConfigurationAuthnParam() = default;
};
class GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfigAuthnConfiguration : public Darabonba::Model {
public:
  shared_ptr<string> authnMode{};
  shared_ptr<GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfigAuthnConfigurationAuthnParam> authnParam{};
  shared_ptr<string> grantType{};

  GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfigAuthnConfiguration() {}

  explicit GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfigAuthnConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authnMode) {
      res["AuthnMode"] = boost::any(*authnMode);
    }
    if (authnParam) {
      res["AuthnParam"] = authnParam ? boost::any(authnParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (grantType) {
      res["GrantType"] = boost::any(*grantType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthnMode") != m.end() && !m["AuthnMode"].empty()) {
      authnMode = make_shared<string>(boost::any_cast<string>(m["AuthnMode"]));
    }
    if (m.find("AuthnParam") != m.end() && !m["AuthnParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["AuthnParam"].type()) {
        GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfigAuthnConfigurationAuthnParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AuthnParam"]));
        authnParam = make_shared<GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfigAuthnConfigurationAuthnParam>(model1);
      }
    }
    if (m.find("GrantType") != m.end() && !m["GrantType"].empty()) {
      grantType = make_shared<string>(boost::any_cast<string>(m["GrantType"]));
    }
  }


  virtual ~GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfigAuthnConfiguration() = default;
};
class GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig : public Darabonba::Model {
public:
  shared_ptr<GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfigAuthnConfiguration> authnConfiguration{};
  shared_ptr<vector<string>> fullPushScopes{};
  shared_ptr<vector<string>> provisioningActions{};
  shared_ptr<string> scimBaseUrl{};

  GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig() {}

  explicit GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authnConfiguration) {
      res["AuthnConfiguration"] = authnConfiguration ? boost::any(authnConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fullPushScopes) {
      res["FullPushScopes"] = boost::any(*fullPushScopes);
    }
    if (provisioningActions) {
      res["ProvisioningActions"] = boost::any(*provisioningActions);
    }
    if (scimBaseUrl) {
      res["ScimBaseUrl"] = boost::any(*scimBaseUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthnConfiguration") != m.end() && !m["AuthnConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["AuthnConfiguration"].type()) {
        GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfigAuthnConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AuthnConfiguration"]));
        authnConfiguration = make_shared<GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfigAuthnConfiguration>(model1);
      }
    }
    if (m.find("FullPushScopes") != m.end() && !m["FullPushScopes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FullPushScopes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FullPushScopes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fullPushScopes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ProvisioningActions") != m.end() && !m["ProvisioningActions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ProvisioningActions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ProvisioningActions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      provisioningActions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ScimBaseUrl") != m.end() && !m["ScimBaseUrl"].empty()) {
      scimBaseUrl = make_shared<string>(boost::any_cast<string>(m["ScimBaseUrl"]));
    }
  }


  virtual ~GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig() = default;
};
class GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigCallbackProvisioningConfig> callbackProvisioningConfig{};
  shared_ptr<string> configOperateMode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> provisionJwksEndpoint{};
  shared_ptr<bool> provisionPassword{};
  shared_ptr<string> provisionProtocolType{};
  shared_ptr<GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig> scimProvisioningConfig{};
  shared_ptr<string> status{};

  GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig() {}

  explicit GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (callbackProvisioningConfig) {
      res["CallbackProvisioningConfig"] = callbackProvisioningConfig ? boost::any(callbackProvisioningConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (configOperateMode) {
      res["ConfigOperateMode"] = boost::any(*configOperateMode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (provisionJwksEndpoint) {
      res["ProvisionJwksEndpoint"] = boost::any(*provisionJwksEndpoint);
    }
    if (provisionPassword) {
      res["ProvisionPassword"] = boost::any(*provisionPassword);
    }
    if (provisionProtocolType) {
      res["ProvisionProtocolType"] = boost::any(*provisionProtocolType);
    }
    if (scimProvisioningConfig) {
      res["ScimProvisioningConfig"] = scimProvisioningConfig ? boost::any(scimProvisioningConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("CallbackProvisioningConfig") != m.end() && !m["CallbackProvisioningConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CallbackProvisioningConfig"].type()) {
        GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigCallbackProvisioningConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CallbackProvisioningConfig"]));
        callbackProvisioningConfig = make_shared<GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigCallbackProvisioningConfig>(model1);
      }
    }
    if (m.find("ConfigOperateMode") != m.end() && !m["ConfigOperateMode"].empty()) {
      configOperateMode = make_shared<string>(boost::any_cast<string>(m["ConfigOperateMode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ProvisionJwksEndpoint") != m.end() && !m["ProvisionJwksEndpoint"].empty()) {
      provisionJwksEndpoint = make_shared<string>(boost::any_cast<string>(m["ProvisionJwksEndpoint"]));
    }
    if (m.find("ProvisionPassword") != m.end() && !m["ProvisionPassword"].empty()) {
      provisionPassword = make_shared<bool>(boost::any_cast<bool>(m["ProvisionPassword"]));
    }
    if (m.find("ProvisionProtocolType") != m.end() && !m["ProvisionProtocolType"].empty()) {
      provisionProtocolType = make_shared<string>(boost::any_cast<string>(m["ProvisionProtocolType"]));
    }
    if (m.find("ScimProvisioningConfig") != m.end() && !m["ScimProvisioningConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScimProvisioningConfig"].type()) {
        GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScimProvisioningConfig"]));
        scimProvisioningConfig = make_shared<GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig() = default;
};
class GetApplicationProvisioningConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig> applicationProvisioningConfig{};
  shared_ptr<string> requestId{};

  GetApplicationProvisioningConfigResponseBody() {}

  explicit GetApplicationProvisioningConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationProvisioningConfig) {
      res["ApplicationProvisioningConfig"] = applicationProvisioningConfig ? boost::any(applicationProvisioningConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationProvisioningConfig") != m.end() && !m["ApplicationProvisioningConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApplicationProvisioningConfig"].type()) {
        GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApplicationProvisioningConfig"]));
        applicationProvisioningConfig = make_shared<GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetApplicationProvisioningConfigResponseBody() = default;
};
class GetApplicationProvisioningConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetApplicationProvisioningConfigResponseBody> body{};

  GetApplicationProvisioningConfigResponse() {}

  explicit GetApplicationProvisioningConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetApplicationProvisioningConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetApplicationProvisioningConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetApplicationProvisioningConfigResponse() = default;
};
class GetApplicationProvisioningScopeRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> instanceId{};

  GetApplicationProvisioningScopeRequest() {}

  explicit GetApplicationProvisioningScopeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetApplicationProvisioningScopeRequest() = default;
};
class GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope : public Darabonba::Model {
public:
  shared_ptr<vector<string>> groupIds{};
  shared_ptr<long> maxQuota{};
  shared_ptr<vector<string>> organizationalUnitIds{};
  shared_ptr<long> usedQuota{};

  GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope() {}

  explicit GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupIds) {
      res["GroupIds"] = boost::any(*groupIds);
    }
    if (maxQuota) {
      res["MaxQuota"] = boost::any(*maxQuota);
    }
    if (organizationalUnitIds) {
      res["OrganizationalUnitIds"] = boost::any(*organizationalUnitIds);
    }
    if (usedQuota) {
      res["UsedQuota"] = boost::any(*usedQuota);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["GroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      groupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MaxQuota") != m.end() && !m["MaxQuota"].empty()) {
      maxQuota = make_shared<long>(boost::any_cast<long>(m["MaxQuota"]));
    }
    if (m.find("OrganizationalUnitIds") != m.end() && !m["OrganizationalUnitIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OrganizationalUnitIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OrganizationalUnitIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      organizationalUnitIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UsedQuota") != m.end() && !m["UsedQuota"].empty()) {
      usedQuota = make_shared<long>(boost::any_cast<long>(m["UsedQuota"]));
    }
  }


  virtual ~GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope() = default;
};
class GetApplicationProvisioningScopeResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope> applicationProvisioningScope{};
  shared_ptr<string> requestId{};

  GetApplicationProvisioningScopeResponseBody() {}

  explicit GetApplicationProvisioningScopeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationProvisioningScope) {
      res["ApplicationProvisioningScope"] = applicationProvisioningScope ? boost::any(applicationProvisioningScope->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationProvisioningScope") != m.end() && !m["ApplicationProvisioningScope"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApplicationProvisioningScope"].type()) {
        GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApplicationProvisioningScope"]));
        applicationProvisioningScope = make_shared<GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetApplicationProvisioningScopeResponseBody() = default;
};
class GetApplicationProvisioningScopeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetApplicationProvisioningScopeResponseBody> body{};

  GetApplicationProvisioningScopeResponse() {}

  explicit GetApplicationProvisioningScopeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetApplicationProvisioningScopeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetApplicationProvisioningScopeResponseBody>(model1);
      }
    }
  }


  virtual ~GetApplicationProvisioningScopeResponse() = default;
};
class GetApplicationSsoConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> instanceId{};

  GetApplicationSsoConfigRequest() {}

  explicit GetApplicationSsoConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetApplicationSsoConfigRequest() = default;
};
class GetApplicationSsoConfigResponseBodyApplicationSsoConfigOidcSsoConfigCustomClaims : public Darabonba::Model {
public:
  shared_ptr<string> claimName{};
  shared_ptr<string> claimValueExpression{};

  GetApplicationSsoConfigResponseBodyApplicationSsoConfigOidcSsoConfigCustomClaims() {}

  explicit GetApplicationSsoConfigResponseBodyApplicationSsoConfigOidcSsoConfigCustomClaims(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (claimName) {
      res["ClaimName"] = boost::any(*claimName);
    }
    if (claimValueExpression) {
      res["ClaimValueExpression"] = boost::any(*claimValueExpression);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClaimName") != m.end() && !m["ClaimName"].empty()) {
      claimName = make_shared<string>(boost::any_cast<string>(m["ClaimName"]));
    }
    if (m.find("ClaimValueExpression") != m.end() && !m["ClaimValueExpression"].empty()) {
      claimValueExpression = make_shared<string>(boost::any_cast<string>(m["ClaimValueExpression"]));
    }
  }


  virtual ~GetApplicationSsoConfigResponseBodyApplicationSsoConfigOidcSsoConfigCustomClaims() = default;
};
class GetApplicationSsoConfigResponseBodyApplicationSsoConfigOidcSsoConfig : public Darabonba::Model {
public:
  shared_ptr<long> accessTokenEffectiveTime{};
  shared_ptr<long> codeEffectiveTime{};
  shared_ptr<vector<GetApplicationSsoConfigResponseBodyApplicationSsoConfigOidcSsoConfigCustomClaims>> customClaims{};
  shared_ptr<vector<string>> grantScopes{};
  shared_ptr<vector<string>> grantTypes{};
  shared_ptr<long> idTokenEffectiveTime{};
  shared_ptr<string> passwordAuthenticationSourceId{};
  shared_ptr<bool> passwordTotpMfaRequired{};
  shared_ptr<vector<string>> pkceChallengeMethods{};
  shared_ptr<bool> pkceRequired{};
  shared_ptr<vector<string>> postLogoutRedirectUris{};
  shared_ptr<vector<string>> redirectUris{};
  shared_ptr<long> refreshTokenEffective{};
  shared_ptr<vector<string>> responseTypes{};
  shared_ptr<string> subjectIdExpression{};

  GetApplicationSsoConfigResponseBodyApplicationSsoConfigOidcSsoConfig() {}

  explicit GetApplicationSsoConfigResponseBodyApplicationSsoConfigOidcSsoConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessTokenEffectiveTime) {
      res["AccessTokenEffectiveTime"] = boost::any(*accessTokenEffectiveTime);
    }
    if (codeEffectiveTime) {
      res["CodeEffectiveTime"] = boost::any(*codeEffectiveTime);
    }
    if (customClaims) {
      vector<boost::any> temp1;
      for(auto item1:*customClaims){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CustomClaims"] = boost::any(temp1);
    }
    if (grantScopes) {
      res["GrantScopes"] = boost::any(*grantScopes);
    }
    if (grantTypes) {
      res["GrantTypes"] = boost::any(*grantTypes);
    }
    if (idTokenEffectiveTime) {
      res["IdTokenEffectiveTime"] = boost::any(*idTokenEffectiveTime);
    }
    if (passwordAuthenticationSourceId) {
      res["PasswordAuthenticationSourceId"] = boost::any(*passwordAuthenticationSourceId);
    }
    if (passwordTotpMfaRequired) {
      res["PasswordTotpMfaRequired"] = boost::any(*passwordTotpMfaRequired);
    }
    if (pkceChallengeMethods) {
      res["PkceChallengeMethods"] = boost::any(*pkceChallengeMethods);
    }
    if (pkceRequired) {
      res["PkceRequired"] = boost::any(*pkceRequired);
    }
    if (postLogoutRedirectUris) {
      res["PostLogoutRedirectUris"] = boost::any(*postLogoutRedirectUris);
    }
    if (redirectUris) {
      res["RedirectUris"] = boost::any(*redirectUris);
    }
    if (refreshTokenEffective) {
      res["RefreshTokenEffective"] = boost::any(*refreshTokenEffective);
    }
    if (responseTypes) {
      res["ResponseTypes"] = boost::any(*responseTypes);
    }
    if (subjectIdExpression) {
      res["SubjectIdExpression"] = boost::any(*subjectIdExpression);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessTokenEffectiveTime") != m.end() && !m["AccessTokenEffectiveTime"].empty()) {
      accessTokenEffectiveTime = make_shared<long>(boost::any_cast<long>(m["AccessTokenEffectiveTime"]));
    }
    if (m.find("CodeEffectiveTime") != m.end() && !m["CodeEffectiveTime"].empty()) {
      codeEffectiveTime = make_shared<long>(boost::any_cast<long>(m["CodeEffectiveTime"]));
    }
    if (m.find("CustomClaims") != m.end() && !m["CustomClaims"].empty()) {
      if (typeid(vector<boost::any>) == m["CustomClaims"].type()) {
        vector<GetApplicationSsoConfigResponseBodyApplicationSsoConfigOidcSsoConfigCustomClaims> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CustomClaims"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetApplicationSsoConfigResponseBodyApplicationSsoConfigOidcSsoConfigCustomClaims model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customClaims = make_shared<vector<GetApplicationSsoConfigResponseBodyApplicationSsoConfigOidcSsoConfigCustomClaims>>(expect1);
      }
    }
    if (m.find("GrantScopes") != m.end() && !m["GrantScopes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["GrantScopes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GrantScopes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      grantScopes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("GrantTypes") != m.end() && !m["GrantTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["GrantTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GrantTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      grantTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IdTokenEffectiveTime") != m.end() && !m["IdTokenEffectiveTime"].empty()) {
      idTokenEffectiveTime = make_shared<long>(boost::any_cast<long>(m["IdTokenEffectiveTime"]));
    }
    if (m.find("PasswordAuthenticationSourceId") != m.end() && !m["PasswordAuthenticationSourceId"].empty()) {
      passwordAuthenticationSourceId = make_shared<string>(boost::any_cast<string>(m["PasswordAuthenticationSourceId"]));
    }
    if (m.find("PasswordTotpMfaRequired") != m.end() && !m["PasswordTotpMfaRequired"].empty()) {
      passwordTotpMfaRequired = make_shared<bool>(boost::any_cast<bool>(m["PasswordTotpMfaRequired"]));
    }
    if (m.find("PkceChallengeMethods") != m.end() && !m["PkceChallengeMethods"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PkceChallengeMethods"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PkceChallengeMethods"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      pkceChallengeMethods = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PkceRequired") != m.end() && !m["PkceRequired"].empty()) {
      pkceRequired = make_shared<bool>(boost::any_cast<bool>(m["PkceRequired"]));
    }
    if (m.find("PostLogoutRedirectUris") != m.end() && !m["PostLogoutRedirectUris"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PostLogoutRedirectUris"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PostLogoutRedirectUris"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      postLogoutRedirectUris = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RedirectUris") != m.end() && !m["RedirectUris"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RedirectUris"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RedirectUris"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      redirectUris = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RefreshTokenEffective") != m.end() && !m["RefreshTokenEffective"].empty()) {
      refreshTokenEffective = make_shared<long>(boost::any_cast<long>(m["RefreshTokenEffective"]));
    }
    if (m.find("ResponseTypes") != m.end() && !m["ResponseTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResponseTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResponseTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      responseTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubjectIdExpression") != m.end() && !m["SubjectIdExpression"].empty()) {
      subjectIdExpression = make_shared<string>(boost::any_cast<string>(m["SubjectIdExpression"]));
    }
  }


  virtual ~GetApplicationSsoConfigResponseBodyApplicationSsoConfigOidcSsoConfig() = default;
};
class GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain : public Darabonba::Model {
public:
  shared_ptr<string> oauth2AuthorizationEndpoint{};
  shared_ptr<string> oauth2DeviceAuthorizationEndpoint{};
  shared_ptr<string> oauth2RevokeEndpoint{};
  shared_ptr<string> oauth2TokenEndpoint{};
  shared_ptr<string> oauth2UserinfoEndpoint{};
  shared_ptr<string> oidcIssuer{};
  shared_ptr<string> oidcJwksEndpoint{};
  shared_ptr<string> oidcLogoutEndpoint{};
  shared_ptr<string> samlMetaEndpoint{};
  shared_ptr<string> samlSsoEndpoint{};

  GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain() {}

  explicit GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (oauth2AuthorizationEndpoint) {
      res["Oauth2AuthorizationEndpoint"] = boost::any(*oauth2AuthorizationEndpoint);
    }
    if (oauth2DeviceAuthorizationEndpoint) {
      res["Oauth2DeviceAuthorizationEndpoint"] = boost::any(*oauth2DeviceAuthorizationEndpoint);
    }
    if (oauth2RevokeEndpoint) {
      res["Oauth2RevokeEndpoint"] = boost::any(*oauth2RevokeEndpoint);
    }
    if (oauth2TokenEndpoint) {
      res["Oauth2TokenEndpoint"] = boost::any(*oauth2TokenEndpoint);
    }
    if (oauth2UserinfoEndpoint) {
      res["Oauth2UserinfoEndpoint"] = boost::any(*oauth2UserinfoEndpoint);
    }
    if (oidcIssuer) {
      res["OidcIssuer"] = boost::any(*oidcIssuer);
    }
    if (oidcJwksEndpoint) {
      res["OidcJwksEndpoint"] = boost::any(*oidcJwksEndpoint);
    }
    if (oidcLogoutEndpoint) {
      res["OidcLogoutEndpoint"] = boost::any(*oidcLogoutEndpoint);
    }
    if (samlMetaEndpoint) {
      res["SamlMetaEndpoint"] = boost::any(*samlMetaEndpoint);
    }
    if (samlSsoEndpoint) {
      res["SamlSsoEndpoint"] = boost::any(*samlSsoEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Oauth2AuthorizationEndpoint") != m.end() && !m["Oauth2AuthorizationEndpoint"].empty()) {
      oauth2AuthorizationEndpoint = make_shared<string>(boost::any_cast<string>(m["Oauth2AuthorizationEndpoint"]));
    }
    if (m.find("Oauth2DeviceAuthorizationEndpoint") != m.end() && !m["Oauth2DeviceAuthorizationEndpoint"].empty()) {
      oauth2DeviceAuthorizationEndpoint = make_shared<string>(boost::any_cast<string>(m["Oauth2DeviceAuthorizationEndpoint"]));
    }
    if (m.find("Oauth2RevokeEndpoint") != m.end() && !m["Oauth2RevokeEndpoint"].empty()) {
      oauth2RevokeEndpoint = make_shared<string>(boost::any_cast<string>(m["Oauth2RevokeEndpoint"]));
    }
    if (m.find("Oauth2TokenEndpoint") != m.end() && !m["Oauth2TokenEndpoint"].empty()) {
      oauth2TokenEndpoint = make_shared<string>(boost::any_cast<string>(m["Oauth2TokenEndpoint"]));
    }
    if (m.find("Oauth2UserinfoEndpoint") != m.end() && !m["Oauth2UserinfoEndpoint"].empty()) {
      oauth2UserinfoEndpoint = make_shared<string>(boost::any_cast<string>(m["Oauth2UserinfoEndpoint"]));
    }
    if (m.find("OidcIssuer") != m.end() && !m["OidcIssuer"].empty()) {
      oidcIssuer = make_shared<string>(boost::any_cast<string>(m["OidcIssuer"]));
    }
    if (m.find("OidcJwksEndpoint") != m.end() && !m["OidcJwksEndpoint"].empty()) {
      oidcJwksEndpoint = make_shared<string>(boost::any_cast<string>(m["OidcJwksEndpoint"]));
    }
    if (m.find("OidcLogoutEndpoint") != m.end() && !m["OidcLogoutEndpoint"].empty()) {
      oidcLogoutEndpoint = make_shared<string>(boost::any_cast<string>(m["OidcLogoutEndpoint"]));
    }
    if (m.find("SamlMetaEndpoint") != m.end() && !m["SamlMetaEndpoint"].empty()) {
      samlMetaEndpoint = make_shared<string>(boost::any_cast<string>(m["SamlMetaEndpoint"]));
    }
    if (m.find("SamlSsoEndpoint") != m.end() && !m["SamlSsoEndpoint"].empty()) {
      samlSsoEndpoint = make_shared<string>(boost::any_cast<string>(m["SamlSsoEndpoint"]));
    }
  }


  virtual ~GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain() = default;
};
class GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfigAttributeStatements : public Darabonba::Model {
public:
  shared_ptr<string> attributeName{};
  shared_ptr<string> attributeValueExpression{};

  GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfigAttributeStatements() {}

  explicit GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfigAttributeStatements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributeName) {
      res["AttributeName"] = boost::any(*attributeName);
    }
    if (attributeValueExpression) {
      res["AttributeValueExpression"] = boost::any(*attributeValueExpression);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttributeName") != m.end() && !m["AttributeName"].empty()) {
      attributeName = make_shared<string>(boost::any_cast<string>(m["AttributeName"]));
    }
    if (m.find("AttributeValueExpression") != m.end() && !m["AttributeValueExpression"].empty()) {
      attributeValueExpression = make_shared<string>(boost::any_cast<string>(m["AttributeValueExpression"]));
    }
  }


  virtual ~GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfigAttributeStatements() = default;
};
class GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig : public Darabonba::Model {
public:
  shared_ptr<bool> assertionSigned{};
  shared_ptr<vector<GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfigAttributeStatements>> attributeStatements{};
  shared_ptr<string> defaultRelayState{};
  shared_ptr<string> nameIdFormat{};
  shared_ptr<string> nameIdValueExpression{};
  shared_ptr<bool> responseSigned{};
  shared_ptr<string> signatureAlgorithm{};
  shared_ptr<string> spEntityId{};
  shared_ptr<string> spSsoAcsUrl{};

  GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig() {}

  explicit GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assertionSigned) {
      res["AssertionSigned"] = boost::any(*assertionSigned);
    }
    if (attributeStatements) {
      vector<boost::any> temp1;
      for(auto item1:*attributeStatements){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AttributeStatements"] = boost::any(temp1);
    }
    if (defaultRelayState) {
      res["DefaultRelayState"] = boost::any(*defaultRelayState);
    }
    if (nameIdFormat) {
      res["NameIdFormat"] = boost::any(*nameIdFormat);
    }
    if (nameIdValueExpression) {
      res["NameIdValueExpression"] = boost::any(*nameIdValueExpression);
    }
    if (responseSigned) {
      res["ResponseSigned"] = boost::any(*responseSigned);
    }
    if (signatureAlgorithm) {
      res["SignatureAlgorithm"] = boost::any(*signatureAlgorithm);
    }
    if (spEntityId) {
      res["SpEntityId"] = boost::any(*spEntityId);
    }
    if (spSsoAcsUrl) {
      res["SpSsoAcsUrl"] = boost::any(*spSsoAcsUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssertionSigned") != m.end() && !m["AssertionSigned"].empty()) {
      assertionSigned = make_shared<bool>(boost::any_cast<bool>(m["AssertionSigned"]));
    }
    if (m.find("AttributeStatements") != m.end() && !m["AttributeStatements"].empty()) {
      if (typeid(vector<boost::any>) == m["AttributeStatements"].type()) {
        vector<GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfigAttributeStatements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AttributeStatements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfigAttributeStatements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        attributeStatements = make_shared<vector<GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfigAttributeStatements>>(expect1);
      }
    }
    if (m.find("DefaultRelayState") != m.end() && !m["DefaultRelayState"].empty()) {
      defaultRelayState = make_shared<string>(boost::any_cast<string>(m["DefaultRelayState"]));
    }
    if (m.find("NameIdFormat") != m.end() && !m["NameIdFormat"].empty()) {
      nameIdFormat = make_shared<string>(boost::any_cast<string>(m["NameIdFormat"]));
    }
    if (m.find("NameIdValueExpression") != m.end() && !m["NameIdValueExpression"].empty()) {
      nameIdValueExpression = make_shared<string>(boost::any_cast<string>(m["NameIdValueExpression"]));
    }
    if (m.find("ResponseSigned") != m.end() && !m["ResponseSigned"].empty()) {
      responseSigned = make_shared<bool>(boost::any_cast<bool>(m["ResponseSigned"]));
    }
    if (m.find("SignatureAlgorithm") != m.end() && !m["SignatureAlgorithm"].empty()) {
      signatureAlgorithm = make_shared<string>(boost::any_cast<string>(m["SignatureAlgorithm"]));
    }
    if (m.find("SpEntityId") != m.end() && !m["SpEntityId"].empty()) {
      spEntityId = make_shared<string>(boost::any_cast<string>(m["SpEntityId"]));
    }
    if (m.find("SpSsoAcsUrl") != m.end() && !m["SpSsoAcsUrl"].empty()) {
      spSsoAcsUrl = make_shared<string>(boost::any_cast<string>(m["SpSsoAcsUrl"]));
    }
  }


  virtual ~GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig() = default;
};
class GetApplicationSsoConfigResponseBodyApplicationSsoConfig : public Darabonba::Model {
public:
  shared_ptr<string> initLoginType{};
  shared_ptr<string> initLoginUrl{};
  shared_ptr<GetApplicationSsoConfigResponseBodyApplicationSsoConfigOidcSsoConfig> oidcSsoConfig{};
  shared_ptr<GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain> protocolEndpointDomain{};
  shared_ptr<GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig> samlSsoConfig{};
  shared_ptr<string> ssoStatus{};

  GetApplicationSsoConfigResponseBodyApplicationSsoConfig() {}

  explicit GetApplicationSsoConfigResponseBodyApplicationSsoConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (initLoginType) {
      res["InitLoginType"] = boost::any(*initLoginType);
    }
    if (initLoginUrl) {
      res["InitLoginUrl"] = boost::any(*initLoginUrl);
    }
    if (oidcSsoConfig) {
      res["OidcSsoConfig"] = oidcSsoConfig ? boost::any(oidcSsoConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (protocolEndpointDomain) {
      res["ProtocolEndpointDomain"] = protocolEndpointDomain ? boost::any(protocolEndpointDomain->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (samlSsoConfig) {
      res["SamlSsoConfig"] = samlSsoConfig ? boost::any(samlSsoConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ssoStatus) {
      res["SsoStatus"] = boost::any(*ssoStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InitLoginType") != m.end() && !m["InitLoginType"].empty()) {
      initLoginType = make_shared<string>(boost::any_cast<string>(m["InitLoginType"]));
    }
    if (m.find("InitLoginUrl") != m.end() && !m["InitLoginUrl"].empty()) {
      initLoginUrl = make_shared<string>(boost::any_cast<string>(m["InitLoginUrl"]));
    }
    if (m.find("OidcSsoConfig") != m.end() && !m["OidcSsoConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["OidcSsoConfig"].type()) {
        GetApplicationSsoConfigResponseBodyApplicationSsoConfigOidcSsoConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OidcSsoConfig"]));
        oidcSsoConfig = make_shared<GetApplicationSsoConfigResponseBodyApplicationSsoConfigOidcSsoConfig>(model1);
      }
    }
    if (m.find("ProtocolEndpointDomain") != m.end() && !m["ProtocolEndpointDomain"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProtocolEndpointDomain"].type()) {
        GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProtocolEndpointDomain"]));
        protocolEndpointDomain = make_shared<GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain>(model1);
      }
    }
    if (m.find("SamlSsoConfig") != m.end() && !m["SamlSsoConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["SamlSsoConfig"].type()) {
        GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SamlSsoConfig"]));
        samlSsoConfig = make_shared<GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig>(model1);
      }
    }
    if (m.find("SsoStatus") != m.end() && !m["SsoStatus"].empty()) {
      ssoStatus = make_shared<string>(boost::any_cast<string>(m["SsoStatus"]));
    }
  }


  virtual ~GetApplicationSsoConfigResponseBodyApplicationSsoConfig() = default;
};
class GetApplicationSsoConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetApplicationSsoConfigResponseBodyApplicationSsoConfig> applicationSsoConfig{};
  shared_ptr<string> requestId{};

  GetApplicationSsoConfigResponseBody() {}

  explicit GetApplicationSsoConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationSsoConfig) {
      res["ApplicationSsoConfig"] = applicationSsoConfig ? boost::any(applicationSsoConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationSsoConfig") != m.end() && !m["ApplicationSsoConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApplicationSsoConfig"].type()) {
        GetApplicationSsoConfigResponseBodyApplicationSsoConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApplicationSsoConfig"]));
        applicationSsoConfig = make_shared<GetApplicationSsoConfigResponseBodyApplicationSsoConfig>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetApplicationSsoConfigResponseBody() = default;
};
class GetApplicationSsoConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetApplicationSsoConfigResponseBody> body{};

  GetApplicationSsoConfigResponse() {}

  explicit GetApplicationSsoConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetApplicationSsoConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetApplicationSsoConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetApplicationSsoConfigResponse() = default;
};
class GetDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainId{};
  shared_ptr<string> instanceId{};

  GetDomainRequest() {}

  explicit GetDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetDomainRequest() = default;
};
class GetDomainResponseBodyDomainFiling : public Darabonba::Model {
public:
  shared_ptr<string> icpNumber{};

  GetDomainResponseBodyDomainFiling() {}

  explicit GetDomainResponseBodyDomainFiling(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (icpNumber) {
      res["IcpNumber"] = boost::any(*icpNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IcpNumber") != m.end() && !m["IcpNumber"].empty()) {
      icpNumber = make_shared<string>(boost::any_cast<string>(m["IcpNumber"]));
    }
  }


  virtual ~GetDomainResponseBodyDomainFiling() = default;
};
class GetDomainResponseBodyDomain : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<bool> defaultDomain{};
  shared_ptr<string> domain{};
  shared_ptr<string> domainId{};
  shared_ptr<string> domainType{};
  shared_ptr<GetDomainResponseBodyDomainFiling> filing{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lockMode{};
  shared_ptr<long> updateTime{};

  GetDomainResponseBodyDomain() {}

  explicit GetDomainResponseBodyDomain(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (defaultDomain) {
      res["DefaultDomain"] = boost::any(*defaultDomain);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (domainType) {
      res["DomainType"] = boost::any(*domainType);
    }
    if (filing) {
      res["Filing"] = filing ? boost::any(filing->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DefaultDomain") != m.end() && !m["DefaultDomain"].empty()) {
      defaultDomain = make_shared<bool>(boost::any_cast<bool>(m["DefaultDomain"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("DomainType") != m.end() && !m["DomainType"].empty()) {
      domainType = make_shared<string>(boost::any_cast<string>(m["DomainType"]));
    }
    if (m.find("Filing") != m.end() && !m["Filing"].empty()) {
      if (typeid(map<string, boost::any>) == m["Filing"].type()) {
        GetDomainResponseBodyDomainFiling model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Filing"]));
        filing = make_shared<GetDomainResponseBodyDomainFiling>(model1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~GetDomainResponseBodyDomain() = default;
};
class GetDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetDomainResponseBodyDomain> domain{};
  shared_ptr<string> requestId{};

  GetDomainResponseBody() {}

  explicit GetDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = domain ? boost::any(domain->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      if (typeid(map<string, boost::any>) == m["Domain"].type()) {
        GetDomainResponseBodyDomain model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Domain"]));
        domain = make_shared<GetDomainResponseBodyDomain>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDomainResponseBody() = default;
};
class GetDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDomainResponseBody> body{};

  GetDomainResponse() {}

  explicit GetDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDomainResponseBody>(model1);
      }
    }
  }


  virtual ~GetDomainResponse() = default;
};
class GetDomainDnsChallengeRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};

  GetDomainDnsChallengeRequest() {}

  explicit GetDomainDnsChallengeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetDomainDnsChallengeRequest() = default;
};
class GetDomainDnsChallengeResponseBodyDomainDnsChallenge : public Darabonba::Model {
public:
  shared_ptr<string> dnsChallengeName{};
  shared_ptr<string> dnsChallengeValue{};
  shared_ptr<string> dnsType{};

  GetDomainDnsChallengeResponseBodyDomainDnsChallenge() {}

  explicit GetDomainDnsChallengeResponseBodyDomainDnsChallenge(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dnsChallengeName) {
      res["DnsChallengeName"] = boost::any(*dnsChallengeName);
    }
    if (dnsChallengeValue) {
      res["DnsChallengeValue"] = boost::any(*dnsChallengeValue);
    }
    if (dnsType) {
      res["DnsType"] = boost::any(*dnsType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DnsChallengeName") != m.end() && !m["DnsChallengeName"].empty()) {
      dnsChallengeName = make_shared<string>(boost::any_cast<string>(m["DnsChallengeName"]));
    }
    if (m.find("DnsChallengeValue") != m.end() && !m["DnsChallengeValue"].empty()) {
      dnsChallengeValue = make_shared<string>(boost::any_cast<string>(m["DnsChallengeValue"]));
    }
    if (m.find("DnsType") != m.end() && !m["DnsType"].empty()) {
      dnsType = make_shared<string>(boost::any_cast<string>(m["DnsType"]));
    }
  }


  virtual ~GetDomainDnsChallengeResponseBodyDomainDnsChallenge() = default;
};
class GetDomainDnsChallengeResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetDomainDnsChallengeResponseBodyDomainDnsChallenge> domainDnsChallenge{};
  shared_ptr<string> requestId{};

  GetDomainDnsChallengeResponseBody() {}

  explicit GetDomainDnsChallengeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainDnsChallenge) {
      res["DomainDnsChallenge"] = domainDnsChallenge ? boost::any(domainDnsChallenge->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainDnsChallenge") != m.end() && !m["DomainDnsChallenge"].empty()) {
      if (typeid(map<string, boost::any>) == m["DomainDnsChallenge"].type()) {
        GetDomainDnsChallengeResponseBodyDomainDnsChallenge model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DomainDnsChallenge"]));
        domainDnsChallenge = make_shared<GetDomainDnsChallengeResponseBodyDomainDnsChallenge>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDomainDnsChallengeResponseBody() = default;
};
class GetDomainDnsChallengeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDomainDnsChallengeResponseBody> body{};

  GetDomainDnsChallengeResponse() {}

  explicit GetDomainDnsChallengeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDomainDnsChallengeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDomainDnsChallengeResponseBody>(model1);
      }
    }
  }


  virtual ~GetDomainDnsChallengeResponse() = default;
};
class GetForgetPasswordConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  GetForgetPasswordConfigurationRequest() {}

  explicit GetForgetPasswordConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetForgetPasswordConfigurationRequest() = default;
};
class GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration : public Darabonba::Model {
public:
  shared_ptr<vector<string>> authenticationChannels{};
  shared_ptr<bool> enable{};
  shared_ptr<bool> enableEmail{};
  shared_ptr<bool> enableSms{};
  shared_ptr<string> forgetPasswordStatus{};

  GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration() {}

  explicit GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authenticationChannels) {
      res["AuthenticationChannels"] = boost::any(*authenticationChannels);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (enableEmail) {
      res["EnableEmail"] = boost::any(*enableEmail);
    }
    if (enableSms) {
      res["EnableSms"] = boost::any(*enableSms);
    }
    if (forgetPasswordStatus) {
      res["ForgetPasswordStatus"] = boost::any(*forgetPasswordStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthenticationChannels") != m.end() && !m["AuthenticationChannels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AuthenticationChannels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AuthenticationChannels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authenticationChannels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("EnableEmail") != m.end() && !m["EnableEmail"].empty()) {
      enableEmail = make_shared<bool>(boost::any_cast<bool>(m["EnableEmail"]));
    }
    if (m.find("EnableSms") != m.end() && !m["EnableSms"].empty()) {
      enableSms = make_shared<bool>(boost::any_cast<bool>(m["EnableSms"]));
    }
    if (m.find("ForgetPasswordStatus") != m.end() && !m["ForgetPasswordStatus"].empty()) {
      forgetPasswordStatus = make_shared<string>(boost::any_cast<string>(m["ForgetPasswordStatus"]));
    }
  }


  virtual ~GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration() = default;
};
class GetForgetPasswordConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration> openForgetPasswordConfiguration{};
  shared_ptr<string> requestId{};

  GetForgetPasswordConfigurationResponseBody() {}

  explicit GetForgetPasswordConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (openForgetPasswordConfiguration) {
      res["OpenForgetPasswordConfiguration"] = openForgetPasswordConfiguration ? boost::any(openForgetPasswordConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpenForgetPasswordConfiguration") != m.end() && !m["OpenForgetPasswordConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["OpenForgetPasswordConfiguration"].type()) {
        GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OpenForgetPasswordConfiguration"]));
        openForgetPasswordConfiguration = make_shared<GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetForgetPasswordConfigurationResponseBody() = default;
};
class GetForgetPasswordConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetForgetPasswordConfigurationResponseBody> body{};

  GetForgetPasswordConfigurationResponse() {}

  explicit GetForgetPasswordConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetForgetPasswordConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetForgetPasswordConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~GetForgetPasswordConfigurationResponse() = default;
};
class GetGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> instanceId{};

  GetGroupRequest() {}

  explicit GetGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetGroupRequest() = default;
};
class GetGroupResponseBodyGroup : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> groupExternalId{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> groupSourceId{};
  shared_ptr<string> groupSourceType{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> updateTime{};

  GetGroupResponseBodyGroup() {}

  explicit GetGroupResponseBodyGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (groupExternalId) {
      res["GroupExternalId"] = boost::any(*groupExternalId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (groupSourceId) {
      res["GroupSourceId"] = boost::any(*groupSourceId);
    }
    if (groupSourceType) {
      res["GroupSourceType"] = boost::any(*groupSourceType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
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
    if (m.find("GroupExternalId") != m.end() && !m["GroupExternalId"].empty()) {
      groupExternalId = make_shared<string>(boost::any_cast<string>(m["GroupExternalId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("GroupSourceId") != m.end() && !m["GroupSourceId"].empty()) {
      groupSourceId = make_shared<string>(boost::any_cast<string>(m["GroupSourceId"]));
    }
    if (m.find("GroupSourceType") != m.end() && !m["GroupSourceType"].empty()) {
      groupSourceType = make_shared<string>(boost::any_cast<string>(m["GroupSourceType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~GetGroupResponseBodyGroup() = default;
};
class GetGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetGroupResponseBodyGroup> group{};
  shared_ptr<string> requestId{};

  GetGroupResponseBody() {}

  explicit GetGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (group) {
      res["Group"] = group ? boost::any(group->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      if (typeid(map<string, boost::any>) == m["Group"].type()) {
        GetGroupResponseBodyGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Group"]));
        group = make_shared<GetGroupResponseBodyGroup>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetGroupResponseBody() = default;
};
class GetGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetGroupResponseBody> body{};

  GetGroupResponse() {}

  explicit GetGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetGroupResponse() = default;
};
class GetInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  GetInstanceRequest() {}

  explicit GetInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetInstanceRequest() = default;
};
class GetInstanceResponseBodyInstanceDefaultEndpoint : public Darabonba::Model {
public:
  shared_ptr<string> endpoint{};
  shared_ptr<string> status{};

  GetInstanceResponseBodyInstanceDefaultEndpoint() {}

  explicit GetInstanceResponseBodyInstanceDefaultEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetInstanceResponseBodyInstanceDefaultEndpoint() = default;
};
class GetInstanceResponseBodyInstanceDomainConfig : public Darabonba::Model {
public:
  shared_ptr<string> defaultDomain{};
  shared_ptr<string> initDomain{};
  shared_ptr<string> initDomainAutoRedirectStatus{};

  GetInstanceResponseBodyInstanceDomainConfig() {}

  explicit GetInstanceResponseBodyInstanceDomainConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultDomain) {
      res["DefaultDomain"] = boost::any(*defaultDomain);
    }
    if (initDomain) {
      res["InitDomain"] = boost::any(*initDomain);
    }
    if (initDomainAutoRedirectStatus) {
      res["InitDomainAutoRedirectStatus"] = boost::any(*initDomainAutoRedirectStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultDomain") != m.end() && !m["DefaultDomain"].empty()) {
      defaultDomain = make_shared<string>(boost::any_cast<string>(m["DefaultDomain"]));
    }
    if (m.find("InitDomain") != m.end() && !m["InitDomain"].empty()) {
      initDomain = make_shared<string>(boost::any_cast<string>(m["InitDomain"]));
    }
    if (m.find("InitDomainAutoRedirectStatus") != m.end() && !m["InitDomainAutoRedirectStatus"].empty()) {
      initDomainAutoRedirectStatus = make_shared<string>(boost::any_cast<string>(m["InitDomainAutoRedirectStatus"]));
    }
  }


  virtual ~GetInstanceResponseBodyInstanceDomainConfig() = default;
};
class GetInstanceResponseBodyInstance : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<GetInstanceResponseBodyInstanceDefaultEndpoint> defaultEndpoint{};
  shared_ptr<string> description{};
  shared_ptr<GetInstanceResponseBodyInstanceDomainConfig> domainConfig{};
  shared_ptr<vector<string>> egressAddresses{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> status{};

  GetInstanceResponseBodyInstance() {}

  explicit GetInstanceResponseBodyInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (defaultEndpoint) {
      res["DefaultEndpoint"] = defaultEndpoint ? boost::any(defaultEndpoint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (domainConfig) {
      res["DomainConfig"] = domainConfig ? boost::any(domainConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (egressAddresses) {
      res["EgressAddresses"] = boost::any(*egressAddresses);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DefaultEndpoint") != m.end() && !m["DefaultEndpoint"].empty()) {
      if (typeid(map<string, boost::any>) == m["DefaultEndpoint"].type()) {
        GetInstanceResponseBodyInstanceDefaultEndpoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DefaultEndpoint"]));
        defaultEndpoint = make_shared<GetInstanceResponseBodyInstanceDefaultEndpoint>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DomainConfig") != m.end() && !m["DomainConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["DomainConfig"].type()) {
        GetInstanceResponseBodyInstanceDomainConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DomainConfig"]));
        domainConfig = make_shared<GetInstanceResponseBodyInstanceDomainConfig>(model1);
      }
    }
    if (m.find("EgressAddresses") != m.end() && !m["EgressAddresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EgressAddresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EgressAddresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      egressAddresses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetInstanceResponseBodyInstance() = default;
};
class GetInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetInstanceResponseBodyInstance> instance{};
  shared_ptr<string> requestId{};

  GetInstanceResponseBody() {}

  explicit GetInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instance) {
      res["Instance"] = instance ? boost::any(instance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      if (typeid(map<string, boost::any>) == m["Instance"].type()) {
        GetInstanceResponseBodyInstance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Instance"]));
        instance = make_shared<GetInstanceResponseBodyInstance>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetInstanceResponseBody() = default;
};
class GetInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceResponseBody> body{};

  GetInstanceResponse() {}

  explicit GetInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceResponse() = default;
};
class GetNetworkAccessEndpointRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> networkAccessEndpointId{};

  GetNetworkAccessEndpointRequest() {}

  explicit GetNetworkAccessEndpointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (networkAccessEndpointId) {
      res["NetworkAccessEndpointId"] = boost::any(*networkAccessEndpointId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NetworkAccessEndpointId") != m.end() && !m["NetworkAccessEndpointId"].empty()) {
      networkAccessEndpointId = make_shared<string>(boost::any_cast<string>(m["NetworkAccessEndpointId"]));
    }
  }


  virtual ~GetNetworkAccessEndpointRequest() = default;
};
class GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<vector<string>> egressPrivateIpAddresses{};
  shared_ptr<vector<string>> egressPublicIpAddresses{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> networkAccessEndpointId{};
  shared_ptr<string> networkAccessEndpointName{};
  shared_ptr<string> networkAccessEndpointType{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> status{};
  shared_ptr<long> updateTime{};
  shared_ptr<vector<string>> vSwitchIds{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcRegionId{};

  GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint() {}

  explicit GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (egressPrivateIpAddresses) {
      res["EgressPrivateIpAddresses"] = boost::any(*egressPrivateIpAddresses);
    }
    if (egressPublicIpAddresses) {
      res["EgressPublicIpAddresses"] = boost::any(*egressPublicIpAddresses);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (networkAccessEndpointId) {
      res["NetworkAccessEndpointId"] = boost::any(*networkAccessEndpointId);
    }
    if (networkAccessEndpointName) {
      res["NetworkAccessEndpointName"] = boost::any(*networkAccessEndpointName);
    }
    if (networkAccessEndpointType) {
      res["NetworkAccessEndpointType"] = boost::any(*networkAccessEndpointType);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcRegionId) {
      res["VpcRegionId"] = boost::any(*vpcRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("EgressPrivateIpAddresses") != m.end() && !m["EgressPrivateIpAddresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EgressPrivateIpAddresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EgressPrivateIpAddresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      egressPrivateIpAddresses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EgressPublicIpAddresses") != m.end() && !m["EgressPublicIpAddresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EgressPublicIpAddresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EgressPublicIpAddresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      egressPublicIpAddresses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NetworkAccessEndpointId") != m.end() && !m["NetworkAccessEndpointId"].empty()) {
      networkAccessEndpointId = make_shared<string>(boost::any_cast<string>(m["NetworkAccessEndpointId"]));
    }
    if (m.find("NetworkAccessEndpointName") != m.end() && !m["NetworkAccessEndpointName"].empty()) {
      networkAccessEndpointName = make_shared<string>(boost::any_cast<string>(m["NetworkAccessEndpointName"]));
    }
    if (m.find("NetworkAccessEndpointType") != m.end() && !m["NetworkAccessEndpointType"].empty()) {
      networkAccessEndpointType = make_shared<string>(boost::any_cast<string>(m["NetworkAccessEndpointType"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcRegionId") != m.end() && !m["VpcRegionId"].empty()) {
      vpcRegionId = make_shared<string>(boost::any_cast<string>(m["VpcRegionId"]));
    }
  }


  virtual ~GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint() = default;
};
class GetNetworkAccessEndpointResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint> networkAccessEndpoint{};
  shared_ptr<string> requestId{};

  GetNetworkAccessEndpointResponseBody() {}

  explicit GetNetworkAccessEndpointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (networkAccessEndpoint) {
      res["NetworkAccessEndpoint"] = networkAccessEndpoint ? boost::any(networkAccessEndpoint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetworkAccessEndpoint") != m.end() && !m["NetworkAccessEndpoint"].empty()) {
      if (typeid(map<string, boost::any>) == m["NetworkAccessEndpoint"].type()) {
        GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NetworkAccessEndpoint"]));
        networkAccessEndpoint = make_shared<GetNetworkAccessEndpointResponseBodyNetworkAccessEndpoint>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetNetworkAccessEndpointResponseBody() = default;
};
class GetNetworkAccessEndpointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetNetworkAccessEndpointResponseBody> body{};

  GetNetworkAccessEndpointResponse() {}

  explicit GetNetworkAccessEndpointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetNetworkAccessEndpointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNetworkAccessEndpointResponseBody>(model1);
      }
    }
  }


  virtual ~GetNetworkAccessEndpointResponse() = default;
};
class GetOrganizationalUnitRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> organizationalUnitId{};

  GetOrganizationalUnitRequest() {}

  explicit GetOrganizationalUnitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (organizationalUnitId) {
      res["OrganizationalUnitId"] = boost::any(*organizationalUnitId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrganizationalUnitId") != m.end() && !m["OrganizationalUnitId"].empty()) {
      organizationalUnitId = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitId"]));
    }
  }


  virtual ~GetOrganizationalUnitRequest() = default;
};
class GetOrganizationalUnitResponseBodyOrganizationalUnit : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> leaf{};
  shared_ptr<string> organizationalUnitExternalId{};
  shared_ptr<string> organizationalUnitId{};
  shared_ptr<string> organizationalUnitName{};
  shared_ptr<string> organizationalUnitSourceId{};
  shared_ptr<string> organizationalUnitSourceType{};
  shared_ptr<string> parentId{};
  shared_ptr<long> updateTime{};

  GetOrganizationalUnitResponseBodyOrganizationalUnit() {}

  explicit GetOrganizationalUnitResponseBodyOrganizationalUnit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (leaf) {
      res["Leaf"] = boost::any(*leaf);
    }
    if (organizationalUnitExternalId) {
      res["OrganizationalUnitExternalId"] = boost::any(*organizationalUnitExternalId);
    }
    if (organizationalUnitId) {
      res["OrganizationalUnitId"] = boost::any(*organizationalUnitId);
    }
    if (organizationalUnitName) {
      res["OrganizationalUnitName"] = boost::any(*organizationalUnitName);
    }
    if (organizationalUnitSourceId) {
      res["OrganizationalUnitSourceId"] = boost::any(*organizationalUnitSourceId);
    }
    if (organizationalUnitSourceType) {
      res["OrganizationalUnitSourceType"] = boost::any(*organizationalUnitSourceType);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Leaf") != m.end() && !m["Leaf"].empty()) {
      leaf = make_shared<bool>(boost::any_cast<bool>(m["Leaf"]));
    }
    if (m.find("OrganizationalUnitExternalId") != m.end() && !m["OrganizationalUnitExternalId"].empty()) {
      organizationalUnitExternalId = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitExternalId"]));
    }
    if (m.find("OrganizationalUnitId") != m.end() && !m["OrganizationalUnitId"].empty()) {
      organizationalUnitId = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitId"]));
    }
    if (m.find("OrganizationalUnitName") != m.end() && !m["OrganizationalUnitName"].empty()) {
      organizationalUnitName = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitName"]));
    }
    if (m.find("OrganizationalUnitSourceId") != m.end() && !m["OrganizationalUnitSourceId"].empty()) {
      organizationalUnitSourceId = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitSourceId"]));
    }
    if (m.find("OrganizationalUnitSourceType") != m.end() && !m["OrganizationalUnitSourceType"].empty()) {
      organizationalUnitSourceType = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitSourceType"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~GetOrganizationalUnitResponseBodyOrganizationalUnit() = default;
};
class GetOrganizationalUnitResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetOrganizationalUnitResponseBodyOrganizationalUnit> organizationalUnit{};
  shared_ptr<string> requestId{};

  GetOrganizationalUnitResponseBody() {}

  explicit GetOrganizationalUnitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (organizationalUnit) {
      res["OrganizationalUnit"] = organizationalUnit ? boost::any(organizationalUnit->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrganizationalUnit") != m.end() && !m["OrganizationalUnit"].empty()) {
      if (typeid(map<string, boost::any>) == m["OrganizationalUnit"].type()) {
        GetOrganizationalUnitResponseBodyOrganizationalUnit model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OrganizationalUnit"]));
        organizationalUnit = make_shared<GetOrganizationalUnitResponseBodyOrganizationalUnit>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetOrganizationalUnitResponseBody() = default;
};
class GetOrganizationalUnitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOrganizationalUnitResponseBody> body{};

  GetOrganizationalUnitResponse() {}

  explicit GetOrganizationalUnitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOrganizationalUnitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOrganizationalUnitResponseBody>(model1);
      }
    }
  }


  virtual ~GetOrganizationalUnitResponse() = default;
};
class GetPasswordComplexityConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  GetPasswordComplexityConfigurationRequest() {}

  explicit GetPasswordComplexityConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetPasswordComplexityConfigurationRequest() = default;
};
class GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfigurationPasswordComplexityRules : public Darabonba::Model {
public:
  shared_ptr<string> passwordCheckType{};

  GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfigurationPasswordComplexityRules() {}

  explicit GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfigurationPasswordComplexityRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (passwordCheckType) {
      res["PasswordCheckType"] = boost::any(*passwordCheckType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PasswordCheckType") != m.end() && !m["PasswordCheckType"].empty()) {
      passwordCheckType = make_shared<string>(boost::any_cast<string>(m["PasswordCheckType"]));
    }
  }


  virtual ~GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfigurationPasswordComplexityRules() = default;
};
class GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration : public Darabonba::Model {
public:
  shared_ptr<vector<GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfigurationPasswordComplexityRules>> passwordComplexityRules{};
  shared_ptr<long> passwordMinLength{};

  GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration() {}

  explicit GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (passwordComplexityRules) {
      vector<boost::any> temp1;
      for(auto item1:*passwordComplexityRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PasswordComplexityRules"] = boost::any(temp1);
    }
    if (passwordMinLength) {
      res["PasswordMinLength"] = boost::any(*passwordMinLength);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PasswordComplexityRules") != m.end() && !m["PasswordComplexityRules"].empty()) {
      if (typeid(vector<boost::any>) == m["PasswordComplexityRules"].type()) {
        vector<GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfigurationPasswordComplexityRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PasswordComplexityRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfigurationPasswordComplexityRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        passwordComplexityRules = make_shared<vector<GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfigurationPasswordComplexityRules>>(expect1);
      }
    }
    if (m.find("PasswordMinLength") != m.end() && !m["PasswordMinLength"].empty()) {
      passwordMinLength = make_shared<long>(boost::any_cast<long>(m["PasswordMinLength"]));
    }
  }


  virtual ~GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration() = default;
};
class GetPasswordComplexityConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration> passwordComplexityConfiguration{};
  shared_ptr<string> requestId{};

  GetPasswordComplexityConfigurationResponseBody() {}

  explicit GetPasswordComplexityConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (passwordComplexityConfiguration) {
      res["PasswordComplexityConfiguration"] = passwordComplexityConfiguration ? boost::any(passwordComplexityConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PasswordComplexityConfiguration") != m.end() && !m["PasswordComplexityConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["PasswordComplexityConfiguration"].type()) {
        GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PasswordComplexityConfiguration"]));
        passwordComplexityConfiguration = make_shared<GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPasswordComplexityConfigurationResponseBody() = default;
};
class GetPasswordComplexityConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPasswordComplexityConfigurationResponseBody> body{};

  GetPasswordComplexityConfigurationResponse() {}

  explicit GetPasswordComplexityConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPasswordComplexityConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPasswordComplexityConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~GetPasswordComplexityConfigurationResponse() = default;
};
class GetPasswordExpirationConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  GetPasswordExpirationConfigurationRequest() {}

  explicit GetPasswordExpirationConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetPasswordExpirationConfigurationRequest() = default;
};
class GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration : public Darabonba::Model {
public:
  shared_ptr<string> passwordExpirationAction{};
  shared_ptr<vector<string>> passwordExpirationNotificationChannels{};
  shared_ptr<long> passwordExpirationNotificationDuration{};
  shared_ptr<string> passwordExpirationNotificationStatus{};
  shared_ptr<string> passwordExpirationStatus{};
  shared_ptr<long> passwordForcedUpdateDuration{};
  shared_ptr<long> passwordValidMaxDay{};

  GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration() {}

  explicit GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (passwordExpirationAction) {
      res["PasswordExpirationAction"] = boost::any(*passwordExpirationAction);
    }
    if (passwordExpirationNotificationChannels) {
      res["PasswordExpirationNotificationChannels"] = boost::any(*passwordExpirationNotificationChannels);
    }
    if (passwordExpirationNotificationDuration) {
      res["PasswordExpirationNotificationDuration"] = boost::any(*passwordExpirationNotificationDuration);
    }
    if (passwordExpirationNotificationStatus) {
      res["PasswordExpirationNotificationStatus"] = boost::any(*passwordExpirationNotificationStatus);
    }
    if (passwordExpirationStatus) {
      res["PasswordExpirationStatus"] = boost::any(*passwordExpirationStatus);
    }
    if (passwordForcedUpdateDuration) {
      res["PasswordForcedUpdateDuration"] = boost::any(*passwordForcedUpdateDuration);
    }
    if (passwordValidMaxDay) {
      res["PasswordValidMaxDay"] = boost::any(*passwordValidMaxDay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PasswordExpirationAction") != m.end() && !m["PasswordExpirationAction"].empty()) {
      passwordExpirationAction = make_shared<string>(boost::any_cast<string>(m["PasswordExpirationAction"]));
    }
    if (m.find("PasswordExpirationNotificationChannels") != m.end() && !m["PasswordExpirationNotificationChannels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PasswordExpirationNotificationChannels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PasswordExpirationNotificationChannels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      passwordExpirationNotificationChannels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PasswordExpirationNotificationDuration") != m.end() && !m["PasswordExpirationNotificationDuration"].empty()) {
      passwordExpirationNotificationDuration = make_shared<long>(boost::any_cast<long>(m["PasswordExpirationNotificationDuration"]));
    }
    if (m.find("PasswordExpirationNotificationStatus") != m.end() && !m["PasswordExpirationNotificationStatus"].empty()) {
      passwordExpirationNotificationStatus = make_shared<string>(boost::any_cast<string>(m["PasswordExpirationNotificationStatus"]));
    }
    if (m.find("PasswordExpirationStatus") != m.end() && !m["PasswordExpirationStatus"].empty()) {
      passwordExpirationStatus = make_shared<string>(boost::any_cast<string>(m["PasswordExpirationStatus"]));
    }
    if (m.find("PasswordForcedUpdateDuration") != m.end() && !m["PasswordForcedUpdateDuration"].empty()) {
      passwordForcedUpdateDuration = make_shared<long>(boost::any_cast<long>(m["PasswordForcedUpdateDuration"]));
    }
    if (m.find("PasswordValidMaxDay") != m.end() && !m["PasswordValidMaxDay"].empty()) {
      passwordValidMaxDay = make_shared<long>(boost::any_cast<long>(m["PasswordValidMaxDay"]));
    }
  }


  virtual ~GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration() = default;
};
class GetPasswordExpirationConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration> passwordExpirationConfiguration{};
  shared_ptr<string> requestId{};

  GetPasswordExpirationConfigurationResponseBody() {}

  explicit GetPasswordExpirationConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (passwordExpirationConfiguration) {
      res["PasswordExpirationConfiguration"] = passwordExpirationConfiguration ? boost::any(passwordExpirationConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PasswordExpirationConfiguration") != m.end() && !m["PasswordExpirationConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["PasswordExpirationConfiguration"].type()) {
        GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PasswordExpirationConfiguration"]));
        passwordExpirationConfiguration = make_shared<GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPasswordExpirationConfigurationResponseBody() = default;
};
class GetPasswordExpirationConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPasswordExpirationConfigurationResponseBody> body{};

  GetPasswordExpirationConfigurationResponse() {}

  explicit GetPasswordExpirationConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPasswordExpirationConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPasswordExpirationConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~GetPasswordExpirationConfigurationResponse() = default;
};
class GetPasswordHistoryConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  GetPasswordHistoryConfigurationRequest() {}

  explicit GetPasswordHistoryConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetPasswordHistoryConfigurationRequest() = default;
};
class GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration : public Darabonba::Model {
public:
  shared_ptr<long> passwordHistoryMaxRetention{};
  shared_ptr<string> passwordHistoryStatus{};

  GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration() {}

  explicit GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (passwordHistoryMaxRetention) {
      res["PasswordHistoryMaxRetention"] = boost::any(*passwordHistoryMaxRetention);
    }
    if (passwordHistoryStatus) {
      res["PasswordHistoryStatus"] = boost::any(*passwordHistoryStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PasswordHistoryMaxRetention") != m.end() && !m["PasswordHistoryMaxRetention"].empty()) {
      passwordHistoryMaxRetention = make_shared<long>(boost::any_cast<long>(m["PasswordHistoryMaxRetention"]));
    }
    if (m.find("PasswordHistoryStatus") != m.end() && !m["PasswordHistoryStatus"].empty()) {
      passwordHistoryStatus = make_shared<string>(boost::any_cast<string>(m["PasswordHistoryStatus"]));
    }
  }


  virtual ~GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration() = default;
};
class GetPasswordHistoryConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration> passwordHistoryConfiguration{};
  shared_ptr<string> requestId{};

  GetPasswordHistoryConfigurationResponseBody() {}

  explicit GetPasswordHistoryConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (passwordHistoryConfiguration) {
      res["PasswordHistoryConfiguration"] = passwordHistoryConfiguration ? boost::any(passwordHistoryConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PasswordHistoryConfiguration") != m.end() && !m["PasswordHistoryConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["PasswordHistoryConfiguration"].type()) {
        GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PasswordHistoryConfiguration"]));
        passwordHistoryConfiguration = make_shared<GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPasswordHistoryConfigurationResponseBody() = default;
};
class GetPasswordHistoryConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPasswordHistoryConfigurationResponseBody> body{};

  GetPasswordHistoryConfigurationResponse() {}

  explicit GetPasswordHistoryConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPasswordHistoryConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPasswordHistoryConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~GetPasswordHistoryConfigurationResponse() = default;
};
class GetPasswordInitializationConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  GetPasswordInitializationConfigurationRequest() {}

  explicit GetPasswordInitializationConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetPasswordInitializationConfigurationRequest() = default;
};
class GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration : public Darabonba::Model {
public:
  shared_ptr<string> passwordForcedUpdateStatus{};
  shared_ptr<vector<string>> passwordInitializationNotificationChannels{};
  shared_ptr<string> passwordInitializationStatus{};
  shared_ptr<string> passwordInitializationType{};

  GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration() {}

  explicit GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (passwordForcedUpdateStatus) {
      res["PasswordForcedUpdateStatus"] = boost::any(*passwordForcedUpdateStatus);
    }
    if (passwordInitializationNotificationChannels) {
      res["PasswordInitializationNotificationChannels"] = boost::any(*passwordInitializationNotificationChannels);
    }
    if (passwordInitializationStatus) {
      res["PasswordInitializationStatus"] = boost::any(*passwordInitializationStatus);
    }
    if (passwordInitializationType) {
      res["PasswordInitializationType"] = boost::any(*passwordInitializationType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PasswordForcedUpdateStatus") != m.end() && !m["PasswordForcedUpdateStatus"].empty()) {
      passwordForcedUpdateStatus = make_shared<string>(boost::any_cast<string>(m["PasswordForcedUpdateStatus"]));
    }
    if (m.find("PasswordInitializationNotificationChannels") != m.end() && !m["PasswordInitializationNotificationChannels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PasswordInitializationNotificationChannels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PasswordInitializationNotificationChannels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      passwordInitializationNotificationChannels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PasswordInitializationStatus") != m.end() && !m["PasswordInitializationStatus"].empty()) {
      passwordInitializationStatus = make_shared<string>(boost::any_cast<string>(m["PasswordInitializationStatus"]));
    }
    if (m.find("PasswordInitializationType") != m.end() && !m["PasswordInitializationType"].empty()) {
      passwordInitializationType = make_shared<string>(boost::any_cast<string>(m["PasswordInitializationType"]));
    }
  }


  virtual ~GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration() = default;
};
class GetPasswordInitializationConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration> passwordInitializationConfiguration{};
  shared_ptr<string> requestId{};

  GetPasswordInitializationConfigurationResponseBody() {}

  explicit GetPasswordInitializationConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (passwordInitializationConfiguration) {
      res["PasswordInitializationConfiguration"] = passwordInitializationConfiguration ? boost::any(passwordInitializationConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PasswordInitializationConfiguration") != m.end() && !m["PasswordInitializationConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["PasswordInitializationConfiguration"].type()) {
        GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PasswordInitializationConfiguration"]));
        passwordInitializationConfiguration = make_shared<GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPasswordInitializationConfigurationResponseBody() = default;
};
class GetPasswordInitializationConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPasswordInitializationConfigurationResponseBody> body{};

  GetPasswordInitializationConfigurationResponse() {}

  explicit GetPasswordInitializationConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPasswordInitializationConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPasswordInitializationConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~GetPasswordInitializationConfigurationResponse() = default;
};
class GetRootOrganizationalUnitRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  GetRootOrganizationalUnitRequest() {}

  explicit GetRootOrganizationalUnitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetRootOrganizationalUnitRequest() = default;
};
class GetRootOrganizationalUnitResponseBodyOrganizationalUnit : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> organizationalUnitId{};
  shared_ptr<string> organizationalUnitName{};
  shared_ptr<long> updateTime{};

  GetRootOrganizationalUnitResponseBodyOrganizationalUnit() {}

  explicit GetRootOrganizationalUnitResponseBodyOrganizationalUnit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (organizationalUnitId) {
      res["OrganizationalUnitId"] = boost::any(*organizationalUnitId);
    }
    if (organizationalUnitName) {
      res["OrganizationalUnitName"] = boost::any(*organizationalUnitName);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrganizationalUnitId") != m.end() && !m["OrganizationalUnitId"].empty()) {
      organizationalUnitId = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitId"]));
    }
    if (m.find("OrganizationalUnitName") != m.end() && !m["OrganizationalUnitName"].empty()) {
      organizationalUnitName = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitName"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~GetRootOrganizationalUnitResponseBodyOrganizationalUnit() = default;
};
class GetRootOrganizationalUnitResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetRootOrganizationalUnitResponseBodyOrganizationalUnit> organizationalUnit{};
  shared_ptr<string> requestId{};

  GetRootOrganizationalUnitResponseBody() {}

  explicit GetRootOrganizationalUnitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (organizationalUnit) {
      res["OrganizationalUnit"] = organizationalUnit ? boost::any(organizationalUnit->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrganizationalUnit") != m.end() && !m["OrganizationalUnit"].empty()) {
      if (typeid(map<string, boost::any>) == m["OrganizationalUnit"].type()) {
        GetRootOrganizationalUnitResponseBodyOrganizationalUnit model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OrganizationalUnit"]));
        organizationalUnit = make_shared<GetRootOrganizationalUnitResponseBodyOrganizationalUnit>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetRootOrganizationalUnitResponseBody() = default;
};
class GetRootOrganizationalUnitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRootOrganizationalUnitResponseBody> body{};

  GetRootOrganizationalUnitResponse() {}

  explicit GetRootOrganizationalUnitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRootOrganizationalUnitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRootOrganizationalUnitResponseBody>(model1);
      }
    }
  }


  virtual ~GetRootOrganizationalUnitResponse() = default;
};
class GetUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> userId{};

  GetUserRequest() {}

  explicit GetUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetUserRequest() = default;
};
class GetUserResponseBodyUserCustomFields : public Darabonba::Model {
public:
  shared_ptr<string> fieldName{};
  shared_ptr<string> fieldValue{};

  GetUserResponseBodyUserCustomFields() {}

  explicit GetUserResponseBodyUserCustomFields(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldName) {
      res["FieldName"] = boost::any(*fieldName);
    }
    if (fieldValue) {
      res["FieldValue"] = boost::any(*fieldValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FieldName") != m.end() && !m["FieldName"].empty()) {
      fieldName = make_shared<string>(boost::any_cast<string>(m["FieldName"]));
    }
    if (m.find("FieldValue") != m.end() && !m["FieldValue"].empty()) {
      fieldValue = make_shared<string>(boost::any_cast<string>(m["FieldValue"]));
    }
  }


  virtual ~GetUserResponseBodyUserCustomFields() = default;
};
class GetUserResponseBodyUserGroups : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};

  GetUserResponseBodyUserGroups() {}

  explicit GetUserResponseBodyUserGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~GetUserResponseBodyUserGroups() = default;
};
class GetUserResponseBodyUserOrganizationalUnits : public Darabonba::Model {
public:
  shared_ptr<string> organizationalUnitId{};
  shared_ptr<string> organizationalUnitName{};
  shared_ptr<bool> primary{};

  GetUserResponseBodyUserOrganizationalUnits() {}

  explicit GetUserResponseBodyUserOrganizationalUnits(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (organizationalUnitId) {
      res["OrganizationalUnitId"] = boost::any(*organizationalUnitId);
    }
    if (organizationalUnitName) {
      res["OrganizationalUnitName"] = boost::any(*organizationalUnitName);
    }
    if (primary) {
      res["Primary"] = boost::any(*primary);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrganizationalUnitId") != m.end() && !m["OrganizationalUnitId"].empty()) {
      organizationalUnitId = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitId"]));
    }
    if (m.find("OrganizationalUnitName") != m.end() && !m["OrganizationalUnitName"].empty()) {
      organizationalUnitName = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitName"]));
    }
    if (m.find("Primary") != m.end() && !m["Primary"].empty()) {
      primary = make_shared<bool>(boost::any_cast<bool>(m["Primary"]));
    }
  }


  virtual ~GetUserResponseBodyUserOrganizationalUnits() = default;
};
class GetUserResponseBodyUser : public Darabonba::Model {
public:
  shared_ptr<long> accountExpireTime{};
  shared_ptr<long> createTime{};
  shared_ptr<vector<GetUserResponseBodyUserCustomFields>> customFields{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> email{};
  shared_ptr<bool> emailVerified{};
  shared_ptr<vector<GetUserResponseBodyUserGroups>> groups{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> lockExpireTime{};
  shared_ptr<vector<GetUserResponseBodyUserOrganizationalUnits>> organizationalUnits{};
  shared_ptr<long> passwordExpireTime{};
  shared_ptr<bool> passwordSet{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<bool> phoneNumberVerified{};
  shared_ptr<string> phoneRegion{};
  shared_ptr<string> preferredLanguage{};
  shared_ptr<string> primaryOrganizationalUnitId{};
  shared_ptr<long> registerTime{};
  shared_ptr<string> status{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> userExternalId{};
  shared_ptr<string> userId{};
  shared_ptr<string> userSourceId{};
  shared_ptr<string> userSourceType{};
  shared_ptr<string> username{};

  GetUserResponseBodyUser() {}

  explicit GetUserResponseBodyUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountExpireTime) {
      res["AccountExpireTime"] = boost::any(*accountExpireTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (customFields) {
      vector<boost::any> temp1;
      for(auto item1:*customFields){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CustomFields"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (emailVerified) {
      res["EmailVerified"] = boost::any(*emailVerified);
    }
    if (groups) {
      vector<boost::any> temp1;
      for(auto item1:*groups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Groups"] = boost::any(temp1);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lockExpireTime) {
      res["LockExpireTime"] = boost::any(*lockExpireTime);
    }
    if (organizationalUnits) {
      vector<boost::any> temp1;
      for(auto item1:*organizationalUnits){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OrganizationalUnits"] = boost::any(temp1);
    }
    if (passwordExpireTime) {
      res["PasswordExpireTime"] = boost::any(*passwordExpireTime);
    }
    if (passwordSet) {
      res["PasswordSet"] = boost::any(*passwordSet);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (phoneNumberVerified) {
      res["PhoneNumberVerified"] = boost::any(*phoneNumberVerified);
    }
    if (phoneRegion) {
      res["PhoneRegion"] = boost::any(*phoneRegion);
    }
    if (preferredLanguage) {
      res["PreferredLanguage"] = boost::any(*preferredLanguage);
    }
    if (primaryOrganizationalUnitId) {
      res["PrimaryOrganizationalUnitId"] = boost::any(*primaryOrganizationalUnitId);
    }
    if (registerTime) {
      res["RegisterTime"] = boost::any(*registerTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (userExternalId) {
      res["UserExternalId"] = boost::any(*userExternalId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userSourceId) {
      res["UserSourceId"] = boost::any(*userSourceId);
    }
    if (userSourceType) {
      res["UserSourceType"] = boost::any(*userSourceType);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountExpireTime") != m.end() && !m["AccountExpireTime"].empty()) {
      accountExpireTime = make_shared<long>(boost::any_cast<long>(m["AccountExpireTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("CustomFields") != m.end() && !m["CustomFields"].empty()) {
      if (typeid(vector<boost::any>) == m["CustomFields"].type()) {
        vector<GetUserResponseBodyUserCustomFields> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CustomFields"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetUserResponseBodyUserCustomFields model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customFields = make_shared<vector<GetUserResponseBodyUserCustomFields>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("EmailVerified") != m.end() && !m["EmailVerified"].empty()) {
      emailVerified = make_shared<bool>(boost::any_cast<bool>(m["EmailVerified"]));
    }
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      if (typeid(vector<boost::any>) == m["Groups"].type()) {
        vector<GetUserResponseBodyUserGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Groups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetUserResponseBodyUserGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groups = make_shared<vector<GetUserResponseBodyUserGroups>>(expect1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LockExpireTime") != m.end() && !m["LockExpireTime"].empty()) {
      lockExpireTime = make_shared<long>(boost::any_cast<long>(m["LockExpireTime"]));
    }
    if (m.find("OrganizationalUnits") != m.end() && !m["OrganizationalUnits"].empty()) {
      if (typeid(vector<boost::any>) == m["OrganizationalUnits"].type()) {
        vector<GetUserResponseBodyUserOrganizationalUnits> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OrganizationalUnits"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetUserResponseBodyUserOrganizationalUnits model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        organizationalUnits = make_shared<vector<GetUserResponseBodyUserOrganizationalUnits>>(expect1);
      }
    }
    if (m.find("PasswordExpireTime") != m.end() && !m["PasswordExpireTime"].empty()) {
      passwordExpireTime = make_shared<long>(boost::any_cast<long>(m["PasswordExpireTime"]));
    }
    if (m.find("PasswordSet") != m.end() && !m["PasswordSet"].empty()) {
      passwordSet = make_shared<bool>(boost::any_cast<bool>(m["PasswordSet"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("PhoneNumberVerified") != m.end() && !m["PhoneNumberVerified"].empty()) {
      phoneNumberVerified = make_shared<bool>(boost::any_cast<bool>(m["PhoneNumberVerified"]));
    }
    if (m.find("PhoneRegion") != m.end() && !m["PhoneRegion"].empty()) {
      phoneRegion = make_shared<string>(boost::any_cast<string>(m["PhoneRegion"]));
    }
    if (m.find("PreferredLanguage") != m.end() && !m["PreferredLanguage"].empty()) {
      preferredLanguage = make_shared<string>(boost::any_cast<string>(m["PreferredLanguage"]));
    }
    if (m.find("PrimaryOrganizationalUnitId") != m.end() && !m["PrimaryOrganizationalUnitId"].empty()) {
      primaryOrganizationalUnitId = make_shared<string>(boost::any_cast<string>(m["PrimaryOrganizationalUnitId"]));
    }
    if (m.find("RegisterTime") != m.end() && !m["RegisterTime"].empty()) {
      registerTime = make_shared<long>(boost::any_cast<long>(m["RegisterTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("UserExternalId") != m.end() && !m["UserExternalId"].empty()) {
      userExternalId = make_shared<string>(boost::any_cast<string>(m["UserExternalId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserSourceId") != m.end() && !m["UserSourceId"].empty()) {
      userSourceId = make_shared<string>(boost::any_cast<string>(m["UserSourceId"]));
    }
    if (m.find("UserSourceType") != m.end() && !m["UserSourceType"].empty()) {
      userSourceType = make_shared<string>(boost::any_cast<string>(m["UserSourceType"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~GetUserResponseBodyUser() = default;
};
class GetUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetUserResponseBodyUser> user{};

  GetUserResponseBody() {}

  explicit GetUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (user) {
      res["User"] = user ? boost::any(user->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(map<string, boost::any>) == m["User"].type()) {
        GetUserResponseBodyUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["User"]));
        user = make_shared<GetUserResponseBodyUser>(model1);
      }
    }
  }


  virtual ~GetUserResponseBody() = default;
};
class GetUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserResponseBody> body{};

  GetUserResponse() {}

  explicit GetUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserResponse() = default;
};
class ListApplicationClientSecretsRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> instanceId{};

  ListApplicationClientSecretsRequest() {}

  explicit ListApplicationClientSecretsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ListApplicationClientSecretsRequest() = default;
};
class ListApplicationClientSecretsResponseBodyApplicationClientSecrets : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> clientId{};
  shared_ptr<string> clientSecret{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> lastUsedTime{};
  shared_ptr<string> secretId{};
  shared_ptr<string> status{};

  ListApplicationClientSecretsResponseBodyApplicationClientSecrets() {}

  explicit ListApplicationClientSecretsResponseBodyApplicationClientSecrets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientSecret) {
      res["ClientSecret"] = boost::any(*clientSecret);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lastUsedTime) {
      res["LastUsedTime"] = boost::any(*lastUsedTime);
    }
    if (secretId) {
      res["SecretId"] = boost::any(*secretId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientSecret") != m.end() && !m["ClientSecret"].empty()) {
      clientSecret = make_shared<string>(boost::any_cast<string>(m["ClientSecret"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LastUsedTime") != m.end() && !m["LastUsedTime"].empty()) {
      lastUsedTime = make_shared<long>(boost::any_cast<long>(m["LastUsedTime"]));
    }
    if (m.find("SecretId") != m.end() && !m["SecretId"].empty()) {
      secretId = make_shared<string>(boost::any_cast<string>(m["SecretId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListApplicationClientSecretsResponseBodyApplicationClientSecrets() = default;
};
class ListApplicationClientSecretsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListApplicationClientSecretsResponseBodyApplicationClientSecrets>> applicationClientSecrets{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListApplicationClientSecretsResponseBody() {}

  explicit ListApplicationClientSecretsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationClientSecrets) {
      vector<boost::any> temp1;
      for(auto item1:*applicationClientSecrets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApplicationClientSecrets"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationClientSecrets") != m.end() && !m["ApplicationClientSecrets"].empty()) {
      if (typeid(vector<boost::any>) == m["ApplicationClientSecrets"].type()) {
        vector<ListApplicationClientSecretsResponseBodyApplicationClientSecrets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApplicationClientSecrets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListApplicationClientSecretsResponseBodyApplicationClientSecrets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applicationClientSecrets = make_shared<vector<ListApplicationClientSecretsResponseBodyApplicationClientSecrets>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListApplicationClientSecretsResponseBody() = default;
};
class ListApplicationClientSecretsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListApplicationClientSecretsResponseBody> body{};

  ListApplicationClientSecretsResponse() {}

  explicit ListApplicationClientSecretsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListApplicationClientSecretsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListApplicationClientSecretsResponseBody>(model1);
      }
    }
  }


  virtual ~ListApplicationClientSecretsResponse() = default;
};
class ListApplicationsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> applicationIds{};
  shared_ptr<string> applicationName{};
  shared_ptr<string> authorizationType{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};

  ListApplicationsRequest() {}

  explicit ListApplicationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationIds) {
      res["ApplicationIds"] = boost::any(*applicationIds);
    }
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    if (authorizationType) {
      res["AuthorizationType"] = boost::any(*authorizationType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("ApplicationIds") != m.end() && !m["ApplicationIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicationIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicationIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicationIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
    if (m.find("AuthorizationType") != m.end() && !m["AuthorizationType"].empty()) {
      authorizationType = make_shared<string>(boost::any_cast<string>(m["AuthorizationType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
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


  virtual ~ListApplicationsRequest() = default;
};
class ListApplicationsResponseBodyApplications : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> applicationName{};
  shared_ptr<string> applicationSourceType{};
  shared_ptr<string> applicationTemplateId{};
  shared_ptr<string> clientId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> features{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> logoUrl{};
  shared_ptr<string> managedServiceCode{};
  shared_ptr<bool> serviceManaged{};
  shared_ptr<string> ssoType{};
  shared_ptr<string> status{};
  shared_ptr<long> updateTime{};

  ListApplicationsResponseBodyApplications() {}

  explicit ListApplicationsResponseBodyApplications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    if (applicationSourceType) {
      res["ApplicationSourceType"] = boost::any(*applicationSourceType);
    }
    if (applicationTemplateId) {
      res["ApplicationTemplateId"] = boost::any(*applicationTemplateId);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (features) {
      res["Features"] = boost::any(*features);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (logoUrl) {
      res["LogoUrl"] = boost::any(*logoUrl);
    }
    if (managedServiceCode) {
      res["ManagedServiceCode"] = boost::any(*managedServiceCode);
    }
    if (serviceManaged) {
      res["ServiceManaged"] = boost::any(*serviceManaged);
    }
    if (ssoType) {
      res["SsoType"] = boost::any(*ssoType);
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
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
    if (m.find("ApplicationSourceType") != m.end() && !m["ApplicationSourceType"].empty()) {
      applicationSourceType = make_shared<string>(boost::any_cast<string>(m["ApplicationSourceType"]));
    }
    if (m.find("ApplicationTemplateId") != m.end() && !m["ApplicationTemplateId"].empty()) {
      applicationTemplateId = make_shared<string>(boost::any_cast<string>(m["ApplicationTemplateId"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Features") != m.end() && !m["Features"].empty()) {
      features = make_shared<string>(boost::any_cast<string>(m["Features"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LogoUrl") != m.end() && !m["LogoUrl"].empty()) {
      logoUrl = make_shared<string>(boost::any_cast<string>(m["LogoUrl"]));
    }
    if (m.find("ManagedServiceCode") != m.end() && !m["ManagedServiceCode"].empty()) {
      managedServiceCode = make_shared<string>(boost::any_cast<string>(m["ManagedServiceCode"]));
    }
    if (m.find("ServiceManaged") != m.end() && !m["ServiceManaged"].empty()) {
      serviceManaged = make_shared<bool>(boost::any_cast<bool>(m["ServiceManaged"]));
    }
    if (m.find("SsoType") != m.end() && !m["SsoType"].empty()) {
      ssoType = make_shared<string>(boost::any_cast<string>(m["SsoType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~ListApplicationsResponseBodyApplications() = default;
};
class ListApplicationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListApplicationsResponseBodyApplications>> applications{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListApplicationsResponseBody() {}

  explicit ListApplicationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applications) {
      vector<boost::any> temp1;
      for(auto item1:*applications){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Applications"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Applications") != m.end() && !m["Applications"].empty()) {
      if (typeid(vector<boost::any>) == m["Applications"].type()) {
        vector<ListApplicationsResponseBodyApplications> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Applications"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListApplicationsResponseBodyApplications model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applications = make_shared<vector<ListApplicationsResponseBodyApplications>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListApplicationsResponseBody() = default;
};
class ListApplicationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListApplicationsResponseBody> body{};

  ListApplicationsResponse() {}

  explicit ListApplicationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListApplicationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListApplicationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListApplicationsResponse() = default;
};
class ListApplicationsForOrganizationalUnitRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> applicationIds{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> organizationalUnitId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListApplicationsForOrganizationalUnitRequest() {}

  explicit ListApplicationsForOrganizationalUnitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationIds) {
      res["ApplicationIds"] = boost::any(*applicationIds);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (organizationalUnitId) {
      res["OrganizationalUnitId"] = boost::any(*organizationalUnitId);
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
    if (m.find("ApplicationIds") != m.end() && !m["ApplicationIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicationIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicationIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicationIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrganizationalUnitId") != m.end() && !m["OrganizationalUnitId"].empty()) {
      organizationalUnitId = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListApplicationsForOrganizationalUnitRequest() = default;
};
class ListApplicationsForOrganizationalUnitResponseBodyApplications : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};

  ListApplicationsForOrganizationalUnitResponseBodyApplications() {}

  explicit ListApplicationsForOrganizationalUnitResponseBodyApplications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
  }


  virtual ~ListApplicationsForOrganizationalUnitResponseBodyApplications() = default;
};
class ListApplicationsForOrganizationalUnitResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListApplicationsForOrganizationalUnitResponseBodyApplications>> applications{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListApplicationsForOrganizationalUnitResponseBody() {}

  explicit ListApplicationsForOrganizationalUnitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applications) {
      vector<boost::any> temp1;
      for(auto item1:*applications){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Applications"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Applications") != m.end() && !m["Applications"].empty()) {
      if (typeid(vector<boost::any>) == m["Applications"].type()) {
        vector<ListApplicationsForOrganizationalUnitResponseBodyApplications> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Applications"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListApplicationsForOrganizationalUnitResponseBodyApplications model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applications = make_shared<vector<ListApplicationsForOrganizationalUnitResponseBodyApplications>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListApplicationsForOrganizationalUnitResponseBody() = default;
};
class ListApplicationsForOrganizationalUnitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListApplicationsForOrganizationalUnitResponseBody> body{};

  ListApplicationsForOrganizationalUnitResponse() {}

  explicit ListApplicationsForOrganizationalUnitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListApplicationsForOrganizationalUnitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListApplicationsForOrganizationalUnitResponseBody>(model1);
      }
    }
  }


  virtual ~ListApplicationsForOrganizationalUnitResponse() = default;
};
class ListApplicationsForUserRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> applicationIds{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> queryMode{};
  shared_ptr<string> userId{};

  ListApplicationsForUserRequest() {}

  explicit ListApplicationsForUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationIds) {
      res["ApplicationIds"] = boost::any(*applicationIds);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queryMode) {
      res["QueryMode"] = boost::any(*queryMode);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationIds") != m.end() && !m["ApplicationIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicationIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicationIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicationIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("QueryMode") != m.end() && !m["QueryMode"].empty()) {
      queryMode = make_shared<string>(boost::any_cast<string>(m["QueryMode"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListApplicationsForUserRequest() = default;
};
class ListApplicationsForUserResponseBodyApplications : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<bool> hasDirectAuthorization{};
  shared_ptr<bool> hasInheritAuthorization{};

  ListApplicationsForUserResponseBodyApplications() {}

  explicit ListApplicationsForUserResponseBodyApplications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (hasDirectAuthorization) {
      res["HasDirectAuthorization"] = boost::any(*hasDirectAuthorization);
    }
    if (hasInheritAuthorization) {
      res["HasInheritAuthorization"] = boost::any(*hasInheritAuthorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("HasDirectAuthorization") != m.end() && !m["HasDirectAuthorization"].empty()) {
      hasDirectAuthorization = make_shared<bool>(boost::any_cast<bool>(m["HasDirectAuthorization"]));
    }
    if (m.find("HasInheritAuthorization") != m.end() && !m["HasInheritAuthorization"].empty()) {
      hasInheritAuthorization = make_shared<bool>(boost::any_cast<bool>(m["HasInheritAuthorization"]));
    }
  }


  virtual ~ListApplicationsForUserResponseBodyApplications() = default;
};
class ListApplicationsForUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListApplicationsForUserResponseBodyApplications>> applications{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListApplicationsForUserResponseBody() {}

  explicit ListApplicationsForUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applications) {
      vector<boost::any> temp1;
      for(auto item1:*applications){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Applications"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Applications") != m.end() && !m["Applications"].empty()) {
      if (typeid(vector<boost::any>) == m["Applications"].type()) {
        vector<ListApplicationsForUserResponseBodyApplications> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Applications"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListApplicationsForUserResponseBodyApplications model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applications = make_shared<vector<ListApplicationsForUserResponseBodyApplications>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListApplicationsForUserResponseBody() = default;
};
class ListApplicationsForUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListApplicationsForUserResponseBody> body{};

  ListApplicationsForUserResponse() {}

  explicit ListApplicationsForUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListApplicationsForUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListApplicationsForUserResponseBody>(model1);
      }
    }
  }


  virtual ~ListApplicationsForUserResponse() = default;
};
class ListDomainProxyTokensRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainId{};
  shared_ptr<string> instanceId{};

  ListDomainProxyTokensRequest() {}

  explicit ListDomainProxyTokensRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ListDomainProxyTokensRequest() = default;
};
class ListDomainProxyTokensResponseBodyDomainProxyTokens : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> domainId{};
  shared_ptr<string> domainProxyToken{};
  shared_ptr<string> domainProxyTokenId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> lastUsedTime{};
  shared_ptr<string> status{};
  shared_ptr<long> updateTime{};

  ListDomainProxyTokensResponseBodyDomainProxyTokens() {}

  explicit ListDomainProxyTokensResponseBodyDomainProxyTokens(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (domainProxyToken) {
      res["DomainProxyToken"] = boost::any(*domainProxyToken);
    }
    if (domainProxyTokenId) {
      res["DomainProxyTokenId"] = boost::any(*domainProxyTokenId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lastUsedTime) {
      res["LastUsedTime"] = boost::any(*lastUsedTime);
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
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("DomainProxyToken") != m.end() && !m["DomainProxyToken"].empty()) {
      domainProxyToken = make_shared<string>(boost::any_cast<string>(m["DomainProxyToken"]));
    }
    if (m.find("DomainProxyTokenId") != m.end() && !m["DomainProxyTokenId"].empty()) {
      domainProxyTokenId = make_shared<string>(boost::any_cast<string>(m["DomainProxyTokenId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LastUsedTime") != m.end() && !m["LastUsedTime"].empty()) {
      lastUsedTime = make_shared<long>(boost::any_cast<long>(m["LastUsedTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~ListDomainProxyTokensResponseBodyDomainProxyTokens() = default;
};
class ListDomainProxyTokensResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDomainProxyTokensResponseBodyDomainProxyTokens>> domainProxyTokens{};
  shared_ptr<string> requestId{};

  ListDomainProxyTokensResponseBody() {}

  explicit ListDomainProxyTokensResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainProxyTokens) {
      vector<boost::any> temp1;
      for(auto item1:*domainProxyTokens){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DomainProxyTokens"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainProxyTokens") != m.end() && !m["DomainProxyTokens"].empty()) {
      if (typeid(vector<boost::any>) == m["DomainProxyTokens"].type()) {
        vector<ListDomainProxyTokensResponseBodyDomainProxyTokens> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DomainProxyTokens"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDomainProxyTokensResponseBodyDomainProxyTokens model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domainProxyTokens = make_shared<vector<ListDomainProxyTokensResponseBodyDomainProxyTokens>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDomainProxyTokensResponseBody() = default;
};
class ListDomainProxyTokensResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDomainProxyTokensResponseBody> body{};

  ListDomainProxyTokensResponse() {}

  explicit ListDomainProxyTokensResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDomainProxyTokensResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDomainProxyTokensResponseBody>(model1);
      }
    }
  }


  virtual ~ListDomainProxyTokensResponse() = default;
};
class ListDomainsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  ListDomainsRequest() {}

  explicit ListDomainsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ListDomainsRequest() = default;
};
class ListDomainsResponseBodyDomainsFiling : public Darabonba::Model {
public:
  shared_ptr<string> icpNumber{};

  ListDomainsResponseBodyDomainsFiling() {}

  explicit ListDomainsResponseBodyDomainsFiling(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (icpNumber) {
      res["IcpNumber"] = boost::any(*icpNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IcpNumber") != m.end() && !m["IcpNumber"].empty()) {
      icpNumber = make_shared<string>(boost::any_cast<string>(m["IcpNumber"]));
    }
  }


  virtual ~ListDomainsResponseBodyDomainsFiling() = default;
};
class ListDomainsResponseBodyDomains : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<bool> defaultDomain{};
  shared_ptr<string> domain{};
  shared_ptr<string> domainId{};
  shared_ptr<string> domainType{};
  shared_ptr<ListDomainsResponseBodyDomainsFiling> filing{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lockMode{};
  shared_ptr<long> updateTime{};

  ListDomainsResponseBodyDomains() {}

  explicit ListDomainsResponseBodyDomains(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (defaultDomain) {
      res["DefaultDomain"] = boost::any(*defaultDomain);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (domainType) {
      res["DomainType"] = boost::any(*domainType);
    }
    if (filing) {
      res["Filing"] = filing ? boost::any(filing->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DefaultDomain") != m.end() && !m["DefaultDomain"].empty()) {
      defaultDomain = make_shared<bool>(boost::any_cast<bool>(m["DefaultDomain"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("DomainType") != m.end() && !m["DomainType"].empty()) {
      domainType = make_shared<string>(boost::any_cast<string>(m["DomainType"]));
    }
    if (m.find("Filing") != m.end() && !m["Filing"].empty()) {
      if (typeid(map<string, boost::any>) == m["Filing"].type()) {
        ListDomainsResponseBodyDomainsFiling model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Filing"]));
        filing = make_shared<ListDomainsResponseBodyDomainsFiling>(model1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~ListDomainsResponseBodyDomains() = default;
};
class ListDomainsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDomainsResponseBodyDomains>> domains{};
  shared_ptr<string> requestId{};

  ListDomainsResponseBody() {}

  explicit ListDomainsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domains) {
      vector<boost::any> temp1;
      for(auto item1:*domains){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Domains"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domains") != m.end() && !m["Domains"].empty()) {
      if (typeid(vector<boost::any>) == m["Domains"].type()) {
        vector<ListDomainsResponseBodyDomains> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Domains"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDomainsResponseBodyDomains model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domains = make_shared<vector<ListDomainsResponseBodyDomains>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDomainsResponseBody() = default;
};
class ListDomainsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDomainsResponseBody> body{};

  ListDomainsResponse() {}

  explicit ListDomainsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDomainsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDomainsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDomainsResponse() = default;
};
class ListEiamInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<string> instanceRegionId{};

  ListEiamInstancesRequest() {}

  explicit ListEiamInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (instanceRegionId) {
      res["InstanceRegionId"] = boost::any(*instanceRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceRegionId") != m.end() && !m["InstanceRegionId"].empty()) {
      instanceRegionId = make_shared<string>(boost::any_cast<string>(m["InstanceRegionId"]));
    }
  }


  virtual ~ListEiamInstancesRequest() = default;
};
class ListEiamInstancesResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> developerAPIPrivateDomain{};
  shared_ptr<string> developerAPIPublicDomain{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> instanceVersion{};
  shared_ptr<string> openAPIPrivateDomain{};
  shared_ptr<string> openAPIPublicDomain{};
  shared_ptr<string> SSODomain{};
  shared_ptr<long> startTime{};

  ListEiamInstancesResponseBodyInstances() {}

  explicit ListEiamInstancesResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (developerAPIPrivateDomain) {
      res["DeveloperAPIPrivateDomain"] = boost::any(*developerAPIPrivateDomain);
    }
    if (developerAPIPublicDomain) {
      res["DeveloperAPIPublicDomain"] = boost::any(*developerAPIPublicDomain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (instanceVersion) {
      res["InstanceVersion"] = boost::any(*instanceVersion);
    }
    if (openAPIPrivateDomain) {
      res["OpenAPIPrivateDomain"] = boost::any(*openAPIPrivateDomain);
    }
    if (openAPIPublicDomain) {
      res["OpenAPIPublicDomain"] = boost::any(*openAPIPublicDomain);
    }
    if (SSODomain) {
      res["SSODomain"] = boost::any(*SSODomain);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DeveloperAPIPrivateDomain") != m.end() && !m["DeveloperAPIPrivateDomain"].empty()) {
      developerAPIPrivateDomain = make_shared<string>(boost::any_cast<string>(m["DeveloperAPIPrivateDomain"]));
    }
    if (m.find("DeveloperAPIPublicDomain") != m.end() && !m["DeveloperAPIPublicDomain"].empty()) {
      developerAPIPublicDomain = make_shared<string>(boost::any_cast<string>(m["DeveloperAPIPublicDomain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("InstanceVersion") != m.end() && !m["InstanceVersion"].empty()) {
      instanceVersion = make_shared<string>(boost::any_cast<string>(m["InstanceVersion"]));
    }
    if (m.find("OpenAPIPrivateDomain") != m.end() && !m["OpenAPIPrivateDomain"].empty()) {
      openAPIPrivateDomain = make_shared<string>(boost::any_cast<string>(m["OpenAPIPrivateDomain"]));
    }
    if (m.find("OpenAPIPublicDomain") != m.end() && !m["OpenAPIPublicDomain"].empty()) {
      openAPIPublicDomain = make_shared<string>(boost::any_cast<string>(m["OpenAPIPublicDomain"]));
    }
    if (m.find("SSODomain") != m.end() && !m["SSODomain"].empty()) {
      SSODomain = make_shared<string>(boost::any_cast<string>(m["SSODomain"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~ListEiamInstancesResponseBodyInstances() = default;
};
class ListEiamInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListEiamInstancesResponseBodyInstances>> instances{};
  shared_ptr<string> requestId{};

  ListEiamInstancesResponseBody() {}

  explicit ListEiamInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instances"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(vector<boost::any>) == m["Instances"].type()) {
        vector<ListEiamInstancesResponseBodyInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEiamInstancesResponseBodyInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<ListEiamInstancesResponseBodyInstances>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListEiamInstancesResponseBody() = default;
};
class ListEiamInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEiamInstancesResponseBody> body{};

  ListEiamInstancesResponse() {}

  explicit ListEiamInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEiamInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEiamInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListEiamInstancesResponse() = default;
};
class ListEiamRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionId{};

  ListEiamRegionsResponseBodyRegions() {}

  explicit ListEiamRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListEiamRegionsResponseBodyRegions() = default;
};
class ListEiamRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListEiamRegionsResponseBodyRegions>> regions{};
  shared_ptr<string> requestId{};

  ListEiamRegionsResponseBody() {}

  explicit ListEiamRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regions) {
      vector<boost::any> temp1;
      for(auto item1:*regions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Regions"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(vector<boost::any>) == m["Regions"].type()) {
        vector<ListEiamRegionsResponseBodyRegions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Regions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEiamRegionsResponseBodyRegions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regions = make_shared<vector<ListEiamRegionsResponseBodyRegions>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListEiamRegionsResponseBody() = default;
};
class ListEiamRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEiamRegionsResponseBody> body{};

  ListEiamRegionsResponse() {}

  explicit ListEiamRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEiamRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEiamRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListEiamRegionsResponse() = default;
};
class ListGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupExternalId{};
  shared_ptr<vector<string>> groupIds{};
  shared_ptr<string> groupName{};
  shared_ptr<string> groupNameStartsWith{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListGroupsRequest() {}

  explicit ListGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupExternalId) {
      res["GroupExternalId"] = boost::any(*groupExternalId);
    }
    if (groupIds) {
      res["GroupIds"] = boost::any(*groupIds);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (groupNameStartsWith) {
      res["GroupNameStartsWith"] = boost::any(*groupNameStartsWith);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("GroupExternalId") != m.end() && !m["GroupExternalId"].empty()) {
      groupExternalId = make_shared<string>(boost::any_cast<string>(m["GroupExternalId"]));
    }
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["GroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      groupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("GroupNameStartsWith") != m.end() && !m["GroupNameStartsWith"].empty()) {
      groupNameStartsWith = make_shared<string>(boost::any_cast<string>(m["GroupNameStartsWith"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListGroupsRequest() = default;
};
class ListGroupsResponseBodyGroups : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> groupExternalId{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> groupSourceId{};
  shared_ptr<string> groupSourceType{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> updateTime{};

  ListGroupsResponseBodyGroups() {}

  explicit ListGroupsResponseBodyGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (groupExternalId) {
      res["GroupExternalId"] = boost::any(*groupExternalId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (groupSourceId) {
      res["GroupSourceId"] = boost::any(*groupSourceId);
    }
    if (groupSourceType) {
      res["GroupSourceType"] = boost::any(*groupSourceType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
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
    if (m.find("GroupExternalId") != m.end() && !m["GroupExternalId"].empty()) {
      groupExternalId = make_shared<string>(boost::any_cast<string>(m["GroupExternalId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("GroupSourceId") != m.end() && !m["GroupSourceId"].empty()) {
      groupSourceId = make_shared<string>(boost::any_cast<string>(m["GroupSourceId"]));
    }
    if (m.find("GroupSourceType") != m.end() && !m["GroupSourceType"].empty()) {
      groupSourceType = make_shared<string>(boost::any_cast<string>(m["GroupSourceType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~ListGroupsResponseBodyGroups() = default;
};
class ListGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListGroupsResponseBodyGroups>> groups{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListGroupsResponseBody() {}

  explicit ListGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groups) {
      vector<boost::any> temp1;
      for(auto item1:*groups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Groups"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      if (typeid(vector<boost::any>) == m["Groups"].type()) {
        vector<ListGroupsResponseBodyGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Groups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGroupsResponseBodyGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groups = make_shared<vector<ListGroupsResponseBodyGroups>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListGroupsResponseBody() = default;
};
class ListGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGroupsResponseBody> body{};

  ListGroupsResponse() {}

  explicit ListGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListGroupsResponse() = default;
};
class ListGroupsForApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<vector<string>> groupIds{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListGroupsForApplicationRequest() {}

  explicit ListGroupsForApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (groupIds) {
      res["GroupIds"] = boost::any(*groupIds);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["GroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      groupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListGroupsForApplicationRequest() = default;
};
class ListGroupsForApplicationResponseBodyGroups : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};

  ListGroupsForApplicationResponseBodyGroups() {}

  explicit ListGroupsForApplicationResponseBodyGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
  }


  virtual ~ListGroupsForApplicationResponseBodyGroups() = default;
};
class ListGroupsForApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListGroupsForApplicationResponseBodyGroups>> groups{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListGroupsForApplicationResponseBody() {}

  explicit ListGroupsForApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groups) {
      vector<boost::any> temp1;
      for(auto item1:*groups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Groups"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      if (typeid(vector<boost::any>) == m["Groups"].type()) {
        vector<ListGroupsForApplicationResponseBodyGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Groups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGroupsForApplicationResponseBodyGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groups = make_shared<vector<ListGroupsForApplicationResponseBodyGroups>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListGroupsForApplicationResponseBody() = default;
};
class ListGroupsForApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGroupsForApplicationResponseBody> body{};

  ListGroupsForApplicationResponse() {}

  explicit ListGroupsForApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListGroupsForApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGroupsForApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~ListGroupsForApplicationResponse() = default;
};
class ListGroupsForUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> userId{};

  ListGroupsForUserRequest() {}

  explicit ListGroupsForUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListGroupsForUserRequest() = default;
};
class ListGroupsForUserResponseBodyGroups : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> groupMemberRelationSourceId{};
  shared_ptr<string> groupMemberRelationSourceType{};

  ListGroupsForUserResponseBodyGroups() {}

  explicit ListGroupsForUserResponseBodyGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupMemberRelationSourceId) {
      res["GroupMemberRelationSourceId"] = boost::any(*groupMemberRelationSourceId);
    }
    if (groupMemberRelationSourceType) {
      res["GroupMemberRelationSourceType"] = boost::any(*groupMemberRelationSourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupMemberRelationSourceId") != m.end() && !m["GroupMemberRelationSourceId"].empty()) {
      groupMemberRelationSourceId = make_shared<string>(boost::any_cast<string>(m["GroupMemberRelationSourceId"]));
    }
    if (m.find("GroupMemberRelationSourceType") != m.end() && !m["GroupMemberRelationSourceType"].empty()) {
      groupMemberRelationSourceType = make_shared<string>(boost::any_cast<string>(m["GroupMemberRelationSourceType"]));
    }
  }


  virtual ~ListGroupsForUserResponseBodyGroups() = default;
};
class ListGroupsForUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListGroupsForUserResponseBodyGroups>> groups{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListGroupsForUserResponseBody() {}

  explicit ListGroupsForUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groups) {
      vector<boost::any> temp1;
      for(auto item1:*groups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Groups"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      if (typeid(vector<boost::any>) == m["Groups"].type()) {
        vector<ListGroupsForUserResponseBodyGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Groups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGroupsForUserResponseBodyGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groups = make_shared<vector<ListGroupsForUserResponseBodyGroups>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListGroupsForUserResponseBody() = default;
};
class ListGroupsForUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGroupsForUserResponseBody> body{};

  ListGroupsForUserResponse() {}

  explicit ListGroupsForUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListGroupsForUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGroupsForUserResponseBody>(model1);
      }
    }
  }


  virtual ~ListGroupsForUserResponse() = default;
};
class ListInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};

  ListInstancesRequest() {}

  explicit ListInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
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
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
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


  virtual ~ListInstancesRequest() = default;
};
class ListInstancesResponseBodyInstancesDefaultEndpoint : public Darabonba::Model {
public:
  shared_ptr<string> endpoint{};
  shared_ptr<string> status{};

  ListInstancesResponseBodyInstancesDefaultEndpoint() {}

  explicit ListInstancesResponseBodyInstancesDefaultEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListInstancesResponseBodyInstancesDefaultEndpoint() = default;
};
class ListInstancesResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<ListInstancesResponseBodyInstancesDefaultEndpoint> defaultEndpoint{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> status{};

  ListInstancesResponseBodyInstances() {}

  explicit ListInstancesResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (defaultEndpoint) {
      res["DefaultEndpoint"] = defaultEndpoint ? boost::any(defaultEndpoint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DefaultEndpoint") != m.end() && !m["DefaultEndpoint"].empty()) {
      if (typeid(map<string, boost::any>) == m["DefaultEndpoint"].type()) {
        ListInstancesResponseBodyInstancesDefaultEndpoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DefaultEndpoint"]));
        defaultEndpoint = make_shared<ListInstancesResponseBodyInstancesDefaultEndpoint>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListInstancesResponseBodyInstances() = default;
};
class ListInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListInstancesResponseBodyInstances>> instances{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListInstancesResponseBody() {}

  explicit ListInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instances"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(vector<boost::any>) == m["Instances"].type()) {
        vector<ListInstancesResponseBodyInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesResponseBodyInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<ListInstancesResponseBodyInstances>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListInstancesResponseBody() = default;
};
class ListInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstancesResponseBody> body{};

  ListInstancesResponse() {}

  explicit ListInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstancesResponse() = default;
};
class ListNetworkAccessEndpointAvailableRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionId{};

  ListNetworkAccessEndpointAvailableRegionsResponseBodyRegions() {}

  explicit ListNetworkAccessEndpointAvailableRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListNetworkAccessEndpointAvailableRegionsResponseBodyRegions() = default;
};
class ListNetworkAccessEndpointAvailableRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListNetworkAccessEndpointAvailableRegionsResponseBodyRegions>> regions{};
  shared_ptr<string> requestId{};

  ListNetworkAccessEndpointAvailableRegionsResponseBody() {}

  explicit ListNetworkAccessEndpointAvailableRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regions) {
      vector<boost::any> temp1;
      for(auto item1:*regions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Regions"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(vector<boost::any>) == m["Regions"].type()) {
        vector<ListNetworkAccessEndpointAvailableRegionsResponseBodyRegions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Regions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNetworkAccessEndpointAvailableRegionsResponseBodyRegions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regions = make_shared<vector<ListNetworkAccessEndpointAvailableRegionsResponseBodyRegions>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListNetworkAccessEndpointAvailableRegionsResponseBody() = default;
};
class ListNetworkAccessEndpointAvailableRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListNetworkAccessEndpointAvailableRegionsResponseBody> body{};

  ListNetworkAccessEndpointAvailableRegionsResponse() {}

  explicit ListNetworkAccessEndpointAvailableRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListNetworkAccessEndpointAvailableRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNetworkAccessEndpointAvailableRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListNetworkAccessEndpointAvailableRegionsResponse() = default;
};
class ListNetworkAccessEndpointAvailableZonesRequest : public Darabonba::Model {
public:
  shared_ptr<string> naeRegionId{};

  ListNetworkAccessEndpointAvailableZonesRequest() {}

  explicit ListNetworkAccessEndpointAvailableZonesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (naeRegionId) {
      res["NaeRegionId"] = boost::any(*naeRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NaeRegionId") != m.end() && !m["NaeRegionId"].empty()) {
      naeRegionId = make_shared<string>(boost::any_cast<string>(m["NaeRegionId"]));
    }
  }


  virtual ~ListNetworkAccessEndpointAvailableZonesRequest() = default;
};
class ListNetworkAccessEndpointAvailableZonesResponseBodyZones : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> zoneId{};

  ListNetworkAccessEndpointAvailableZonesResponseBodyZones() {}

  explicit ListNetworkAccessEndpointAvailableZonesResponseBodyZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListNetworkAccessEndpointAvailableZonesResponseBodyZones() = default;
};
class ListNetworkAccessEndpointAvailableZonesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListNetworkAccessEndpointAvailableZonesResponseBodyZones>> zones{};

  ListNetworkAccessEndpointAvailableZonesResponseBody() {}

  explicit ListNetworkAccessEndpointAvailableZonesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (zones) {
      vector<boost::any> temp1;
      for(auto item1:*zones){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Zones"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      if (typeid(vector<boost::any>) == m["Zones"].type()) {
        vector<ListNetworkAccessEndpointAvailableZonesResponseBodyZones> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Zones"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNetworkAccessEndpointAvailableZonesResponseBodyZones model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zones = make_shared<vector<ListNetworkAccessEndpointAvailableZonesResponseBodyZones>>(expect1);
      }
    }
  }


  virtual ~ListNetworkAccessEndpointAvailableZonesResponseBody() = default;
};
class ListNetworkAccessEndpointAvailableZonesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListNetworkAccessEndpointAvailableZonesResponseBody> body{};

  ListNetworkAccessEndpointAvailableZonesResponse() {}

  explicit ListNetworkAccessEndpointAvailableZonesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListNetworkAccessEndpointAvailableZonesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNetworkAccessEndpointAvailableZonesResponseBody>(model1);
      }
    }
  }


  virtual ~ListNetworkAccessEndpointAvailableZonesResponse() = default;
};
class ListNetworkAccessEndpointsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> networkAccessEndpointStatus{};
  shared_ptr<string> networkAccessEndpointType{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcRegionId{};

  ListNetworkAccessEndpointsRequest() {}

  explicit ListNetworkAccessEndpointsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (networkAccessEndpointStatus) {
      res["NetworkAccessEndpointStatus"] = boost::any(*networkAccessEndpointStatus);
    }
    if (networkAccessEndpointType) {
      res["NetworkAccessEndpointType"] = boost::any(*networkAccessEndpointType);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcRegionId) {
      res["VpcRegionId"] = boost::any(*vpcRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NetworkAccessEndpointStatus") != m.end() && !m["NetworkAccessEndpointStatus"].empty()) {
      networkAccessEndpointStatus = make_shared<string>(boost::any_cast<string>(m["NetworkAccessEndpointStatus"]));
    }
    if (m.find("NetworkAccessEndpointType") != m.end() && !m["NetworkAccessEndpointType"].empty()) {
      networkAccessEndpointType = make_shared<string>(boost::any_cast<string>(m["NetworkAccessEndpointType"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcRegionId") != m.end() && !m["VpcRegionId"].empty()) {
      vpcRegionId = make_shared<string>(boost::any_cast<string>(m["VpcRegionId"]));
    }
  }


  virtual ~ListNetworkAccessEndpointsRequest() = default;
};
class ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> networkAccessEndpointId{};
  shared_ptr<string> networkAccessEndpointName{};
  shared_ptr<string> networkAccessEndpointType{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> status{};
  shared_ptr<long> updateTime{};
  shared_ptr<vector<string>> vSwitchIds{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcRegionId{};

  ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints() {}

  explicit ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (networkAccessEndpointId) {
      res["NetworkAccessEndpointId"] = boost::any(*networkAccessEndpointId);
    }
    if (networkAccessEndpointName) {
      res["NetworkAccessEndpointName"] = boost::any(*networkAccessEndpointName);
    }
    if (networkAccessEndpointType) {
      res["NetworkAccessEndpointType"] = boost::any(*networkAccessEndpointType);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcRegionId) {
      res["VpcRegionId"] = boost::any(*vpcRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NetworkAccessEndpointId") != m.end() && !m["NetworkAccessEndpointId"].empty()) {
      networkAccessEndpointId = make_shared<string>(boost::any_cast<string>(m["NetworkAccessEndpointId"]));
    }
    if (m.find("NetworkAccessEndpointName") != m.end() && !m["NetworkAccessEndpointName"].empty()) {
      networkAccessEndpointName = make_shared<string>(boost::any_cast<string>(m["NetworkAccessEndpointName"]));
    }
    if (m.find("NetworkAccessEndpointType") != m.end() && !m["NetworkAccessEndpointType"].empty()) {
      networkAccessEndpointType = make_shared<string>(boost::any_cast<string>(m["NetworkAccessEndpointType"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcRegionId") != m.end() && !m["VpcRegionId"].empty()) {
      vpcRegionId = make_shared<string>(boost::any_cast<string>(m["VpcRegionId"]));
    }
  }


  virtual ~ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints() = default;
};
class ListNetworkAccessEndpointsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints>> networkAccessEndpoints{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListNetworkAccessEndpointsResponseBody() {}

  explicit ListNetworkAccessEndpointsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (networkAccessEndpoints) {
      vector<boost::any> temp1;
      for(auto item1:*networkAccessEndpoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NetworkAccessEndpoints"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetworkAccessEndpoints") != m.end() && !m["NetworkAccessEndpoints"].empty()) {
      if (typeid(vector<boost::any>) == m["NetworkAccessEndpoints"].type()) {
        vector<ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NetworkAccessEndpoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        networkAccessEndpoints = make_shared<vector<ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListNetworkAccessEndpointsResponseBody() = default;
};
class ListNetworkAccessEndpointsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListNetworkAccessEndpointsResponseBody> body{};

  ListNetworkAccessEndpointsResponse() {}

  explicit ListNetworkAccessEndpointsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListNetworkAccessEndpointsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNetworkAccessEndpointsResponseBody>(model1);
      }
    }
  }


  virtual ~ListNetworkAccessEndpointsResponse() = default;
};
class ListNetworkAccessPathsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> networkAccessEndpointId{};

  ListNetworkAccessPathsRequest() {}

  explicit ListNetworkAccessPathsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (networkAccessEndpointId) {
      res["NetworkAccessEndpointId"] = boost::any(*networkAccessEndpointId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NetworkAccessEndpointId") != m.end() && !m["NetworkAccessEndpointId"].empty()) {
      networkAccessEndpointId = make_shared<string>(boost::any_cast<string>(m["NetworkAccessEndpointId"]));
    }
  }


  virtual ~ListNetworkAccessPathsRequest() = default;
};
class ListNetworkAccessPathsResponseBodyNetworkAccessPaths : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> networkAccessEndpointId{};
  shared_ptr<string> networkAccessPathId{};
  shared_ptr<string> networkInterfaceId{};
  shared_ptr<string> privateIpAddress{};
  shared_ptr<string> status{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> vSwitchId{};

  ListNetworkAccessPathsResponseBodyNetworkAccessPaths() {}

  explicit ListNetworkAccessPathsResponseBodyNetworkAccessPaths(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (networkAccessEndpointId) {
      res["NetworkAccessEndpointId"] = boost::any(*networkAccessEndpointId);
    }
    if (networkAccessPathId) {
      res["NetworkAccessPathId"] = boost::any(*networkAccessPathId);
    }
    if (networkInterfaceId) {
      res["NetworkInterfaceId"] = boost::any(*networkInterfaceId);
    }
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NetworkAccessEndpointId") != m.end() && !m["NetworkAccessEndpointId"].empty()) {
      networkAccessEndpointId = make_shared<string>(boost::any_cast<string>(m["NetworkAccessEndpointId"]));
    }
    if (m.find("NetworkAccessPathId") != m.end() && !m["NetworkAccessPathId"].empty()) {
      networkAccessPathId = make_shared<string>(boost::any_cast<string>(m["NetworkAccessPathId"]));
    }
    if (m.find("NetworkInterfaceId") != m.end() && !m["NetworkInterfaceId"].empty()) {
      networkInterfaceId = make_shared<string>(boost::any_cast<string>(m["NetworkInterfaceId"]));
    }
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<string>(boost::any_cast<string>(m["PrivateIpAddress"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~ListNetworkAccessPathsResponseBodyNetworkAccessPaths() = default;
};
class ListNetworkAccessPathsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListNetworkAccessPathsResponseBodyNetworkAccessPaths>> networkAccessPaths{};
  shared_ptr<string> requestId{};

  ListNetworkAccessPathsResponseBody() {}

  explicit ListNetworkAccessPathsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (networkAccessPaths) {
      vector<boost::any> temp1;
      for(auto item1:*networkAccessPaths){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NetworkAccessPaths"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetworkAccessPaths") != m.end() && !m["NetworkAccessPaths"].empty()) {
      if (typeid(vector<boost::any>) == m["NetworkAccessPaths"].type()) {
        vector<ListNetworkAccessPathsResponseBodyNetworkAccessPaths> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NetworkAccessPaths"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNetworkAccessPathsResponseBodyNetworkAccessPaths model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        networkAccessPaths = make_shared<vector<ListNetworkAccessPathsResponseBodyNetworkAccessPaths>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListNetworkAccessPathsResponseBody() = default;
};
class ListNetworkAccessPathsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListNetworkAccessPathsResponseBody> body{};

  ListNetworkAccessPathsResponse() {}

  explicit ListNetworkAccessPathsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListNetworkAccessPathsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNetworkAccessPathsResponseBody>(model1);
      }
    }
  }


  virtual ~ListNetworkAccessPathsResponse() = default;
};
class ListOrganizationalUnitParentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> organizationalUnitId{};

  ListOrganizationalUnitParentsRequest() {}

  explicit ListOrganizationalUnitParentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (organizationalUnitId) {
      res["OrganizationalUnitId"] = boost::any(*organizationalUnitId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrganizationalUnitId") != m.end() && !m["OrganizationalUnitId"].empty()) {
      organizationalUnitId = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitId"]));
    }
  }


  virtual ~ListOrganizationalUnitParentsRequest() = default;
};
class ListOrganizationalUnitParentsResponseBodyParents : public Darabonba::Model {
public:
  shared_ptr<string> organizationalUnitId{};
  shared_ptr<string> parentId{};

  ListOrganizationalUnitParentsResponseBodyParents() {}

  explicit ListOrganizationalUnitParentsResponseBodyParents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (organizationalUnitId) {
      res["OrganizationalUnitId"] = boost::any(*organizationalUnitId);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrganizationalUnitId") != m.end() && !m["OrganizationalUnitId"].empty()) {
      organizationalUnitId = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitId"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
  }


  virtual ~ListOrganizationalUnitParentsResponseBodyParents() = default;
};
class ListOrganizationalUnitParentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListOrganizationalUnitParentsResponseBodyParents>> parents{};
  shared_ptr<string> requestId{};

  ListOrganizationalUnitParentsResponseBody() {}

  explicit ListOrganizationalUnitParentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parents) {
      vector<boost::any> temp1;
      for(auto item1:*parents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parents"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Parents") != m.end() && !m["Parents"].empty()) {
      if (typeid(vector<boost::any>) == m["Parents"].type()) {
        vector<ListOrganizationalUnitParentsResponseBodyParents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOrganizationalUnitParentsResponseBodyParents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parents = make_shared<vector<ListOrganizationalUnitParentsResponseBodyParents>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListOrganizationalUnitParentsResponseBody() = default;
};
class ListOrganizationalUnitParentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListOrganizationalUnitParentsResponseBody> body{};

  ListOrganizationalUnitParentsResponse() {}

  explicit ListOrganizationalUnitParentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOrganizationalUnitParentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOrganizationalUnitParentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListOrganizationalUnitParentsResponse() = default;
};
class ListOrganizationalUnitsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> organizationalUnitIds{};
  shared_ptr<string> organizationalUnitName{};
  shared_ptr<string> organizationalUnitNameStartsWith{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> parentId{};

  ListOrganizationalUnitsRequest() {}

  explicit ListOrganizationalUnitsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (organizationalUnitIds) {
      res["OrganizationalUnitIds"] = boost::any(*organizationalUnitIds);
    }
    if (organizationalUnitName) {
      res["OrganizationalUnitName"] = boost::any(*organizationalUnitName);
    }
    if (organizationalUnitNameStartsWith) {
      res["OrganizationalUnitNameStartsWith"] = boost::any(*organizationalUnitNameStartsWith);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrganizationalUnitIds") != m.end() && !m["OrganizationalUnitIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OrganizationalUnitIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OrganizationalUnitIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      organizationalUnitIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OrganizationalUnitName") != m.end() && !m["OrganizationalUnitName"].empty()) {
      organizationalUnitName = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitName"]));
    }
    if (m.find("OrganizationalUnitNameStartsWith") != m.end() && !m["OrganizationalUnitNameStartsWith"].empty()) {
      organizationalUnitNameStartsWith = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitNameStartsWith"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
  }


  virtual ~ListOrganizationalUnitsRequest() = default;
};
class ListOrganizationalUnitsResponseBodyOrganizationalUnits : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> leaf{};
  shared_ptr<string> organizationalUnitExternalId{};
  shared_ptr<string> organizationalUnitId{};
  shared_ptr<string> organizationalUnitName{};
  shared_ptr<string> organizationalUnitSourceId{};
  shared_ptr<string> organizationalUnitSourceType{};
  shared_ptr<string> parentId{};
  shared_ptr<long> updateTime{};

  ListOrganizationalUnitsResponseBodyOrganizationalUnits() {}

  explicit ListOrganizationalUnitsResponseBodyOrganizationalUnits(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (leaf) {
      res["Leaf"] = boost::any(*leaf);
    }
    if (organizationalUnitExternalId) {
      res["OrganizationalUnitExternalId"] = boost::any(*organizationalUnitExternalId);
    }
    if (organizationalUnitId) {
      res["OrganizationalUnitId"] = boost::any(*organizationalUnitId);
    }
    if (organizationalUnitName) {
      res["OrganizationalUnitName"] = boost::any(*organizationalUnitName);
    }
    if (organizationalUnitSourceId) {
      res["OrganizationalUnitSourceId"] = boost::any(*organizationalUnitSourceId);
    }
    if (organizationalUnitSourceType) {
      res["OrganizationalUnitSourceType"] = boost::any(*organizationalUnitSourceType);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Leaf") != m.end() && !m["Leaf"].empty()) {
      leaf = make_shared<bool>(boost::any_cast<bool>(m["Leaf"]));
    }
    if (m.find("OrganizationalUnitExternalId") != m.end() && !m["OrganizationalUnitExternalId"].empty()) {
      organizationalUnitExternalId = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitExternalId"]));
    }
    if (m.find("OrganizationalUnitId") != m.end() && !m["OrganizationalUnitId"].empty()) {
      organizationalUnitId = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitId"]));
    }
    if (m.find("OrganizationalUnitName") != m.end() && !m["OrganizationalUnitName"].empty()) {
      organizationalUnitName = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitName"]));
    }
    if (m.find("OrganizationalUnitSourceId") != m.end() && !m["OrganizationalUnitSourceId"].empty()) {
      organizationalUnitSourceId = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitSourceId"]));
    }
    if (m.find("OrganizationalUnitSourceType") != m.end() && !m["OrganizationalUnitSourceType"].empty()) {
      organizationalUnitSourceType = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitSourceType"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~ListOrganizationalUnitsResponseBodyOrganizationalUnits() = default;
};
class ListOrganizationalUnitsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListOrganizationalUnitsResponseBodyOrganizationalUnits>> organizationalUnits{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListOrganizationalUnitsResponseBody() {}

  explicit ListOrganizationalUnitsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (organizationalUnits) {
      vector<boost::any> temp1;
      for(auto item1:*organizationalUnits){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OrganizationalUnits"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrganizationalUnits") != m.end() && !m["OrganizationalUnits"].empty()) {
      if (typeid(vector<boost::any>) == m["OrganizationalUnits"].type()) {
        vector<ListOrganizationalUnitsResponseBodyOrganizationalUnits> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OrganizationalUnits"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOrganizationalUnitsResponseBodyOrganizationalUnits model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        organizationalUnits = make_shared<vector<ListOrganizationalUnitsResponseBodyOrganizationalUnits>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListOrganizationalUnitsResponseBody() = default;
};
class ListOrganizationalUnitsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListOrganizationalUnitsResponseBody> body{};

  ListOrganizationalUnitsResponse() {}

  explicit ListOrganizationalUnitsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOrganizationalUnitsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOrganizationalUnitsResponseBody>(model1);
      }
    }
  }


  virtual ~ListOrganizationalUnitsResponse() = default;
};
class ListOrganizationalUnitsForApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> organizationalUnitIds{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListOrganizationalUnitsForApplicationRequest() {}

  explicit ListOrganizationalUnitsForApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (organizationalUnitIds) {
      res["OrganizationalUnitIds"] = boost::any(*organizationalUnitIds);
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
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrganizationalUnitIds") != m.end() && !m["OrganizationalUnitIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OrganizationalUnitIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OrganizationalUnitIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      organizationalUnitIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListOrganizationalUnitsForApplicationRequest() = default;
};
class ListOrganizationalUnitsForApplicationResponseBodyOrganizationalUnits : public Darabonba::Model {
public:
  shared_ptr<string> organizationalUnitId{};

  ListOrganizationalUnitsForApplicationResponseBodyOrganizationalUnits() {}

  explicit ListOrganizationalUnitsForApplicationResponseBodyOrganizationalUnits(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (organizationalUnitId) {
      res["OrganizationalUnitId"] = boost::any(*organizationalUnitId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrganizationalUnitId") != m.end() && !m["OrganizationalUnitId"].empty()) {
      organizationalUnitId = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitId"]));
    }
  }


  virtual ~ListOrganizationalUnitsForApplicationResponseBodyOrganizationalUnits() = default;
};
class ListOrganizationalUnitsForApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListOrganizationalUnitsForApplicationResponseBodyOrganizationalUnits>> organizationalUnits{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListOrganizationalUnitsForApplicationResponseBody() {}

  explicit ListOrganizationalUnitsForApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (organizationalUnits) {
      vector<boost::any> temp1;
      for(auto item1:*organizationalUnits){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OrganizationalUnits"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrganizationalUnits") != m.end() && !m["OrganizationalUnits"].empty()) {
      if (typeid(vector<boost::any>) == m["OrganizationalUnits"].type()) {
        vector<ListOrganizationalUnitsForApplicationResponseBodyOrganizationalUnits> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OrganizationalUnits"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOrganizationalUnitsForApplicationResponseBodyOrganizationalUnits model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        organizationalUnits = make_shared<vector<ListOrganizationalUnitsForApplicationResponseBodyOrganizationalUnits>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListOrganizationalUnitsForApplicationResponseBody() = default;
};
class ListOrganizationalUnitsForApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListOrganizationalUnitsForApplicationResponseBody> body{};

  ListOrganizationalUnitsForApplicationResponse() {}

  explicit ListOrganizationalUnitsForApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOrganizationalUnitsForApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOrganizationalUnitsForApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~ListOrganizationalUnitsForApplicationResponse() = default;
};
class ListRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionEndpoint{};
  shared_ptr<string> regionId{};

  ListRegionsResponseBodyRegions() {}

  explicit ListRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (regionEndpoint) {
      res["RegionEndpoint"] = boost::any(*regionEndpoint);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("RegionEndpoint") != m.end() && !m["RegionEndpoint"].empty()) {
      regionEndpoint = make_shared<string>(boost::any_cast<string>(m["RegionEndpoint"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListRegionsResponseBodyRegions() = default;
};
class ListRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListRegionsResponseBodyRegions>> regions{};
  shared_ptr<string> requestId{};

  ListRegionsResponseBody() {}

  explicit ListRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regions) {
      vector<boost::any> temp1;
      for(auto item1:*regions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Regions"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(vector<boost::any>) == m["Regions"].type()) {
        vector<ListRegionsResponseBodyRegions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Regions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRegionsResponseBodyRegions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regions = make_shared<vector<ListRegionsResponseBodyRegions>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListRegionsResponseBody() = default;
};
class ListRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRegionsResponseBody> body{};

  ListRegionsResponse() {}

  explicit ListRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRegionsResponse() = default;
};
class ListUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> displayNameStartsWith{};
  shared_ptr<string> email{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> organizationalUnitId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> phoneRegion{};
  shared_ptr<string> status{};
  shared_ptr<string> userExternalId{};
  shared_ptr<vector<string>> userIds{};
  shared_ptr<string> userSourceId{};
  shared_ptr<string> userSourceType{};
  shared_ptr<string> usernameStartsWith{};

  ListUsersRequest() {}

  explicit ListUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayNameStartsWith) {
      res["DisplayNameStartsWith"] = boost::any(*displayNameStartsWith);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (organizationalUnitId) {
      res["OrganizationalUnitId"] = boost::any(*organizationalUnitId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (phoneRegion) {
      res["PhoneRegion"] = boost::any(*phoneRegion);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userExternalId) {
      res["UserExternalId"] = boost::any(*userExternalId);
    }
    if (userIds) {
      res["UserIds"] = boost::any(*userIds);
    }
    if (userSourceId) {
      res["UserSourceId"] = boost::any(*userSourceId);
    }
    if (userSourceType) {
      res["UserSourceType"] = boost::any(*userSourceType);
    }
    if (usernameStartsWith) {
      res["UsernameStartsWith"] = boost::any(*usernameStartsWith);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayNameStartsWith") != m.end() && !m["DisplayNameStartsWith"].empty()) {
      displayNameStartsWith = make_shared<string>(boost::any_cast<string>(m["DisplayNameStartsWith"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrganizationalUnitId") != m.end() && !m["OrganizationalUnitId"].empty()) {
      organizationalUnitId = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("PhoneRegion") != m.end() && !m["PhoneRegion"].empty()) {
      phoneRegion = make_shared<string>(boost::any_cast<string>(m["PhoneRegion"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserExternalId") != m.end() && !m["UserExternalId"].empty()) {
      userExternalId = make_shared<string>(boost::any_cast<string>(m["UserExternalId"]));
    }
    if (m.find("UserIds") != m.end() && !m["UserIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserSourceId") != m.end() && !m["UserSourceId"].empty()) {
      userSourceId = make_shared<string>(boost::any_cast<string>(m["UserSourceId"]));
    }
    if (m.find("UserSourceType") != m.end() && !m["UserSourceType"].empty()) {
      userSourceType = make_shared<string>(boost::any_cast<string>(m["UserSourceType"]));
    }
    if (m.find("UsernameStartsWith") != m.end() && !m["UsernameStartsWith"].empty()) {
      usernameStartsWith = make_shared<string>(boost::any_cast<string>(m["UsernameStartsWith"]));
    }
  }


  virtual ~ListUsersRequest() = default;
};
class ListUsersResponseBodyUsers : public Darabonba::Model {
public:
  shared_ptr<long> accountExpireTime{};
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> email{};
  shared_ptr<bool> emailVerified{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> lockExpireTime{};
  shared_ptr<long> passwordExpireTime{};
  shared_ptr<bool> passwordSet{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<bool> phoneNumberVerified{};
  shared_ptr<string> phoneRegion{};
  shared_ptr<long> registerTime{};
  shared_ptr<string> status{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> userExternalId{};
  shared_ptr<string> userId{};
  shared_ptr<string> userSourceId{};
  shared_ptr<string> userSourceType{};
  shared_ptr<string> username{};

  ListUsersResponseBodyUsers() {}

  explicit ListUsersResponseBodyUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountExpireTime) {
      res["AccountExpireTime"] = boost::any(*accountExpireTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (emailVerified) {
      res["EmailVerified"] = boost::any(*emailVerified);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lockExpireTime) {
      res["LockExpireTime"] = boost::any(*lockExpireTime);
    }
    if (passwordExpireTime) {
      res["PasswordExpireTime"] = boost::any(*passwordExpireTime);
    }
    if (passwordSet) {
      res["PasswordSet"] = boost::any(*passwordSet);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (phoneNumberVerified) {
      res["PhoneNumberVerified"] = boost::any(*phoneNumberVerified);
    }
    if (phoneRegion) {
      res["PhoneRegion"] = boost::any(*phoneRegion);
    }
    if (registerTime) {
      res["RegisterTime"] = boost::any(*registerTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (userExternalId) {
      res["UserExternalId"] = boost::any(*userExternalId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userSourceId) {
      res["UserSourceId"] = boost::any(*userSourceId);
    }
    if (userSourceType) {
      res["UserSourceType"] = boost::any(*userSourceType);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountExpireTime") != m.end() && !m["AccountExpireTime"].empty()) {
      accountExpireTime = make_shared<long>(boost::any_cast<long>(m["AccountExpireTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("EmailVerified") != m.end() && !m["EmailVerified"].empty()) {
      emailVerified = make_shared<bool>(boost::any_cast<bool>(m["EmailVerified"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LockExpireTime") != m.end() && !m["LockExpireTime"].empty()) {
      lockExpireTime = make_shared<long>(boost::any_cast<long>(m["LockExpireTime"]));
    }
    if (m.find("PasswordExpireTime") != m.end() && !m["PasswordExpireTime"].empty()) {
      passwordExpireTime = make_shared<long>(boost::any_cast<long>(m["PasswordExpireTime"]));
    }
    if (m.find("PasswordSet") != m.end() && !m["PasswordSet"].empty()) {
      passwordSet = make_shared<bool>(boost::any_cast<bool>(m["PasswordSet"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("PhoneNumberVerified") != m.end() && !m["PhoneNumberVerified"].empty()) {
      phoneNumberVerified = make_shared<bool>(boost::any_cast<bool>(m["PhoneNumberVerified"]));
    }
    if (m.find("PhoneRegion") != m.end() && !m["PhoneRegion"].empty()) {
      phoneRegion = make_shared<string>(boost::any_cast<string>(m["PhoneRegion"]));
    }
    if (m.find("RegisterTime") != m.end() && !m["RegisterTime"].empty()) {
      registerTime = make_shared<long>(boost::any_cast<long>(m["RegisterTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("UserExternalId") != m.end() && !m["UserExternalId"].empty()) {
      userExternalId = make_shared<string>(boost::any_cast<string>(m["UserExternalId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserSourceId") != m.end() && !m["UserSourceId"].empty()) {
      userSourceId = make_shared<string>(boost::any_cast<string>(m["UserSourceId"]));
    }
    if (m.find("UserSourceType") != m.end() && !m["UserSourceType"].empty()) {
      userSourceType = make_shared<string>(boost::any_cast<string>(m["UserSourceType"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~ListUsersResponseBodyUsers() = default;
};
class ListUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListUsersResponseBodyUsers>> users{};

  ListUsersResponseBody() {}

  explicit ListUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<ListUsersResponseBodyUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUsersResponseBodyUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<ListUsersResponseBodyUsers>>(expect1);
      }
    }
  }


  virtual ~ListUsersResponseBody() = default;
};
class ListUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUsersResponseBody> body{};

  ListUsersResponse() {}

  explicit ListUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUsersResponseBody>(model1);
      }
    }
  }


  virtual ~ListUsersResponse() = default;
};
class ListUsersForApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> userIds{};

  ListUsersForApplicationRequest() {}

  explicit ListUsersForApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (userIds) {
      res["UserIds"] = boost::any(*userIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("UserIds") != m.end() && !m["UserIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListUsersForApplicationRequest() = default;
};
class ListUsersForApplicationResponseBodyUsers : public Darabonba::Model {
public:
  shared_ptr<string> userId{};

  ListUsersForApplicationResponseBodyUsers() {}

  explicit ListUsersForApplicationResponseBodyUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListUsersForApplicationResponseBodyUsers() = default;
};
class ListUsersForApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListUsersForApplicationResponseBodyUsers>> users{};

  ListUsersForApplicationResponseBody() {}

  explicit ListUsersForApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<ListUsersForApplicationResponseBodyUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUsersForApplicationResponseBodyUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<ListUsersForApplicationResponseBodyUsers>>(expect1);
      }
    }
  }


  virtual ~ListUsersForApplicationResponseBody() = default;
};
class ListUsersForApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUsersForApplicationResponseBody> body{};

  ListUsersForApplicationResponse() {}

  explicit ListUsersForApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUsersForApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUsersForApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~ListUsersForApplicationResponse() = default;
};
class ListUsersForGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> userIds{};

  ListUsersForGroupRequest() {}

  explicit ListUsersForGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (userIds) {
      res["UserIds"] = boost::any(*userIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("UserIds") != m.end() && !m["UserIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListUsersForGroupRequest() = default;
};
class ListUsersForGroupResponseBodyUsers : public Darabonba::Model {
public:
  shared_ptr<string> groupMemberRelationSourceId{};
  shared_ptr<string> groupMemberRelationSourceType{};
  shared_ptr<string> userId{};

  ListUsersForGroupResponseBodyUsers() {}

  explicit ListUsersForGroupResponseBodyUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupMemberRelationSourceId) {
      res["GroupMemberRelationSourceId"] = boost::any(*groupMemberRelationSourceId);
    }
    if (groupMemberRelationSourceType) {
      res["GroupMemberRelationSourceType"] = boost::any(*groupMemberRelationSourceType);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupMemberRelationSourceId") != m.end() && !m["GroupMemberRelationSourceId"].empty()) {
      groupMemberRelationSourceId = make_shared<string>(boost::any_cast<string>(m["GroupMemberRelationSourceId"]));
    }
    if (m.find("GroupMemberRelationSourceType") != m.end() && !m["GroupMemberRelationSourceType"].empty()) {
      groupMemberRelationSourceType = make_shared<string>(boost::any_cast<string>(m["GroupMemberRelationSourceType"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListUsersForGroupResponseBodyUsers() = default;
};
class ListUsersForGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListUsersForGroupResponseBodyUsers>> users{};

  ListUsersForGroupResponseBody() {}

  explicit ListUsersForGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<ListUsersForGroupResponseBodyUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUsersForGroupResponseBodyUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<ListUsersForGroupResponseBodyUsers>>(expect1);
      }
    }
  }


  virtual ~ListUsersForGroupResponseBody() = default;
};
class ListUsersForGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUsersForGroupResponseBody> body{};

  ListUsersForGroupResponse() {}

  explicit ListUsersForGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUsersForGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUsersForGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ListUsersForGroupResponse() = default;
};
class ObtainApplicationClientSecretRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> secretId{};

  ObtainApplicationClientSecretRequest() {}

  explicit ObtainApplicationClientSecretRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (secretId) {
      res["SecretId"] = boost::any(*secretId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SecretId") != m.end() && !m["SecretId"].empty()) {
      secretId = make_shared<string>(boost::any_cast<string>(m["SecretId"]));
    }
  }


  virtual ~ObtainApplicationClientSecretRequest() = default;
};
class ObtainApplicationClientSecretResponseBodyApplicationClientSecret : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> clientId{};
  shared_ptr<string> clientSecret{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> lastUsedTime{};
  shared_ptr<string> secretId{};
  shared_ptr<string> status{};

  ObtainApplicationClientSecretResponseBodyApplicationClientSecret() {}

  explicit ObtainApplicationClientSecretResponseBodyApplicationClientSecret(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientSecret) {
      res["ClientSecret"] = boost::any(*clientSecret);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lastUsedTime) {
      res["LastUsedTime"] = boost::any(*lastUsedTime);
    }
    if (secretId) {
      res["SecretId"] = boost::any(*secretId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientSecret") != m.end() && !m["ClientSecret"].empty()) {
      clientSecret = make_shared<string>(boost::any_cast<string>(m["ClientSecret"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LastUsedTime") != m.end() && !m["LastUsedTime"].empty()) {
      lastUsedTime = make_shared<long>(boost::any_cast<long>(m["LastUsedTime"]));
    }
    if (m.find("SecretId") != m.end() && !m["SecretId"].empty()) {
      secretId = make_shared<string>(boost::any_cast<string>(m["SecretId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ObtainApplicationClientSecretResponseBodyApplicationClientSecret() = default;
};
class ObtainApplicationClientSecretResponseBody : public Darabonba::Model {
public:
  shared_ptr<ObtainApplicationClientSecretResponseBodyApplicationClientSecret> applicationClientSecret{};
  shared_ptr<string> requestId{};

  ObtainApplicationClientSecretResponseBody() {}

  explicit ObtainApplicationClientSecretResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationClientSecret) {
      res["ApplicationClientSecret"] = applicationClientSecret ? boost::any(applicationClientSecret->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationClientSecret") != m.end() && !m["ApplicationClientSecret"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApplicationClientSecret"].type()) {
        ObtainApplicationClientSecretResponseBodyApplicationClientSecret model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApplicationClientSecret"]));
        applicationClientSecret = make_shared<ObtainApplicationClientSecretResponseBodyApplicationClientSecret>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ObtainApplicationClientSecretResponseBody() = default;
};
class ObtainApplicationClientSecretResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ObtainApplicationClientSecretResponseBody> body{};

  ObtainApplicationClientSecretResponse() {}

  explicit ObtainApplicationClientSecretResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ObtainApplicationClientSecretResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ObtainApplicationClientSecretResponseBody>(model1);
      }
    }
  }


  virtual ~ObtainApplicationClientSecretResponse() = default;
};
class ObtainDomainProxyTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainId{};
  shared_ptr<string> domainProxyTokenId{};
  shared_ptr<string> instanceId{};

  ObtainDomainProxyTokenRequest() {}

  explicit ObtainDomainProxyTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (domainProxyTokenId) {
      res["DomainProxyTokenId"] = boost::any(*domainProxyTokenId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("DomainProxyTokenId") != m.end() && !m["DomainProxyTokenId"].empty()) {
      domainProxyTokenId = make_shared<string>(boost::any_cast<string>(m["DomainProxyTokenId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ObtainDomainProxyTokenRequest() = default;
};
class ObtainDomainProxyTokenResponseBodyDomainProxyToken : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> domainId{};
  shared_ptr<string> domainProxyToken{};
  shared_ptr<string> domainProxyTokenId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> lastUsedTime{};
  shared_ptr<string> status{};
  shared_ptr<long> updateTime{};

  ObtainDomainProxyTokenResponseBodyDomainProxyToken() {}

  explicit ObtainDomainProxyTokenResponseBodyDomainProxyToken(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (domainProxyToken) {
      res["DomainProxyToken"] = boost::any(*domainProxyToken);
    }
    if (domainProxyTokenId) {
      res["DomainProxyTokenId"] = boost::any(*domainProxyTokenId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lastUsedTime) {
      res["LastUsedTime"] = boost::any(*lastUsedTime);
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
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("DomainProxyToken") != m.end() && !m["DomainProxyToken"].empty()) {
      domainProxyToken = make_shared<string>(boost::any_cast<string>(m["DomainProxyToken"]));
    }
    if (m.find("DomainProxyTokenId") != m.end() && !m["DomainProxyTokenId"].empty()) {
      domainProxyTokenId = make_shared<string>(boost::any_cast<string>(m["DomainProxyTokenId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LastUsedTime") != m.end() && !m["LastUsedTime"].empty()) {
      lastUsedTime = make_shared<long>(boost::any_cast<long>(m["LastUsedTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~ObtainDomainProxyTokenResponseBodyDomainProxyToken() = default;
};
class ObtainDomainProxyTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<ObtainDomainProxyTokenResponseBodyDomainProxyToken> domainProxyToken{};
  shared_ptr<string> requestId{};

  ObtainDomainProxyTokenResponseBody() {}

  explicit ObtainDomainProxyTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainProxyToken) {
      res["DomainProxyToken"] = domainProxyToken ? boost::any(domainProxyToken->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainProxyToken") != m.end() && !m["DomainProxyToken"].empty()) {
      if (typeid(map<string, boost::any>) == m["DomainProxyToken"].type()) {
        ObtainDomainProxyTokenResponseBodyDomainProxyToken model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DomainProxyToken"]));
        domainProxyToken = make_shared<ObtainDomainProxyTokenResponseBodyDomainProxyToken>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ObtainDomainProxyTokenResponseBody() = default;
};
class ObtainDomainProxyTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ObtainDomainProxyTokenResponseBody> body{};

  ObtainDomainProxyTokenResponse() {}

  explicit ObtainDomainProxyTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ObtainDomainProxyTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ObtainDomainProxyTokenResponseBody>(model1);
      }
    }
  }


  virtual ~ObtainDomainProxyTokenResponse() = default;
};
class RemoveUserFromOrganizationalUnitsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> organizationalUnitIds{};
  shared_ptr<string> userId{};

  RemoveUserFromOrganizationalUnitsRequest() {}

  explicit RemoveUserFromOrganizationalUnitsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (organizationalUnitIds) {
      res["OrganizationalUnitIds"] = boost::any(*organizationalUnitIds);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrganizationalUnitIds") != m.end() && !m["OrganizationalUnitIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OrganizationalUnitIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OrganizationalUnitIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      organizationalUnitIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~RemoveUserFromOrganizationalUnitsRequest() = default;
};
class RemoveUserFromOrganizationalUnitsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveUserFromOrganizationalUnitsResponseBody() {}

  explicit RemoveUserFromOrganizationalUnitsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveUserFromOrganizationalUnitsResponseBody() = default;
};
class RemoveUserFromOrganizationalUnitsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveUserFromOrganizationalUnitsResponseBody> body{};

  RemoveUserFromOrganizationalUnitsResponse() {}

  explicit RemoveUserFromOrganizationalUnitsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveUserFromOrganizationalUnitsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveUserFromOrganizationalUnitsResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveUserFromOrganizationalUnitsResponse() = default;
};
class RemoveUsersFromGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> userIds{};

  RemoveUsersFromGroupRequest() {}

  explicit RemoveUsersFromGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (userIds) {
      res["UserIds"] = boost::any(*userIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("UserIds") != m.end() && !m["UserIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RemoveUsersFromGroupRequest() = default;
};
class RemoveUsersFromGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveUsersFromGroupResponseBody() {}

  explicit RemoveUsersFromGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveUsersFromGroupResponseBody() = default;
};
class RemoveUsersFromGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveUsersFromGroupResponseBody> body{};

  RemoveUsersFromGroupResponse() {}

  explicit RemoveUsersFromGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveUsersFromGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveUsersFromGroupResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveUsersFromGroupResponse() = default;
};
class RevokeApplicationFromGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<vector<string>> groupIds{};
  shared_ptr<string> instanceId{};

  RevokeApplicationFromGroupsRequest() {}

  explicit RevokeApplicationFromGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (groupIds) {
      res["GroupIds"] = boost::any(*groupIds);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["GroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      groupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~RevokeApplicationFromGroupsRequest() = default;
};
class RevokeApplicationFromGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RevokeApplicationFromGroupsResponseBody() {}

  explicit RevokeApplicationFromGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RevokeApplicationFromGroupsResponseBody() = default;
};
class RevokeApplicationFromGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RevokeApplicationFromGroupsResponseBody> body{};

  RevokeApplicationFromGroupsResponse() {}

  explicit RevokeApplicationFromGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RevokeApplicationFromGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RevokeApplicationFromGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~RevokeApplicationFromGroupsResponse() = default;
};
class RevokeApplicationFromOrganizationalUnitsRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> organizationalUnitIds{};

  RevokeApplicationFromOrganizationalUnitsRequest() {}

  explicit RevokeApplicationFromOrganizationalUnitsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (organizationalUnitIds) {
      res["OrganizationalUnitIds"] = boost::any(*organizationalUnitIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrganizationalUnitIds") != m.end() && !m["OrganizationalUnitIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OrganizationalUnitIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OrganizationalUnitIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      organizationalUnitIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RevokeApplicationFromOrganizationalUnitsRequest() = default;
};
class RevokeApplicationFromOrganizationalUnitsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RevokeApplicationFromOrganizationalUnitsResponseBody() {}

  explicit RevokeApplicationFromOrganizationalUnitsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RevokeApplicationFromOrganizationalUnitsResponseBody() = default;
};
class RevokeApplicationFromOrganizationalUnitsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RevokeApplicationFromOrganizationalUnitsResponseBody> body{};

  RevokeApplicationFromOrganizationalUnitsResponse() {}

  explicit RevokeApplicationFromOrganizationalUnitsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RevokeApplicationFromOrganizationalUnitsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RevokeApplicationFromOrganizationalUnitsResponseBody>(model1);
      }
    }
  }


  virtual ~RevokeApplicationFromOrganizationalUnitsResponse() = default;
};
class RevokeApplicationFromUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> userIds{};

  RevokeApplicationFromUsersRequest() {}

  explicit RevokeApplicationFromUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (userIds) {
      res["UserIds"] = boost::any(*userIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("UserIds") != m.end() && !m["UserIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RevokeApplicationFromUsersRequest() = default;
};
class RevokeApplicationFromUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RevokeApplicationFromUsersResponseBody() {}

  explicit RevokeApplicationFromUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RevokeApplicationFromUsersResponseBody() = default;
};
class RevokeApplicationFromUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RevokeApplicationFromUsersResponseBody> body{};

  RevokeApplicationFromUsersResponse() {}

  explicit RevokeApplicationFromUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RevokeApplicationFromUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RevokeApplicationFromUsersResponseBody>(model1);
      }
    }
  }


  virtual ~RevokeApplicationFromUsersResponse() = default;
};
class SetApplicationGrantScopeRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<vector<string>> grantScopes{};
  shared_ptr<string> instanceId{};

  SetApplicationGrantScopeRequest() {}

  explicit SetApplicationGrantScopeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (grantScopes) {
      res["GrantScopes"] = boost::any(*grantScopes);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("GrantScopes") != m.end() && !m["GrantScopes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["GrantScopes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GrantScopes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      grantScopes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~SetApplicationGrantScopeRequest() = default;
};
class SetApplicationGrantScopeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetApplicationGrantScopeResponseBody() {}

  explicit SetApplicationGrantScopeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetApplicationGrantScopeResponseBody() = default;
};
class SetApplicationGrantScopeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetApplicationGrantScopeResponseBody> body{};

  SetApplicationGrantScopeResponse() {}

  explicit SetApplicationGrantScopeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetApplicationGrantScopeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetApplicationGrantScopeResponseBody>(model1);
      }
    }
  }


  virtual ~SetApplicationGrantScopeResponse() = default;
};
class SetApplicationProvisioningConfigRequestCallbackProvisioningConfig : public Darabonba::Model {
public:
  shared_ptr<string> callbackUrl{};
  shared_ptr<string> encryptKey{};
  shared_ptr<bool> encryptRequired{};
  shared_ptr<vector<string>> listenEventScopes{};

  SetApplicationProvisioningConfigRequestCallbackProvisioningConfig() {}

  explicit SetApplicationProvisioningConfigRequestCallbackProvisioningConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callbackUrl) {
      res["CallbackUrl"] = boost::any(*callbackUrl);
    }
    if (encryptKey) {
      res["EncryptKey"] = boost::any(*encryptKey);
    }
    if (encryptRequired) {
      res["EncryptRequired"] = boost::any(*encryptRequired);
    }
    if (listenEventScopes) {
      res["ListenEventScopes"] = boost::any(*listenEventScopes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallbackUrl") != m.end() && !m["CallbackUrl"].empty()) {
      callbackUrl = make_shared<string>(boost::any_cast<string>(m["CallbackUrl"]));
    }
    if (m.find("EncryptKey") != m.end() && !m["EncryptKey"].empty()) {
      encryptKey = make_shared<string>(boost::any_cast<string>(m["EncryptKey"]));
    }
    if (m.find("EncryptRequired") != m.end() && !m["EncryptRequired"].empty()) {
      encryptRequired = make_shared<bool>(boost::any_cast<bool>(m["EncryptRequired"]));
    }
    if (m.find("ListenEventScopes") != m.end() && !m["ListenEventScopes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ListenEventScopes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ListenEventScopes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      listenEventScopes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SetApplicationProvisioningConfigRequestCallbackProvisioningConfig() = default;
};
class SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> authnMethod{};
  shared_ptr<string> clientId{};
  shared_ptr<string> clientSecret{};
  shared_ptr<string> tokenEndpoint{};

  SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam() {}

  explicit SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (authnMethod) {
      res["AuthnMethod"] = boost::any(*authnMethod);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientSecret) {
      res["ClientSecret"] = boost::any(*clientSecret);
    }
    if (tokenEndpoint) {
      res["TokenEndpoint"] = boost::any(*tokenEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("AuthnMethod") != m.end() && !m["AuthnMethod"].empty()) {
      authnMethod = make_shared<string>(boost::any_cast<string>(m["AuthnMethod"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientSecret") != m.end() && !m["ClientSecret"].empty()) {
      clientSecret = make_shared<string>(boost::any_cast<string>(m["ClientSecret"]));
    }
    if (m.find("TokenEndpoint") != m.end() && !m["TokenEndpoint"].empty()) {
      tokenEndpoint = make_shared<string>(boost::any_cast<string>(m["TokenEndpoint"]));
    }
  }


  virtual ~SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam() = default;
};
class SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration : public Darabonba::Model {
public:
  shared_ptr<string> authnMode{};
  shared_ptr<SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam> authnParam{};
  shared_ptr<string> grantType{};

  SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration() {}

  explicit SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authnMode) {
      res["AuthnMode"] = boost::any(*authnMode);
    }
    if (authnParam) {
      res["AuthnParam"] = authnParam ? boost::any(authnParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (grantType) {
      res["GrantType"] = boost::any(*grantType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthnMode") != m.end() && !m["AuthnMode"].empty()) {
      authnMode = make_shared<string>(boost::any_cast<string>(m["AuthnMode"]));
    }
    if (m.find("AuthnParam") != m.end() && !m["AuthnParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["AuthnParam"].type()) {
        SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AuthnParam"]));
        authnParam = make_shared<SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam>(model1);
      }
    }
    if (m.find("GrantType") != m.end() && !m["GrantType"].empty()) {
      grantType = make_shared<string>(boost::any_cast<string>(m["GrantType"]));
    }
  }


  virtual ~SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration() = default;
};
class SetApplicationProvisioningConfigRequestScimProvisioningConfig : public Darabonba::Model {
public:
  shared_ptr<SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration> authnConfiguration{};
  shared_ptr<vector<string>> fullPushScopes{};
  shared_ptr<vector<string>> provisioningActions{};
  shared_ptr<string> scimBaseUrl{};

  SetApplicationProvisioningConfigRequestScimProvisioningConfig() {}

  explicit SetApplicationProvisioningConfigRequestScimProvisioningConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authnConfiguration) {
      res["AuthnConfiguration"] = authnConfiguration ? boost::any(authnConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fullPushScopes) {
      res["FullPushScopes"] = boost::any(*fullPushScopes);
    }
    if (provisioningActions) {
      res["ProvisioningActions"] = boost::any(*provisioningActions);
    }
    if (scimBaseUrl) {
      res["ScimBaseUrl"] = boost::any(*scimBaseUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthnConfiguration") != m.end() && !m["AuthnConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["AuthnConfiguration"].type()) {
        SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AuthnConfiguration"]));
        authnConfiguration = make_shared<SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration>(model1);
      }
    }
    if (m.find("FullPushScopes") != m.end() && !m["FullPushScopes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FullPushScopes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FullPushScopes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fullPushScopes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ProvisioningActions") != m.end() && !m["ProvisioningActions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ProvisioningActions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ProvisioningActions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      provisioningActions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ScimBaseUrl") != m.end() && !m["ScimBaseUrl"].empty()) {
      scimBaseUrl = make_shared<string>(boost::any_cast<string>(m["ScimBaseUrl"]));
    }
  }


  virtual ~SetApplicationProvisioningConfigRequestScimProvisioningConfig() = default;
};
class SetApplicationProvisioningConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<SetApplicationProvisioningConfigRequestCallbackProvisioningConfig> callbackProvisioningConfig{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> provisionPassword{};
  shared_ptr<string> provisionProtocolType{};
  shared_ptr<SetApplicationProvisioningConfigRequestScimProvisioningConfig> scimProvisioningConfig{};

  SetApplicationProvisioningConfigRequest() {}

  explicit SetApplicationProvisioningConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (callbackProvisioningConfig) {
      res["CallbackProvisioningConfig"] = callbackProvisioningConfig ? boost::any(callbackProvisioningConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (provisionPassword) {
      res["ProvisionPassword"] = boost::any(*provisionPassword);
    }
    if (provisionProtocolType) {
      res["ProvisionProtocolType"] = boost::any(*provisionProtocolType);
    }
    if (scimProvisioningConfig) {
      res["ScimProvisioningConfig"] = scimProvisioningConfig ? boost::any(scimProvisioningConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("CallbackProvisioningConfig") != m.end() && !m["CallbackProvisioningConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CallbackProvisioningConfig"].type()) {
        SetApplicationProvisioningConfigRequestCallbackProvisioningConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CallbackProvisioningConfig"]));
        callbackProvisioningConfig = make_shared<SetApplicationProvisioningConfigRequestCallbackProvisioningConfig>(model1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ProvisionPassword") != m.end() && !m["ProvisionPassword"].empty()) {
      provisionPassword = make_shared<bool>(boost::any_cast<bool>(m["ProvisionPassword"]));
    }
    if (m.find("ProvisionProtocolType") != m.end() && !m["ProvisionProtocolType"].empty()) {
      provisionProtocolType = make_shared<string>(boost::any_cast<string>(m["ProvisionProtocolType"]));
    }
    if (m.find("ScimProvisioningConfig") != m.end() && !m["ScimProvisioningConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScimProvisioningConfig"].type()) {
        SetApplicationProvisioningConfigRequestScimProvisioningConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScimProvisioningConfig"]));
        scimProvisioningConfig = make_shared<SetApplicationProvisioningConfigRequestScimProvisioningConfig>(model1);
      }
    }
  }


  virtual ~SetApplicationProvisioningConfigRequest() = default;
};
class SetApplicationProvisioningConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetApplicationProvisioningConfigResponseBody() {}

  explicit SetApplicationProvisioningConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetApplicationProvisioningConfigResponseBody() = default;
};
class SetApplicationProvisioningConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetApplicationProvisioningConfigResponseBody> body{};

  SetApplicationProvisioningConfigResponse() {}

  explicit SetApplicationProvisioningConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetApplicationProvisioningConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetApplicationProvisioningConfigResponseBody>(model1);
      }
    }
  }


  virtual ~SetApplicationProvisioningConfigResponse() = default;
};
class SetApplicationProvisioningScopeRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<vector<string>> groupIds{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> organizationalUnitIds{};

  SetApplicationProvisioningScopeRequest() {}

  explicit SetApplicationProvisioningScopeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (groupIds) {
      res["GroupIds"] = boost::any(*groupIds);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (organizationalUnitIds) {
      res["OrganizationalUnitIds"] = boost::any(*organizationalUnitIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["GroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      groupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrganizationalUnitIds") != m.end() && !m["OrganizationalUnitIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OrganizationalUnitIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OrganizationalUnitIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      organizationalUnitIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SetApplicationProvisioningScopeRequest() = default;
};
class SetApplicationProvisioningScopeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetApplicationProvisioningScopeResponseBody() {}

  explicit SetApplicationProvisioningScopeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetApplicationProvisioningScopeResponseBody() = default;
};
class SetApplicationProvisioningScopeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetApplicationProvisioningScopeResponseBody> body{};

  SetApplicationProvisioningScopeResponse() {}

  explicit SetApplicationProvisioningScopeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetApplicationProvisioningScopeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetApplicationProvisioningScopeResponseBody>(model1);
      }
    }
  }


  virtual ~SetApplicationProvisioningScopeResponse() = default;
};
class SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims : public Darabonba::Model {
public:
  shared_ptr<string> claimName{};
  shared_ptr<string> claimValueExpression{};

  SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims() {}

  explicit SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (claimName) {
      res["ClaimName"] = boost::any(*claimName);
    }
    if (claimValueExpression) {
      res["ClaimValueExpression"] = boost::any(*claimValueExpression);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClaimName") != m.end() && !m["ClaimName"].empty()) {
      claimName = make_shared<string>(boost::any_cast<string>(m["ClaimName"]));
    }
    if (m.find("ClaimValueExpression") != m.end() && !m["ClaimValueExpression"].empty()) {
      claimValueExpression = make_shared<string>(boost::any_cast<string>(m["ClaimValueExpression"]));
    }
  }


  virtual ~SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims() = default;
};
class SetApplicationSsoConfigRequestOidcSsoConfig : public Darabonba::Model {
public:
  shared_ptr<long> accessTokenEffectiveTime{};
  shared_ptr<long> codeEffectiveTime{};
  shared_ptr<vector<SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims>> customClaims{};
  shared_ptr<vector<string>> grantScopes{};
  shared_ptr<vector<string>> grantTypes{};
  shared_ptr<long> idTokenEffectiveTime{};
  shared_ptr<string> passwordAuthenticationSourceId{};
  shared_ptr<bool> passwordTotpMfaRequired{};
  shared_ptr<vector<string>> pkceChallengeMethods{};
  shared_ptr<bool> pkceRequired{};
  shared_ptr<vector<string>> postLogoutRedirectUris{};
  shared_ptr<vector<string>> redirectUris{};
  shared_ptr<long> refreshTokenEffective{};
  shared_ptr<vector<string>> responseTypes{};
  shared_ptr<string> subjectIdExpression{};

  SetApplicationSsoConfigRequestOidcSsoConfig() {}

  explicit SetApplicationSsoConfigRequestOidcSsoConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessTokenEffectiveTime) {
      res["AccessTokenEffectiveTime"] = boost::any(*accessTokenEffectiveTime);
    }
    if (codeEffectiveTime) {
      res["CodeEffectiveTime"] = boost::any(*codeEffectiveTime);
    }
    if (customClaims) {
      vector<boost::any> temp1;
      for(auto item1:*customClaims){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CustomClaims"] = boost::any(temp1);
    }
    if (grantScopes) {
      res["GrantScopes"] = boost::any(*grantScopes);
    }
    if (grantTypes) {
      res["GrantTypes"] = boost::any(*grantTypes);
    }
    if (idTokenEffectiveTime) {
      res["IdTokenEffectiveTime"] = boost::any(*idTokenEffectiveTime);
    }
    if (passwordAuthenticationSourceId) {
      res["PasswordAuthenticationSourceId"] = boost::any(*passwordAuthenticationSourceId);
    }
    if (passwordTotpMfaRequired) {
      res["PasswordTotpMfaRequired"] = boost::any(*passwordTotpMfaRequired);
    }
    if (pkceChallengeMethods) {
      res["PkceChallengeMethods"] = boost::any(*pkceChallengeMethods);
    }
    if (pkceRequired) {
      res["PkceRequired"] = boost::any(*pkceRequired);
    }
    if (postLogoutRedirectUris) {
      res["PostLogoutRedirectUris"] = boost::any(*postLogoutRedirectUris);
    }
    if (redirectUris) {
      res["RedirectUris"] = boost::any(*redirectUris);
    }
    if (refreshTokenEffective) {
      res["RefreshTokenEffective"] = boost::any(*refreshTokenEffective);
    }
    if (responseTypes) {
      res["ResponseTypes"] = boost::any(*responseTypes);
    }
    if (subjectIdExpression) {
      res["SubjectIdExpression"] = boost::any(*subjectIdExpression);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessTokenEffectiveTime") != m.end() && !m["AccessTokenEffectiveTime"].empty()) {
      accessTokenEffectiveTime = make_shared<long>(boost::any_cast<long>(m["AccessTokenEffectiveTime"]));
    }
    if (m.find("CodeEffectiveTime") != m.end() && !m["CodeEffectiveTime"].empty()) {
      codeEffectiveTime = make_shared<long>(boost::any_cast<long>(m["CodeEffectiveTime"]));
    }
    if (m.find("CustomClaims") != m.end() && !m["CustomClaims"].empty()) {
      if (typeid(vector<boost::any>) == m["CustomClaims"].type()) {
        vector<SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CustomClaims"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customClaims = make_shared<vector<SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims>>(expect1);
      }
    }
    if (m.find("GrantScopes") != m.end() && !m["GrantScopes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["GrantScopes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GrantScopes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      grantScopes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("GrantTypes") != m.end() && !m["GrantTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["GrantTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GrantTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      grantTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IdTokenEffectiveTime") != m.end() && !m["IdTokenEffectiveTime"].empty()) {
      idTokenEffectiveTime = make_shared<long>(boost::any_cast<long>(m["IdTokenEffectiveTime"]));
    }
    if (m.find("PasswordAuthenticationSourceId") != m.end() && !m["PasswordAuthenticationSourceId"].empty()) {
      passwordAuthenticationSourceId = make_shared<string>(boost::any_cast<string>(m["PasswordAuthenticationSourceId"]));
    }
    if (m.find("PasswordTotpMfaRequired") != m.end() && !m["PasswordTotpMfaRequired"].empty()) {
      passwordTotpMfaRequired = make_shared<bool>(boost::any_cast<bool>(m["PasswordTotpMfaRequired"]));
    }
    if (m.find("PkceChallengeMethods") != m.end() && !m["PkceChallengeMethods"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PkceChallengeMethods"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PkceChallengeMethods"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      pkceChallengeMethods = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PkceRequired") != m.end() && !m["PkceRequired"].empty()) {
      pkceRequired = make_shared<bool>(boost::any_cast<bool>(m["PkceRequired"]));
    }
    if (m.find("PostLogoutRedirectUris") != m.end() && !m["PostLogoutRedirectUris"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PostLogoutRedirectUris"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PostLogoutRedirectUris"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      postLogoutRedirectUris = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RedirectUris") != m.end() && !m["RedirectUris"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RedirectUris"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RedirectUris"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      redirectUris = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RefreshTokenEffective") != m.end() && !m["RefreshTokenEffective"].empty()) {
      refreshTokenEffective = make_shared<long>(boost::any_cast<long>(m["RefreshTokenEffective"]));
    }
    if (m.find("ResponseTypes") != m.end() && !m["ResponseTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResponseTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResponseTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      responseTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubjectIdExpression") != m.end() && !m["SubjectIdExpression"].empty()) {
      subjectIdExpression = make_shared<string>(boost::any_cast<string>(m["SubjectIdExpression"]));
    }
  }


  virtual ~SetApplicationSsoConfigRequestOidcSsoConfig() = default;
};
class SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements : public Darabonba::Model {
public:
  shared_ptr<string> attributeName{};
  shared_ptr<string> attributeValueExpression{};

  SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements() {}

  explicit SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributeName) {
      res["AttributeName"] = boost::any(*attributeName);
    }
    if (attributeValueExpression) {
      res["AttributeValueExpression"] = boost::any(*attributeValueExpression);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttributeName") != m.end() && !m["AttributeName"].empty()) {
      attributeName = make_shared<string>(boost::any_cast<string>(m["AttributeName"]));
    }
    if (m.find("AttributeValueExpression") != m.end() && !m["AttributeValueExpression"].empty()) {
      attributeValueExpression = make_shared<string>(boost::any_cast<string>(m["AttributeValueExpression"]));
    }
  }


  virtual ~SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements() = default;
};
class SetApplicationSsoConfigRequestSamlSsoConfig : public Darabonba::Model {
public:
  shared_ptr<bool> assertionSigned{};
  shared_ptr<vector<SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements>> attributeStatements{};
  shared_ptr<string> defaultRelayState{};
  shared_ptr<string> nameIdFormat{};
  shared_ptr<string> nameIdValueExpression{};
  shared_ptr<bool> responseSigned{};
  shared_ptr<string> signatureAlgorithm{};
  shared_ptr<string> spEntityId{};
  shared_ptr<string> spSsoAcsUrl{};

  SetApplicationSsoConfigRequestSamlSsoConfig() {}

  explicit SetApplicationSsoConfigRequestSamlSsoConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assertionSigned) {
      res["AssertionSigned"] = boost::any(*assertionSigned);
    }
    if (attributeStatements) {
      vector<boost::any> temp1;
      for(auto item1:*attributeStatements){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AttributeStatements"] = boost::any(temp1);
    }
    if (defaultRelayState) {
      res["DefaultRelayState"] = boost::any(*defaultRelayState);
    }
    if (nameIdFormat) {
      res["NameIdFormat"] = boost::any(*nameIdFormat);
    }
    if (nameIdValueExpression) {
      res["NameIdValueExpression"] = boost::any(*nameIdValueExpression);
    }
    if (responseSigned) {
      res["ResponseSigned"] = boost::any(*responseSigned);
    }
    if (signatureAlgorithm) {
      res["SignatureAlgorithm"] = boost::any(*signatureAlgorithm);
    }
    if (spEntityId) {
      res["SpEntityId"] = boost::any(*spEntityId);
    }
    if (spSsoAcsUrl) {
      res["SpSsoAcsUrl"] = boost::any(*spSsoAcsUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssertionSigned") != m.end() && !m["AssertionSigned"].empty()) {
      assertionSigned = make_shared<bool>(boost::any_cast<bool>(m["AssertionSigned"]));
    }
    if (m.find("AttributeStatements") != m.end() && !m["AttributeStatements"].empty()) {
      if (typeid(vector<boost::any>) == m["AttributeStatements"].type()) {
        vector<SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AttributeStatements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        attributeStatements = make_shared<vector<SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements>>(expect1);
      }
    }
    if (m.find("DefaultRelayState") != m.end() && !m["DefaultRelayState"].empty()) {
      defaultRelayState = make_shared<string>(boost::any_cast<string>(m["DefaultRelayState"]));
    }
    if (m.find("NameIdFormat") != m.end() && !m["NameIdFormat"].empty()) {
      nameIdFormat = make_shared<string>(boost::any_cast<string>(m["NameIdFormat"]));
    }
    if (m.find("NameIdValueExpression") != m.end() && !m["NameIdValueExpression"].empty()) {
      nameIdValueExpression = make_shared<string>(boost::any_cast<string>(m["NameIdValueExpression"]));
    }
    if (m.find("ResponseSigned") != m.end() && !m["ResponseSigned"].empty()) {
      responseSigned = make_shared<bool>(boost::any_cast<bool>(m["ResponseSigned"]));
    }
    if (m.find("SignatureAlgorithm") != m.end() && !m["SignatureAlgorithm"].empty()) {
      signatureAlgorithm = make_shared<string>(boost::any_cast<string>(m["SignatureAlgorithm"]));
    }
    if (m.find("SpEntityId") != m.end() && !m["SpEntityId"].empty()) {
      spEntityId = make_shared<string>(boost::any_cast<string>(m["SpEntityId"]));
    }
    if (m.find("SpSsoAcsUrl") != m.end() && !m["SpSsoAcsUrl"].empty()) {
      spSsoAcsUrl = make_shared<string>(boost::any_cast<string>(m["SpSsoAcsUrl"]));
    }
  }


  virtual ~SetApplicationSsoConfigRequestSamlSsoConfig() = default;
};
class SetApplicationSsoConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> initLoginType{};
  shared_ptr<string> initLoginUrl{};
  shared_ptr<string> instanceId{};
  shared_ptr<SetApplicationSsoConfigRequestOidcSsoConfig> oidcSsoConfig{};
  shared_ptr<SetApplicationSsoConfigRequestSamlSsoConfig> samlSsoConfig{};

  SetApplicationSsoConfigRequest() {}

  explicit SetApplicationSsoConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (initLoginType) {
      res["InitLoginType"] = boost::any(*initLoginType);
    }
    if (initLoginUrl) {
      res["InitLoginUrl"] = boost::any(*initLoginUrl);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (oidcSsoConfig) {
      res["OidcSsoConfig"] = oidcSsoConfig ? boost::any(oidcSsoConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (samlSsoConfig) {
      res["SamlSsoConfig"] = samlSsoConfig ? boost::any(samlSsoConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("InitLoginType") != m.end() && !m["InitLoginType"].empty()) {
      initLoginType = make_shared<string>(boost::any_cast<string>(m["InitLoginType"]));
    }
    if (m.find("InitLoginUrl") != m.end() && !m["InitLoginUrl"].empty()) {
      initLoginUrl = make_shared<string>(boost::any_cast<string>(m["InitLoginUrl"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OidcSsoConfig") != m.end() && !m["OidcSsoConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["OidcSsoConfig"].type()) {
        SetApplicationSsoConfigRequestOidcSsoConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OidcSsoConfig"]));
        oidcSsoConfig = make_shared<SetApplicationSsoConfigRequestOidcSsoConfig>(model1);
      }
    }
    if (m.find("SamlSsoConfig") != m.end() && !m["SamlSsoConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["SamlSsoConfig"].type()) {
        SetApplicationSsoConfigRequestSamlSsoConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SamlSsoConfig"]));
        samlSsoConfig = make_shared<SetApplicationSsoConfigRequestSamlSsoConfig>(model1);
      }
    }
  }


  virtual ~SetApplicationSsoConfigRequest() = default;
};
class SetApplicationSsoConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetApplicationSsoConfigResponseBody() {}

  explicit SetApplicationSsoConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetApplicationSsoConfigResponseBody() = default;
};
class SetApplicationSsoConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetApplicationSsoConfigResponseBody> body{};

  SetApplicationSsoConfigResponse() {}

  explicit SetApplicationSsoConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetApplicationSsoConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetApplicationSsoConfigResponseBody>(model1);
      }
    }
  }


  virtual ~SetApplicationSsoConfigResponse() = default;
};
class SetDefaultDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainId{};
  shared_ptr<string> instanceId{};

  SetDefaultDomainRequest() {}

  explicit SetDefaultDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~SetDefaultDomainRequest() = default;
};
class SetDefaultDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetDefaultDomainResponseBody() {}

  explicit SetDefaultDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetDefaultDomainResponseBody() = default;
};
class SetDefaultDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetDefaultDomainResponseBody> body{};

  SetDefaultDomainResponse() {}

  explicit SetDefaultDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetDefaultDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDefaultDomainResponseBody>(model1);
      }
    }
  }


  virtual ~SetDefaultDomainResponse() = default;
};
class SetForgetPasswordConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> authenticationChannels{};
  shared_ptr<string> forgetPasswordStatus{};
  shared_ptr<string> instanceId{};

  SetForgetPasswordConfigurationRequest() {}

  explicit SetForgetPasswordConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authenticationChannels) {
      res["AuthenticationChannels"] = boost::any(*authenticationChannels);
    }
    if (forgetPasswordStatus) {
      res["ForgetPasswordStatus"] = boost::any(*forgetPasswordStatus);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthenticationChannels") != m.end() && !m["AuthenticationChannels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AuthenticationChannels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AuthenticationChannels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authenticationChannels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ForgetPasswordStatus") != m.end() && !m["ForgetPasswordStatus"].empty()) {
      forgetPasswordStatus = make_shared<string>(boost::any_cast<string>(m["ForgetPasswordStatus"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~SetForgetPasswordConfigurationRequest() = default;
};
class SetForgetPasswordConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetForgetPasswordConfigurationResponseBody() {}

  explicit SetForgetPasswordConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetForgetPasswordConfigurationResponseBody() = default;
};
class SetForgetPasswordConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetForgetPasswordConfigurationResponseBody> body{};

  SetForgetPasswordConfigurationResponse() {}

  explicit SetForgetPasswordConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetForgetPasswordConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetForgetPasswordConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~SetForgetPasswordConfigurationResponse() = default;
};
class SetPasswordComplexityConfigurationRequestPasswordComplexityRules : public Darabonba::Model {
public:
  shared_ptr<string> passwordCheckType{};

  SetPasswordComplexityConfigurationRequestPasswordComplexityRules() {}

  explicit SetPasswordComplexityConfigurationRequestPasswordComplexityRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (passwordCheckType) {
      res["PasswordCheckType"] = boost::any(*passwordCheckType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PasswordCheckType") != m.end() && !m["PasswordCheckType"].empty()) {
      passwordCheckType = make_shared<string>(boost::any_cast<string>(m["PasswordCheckType"]));
    }
  }


  virtual ~SetPasswordComplexityConfigurationRequestPasswordComplexityRules() = default;
};
class SetPasswordComplexityConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<vector<SetPasswordComplexityConfigurationRequestPasswordComplexityRules>> passwordComplexityRules{};
  shared_ptr<long> passwordMinLength{};

  SetPasswordComplexityConfigurationRequest() {}

  explicit SetPasswordComplexityConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (passwordComplexityRules) {
      vector<boost::any> temp1;
      for(auto item1:*passwordComplexityRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PasswordComplexityRules"] = boost::any(temp1);
    }
    if (passwordMinLength) {
      res["PasswordMinLength"] = boost::any(*passwordMinLength);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PasswordComplexityRules") != m.end() && !m["PasswordComplexityRules"].empty()) {
      if (typeid(vector<boost::any>) == m["PasswordComplexityRules"].type()) {
        vector<SetPasswordComplexityConfigurationRequestPasswordComplexityRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PasswordComplexityRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SetPasswordComplexityConfigurationRequestPasswordComplexityRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        passwordComplexityRules = make_shared<vector<SetPasswordComplexityConfigurationRequestPasswordComplexityRules>>(expect1);
      }
    }
    if (m.find("PasswordMinLength") != m.end() && !m["PasswordMinLength"].empty()) {
      passwordMinLength = make_shared<long>(boost::any_cast<long>(m["PasswordMinLength"]));
    }
  }


  virtual ~SetPasswordComplexityConfigurationRequest() = default;
};
class SetPasswordComplexityConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetPasswordComplexityConfigurationResponseBody() {}

  explicit SetPasswordComplexityConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetPasswordComplexityConfigurationResponseBody() = default;
};
class SetPasswordComplexityConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetPasswordComplexityConfigurationResponseBody> body{};

  SetPasswordComplexityConfigurationResponse() {}

  explicit SetPasswordComplexityConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetPasswordComplexityConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetPasswordComplexityConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~SetPasswordComplexityConfigurationResponse() = default;
};
class SetPasswordExpirationConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> passwordExpirationAction{};
  shared_ptr<vector<string>> passwordExpirationNotificationChannels{};
  shared_ptr<long> passwordExpirationNotificationDuration{};
  shared_ptr<string> passwordExpirationNotificationStatus{};
  shared_ptr<string> passwordExpirationStatus{};
  shared_ptr<long> passwordForcedUpdateDuration{};
  shared_ptr<long> passwordValidMaxDay{};

  SetPasswordExpirationConfigurationRequest() {}

  explicit SetPasswordExpirationConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (passwordExpirationAction) {
      res["PasswordExpirationAction"] = boost::any(*passwordExpirationAction);
    }
    if (passwordExpirationNotificationChannels) {
      res["PasswordExpirationNotificationChannels"] = boost::any(*passwordExpirationNotificationChannels);
    }
    if (passwordExpirationNotificationDuration) {
      res["PasswordExpirationNotificationDuration"] = boost::any(*passwordExpirationNotificationDuration);
    }
    if (passwordExpirationNotificationStatus) {
      res["PasswordExpirationNotificationStatus"] = boost::any(*passwordExpirationNotificationStatus);
    }
    if (passwordExpirationStatus) {
      res["PasswordExpirationStatus"] = boost::any(*passwordExpirationStatus);
    }
    if (passwordForcedUpdateDuration) {
      res["PasswordForcedUpdateDuration"] = boost::any(*passwordForcedUpdateDuration);
    }
    if (passwordValidMaxDay) {
      res["PasswordValidMaxDay"] = boost::any(*passwordValidMaxDay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PasswordExpirationAction") != m.end() && !m["PasswordExpirationAction"].empty()) {
      passwordExpirationAction = make_shared<string>(boost::any_cast<string>(m["PasswordExpirationAction"]));
    }
    if (m.find("PasswordExpirationNotificationChannels") != m.end() && !m["PasswordExpirationNotificationChannels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PasswordExpirationNotificationChannels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PasswordExpirationNotificationChannels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      passwordExpirationNotificationChannels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PasswordExpirationNotificationDuration") != m.end() && !m["PasswordExpirationNotificationDuration"].empty()) {
      passwordExpirationNotificationDuration = make_shared<long>(boost::any_cast<long>(m["PasswordExpirationNotificationDuration"]));
    }
    if (m.find("PasswordExpirationNotificationStatus") != m.end() && !m["PasswordExpirationNotificationStatus"].empty()) {
      passwordExpirationNotificationStatus = make_shared<string>(boost::any_cast<string>(m["PasswordExpirationNotificationStatus"]));
    }
    if (m.find("PasswordExpirationStatus") != m.end() && !m["PasswordExpirationStatus"].empty()) {
      passwordExpirationStatus = make_shared<string>(boost::any_cast<string>(m["PasswordExpirationStatus"]));
    }
    if (m.find("PasswordForcedUpdateDuration") != m.end() && !m["PasswordForcedUpdateDuration"].empty()) {
      passwordForcedUpdateDuration = make_shared<long>(boost::any_cast<long>(m["PasswordForcedUpdateDuration"]));
    }
    if (m.find("PasswordValidMaxDay") != m.end() && !m["PasswordValidMaxDay"].empty()) {
      passwordValidMaxDay = make_shared<long>(boost::any_cast<long>(m["PasswordValidMaxDay"]));
    }
  }


  virtual ~SetPasswordExpirationConfigurationRequest() = default;
};
class SetPasswordExpirationConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetPasswordExpirationConfigurationResponseBody() {}

  explicit SetPasswordExpirationConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetPasswordExpirationConfigurationResponseBody() = default;
};
class SetPasswordExpirationConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetPasswordExpirationConfigurationResponseBody> body{};

  SetPasswordExpirationConfigurationResponse() {}

  explicit SetPasswordExpirationConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetPasswordExpirationConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetPasswordExpirationConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~SetPasswordExpirationConfigurationResponse() = default;
};
class SetPasswordHistoryConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> passwordHistoryMaxRetention{};
  shared_ptr<string> passwordHistoryStatus{};

  SetPasswordHistoryConfigurationRequest() {}

  explicit SetPasswordHistoryConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (passwordHistoryMaxRetention) {
      res["PasswordHistoryMaxRetention"] = boost::any(*passwordHistoryMaxRetention);
    }
    if (passwordHistoryStatus) {
      res["PasswordHistoryStatus"] = boost::any(*passwordHistoryStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PasswordHistoryMaxRetention") != m.end() && !m["PasswordHistoryMaxRetention"].empty()) {
      passwordHistoryMaxRetention = make_shared<long>(boost::any_cast<long>(m["PasswordHistoryMaxRetention"]));
    }
    if (m.find("PasswordHistoryStatus") != m.end() && !m["PasswordHistoryStatus"].empty()) {
      passwordHistoryStatus = make_shared<string>(boost::any_cast<string>(m["PasswordHistoryStatus"]));
    }
  }


  virtual ~SetPasswordHistoryConfigurationRequest() = default;
};
class SetPasswordHistoryConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetPasswordHistoryConfigurationResponseBody() {}

  explicit SetPasswordHistoryConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetPasswordHistoryConfigurationResponseBody() = default;
};
class SetPasswordHistoryConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetPasswordHistoryConfigurationResponseBody> body{};

  SetPasswordHistoryConfigurationResponse() {}

  explicit SetPasswordHistoryConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetPasswordHistoryConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetPasswordHistoryConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~SetPasswordHistoryConfigurationResponse() = default;
};
class SetPasswordInitializationConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> passwordForcedUpdateStatus{};
  shared_ptr<vector<string>> passwordInitializationNotificationChannels{};
  shared_ptr<string> passwordInitializationStatus{};
  shared_ptr<string> passwordInitializationType{};

  SetPasswordInitializationConfigurationRequest() {}

  explicit SetPasswordInitializationConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (passwordForcedUpdateStatus) {
      res["PasswordForcedUpdateStatus"] = boost::any(*passwordForcedUpdateStatus);
    }
    if (passwordInitializationNotificationChannels) {
      res["PasswordInitializationNotificationChannels"] = boost::any(*passwordInitializationNotificationChannels);
    }
    if (passwordInitializationStatus) {
      res["PasswordInitializationStatus"] = boost::any(*passwordInitializationStatus);
    }
    if (passwordInitializationType) {
      res["PasswordInitializationType"] = boost::any(*passwordInitializationType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PasswordForcedUpdateStatus") != m.end() && !m["PasswordForcedUpdateStatus"].empty()) {
      passwordForcedUpdateStatus = make_shared<string>(boost::any_cast<string>(m["PasswordForcedUpdateStatus"]));
    }
    if (m.find("PasswordInitializationNotificationChannels") != m.end() && !m["PasswordInitializationNotificationChannels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PasswordInitializationNotificationChannels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PasswordInitializationNotificationChannels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      passwordInitializationNotificationChannels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PasswordInitializationStatus") != m.end() && !m["PasswordInitializationStatus"].empty()) {
      passwordInitializationStatus = make_shared<string>(boost::any_cast<string>(m["PasswordInitializationStatus"]));
    }
    if (m.find("PasswordInitializationType") != m.end() && !m["PasswordInitializationType"].empty()) {
      passwordInitializationType = make_shared<string>(boost::any_cast<string>(m["PasswordInitializationType"]));
    }
  }


  virtual ~SetPasswordInitializationConfigurationRequest() = default;
};
class SetPasswordInitializationConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetPasswordInitializationConfigurationResponseBody() {}

  explicit SetPasswordInitializationConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetPasswordInitializationConfigurationResponseBody() = default;
};
class SetPasswordInitializationConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetPasswordInitializationConfigurationResponseBody> body{};

  SetPasswordInitializationConfigurationResponse() {}

  explicit SetPasswordInitializationConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetPasswordInitializationConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetPasswordInitializationConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~SetPasswordInitializationConfigurationResponse() = default;
};
class SetUserPrimaryOrganizationalUnitRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> organizationalUnitId{};
  shared_ptr<string> userId{};

  SetUserPrimaryOrganizationalUnitRequest() {}

  explicit SetUserPrimaryOrganizationalUnitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (organizationalUnitId) {
      res["OrganizationalUnitId"] = boost::any(*organizationalUnitId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrganizationalUnitId") != m.end() && !m["OrganizationalUnitId"].empty()) {
      organizationalUnitId = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~SetUserPrimaryOrganizationalUnitRequest() = default;
};
class SetUserPrimaryOrganizationalUnitResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetUserPrimaryOrganizationalUnitResponseBody() {}

  explicit SetUserPrimaryOrganizationalUnitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetUserPrimaryOrganizationalUnitResponseBody() = default;
};
class SetUserPrimaryOrganizationalUnitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetUserPrimaryOrganizationalUnitResponseBody> body{};

  SetUserPrimaryOrganizationalUnitResponse() {}

  explicit SetUserPrimaryOrganizationalUnitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetUserPrimaryOrganizationalUnitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetUserPrimaryOrganizationalUnitResponseBody>(model1);
      }
    }
  }


  virtual ~SetUserPrimaryOrganizationalUnitResponse() = default;
};
class UnlockUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> userId{};

  UnlockUserRequest() {}

  explicit UnlockUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~UnlockUserRequest() = default;
};
class UnlockUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UnlockUserResponseBody() {}

  explicit UnlockUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UnlockUserResponseBody() = default;
};
class UnlockUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnlockUserResponseBody> body{};

  UnlockUserResponse() {}

  explicit UnlockUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnlockUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnlockUserResponseBody>(model1);
      }
    }
  }


  virtual ~UnlockUserResponse() = default;
};
class UpdateApplicationAuthorizationTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> authorizationType{};
  shared_ptr<string> instanceId{};

  UpdateApplicationAuthorizationTypeRequest() {}

  explicit UpdateApplicationAuthorizationTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (authorizationType) {
      res["AuthorizationType"] = boost::any(*authorizationType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("AuthorizationType") != m.end() && !m["AuthorizationType"].empty()) {
      authorizationType = make_shared<string>(boost::any_cast<string>(m["AuthorizationType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~UpdateApplicationAuthorizationTypeRequest() = default;
};
class UpdateApplicationAuthorizationTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateApplicationAuthorizationTypeResponseBody() {}

  explicit UpdateApplicationAuthorizationTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateApplicationAuthorizationTypeResponseBody() = default;
};
class UpdateApplicationAuthorizationTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateApplicationAuthorizationTypeResponseBody> body{};

  UpdateApplicationAuthorizationTypeResponse() {}

  explicit UpdateApplicationAuthorizationTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateApplicationAuthorizationTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateApplicationAuthorizationTypeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateApplicationAuthorizationTypeResponse() = default;
};
class UpdateApplicationDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};

  UpdateApplicationDescriptionRequest() {}

  explicit UpdateApplicationDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~UpdateApplicationDescriptionRequest() = default;
};
class UpdateApplicationDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateApplicationDescriptionResponseBody() {}

  explicit UpdateApplicationDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateApplicationDescriptionResponseBody() = default;
};
class UpdateApplicationDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateApplicationDescriptionResponseBody> body{};

  UpdateApplicationDescriptionResponse() {}

  explicit UpdateApplicationDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateApplicationDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateApplicationDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateApplicationDescriptionResponse() = default;
};
class UpdateGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupExternalId{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> instanceId{};

  UpdateGroupRequest() {}

  explicit UpdateGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupExternalId) {
      res["GroupExternalId"] = boost::any(*groupExternalId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupExternalId") != m.end() && !m["GroupExternalId"].empty()) {
      groupExternalId = make_shared<string>(boost::any_cast<string>(m["GroupExternalId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~UpdateGroupRequest() = default;
};
class UpdateGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateGroupResponseBody() {}

  explicit UpdateGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateGroupResponseBody() = default;
};
class UpdateGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateGroupResponseBody> body{};

  UpdateGroupResponse() {}

  explicit UpdateGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateGroupResponse() = default;
};
class UpdateGroupDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> instanceId{};

  UpdateGroupDescriptionRequest() {}

  explicit UpdateGroupDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~UpdateGroupDescriptionRequest() = default;
};
class UpdateGroupDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateGroupDescriptionResponseBody() {}

  explicit UpdateGroupDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateGroupDescriptionResponseBody() = default;
};
class UpdateGroupDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateGroupDescriptionResponseBody> body{};

  UpdateGroupDescriptionResponse() {}

  explicit UpdateGroupDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateGroupDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateGroupDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateGroupDescriptionResponse() = default;
};
class UpdateInstanceDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};

  UpdateInstanceDescriptionRequest() {}

  explicit UpdateInstanceDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~UpdateInstanceDescriptionRequest() = default;
};
class UpdateInstanceDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateInstanceDescriptionResponseBody() {}

  explicit UpdateInstanceDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateInstanceDescriptionResponseBody() = default;
};
class UpdateInstanceDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateInstanceDescriptionResponseBody> body{};

  UpdateInstanceDescriptionResponse() {}

  explicit UpdateInstanceDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateInstanceDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateInstanceDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateInstanceDescriptionResponse() = default;
};
class UpdateNetworkAccessEndpointNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> networkAccessEndpointId{};
  shared_ptr<string> networkAccessEndpointName{};

  UpdateNetworkAccessEndpointNameRequest() {}

  explicit UpdateNetworkAccessEndpointNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (networkAccessEndpointId) {
      res["NetworkAccessEndpointId"] = boost::any(*networkAccessEndpointId);
    }
    if (networkAccessEndpointName) {
      res["NetworkAccessEndpointName"] = boost::any(*networkAccessEndpointName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NetworkAccessEndpointId") != m.end() && !m["NetworkAccessEndpointId"].empty()) {
      networkAccessEndpointId = make_shared<string>(boost::any_cast<string>(m["NetworkAccessEndpointId"]));
    }
    if (m.find("NetworkAccessEndpointName") != m.end() && !m["NetworkAccessEndpointName"].empty()) {
      networkAccessEndpointName = make_shared<string>(boost::any_cast<string>(m["NetworkAccessEndpointName"]));
    }
  }


  virtual ~UpdateNetworkAccessEndpointNameRequest() = default;
};
class UpdateNetworkAccessEndpointNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateNetworkAccessEndpointNameResponseBody() {}

  explicit UpdateNetworkAccessEndpointNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateNetworkAccessEndpointNameResponseBody() = default;
};
class UpdateNetworkAccessEndpointNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateNetworkAccessEndpointNameResponseBody> body{};

  UpdateNetworkAccessEndpointNameResponse() {}

  explicit UpdateNetworkAccessEndpointNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateNetworkAccessEndpointNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateNetworkAccessEndpointNameResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateNetworkAccessEndpointNameResponse() = default;
};
class UpdateOrganizationalUnitRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> organizationalUnitId{};
  shared_ptr<string> organizationalUnitName{};

  UpdateOrganizationalUnitRequest() {}

  explicit UpdateOrganizationalUnitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (organizationalUnitId) {
      res["OrganizationalUnitId"] = boost::any(*organizationalUnitId);
    }
    if (organizationalUnitName) {
      res["OrganizationalUnitName"] = boost::any(*organizationalUnitName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrganizationalUnitId") != m.end() && !m["OrganizationalUnitId"].empty()) {
      organizationalUnitId = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitId"]));
    }
    if (m.find("OrganizationalUnitName") != m.end() && !m["OrganizationalUnitName"].empty()) {
      organizationalUnitName = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitName"]));
    }
  }


  virtual ~UpdateOrganizationalUnitRequest() = default;
};
class UpdateOrganizationalUnitResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateOrganizationalUnitResponseBody() {}

  explicit UpdateOrganizationalUnitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateOrganizationalUnitResponseBody() = default;
};
class UpdateOrganizationalUnitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateOrganizationalUnitResponseBody> body{};

  UpdateOrganizationalUnitResponse() {}

  explicit UpdateOrganizationalUnitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateOrganizationalUnitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateOrganizationalUnitResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateOrganizationalUnitResponse() = default;
};
class UpdateOrganizationalUnitDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> organizationalUnitId{};

  UpdateOrganizationalUnitDescriptionRequest() {}

  explicit UpdateOrganizationalUnitDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (organizationalUnitId) {
      res["OrganizationalUnitId"] = boost::any(*organizationalUnitId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrganizationalUnitId") != m.end() && !m["OrganizationalUnitId"].empty()) {
      organizationalUnitId = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitId"]));
    }
  }


  virtual ~UpdateOrganizationalUnitDescriptionRequest() = default;
};
class UpdateOrganizationalUnitDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateOrganizationalUnitDescriptionResponseBody() {}

  explicit UpdateOrganizationalUnitDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateOrganizationalUnitDescriptionResponseBody() = default;
};
class UpdateOrganizationalUnitDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateOrganizationalUnitDescriptionResponseBody> body{};

  UpdateOrganizationalUnitDescriptionResponse() {}

  explicit UpdateOrganizationalUnitDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateOrganizationalUnitDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateOrganizationalUnitDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateOrganizationalUnitDescriptionResponse() = default;
};
class UpdateOrganizationalUnitParentIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> organizationalUnitId{};
  shared_ptr<string> parentId{};

  UpdateOrganizationalUnitParentIdRequest() {}

  explicit UpdateOrganizationalUnitParentIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (organizationalUnitId) {
      res["OrganizationalUnitId"] = boost::any(*organizationalUnitId);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrganizationalUnitId") != m.end() && !m["OrganizationalUnitId"].empty()) {
      organizationalUnitId = make_shared<string>(boost::any_cast<string>(m["OrganizationalUnitId"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
  }


  virtual ~UpdateOrganizationalUnitParentIdRequest() = default;
};
class UpdateOrganizationalUnitParentIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateOrganizationalUnitParentIdResponseBody() {}

  explicit UpdateOrganizationalUnitParentIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateOrganizationalUnitParentIdResponseBody() = default;
};
class UpdateOrganizationalUnitParentIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateOrganizationalUnitParentIdResponseBody> body{};

  UpdateOrganizationalUnitParentIdResponse() {}

  explicit UpdateOrganizationalUnitParentIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateOrganizationalUnitParentIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateOrganizationalUnitParentIdResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateOrganizationalUnitParentIdResponse() = default;
};
class UpdateUserRequestCustomFields : public Darabonba::Model {
public:
  shared_ptr<string> fieldName{};
  shared_ptr<string> fieldValue{};
  shared_ptr<string> operation{};

  UpdateUserRequestCustomFields() {}

  explicit UpdateUserRequestCustomFields(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldName) {
      res["FieldName"] = boost::any(*fieldName);
    }
    if (fieldValue) {
      res["FieldValue"] = boost::any(*fieldValue);
    }
    if (operation) {
      res["Operation"] = boost::any(*operation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FieldName") != m.end() && !m["FieldName"].empty()) {
      fieldName = make_shared<string>(boost::any_cast<string>(m["FieldName"]));
    }
    if (m.find("FieldValue") != m.end() && !m["FieldValue"].empty()) {
      fieldValue = make_shared<string>(boost::any_cast<string>(m["FieldValue"]));
    }
    if (m.find("Operation") != m.end() && !m["Operation"].empty()) {
      operation = make_shared<string>(boost::any_cast<string>(m["Operation"]));
    }
  }


  virtual ~UpdateUserRequestCustomFields() = default;
};
class UpdateUserRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateUserRequestCustomFields>> customFields{};
  shared_ptr<string> displayName{};
  shared_ptr<string> email{};
  shared_ptr<bool> emailVerified{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<bool> phoneNumberVerified{};
  shared_ptr<string> phoneRegion{};
  shared_ptr<string> userId{};
  shared_ptr<string> username{};

  UpdateUserRequest() {}

  explicit UpdateUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customFields) {
      vector<boost::any> temp1;
      for(auto item1:*customFields){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CustomFields"] = boost::any(temp1);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (emailVerified) {
      res["EmailVerified"] = boost::any(*emailVerified);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (phoneNumberVerified) {
      res["PhoneNumberVerified"] = boost::any(*phoneNumberVerified);
    }
    if (phoneRegion) {
      res["PhoneRegion"] = boost::any(*phoneRegion);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomFields") != m.end() && !m["CustomFields"].empty()) {
      if (typeid(vector<boost::any>) == m["CustomFields"].type()) {
        vector<UpdateUserRequestCustomFields> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CustomFields"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateUserRequestCustomFields model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customFields = make_shared<vector<UpdateUserRequestCustomFields>>(expect1);
      }
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("EmailVerified") != m.end() && !m["EmailVerified"].empty()) {
      emailVerified = make_shared<bool>(boost::any_cast<bool>(m["EmailVerified"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("PhoneNumberVerified") != m.end() && !m["PhoneNumberVerified"].empty()) {
      phoneNumberVerified = make_shared<bool>(boost::any_cast<bool>(m["PhoneNumberVerified"]));
    }
    if (m.find("PhoneRegion") != m.end() && !m["PhoneRegion"].empty()) {
      phoneRegion = make_shared<string>(boost::any_cast<string>(m["PhoneRegion"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~UpdateUserRequest() = default;
};
class UpdateUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateUserResponseBody() {}

  explicit UpdateUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateUserResponseBody() = default;
};
class UpdateUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateUserResponseBody> body{};

  UpdateUserResponse() {}

  explicit UpdateUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateUserResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateUserResponse() = default;
};
class UpdateUserDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> userId{};

  UpdateUserDescriptionRequest() {}

  explicit UpdateUserDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~UpdateUserDescriptionRequest() = default;
};
class UpdateUserDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateUserDescriptionResponseBody() {}

  explicit UpdateUserDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateUserDescriptionResponseBody() = default;
};
class UpdateUserDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateUserDescriptionResponseBody> body{};

  UpdateUserDescriptionResponse() {}

  explicit UpdateUserDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateUserDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateUserDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateUserDescriptionResponse() = default;
};
class UpdateUserPasswordRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> password{};
  shared_ptr<string> passwordForcedUpdateStatus{};
  shared_ptr<string> userId{};
  shared_ptr<vector<string>> userNotificationChannels{};

  UpdateUserPasswordRequest() {}

  explicit UpdateUserPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (passwordForcedUpdateStatus) {
      res["PasswordForcedUpdateStatus"] = boost::any(*passwordForcedUpdateStatus);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userNotificationChannels) {
      res["UserNotificationChannels"] = boost::any(*userNotificationChannels);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("PasswordForcedUpdateStatus") != m.end() && !m["PasswordForcedUpdateStatus"].empty()) {
      passwordForcedUpdateStatus = make_shared<string>(boost::any_cast<string>(m["PasswordForcedUpdateStatus"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserNotificationChannels") != m.end() && !m["UserNotificationChannels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserNotificationChannels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserNotificationChannels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userNotificationChannels = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateUserPasswordRequest() = default;
};
class UpdateUserPasswordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateUserPasswordResponseBody() {}

  explicit UpdateUserPasswordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateUserPasswordResponseBody() = default;
};
class UpdateUserPasswordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateUserPasswordResponseBody> body{};

  UpdateUserPasswordResponse() {}

  explicit UpdateUserPasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateUserPasswordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateUserPasswordResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateUserPasswordResponse() = default;
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
  AddUserToOrganizationalUnitsResponse addUserToOrganizationalUnitsWithOptions(shared_ptr<AddUserToOrganizationalUnitsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddUserToOrganizationalUnitsResponse addUserToOrganizationalUnits(shared_ptr<AddUserToOrganizationalUnitsRequest> request);
  AddUsersToGroupResponse addUsersToGroupWithOptions(shared_ptr<AddUsersToGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddUsersToGroupResponse addUsersToGroup(shared_ptr<AddUsersToGroupRequest> request);
  AuthorizeApplicationToGroupsResponse authorizeApplicationToGroupsWithOptions(shared_ptr<AuthorizeApplicationToGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AuthorizeApplicationToGroupsResponse authorizeApplicationToGroups(shared_ptr<AuthorizeApplicationToGroupsRequest> request);
  AuthorizeApplicationToOrganizationalUnitsResponse authorizeApplicationToOrganizationalUnitsWithOptions(shared_ptr<AuthorizeApplicationToOrganizationalUnitsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AuthorizeApplicationToOrganizationalUnitsResponse authorizeApplicationToOrganizationalUnits(shared_ptr<AuthorizeApplicationToOrganizationalUnitsRequest> request);
  AuthorizeApplicationToUsersResponse authorizeApplicationToUsersWithOptions(shared_ptr<AuthorizeApplicationToUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AuthorizeApplicationToUsersResponse authorizeApplicationToUsers(shared_ptr<AuthorizeApplicationToUsersRequest> request);
  CreateApplicationResponse createApplicationWithOptions(shared_ptr<CreateApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateApplicationResponse createApplication(shared_ptr<CreateApplicationRequest> request);
  CreateApplicationClientSecretResponse createApplicationClientSecretWithOptions(shared_ptr<CreateApplicationClientSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateApplicationClientSecretResponse createApplicationClientSecret(shared_ptr<CreateApplicationClientSecretRequest> request);
  CreateDomainResponse createDomainWithOptions(shared_ptr<CreateDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDomainResponse createDomain(shared_ptr<CreateDomainRequest> request);
  CreateDomainProxyTokenResponse createDomainProxyTokenWithOptions(shared_ptr<CreateDomainProxyTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDomainProxyTokenResponse createDomainProxyToken(shared_ptr<CreateDomainProxyTokenRequest> request);
  CreateGroupResponse createGroupWithOptions(shared_ptr<CreateGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGroupResponse createGroup(shared_ptr<CreateGroupRequest> request);
  CreateInstanceResponse createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceResponse createInstance(shared_ptr<CreateInstanceRequest> request);
  CreateNetworkAccessEndpointResponse createNetworkAccessEndpointWithOptions(shared_ptr<CreateNetworkAccessEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateNetworkAccessEndpointResponse createNetworkAccessEndpoint(shared_ptr<CreateNetworkAccessEndpointRequest> request);
  CreateOrganizationalUnitResponse createOrganizationalUnitWithOptions(shared_ptr<CreateOrganizationalUnitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateOrganizationalUnitResponse createOrganizationalUnit(shared_ptr<CreateOrganizationalUnitRequest> request);
  CreateUserResponse createUserWithOptions(shared_ptr<CreateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUserResponse createUser(shared_ptr<CreateUserRequest> request);
  DeleteApplicationResponse deleteApplicationWithOptions(shared_ptr<DeleteApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteApplicationResponse deleteApplication(shared_ptr<DeleteApplicationRequest> request);
  DeleteApplicationClientSecretResponse deleteApplicationClientSecretWithOptions(shared_ptr<DeleteApplicationClientSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteApplicationClientSecretResponse deleteApplicationClientSecret(shared_ptr<DeleteApplicationClientSecretRequest> request);
  DeleteDomainResponse deleteDomainWithOptions(shared_ptr<DeleteDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDomainResponse deleteDomain(shared_ptr<DeleteDomainRequest> request);
  DeleteDomainProxyTokenResponse deleteDomainProxyTokenWithOptions(shared_ptr<DeleteDomainProxyTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDomainProxyTokenResponse deleteDomainProxyToken(shared_ptr<DeleteDomainProxyTokenRequest> request);
  DeleteGroupResponse deleteGroupWithOptions(shared_ptr<DeleteGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGroupResponse deleteGroup(shared_ptr<DeleteGroupRequest> request);
  DeleteInstanceResponse deleteInstanceWithOptions(shared_ptr<DeleteInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceResponse deleteInstance(shared_ptr<DeleteInstanceRequest> request);
  DeleteNetworkAccessEndpointResponse deleteNetworkAccessEndpointWithOptions(shared_ptr<DeleteNetworkAccessEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteNetworkAccessEndpointResponse deleteNetworkAccessEndpoint(shared_ptr<DeleteNetworkAccessEndpointRequest> request);
  DeleteOrganizationalUnitResponse deleteOrganizationalUnitWithOptions(shared_ptr<DeleteOrganizationalUnitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteOrganizationalUnitResponse deleteOrganizationalUnit(shared_ptr<DeleteOrganizationalUnitRequest> request);
  DeleteUserResponse deleteUserWithOptions(shared_ptr<DeleteUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserResponse deleteUser(shared_ptr<DeleteUserRequest> request);
  DisableApplicationResponse disableApplicationWithOptions(shared_ptr<DisableApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableApplicationResponse disableApplication(shared_ptr<DisableApplicationRequest> request);
  DisableApplicationApiInvokeResponse disableApplicationApiInvokeWithOptions(shared_ptr<DisableApplicationApiInvokeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableApplicationApiInvokeResponse disableApplicationApiInvoke(shared_ptr<DisableApplicationApiInvokeRequest> request);
  DisableApplicationClientSecretResponse disableApplicationClientSecretWithOptions(shared_ptr<DisableApplicationClientSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableApplicationClientSecretResponse disableApplicationClientSecret(shared_ptr<DisableApplicationClientSecretRequest> request);
  DisableApplicationProvisioningResponse disableApplicationProvisioningWithOptions(shared_ptr<DisableApplicationProvisioningRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableApplicationProvisioningResponse disableApplicationProvisioning(shared_ptr<DisableApplicationProvisioningRequest> request);
  DisableApplicationSsoResponse disableApplicationSsoWithOptions(shared_ptr<DisableApplicationSsoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableApplicationSsoResponse disableApplicationSso(shared_ptr<DisableApplicationSsoRequest> request);
  DisableDomainProxyTokenResponse disableDomainProxyTokenWithOptions(shared_ptr<DisableDomainProxyTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableDomainProxyTokenResponse disableDomainProxyToken(shared_ptr<DisableDomainProxyTokenRequest> request);
  DisableInitDomainAutoRedirectResponse disableInitDomainAutoRedirectWithOptions(shared_ptr<DisableInitDomainAutoRedirectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableInitDomainAutoRedirectResponse disableInitDomainAutoRedirect(shared_ptr<DisableInitDomainAutoRedirectRequest> request);
  DisableUserResponse disableUserWithOptions(shared_ptr<DisableUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableUserResponse disableUser(shared_ptr<DisableUserRequest> request);
  EnableApplicationResponse enableApplicationWithOptions(shared_ptr<EnableApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableApplicationResponse enableApplication(shared_ptr<EnableApplicationRequest> request);
  EnableApplicationApiInvokeResponse enableApplicationApiInvokeWithOptions(shared_ptr<EnableApplicationApiInvokeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableApplicationApiInvokeResponse enableApplicationApiInvoke(shared_ptr<EnableApplicationApiInvokeRequest> request);
  EnableApplicationClientSecretResponse enableApplicationClientSecretWithOptions(shared_ptr<EnableApplicationClientSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableApplicationClientSecretResponse enableApplicationClientSecret(shared_ptr<EnableApplicationClientSecretRequest> request);
  EnableApplicationProvisioningResponse enableApplicationProvisioningWithOptions(shared_ptr<EnableApplicationProvisioningRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableApplicationProvisioningResponse enableApplicationProvisioning(shared_ptr<EnableApplicationProvisioningRequest> request);
  EnableApplicationSsoResponse enableApplicationSsoWithOptions(shared_ptr<EnableApplicationSsoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableApplicationSsoResponse enableApplicationSso(shared_ptr<EnableApplicationSsoRequest> request);
  EnableDomainProxyTokenResponse enableDomainProxyTokenWithOptions(shared_ptr<EnableDomainProxyTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableDomainProxyTokenResponse enableDomainProxyToken(shared_ptr<EnableDomainProxyTokenRequest> request);
  EnableInitDomainAutoRedirectResponse enableInitDomainAutoRedirectWithOptions(shared_ptr<EnableInitDomainAutoRedirectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableInitDomainAutoRedirectResponse enableInitDomainAutoRedirect(shared_ptr<EnableInitDomainAutoRedirectRequest> request);
  EnableUserResponse enableUserWithOptions(shared_ptr<EnableUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableUserResponse enableUser(shared_ptr<EnableUserRequest> request);
  GetApplicationResponse getApplicationWithOptions(shared_ptr<GetApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetApplicationResponse getApplication(shared_ptr<GetApplicationRequest> request);
  GetApplicationGrantScopeResponse getApplicationGrantScopeWithOptions(shared_ptr<GetApplicationGrantScopeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetApplicationGrantScopeResponse getApplicationGrantScope(shared_ptr<GetApplicationGrantScopeRequest> request);
  GetApplicationProvisioningConfigResponse getApplicationProvisioningConfigWithOptions(shared_ptr<GetApplicationProvisioningConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetApplicationProvisioningConfigResponse getApplicationProvisioningConfig(shared_ptr<GetApplicationProvisioningConfigRequest> request);
  GetApplicationProvisioningScopeResponse getApplicationProvisioningScopeWithOptions(shared_ptr<GetApplicationProvisioningScopeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetApplicationProvisioningScopeResponse getApplicationProvisioningScope(shared_ptr<GetApplicationProvisioningScopeRequest> request);
  GetApplicationSsoConfigResponse getApplicationSsoConfigWithOptions(shared_ptr<GetApplicationSsoConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetApplicationSsoConfigResponse getApplicationSsoConfig(shared_ptr<GetApplicationSsoConfigRequest> request);
  GetDomainResponse getDomainWithOptions(shared_ptr<GetDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDomainResponse getDomain(shared_ptr<GetDomainRequest> request);
  GetDomainDnsChallengeResponse getDomainDnsChallengeWithOptions(shared_ptr<GetDomainDnsChallengeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDomainDnsChallengeResponse getDomainDnsChallenge(shared_ptr<GetDomainDnsChallengeRequest> request);
  GetForgetPasswordConfigurationResponse getForgetPasswordConfigurationWithOptions(shared_ptr<GetForgetPasswordConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetForgetPasswordConfigurationResponse getForgetPasswordConfiguration(shared_ptr<GetForgetPasswordConfigurationRequest> request);
  GetGroupResponse getGroupWithOptions(shared_ptr<GetGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGroupResponse getGroup(shared_ptr<GetGroupRequest> request);
  GetInstanceResponse getInstanceWithOptions(shared_ptr<GetInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceResponse getInstance(shared_ptr<GetInstanceRequest> request);
  GetNetworkAccessEndpointResponse getNetworkAccessEndpointWithOptions(shared_ptr<GetNetworkAccessEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNetworkAccessEndpointResponse getNetworkAccessEndpoint(shared_ptr<GetNetworkAccessEndpointRequest> request);
  GetOrganizationalUnitResponse getOrganizationalUnitWithOptions(shared_ptr<GetOrganizationalUnitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOrganizationalUnitResponse getOrganizationalUnit(shared_ptr<GetOrganizationalUnitRequest> request);
  GetPasswordComplexityConfigurationResponse getPasswordComplexityConfigurationWithOptions(shared_ptr<GetPasswordComplexityConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPasswordComplexityConfigurationResponse getPasswordComplexityConfiguration(shared_ptr<GetPasswordComplexityConfigurationRequest> request);
  GetPasswordExpirationConfigurationResponse getPasswordExpirationConfigurationWithOptions(shared_ptr<GetPasswordExpirationConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPasswordExpirationConfigurationResponse getPasswordExpirationConfiguration(shared_ptr<GetPasswordExpirationConfigurationRequest> request);
  GetPasswordHistoryConfigurationResponse getPasswordHistoryConfigurationWithOptions(shared_ptr<GetPasswordHistoryConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPasswordHistoryConfigurationResponse getPasswordHistoryConfiguration(shared_ptr<GetPasswordHistoryConfigurationRequest> request);
  GetPasswordInitializationConfigurationResponse getPasswordInitializationConfigurationWithOptions(shared_ptr<GetPasswordInitializationConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPasswordInitializationConfigurationResponse getPasswordInitializationConfiguration(shared_ptr<GetPasswordInitializationConfigurationRequest> request);
  GetRootOrganizationalUnitResponse getRootOrganizationalUnitWithOptions(shared_ptr<GetRootOrganizationalUnitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRootOrganizationalUnitResponse getRootOrganizationalUnit(shared_ptr<GetRootOrganizationalUnitRequest> request);
  GetUserResponse getUserWithOptions(shared_ptr<GetUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserResponse getUser(shared_ptr<GetUserRequest> request);
  ListApplicationClientSecretsResponse listApplicationClientSecretsWithOptions(shared_ptr<ListApplicationClientSecretsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListApplicationClientSecretsResponse listApplicationClientSecrets(shared_ptr<ListApplicationClientSecretsRequest> request);
  ListApplicationsResponse listApplicationsWithOptions(shared_ptr<ListApplicationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListApplicationsResponse listApplications(shared_ptr<ListApplicationsRequest> request);
  ListApplicationsForOrganizationalUnitResponse listApplicationsForOrganizationalUnitWithOptions(shared_ptr<ListApplicationsForOrganizationalUnitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListApplicationsForOrganizationalUnitResponse listApplicationsForOrganizationalUnit(shared_ptr<ListApplicationsForOrganizationalUnitRequest> request);
  ListApplicationsForUserResponse listApplicationsForUserWithOptions(shared_ptr<ListApplicationsForUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListApplicationsForUserResponse listApplicationsForUser(shared_ptr<ListApplicationsForUserRequest> request);
  ListDomainProxyTokensResponse listDomainProxyTokensWithOptions(shared_ptr<ListDomainProxyTokensRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDomainProxyTokensResponse listDomainProxyTokens(shared_ptr<ListDomainProxyTokensRequest> request);
  ListDomainsResponse listDomainsWithOptions(shared_ptr<ListDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDomainsResponse listDomains(shared_ptr<ListDomainsRequest> request);
  ListEiamInstancesResponse listEiamInstancesWithOptions(shared_ptr<ListEiamInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEiamInstancesResponse listEiamInstances(shared_ptr<ListEiamInstancesRequest> request);
  ListEiamRegionsResponse listEiamRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEiamRegionsResponse listEiamRegions();
  ListGroupsResponse listGroupsWithOptions(shared_ptr<ListGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGroupsResponse listGroups(shared_ptr<ListGroupsRequest> request);
  ListGroupsForApplicationResponse listGroupsForApplicationWithOptions(shared_ptr<ListGroupsForApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGroupsForApplicationResponse listGroupsForApplication(shared_ptr<ListGroupsForApplicationRequest> request);
  ListGroupsForUserResponse listGroupsForUserWithOptions(shared_ptr<ListGroupsForUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGroupsForUserResponse listGroupsForUser(shared_ptr<ListGroupsForUserRequest> request);
  ListInstancesResponse listInstancesWithOptions(shared_ptr<ListInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstancesResponse listInstances(shared_ptr<ListInstancesRequest> request);
  ListNetworkAccessEndpointAvailableRegionsResponse listNetworkAccessEndpointAvailableRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNetworkAccessEndpointAvailableRegionsResponse listNetworkAccessEndpointAvailableRegions();
  ListNetworkAccessEndpointAvailableZonesResponse listNetworkAccessEndpointAvailableZonesWithOptions(shared_ptr<ListNetworkAccessEndpointAvailableZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNetworkAccessEndpointAvailableZonesResponse listNetworkAccessEndpointAvailableZones(shared_ptr<ListNetworkAccessEndpointAvailableZonesRequest> request);
  ListNetworkAccessEndpointsResponse listNetworkAccessEndpointsWithOptions(shared_ptr<ListNetworkAccessEndpointsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNetworkAccessEndpointsResponse listNetworkAccessEndpoints(shared_ptr<ListNetworkAccessEndpointsRequest> request);
  ListNetworkAccessPathsResponse listNetworkAccessPathsWithOptions(shared_ptr<ListNetworkAccessPathsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNetworkAccessPathsResponse listNetworkAccessPaths(shared_ptr<ListNetworkAccessPathsRequest> request);
  ListOrganizationalUnitParentsResponse listOrganizationalUnitParentsWithOptions(shared_ptr<ListOrganizationalUnitParentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOrganizationalUnitParentsResponse listOrganizationalUnitParents(shared_ptr<ListOrganizationalUnitParentsRequest> request);
  ListOrganizationalUnitsResponse listOrganizationalUnitsWithOptions(shared_ptr<ListOrganizationalUnitsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOrganizationalUnitsResponse listOrganizationalUnits(shared_ptr<ListOrganizationalUnitsRequest> request);
  ListOrganizationalUnitsForApplicationResponse listOrganizationalUnitsForApplicationWithOptions(shared_ptr<ListOrganizationalUnitsForApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOrganizationalUnitsForApplicationResponse listOrganizationalUnitsForApplication(shared_ptr<ListOrganizationalUnitsForApplicationRequest> request);
  ListRegionsResponse listRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRegionsResponse listRegions();
  ListUsersResponse listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUsersResponse listUsers(shared_ptr<ListUsersRequest> request);
  ListUsersForApplicationResponse listUsersForApplicationWithOptions(shared_ptr<ListUsersForApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUsersForApplicationResponse listUsersForApplication(shared_ptr<ListUsersForApplicationRequest> request);
  ListUsersForGroupResponse listUsersForGroupWithOptions(shared_ptr<ListUsersForGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUsersForGroupResponse listUsersForGroup(shared_ptr<ListUsersForGroupRequest> request);
  ObtainApplicationClientSecretResponse obtainApplicationClientSecretWithOptions(shared_ptr<ObtainApplicationClientSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ObtainApplicationClientSecretResponse obtainApplicationClientSecret(shared_ptr<ObtainApplicationClientSecretRequest> request);
  ObtainDomainProxyTokenResponse obtainDomainProxyTokenWithOptions(shared_ptr<ObtainDomainProxyTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ObtainDomainProxyTokenResponse obtainDomainProxyToken(shared_ptr<ObtainDomainProxyTokenRequest> request);
  RemoveUserFromOrganizationalUnitsResponse removeUserFromOrganizationalUnitsWithOptions(shared_ptr<RemoveUserFromOrganizationalUnitsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveUserFromOrganizationalUnitsResponse removeUserFromOrganizationalUnits(shared_ptr<RemoveUserFromOrganizationalUnitsRequest> request);
  RemoveUsersFromGroupResponse removeUsersFromGroupWithOptions(shared_ptr<RemoveUsersFromGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveUsersFromGroupResponse removeUsersFromGroup(shared_ptr<RemoveUsersFromGroupRequest> request);
  RevokeApplicationFromGroupsResponse revokeApplicationFromGroupsWithOptions(shared_ptr<RevokeApplicationFromGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RevokeApplicationFromGroupsResponse revokeApplicationFromGroups(shared_ptr<RevokeApplicationFromGroupsRequest> request);
  RevokeApplicationFromOrganizationalUnitsResponse revokeApplicationFromOrganizationalUnitsWithOptions(shared_ptr<RevokeApplicationFromOrganizationalUnitsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RevokeApplicationFromOrganizationalUnitsResponse revokeApplicationFromOrganizationalUnits(shared_ptr<RevokeApplicationFromOrganizationalUnitsRequest> request);
  RevokeApplicationFromUsersResponse revokeApplicationFromUsersWithOptions(shared_ptr<RevokeApplicationFromUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RevokeApplicationFromUsersResponse revokeApplicationFromUsers(shared_ptr<RevokeApplicationFromUsersRequest> request);
  SetApplicationGrantScopeResponse setApplicationGrantScopeWithOptions(shared_ptr<SetApplicationGrantScopeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetApplicationGrantScopeResponse setApplicationGrantScope(shared_ptr<SetApplicationGrantScopeRequest> request);
  SetApplicationProvisioningConfigResponse setApplicationProvisioningConfigWithOptions(shared_ptr<SetApplicationProvisioningConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetApplicationProvisioningConfigResponse setApplicationProvisioningConfig(shared_ptr<SetApplicationProvisioningConfigRequest> request);
  SetApplicationProvisioningScopeResponse setApplicationProvisioningScopeWithOptions(shared_ptr<SetApplicationProvisioningScopeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetApplicationProvisioningScopeResponse setApplicationProvisioningScope(shared_ptr<SetApplicationProvisioningScopeRequest> request);
  SetApplicationSsoConfigResponse setApplicationSsoConfigWithOptions(shared_ptr<SetApplicationSsoConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetApplicationSsoConfigResponse setApplicationSsoConfig(shared_ptr<SetApplicationSsoConfigRequest> request);
  SetDefaultDomainResponse setDefaultDomainWithOptions(shared_ptr<SetDefaultDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDefaultDomainResponse setDefaultDomain(shared_ptr<SetDefaultDomainRequest> request);
  SetForgetPasswordConfigurationResponse setForgetPasswordConfigurationWithOptions(shared_ptr<SetForgetPasswordConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetForgetPasswordConfigurationResponse setForgetPasswordConfiguration(shared_ptr<SetForgetPasswordConfigurationRequest> request);
  SetPasswordComplexityConfigurationResponse setPasswordComplexityConfigurationWithOptions(shared_ptr<SetPasswordComplexityConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetPasswordComplexityConfigurationResponse setPasswordComplexityConfiguration(shared_ptr<SetPasswordComplexityConfigurationRequest> request);
  SetPasswordExpirationConfigurationResponse setPasswordExpirationConfigurationWithOptions(shared_ptr<SetPasswordExpirationConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetPasswordExpirationConfigurationResponse setPasswordExpirationConfiguration(shared_ptr<SetPasswordExpirationConfigurationRequest> request);
  SetPasswordHistoryConfigurationResponse setPasswordHistoryConfigurationWithOptions(shared_ptr<SetPasswordHistoryConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetPasswordHistoryConfigurationResponse setPasswordHistoryConfiguration(shared_ptr<SetPasswordHistoryConfigurationRequest> request);
  SetPasswordInitializationConfigurationResponse setPasswordInitializationConfigurationWithOptions(shared_ptr<SetPasswordInitializationConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetPasswordInitializationConfigurationResponse setPasswordInitializationConfiguration(shared_ptr<SetPasswordInitializationConfigurationRequest> request);
  SetUserPrimaryOrganizationalUnitResponse setUserPrimaryOrganizationalUnitWithOptions(shared_ptr<SetUserPrimaryOrganizationalUnitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetUserPrimaryOrganizationalUnitResponse setUserPrimaryOrganizationalUnit(shared_ptr<SetUserPrimaryOrganizationalUnitRequest> request);
  UnlockUserResponse unlockUserWithOptions(shared_ptr<UnlockUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnlockUserResponse unlockUser(shared_ptr<UnlockUserRequest> request);
  UpdateApplicationAuthorizationTypeResponse updateApplicationAuthorizationTypeWithOptions(shared_ptr<UpdateApplicationAuthorizationTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateApplicationAuthorizationTypeResponse updateApplicationAuthorizationType(shared_ptr<UpdateApplicationAuthorizationTypeRequest> request);
  UpdateApplicationDescriptionResponse updateApplicationDescriptionWithOptions(shared_ptr<UpdateApplicationDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateApplicationDescriptionResponse updateApplicationDescription(shared_ptr<UpdateApplicationDescriptionRequest> request);
  UpdateGroupResponse updateGroupWithOptions(shared_ptr<UpdateGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGroupResponse updateGroup(shared_ptr<UpdateGroupRequest> request);
  UpdateGroupDescriptionResponse updateGroupDescriptionWithOptions(shared_ptr<UpdateGroupDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGroupDescriptionResponse updateGroupDescription(shared_ptr<UpdateGroupDescriptionRequest> request);
  UpdateInstanceDescriptionResponse updateInstanceDescriptionWithOptions(shared_ptr<UpdateInstanceDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInstanceDescriptionResponse updateInstanceDescription(shared_ptr<UpdateInstanceDescriptionRequest> request);
  UpdateNetworkAccessEndpointNameResponse updateNetworkAccessEndpointNameWithOptions(shared_ptr<UpdateNetworkAccessEndpointNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateNetworkAccessEndpointNameResponse updateNetworkAccessEndpointName(shared_ptr<UpdateNetworkAccessEndpointNameRequest> request);
  UpdateOrganizationalUnitResponse updateOrganizationalUnitWithOptions(shared_ptr<UpdateOrganizationalUnitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateOrganizationalUnitResponse updateOrganizationalUnit(shared_ptr<UpdateOrganizationalUnitRequest> request);
  UpdateOrganizationalUnitDescriptionResponse updateOrganizationalUnitDescriptionWithOptions(shared_ptr<UpdateOrganizationalUnitDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateOrganizationalUnitDescriptionResponse updateOrganizationalUnitDescription(shared_ptr<UpdateOrganizationalUnitDescriptionRequest> request);
  UpdateOrganizationalUnitParentIdResponse updateOrganizationalUnitParentIdWithOptions(shared_ptr<UpdateOrganizationalUnitParentIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateOrganizationalUnitParentIdResponse updateOrganizationalUnitParentId(shared_ptr<UpdateOrganizationalUnitParentIdRequest> request);
  UpdateUserResponse updateUserWithOptions(shared_ptr<UpdateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserResponse updateUser(shared_ptr<UpdateUserRequest> request);
  UpdateUserDescriptionResponse updateUserDescriptionWithOptions(shared_ptr<UpdateUserDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserDescriptionResponse updateUserDescription(shared_ptr<UpdateUserDescriptionRequest> request);
  UpdateUserPasswordResponse updateUserPasswordWithOptions(shared_ptr<UpdateUserPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserPasswordResponse updateUserPassword(shared_ptr<UpdateUserPasswordRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Eiam20211201

#endif
