// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_YUNDUN-BASTIONHOST20191209_H_
#define ALIBABACLOUD_YUNDUN-BASTIONHOST20191209_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Yundun-bastionhost20191209 {
class AddHostsToGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> hostGroupId{};
  shared_ptr<string> hostIds{};

  AddHostsToGroupRequest() {}

  explicit AddHostsToGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (hostGroupId) {
      res["HostGroupId"] = boost::any(*hostGroupId);
    }
    if (hostIds) {
      res["HostIds"] = boost::any(*hostIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("HostGroupId") != m.end() && !m["HostGroupId"].empty()) {
      hostGroupId = make_shared<string>(boost::any_cast<string>(m["HostGroupId"]));
    }
    if (m.find("HostIds") != m.end() && !m["HostIds"].empty()) {
      hostIds = make_shared<string>(boost::any_cast<string>(m["HostIds"]));
    }
  }


  virtual ~AddHostsToGroupRequest() = default;
};
class AddHostsToGroupResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> hostGroupId{};
  shared_ptr<string> hostId{};

  AddHostsToGroupResponseBodyResults() {}

  explicit AddHostsToGroupResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (hostGroupId) {
      res["HostGroupId"] = boost::any(*hostGroupId);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
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
    if (m.find("HostGroupId") != m.end() && !m["HostGroupId"].empty()) {
      hostGroupId = make_shared<string>(boost::any_cast<string>(m["HostGroupId"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
  }


  virtual ~AddHostsToGroupResponseBodyResults() = default;
};
class AddHostsToGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<AddHostsToGroupResponseBodyResults>> results{};

  AddHostsToGroupResponseBody() {}

  explicit AddHostsToGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<AddHostsToGroupResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddHostsToGroupResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<AddHostsToGroupResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~AddHostsToGroupResponseBody() = default;
};
class AddHostsToGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddHostsToGroupResponseBody> body{};

  AddHostsToGroupResponse() {}

  explicit AddHostsToGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddHostsToGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddHostsToGroupResponseBody>(model1);
      }
    }
  }


  virtual ~AddHostsToGroupResponse() = default;
};
class AddUsersToGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> userGroupId{};
  shared_ptr<string> userIds{};

  AddUsersToGroupRequest() {}

  explicit AddUsersToGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (userIds) {
      res["UserIds"] = boost::any(*userIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("UserIds") != m.end() && !m["UserIds"].empty()) {
      userIds = make_shared<string>(boost::any_cast<string>(m["UserIds"]));
    }
  }


  virtual ~AddUsersToGroupRequest() = default;
};
class AddUsersToGroupResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> userGroupId{};
  shared_ptr<string> userId{};

  AddUsersToGroupResponseBodyResults() {}

  explicit AddUsersToGroupResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
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
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~AddUsersToGroupResponseBodyResults() = default;
};
class AddUsersToGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<AddUsersToGroupResponseBodyResults>> results{};

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
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<AddUsersToGroupResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddUsersToGroupResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<AddUsersToGroupResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~AddUsersToGroupResponseBody() = default;
};
class AddUsersToGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddUsersToGroupResponseBody> body{};

  AddUsersToGroupResponse() {}

  explicit AddUsersToGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class AttachHostAccountsToUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> userId{};
  shared_ptr<string> hosts{};

  AttachHostAccountsToUserRequest() {}

  explicit AttachHostAccountsToUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (hosts) {
      res["Hosts"] = boost::any(*hosts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("Hosts") != m.end() && !m["Hosts"].empty()) {
      hosts = make_shared<string>(boost::any_cast<string>(m["Hosts"]));
    }
  }


  virtual ~AttachHostAccountsToUserRequest() = default;
};
class AttachHostAccountsToUserResponseBodyResultsHostAccounts : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> hostAccountId{};

  AttachHostAccountsToUserResponseBodyResultsHostAccounts() {}

  explicit AttachHostAccountsToUserResponseBodyResultsHostAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (hostAccountId) {
      res["HostAccountId"] = boost::any(*hostAccountId);
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
    if (m.find("HostAccountId") != m.end() && !m["HostAccountId"].empty()) {
      hostAccountId = make_shared<string>(boost::any_cast<string>(m["HostAccountId"]));
    }
  }


  virtual ~AttachHostAccountsToUserResponseBodyResultsHostAccounts() = default;
};
class AttachHostAccountsToUserResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> hostId{};
  shared_ptr<string> userId{};
  shared_ptr<vector<AttachHostAccountsToUserResponseBodyResultsHostAccounts>> hostAccounts{};

  AttachHostAccountsToUserResponseBodyResults() {}

  explicit AttachHostAccountsToUserResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (hostAccounts) {
      vector<boost::any> temp1;
      for(auto item1:*hostAccounts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HostAccounts"] = boost::any(temp1);
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
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("HostAccounts") != m.end() && !m["HostAccounts"].empty()) {
      if (typeid(vector<boost::any>) == m["HostAccounts"].type()) {
        vector<AttachHostAccountsToUserResponseBodyResultsHostAccounts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HostAccounts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AttachHostAccountsToUserResponseBodyResultsHostAccounts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostAccounts = make_shared<vector<AttachHostAccountsToUserResponseBodyResultsHostAccounts>>(expect1);
      }
    }
  }


  virtual ~AttachHostAccountsToUserResponseBodyResults() = default;
};
class AttachHostAccountsToUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<AttachHostAccountsToUserResponseBodyResults>> results{};

  AttachHostAccountsToUserResponseBody() {}

  explicit AttachHostAccountsToUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<AttachHostAccountsToUserResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AttachHostAccountsToUserResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<AttachHostAccountsToUserResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~AttachHostAccountsToUserResponseBody() = default;
};
class AttachHostAccountsToUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AttachHostAccountsToUserResponseBody> body{};

  AttachHostAccountsToUserResponse() {}

  explicit AttachHostAccountsToUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AttachHostAccountsToUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachHostAccountsToUserResponseBody>(model1);
      }
    }
  }


  virtual ~AttachHostAccountsToUserResponse() = default;
};
class AttachHostAccountsToUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> userGroupId{};
  shared_ptr<string> hosts{};

  AttachHostAccountsToUserGroupRequest() {}

  explicit AttachHostAccountsToUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (hosts) {
      res["Hosts"] = boost::any(*hosts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("Hosts") != m.end() && !m["Hosts"].empty()) {
      hosts = make_shared<string>(boost::any_cast<string>(m["Hosts"]));
    }
  }


  virtual ~AttachHostAccountsToUserGroupRequest() = default;
};
class AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> hostAccountId{};

  AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts() {}

  explicit AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (hostAccountId) {
      res["HostAccountId"] = boost::any(*hostAccountId);
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
    if (m.find("HostAccountId") != m.end() && !m["HostAccountId"].empty()) {
      hostAccountId = make_shared<string>(boost::any_cast<string>(m["HostAccountId"]));
    }
  }


  virtual ~AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts() = default;
};
class AttachHostAccountsToUserGroupResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> hostId{};
  shared_ptr<string> userGroupId{};
  shared_ptr<vector<AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts>> hostAccounts{};

  AttachHostAccountsToUserGroupResponseBodyResults() {}

  explicit AttachHostAccountsToUserGroupResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (hostAccounts) {
      vector<boost::any> temp1;
      for(auto item1:*hostAccounts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HostAccounts"] = boost::any(temp1);
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
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("HostAccounts") != m.end() && !m["HostAccounts"].empty()) {
      if (typeid(vector<boost::any>) == m["HostAccounts"].type()) {
        vector<AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HostAccounts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostAccounts = make_shared<vector<AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts>>(expect1);
      }
    }
  }


  virtual ~AttachHostAccountsToUserGroupResponseBodyResults() = default;
};
class AttachHostAccountsToUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<AttachHostAccountsToUserGroupResponseBodyResults>> results{};

  AttachHostAccountsToUserGroupResponseBody() {}

  explicit AttachHostAccountsToUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<AttachHostAccountsToUserGroupResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AttachHostAccountsToUserGroupResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<AttachHostAccountsToUserGroupResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~AttachHostAccountsToUserGroupResponseBody() = default;
};
class AttachHostAccountsToUserGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AttachHostAccountsToUserGroupResponseBody> body{};

  AttachHostAccountsToUserGroupResponse() {}

  explicit AttachHostAccountsToUserGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AttachHostAccountsToUserGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachHostAccountsToUserGroupResponseBody>(model1);
      }
    }
  }


  virtual ~AttachHostAccountsToUserGroupResponse() = default;
};
class AttachHostGroupAccountsToUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> userId{};
  shared_ptr<string> hostGroups{};

  AttachHostGroupAccountsToUserRequest() {}

  explicit AttachHostGroupAccountsToUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (hostGroups) {
      res["HostGroups"] = boost::any(*hostGroups);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("HostGroups") != m.end() && !m["HostGroups"].empty()) {
      hostGroups = make_shared<string>(boost::any_cast<string>(m["HostGroups"]));
    }
  }


  virtual ~AttachHostGroupAccountsToUserRequest() = default;
};
class AttachHostGroupAccountsToUserResponseBodyResultsHostAccountNames : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> hostAccountName{};

  AttachHostGroupAccountsToUserResponseBodyResultsHostAccountNames() {}

  explicit AttachHostGroupAccountsToUserResponseBodyResultsHostAccountNames(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (hostAccountName) {
      res["HostAccountName"] = boost::any(*hostAccountName);
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
    if (m.find("HostAccountName") != m.end() && !m["HostAccountName"].empty()) {
      hostAccountName = make_shared<string>(boost::any_cast<string>(m["HostAccountName"]));
    }
  }


  virtual ~AttachHostGroupAccountsToUserResponseBodyResultsHostAccountNames() = default;
};
class AttachHostGroupAccountsToUserResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> hostGroupId{};
  shared_ptr<string> userId{};
  shared_ptr<vector<AttachHostGroupAccountsToUserResponseBodyResultsHostAccountNames>> hostAccountNames{};

  AttachHostGroupAccountsToUserResponseBodyResults() {}

  explicit AttachHostGroupAccountsToUserResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (hostGroupId) {
      res["HostGroupId"] = boost::any(*hostGroupId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (hostAccountNames) {
      vector<boost::any> temp1;
      for(auto item1:*hostAccountNames){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HostAccountNames"] = boost::any(temp1);
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
    if (m.find("HostGroupId") != m.end() && !m["HostGroupId"].empty()) {
      hostGroupId = make_shared<string>(boost::any_cast<string>(m["HostGroupId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("HostAccountNames") != m.end() && !m["HostAccountNames"].empty()) {
      if (typeid(vector<boost::any>) == m["HostAccountNames"].type()) {
        vector<AttachHostGroupAccountsToUserResponseBodyResultsHostAccountNames> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HostAccountNames"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AttachHostGroupAccountsToUserResponseBodyResultsHostAccountNames model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostAccountNames = make_shared<vector<AttachHostGroupAccountsToUserResponseBodyResultsHostAccountNames>>(expect1);
      }
    }
  }


  virtual ~AttachHostGroupAccountsToUserResponseBodyResults() = default;
};
class AttachHostGroupAccountsToUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<AttachHostGroupAccountsToUserResponseBodyResults>> results{};

  AttachHostGroupAccountsToUserResponseBody() {}

  explicit AttachHostGroupAccountsToUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<AttachHostGroupAccountsToUserResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AttachHostGroupAccountsToUserResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<AttachHostGroupAccountsToUserResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~AttachHostGroupAccountsToUserResponseBody() = default;
};
class AttachHostGroupAccountsToUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AttachHostGroupAccountsToUserResponseBody> body{};

  AttachHostGroupAccountsToUserResponse() {}

  explicit AttachHostGroupAccountsToUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AttachHostGroupAccountsToUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachHostGroupAccountsToUserResponseBody>(model1);
      }
    }
  }


  virtual ~AttachHostGroupAccountsToUserResponse() = default;
};
class AttachHostGroupAccountsToUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> userGroupId{};
  shared_ptr<string> hostGroups{};

  AttachHostGroupAccountsToUserGroupRequest() {}

  explicit AttachHostGroupAccountsToUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (hostGroups) {
      res["HostGroups"] = boost::any(*hostGroups);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("HostGroups") != m.end() && !m["HostGroups"].empty()) {
      hostGroups = make_shared<string>(boost::any_cast<string>(m["HostGroups"]));
    }
  }


  virtual ~AttachHostGroupAccountsToUserGroupRequest() = default;
};
class AttachHostGroupAccountsToUserGroupResponseBodyResultsHostAccountNames : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> hostAccountName{};

  AttachHostGroupAccountsToUserGroupResponseBodyResultsHostAccountNames() {}

  explicit AttachHostGroupAccountsToUserGroupResponseBodyResultsHostAccountNames(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (hostAccountName) {
      res["HostAccountName"] = boost::any(*hostAccountName);
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
    if (m.find("HostAccountName") != m.end() && !m["HostAccountName"].empty()) {
      hostAccountName = make_shared<string>(boost::any_cast<string>(m["HostAccountName"]));
    }
  }


  virtual ~AttachHostGroupAccountsToUserGroupResponseBodyResultsHostAccountNames() = default;
};
class AttachHostGroupAccountsToUserGroupResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> hostGroupId{};
  shared_ptr<string> userGroupId{};
  shared_ptr<vector<AttachHostGroupAccountsToUserGroupResponseBodyResultsHostAccountNames>> hostAccountNames{};

  AttachHostGroupAccountsToUserGroupResponseBodyResults() {}

  explicit AttachHostGroupAccountsToUserGroupResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (hostGroupId) {
      res["HostGroupId"] = boost::any(*hostGroupId);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (hostAccountNames) {
      vector<boost::any> temp1;
      for(auto item1:*hostAccountNames){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HostAccountNames"] = boost::any(temp1);
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
    if (m.find("HostGroupId") != m.end() && !m["HostGroupId"].empty()) {
      hostGroupId = make_shared<string>(boost::any_cast<string>(m["HostGroupId"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("HostAccountNames") != m.end() && !m["HostAccountNames"].empty()) {
      if (typeid(vector<boost::any>) == m["HostAccountNames"].type()) {
        vector<AttachHostGroupAccountsToUserGroupResponseBodyResultsHostAccountNames> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HostAccountNames"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AttachHostGroupAccountsToUserGroupResponseBodyResultsHostAccountNames model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostAccountNames = make_shared<vector<AttachHostGroupAccountsToUserGroupResponseBodyResultsHostAccountNames>>(expect1);
      }
    }
  }


  virtual ~AttachHostGroupAccountsToUserGroupResponseBodyResults() = default;
};
class AttachHostGroupAccountsToUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<AttachHostGroupAccountsToUserGroupResponseBodyResults>> results{};

  AttachHostGroupAccountsToUserGroupResponseBody() {}

  explicit AttachHostGroupAccountsToUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<AttachHostGroupAccountsToUserGroupResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AttachHostGroupAccountsToUserGroupResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<AttachHostGroupAccountsToUserGroupResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~AttachHostGroupAccountsToUserGroupResponseBody() = default;
};
class AttachHostGroupAccountsToUserGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AttachHostGroupAccountsToUserGroupResponseBody> body{};

  AttachHostGroupAccountsToUserGroupResponse() {}

  explicit AttachHostGroupAccountsToUserGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AttachHostGroupAccountsToUserGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachHostGroupAccountsToUserGroupResponseBody>(model1);
      }
    }
  }


  virtual ~AttachHostGroupAccountsToUserGroupResponse() = default;
};
class ConfigInstanceSecurityGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> authorizedSecurityGroups{};

  ConfigInstanceSecurityGroupsRequest() {}

  explicit ConfigInstanceSecurityGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (authorizedSecurityGroups) {
      res["AuthorizedSecurityGroups"] = boost::any(*authorizedSecurityGroups);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AuthorizedSecurityGroups") != m.end() && !m["AuthorizedSecurityGroups"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AuthorizedSecurityGroups"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AuthorizedSecurityGroups"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorizedSecurityGroups = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ConfigInstanceSecurityGroupsRequest() = default;
};
class ConfigInstanceSecurityGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestId{};

  ConfigInstanceSecurityGroupsResponseBody() {}

  explicit ConfigInstanceSecurityGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ConfigInstanceSecurityGroupsResponseBody() = default;
};
class ConfigInstanceSecurityGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ConfigInstanceSecurityGroupsResponseBody> body{};

  ConfigInstanceSecurityGroupsResponse() {}

  explicit ConfigInstanceSecurityGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ConfigInstanceSecurityGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfigInstanceSecurityGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ConfigInstanceSecurityGroupsResponse() = default;
};
class ConfigInstanceWhiteListRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> whiteList{};

  ConfigInstanceWhiteListRequest() {}

  explicit ConfigInstanceWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (whiteList) {
      res["WhiteList"] = boost::any(*whiteList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("WhiteList") != m.end() && !m["WhiteList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WhiteList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WhiteList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      whiteList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ConfigInstanceWhiteListRequest() = default;
};
class ConfigInstanceWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestId{};

  ConfigInstanceWhiteListResponseBody() {}

  explicit ConfigInstanceWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ConfigInstanceWhiteListResponseBody() = default;
};
class ConfigInstanceWhiteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ConfigInstanceWhiteListResponseBody> body{};

  ConfigInstanceWhiteListResponse() {}

  explicit ConfigInstanceWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ConfigInstanceWhiteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfigInstanceWhiteListResponseBody>(model1);
      }
    }
  }


  virtual ~ConfigInstanceWhiteListResponse() = default;
};
class CreateHostRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> hostPrivateAddress{};
  shared_ptr<string> hostPublicAddress{};
  shared_ptr<string> activeAddressType{};
  shared_ptr<string> hostName{};
  shared_ptr<string> source{};
  shared_ptr<string> OSType{};
  shared_ptr<string> comment{};
  shared_ptr<string> sourceInstanceId{};
  shared_ptr<string> instanceRegionId{};

  CreateHostRequest() {}

  explicit CreateHostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (hostPrivateAddress) {
      res["HostPrivateAddress"] = boost::any(*hostPrivateAddress);
    }
    if (hostPublicAddress) {
      res["HostPublicAddress"] = boost::any(*hostPublicAddress);
    }
    if (activeAddressType) {
      res["ActiveAddressType"] = boost::any(*activeAddressType);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (OSType) {
      res["OSType"] = boost::any(*OSType);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (sourceInstanceId) {
      res["SourceInstanceId"] = boost::any(*sourceInstanceId);
    }
    if (instanceRegionId) {
      res["InstanceRegionId"] = boost::any(*instanceRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("HostPrivateAddress") != m.end() && !m["HostPrivateAddress"].empty()) {
      hostPrivateAddress = make_shared<string>(boost::any_cast<string>(m["HostPrivateAddress"]));
    }
    if (m.find("HostPublicAddress") != m.end() && !m["HostPublicAddress"].empty()) {
      hostPublicAddress = make_shared<string>(boost::any_cast<string>(m["HostPublicAddress"]));
    }
    if (m.find("ActiveAddressType") != m.end() && !m["ActiveAddressType"].empty()) {
      activeAddressType = make_shared<string>(boost::any_cast<string>(m["ActiveAddressType"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("OSType") != m.end() && !m["OSType"].empty()) {
      OSType = make_shared<string>(boost::any_cast<string>(m["OSType"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("SourceInstanceId") != m.end() && !m["SourceInstanceId"].empty()) {
      sourceInstanceId = make_shared<string>(boost::any_cast<string>(m["SourceInstanceId"]));
    }
    if (m.find("InstanceRegionId") != m.end() && !m["InstanceRegionId"].empty()) {
      instanceRegionId = make_shared<string>(boost::any_cast<string>(m["InstanceRegionId"]));
    }
  }


  virtual ~CreateHostRequest() = default;
};
class CreateHostResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<string> requestId{};

  CreateHostResponseBody() {}

  explicit CreateHostResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateHostResponseBody() = default;
};
class CreateHostResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateHostResponseBody> body{};

  CreateHostResponse() {}

  explicit CreateHostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateHostResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateHostResponseBody>(model1);
      }
    }
  }


  virtual ~CreateHostResponse() = default;
};
class CreateHostAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> hostId{};
  shared_ptr<string> protocolName{};
  shared_ptr<string> hostAccountName{};
  shared_ptr<string> password{};
  shared_ptr<string> privateKey{};
  shared_ptr<string> passPhrase{};

  CreateHostAccountRequest() {}

  explicit CreateHostAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (protocolName) {
      res["ProtocolName"] = boost::any(*protocolName);
    }
    if (hostAccountName) {
      res["HostAccountName"] = boost::any(*hostAccountName);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (privateKey) {
      res["PrivateKey"] = boost::any(*privateKey);
    }
    if (passPhrase) {
      res["PassPhrase"] = boost::any(*passPhrase);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("ProtocolName") != m.end() && !m["ProtocolName"].empty()) {
      protocolName = make_shared<string>(boost::any_cast<string>(m["ProtocolName"]));
    }
    if (m.find("HostAccountName") != m.end() && !m["HostAccountName"].empty()) {
      hostAccountName = make_shared<string>(boost::any_cast<string>(m["HostAccountName"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("PrivateKey") != m.end() && !m["PrivateKey"].empty()) {
      privateKey = make_shared<string>(boost::any_cast<string>(m["PrivateKey"]));
    }
    if (m.find("PassPhrase") != m.end() && !m["PassPhrase"].empty()) {
      passPhrase = make_shared<string>(boost::any_cast<string>(m["PassPhrase"]));
    }
  }


  virtual ~CreateHostAccountRequest() = default;
};
class CreateHostAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hostAccountId{};
  shared_ptr<string> requestId{};

  CreateHostAccountResponseBody() {}

  explicit CreateHostAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostAccountId) {
      res["HostAccountId"] = boost::any(*hostAccountId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostAccountId") != m.end() && !m["HostAccountId"].empty()) {
      hostAccountId = make_shared<string>(boost::any_cast<string>(m["HostAccountId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateHostAccountResponseBody() = default;
};
class CreateHostAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateHostAccountResponseBody> body{};

  CreateHostAccountResponse() {}

  explicit CreateHostAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateHostAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateHostAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CreateHostAccountResponse() = default;
};
class CreateHostGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> hostGroupName{};
  shared_ptr<string> comment{};

  CreateHostGroupRequest() {}

  explicit CreateHostGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (hostGroupName) {
      res["HostGroupName"] = boost::any(*hostGroupName);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("HostGroupName") != m.end() && !m["HostGroupName"].empty()) {
      hostGroupName = make_shared<string>(boost::any_cast<string>(m["HostGroupName"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
  }


  virtual ~CreateHostGroupRequest() = default;
};
class CreateHostGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hostGroupId{};
  shared_ptr<string> requestId{};

  CreateHostGroupResponseBody() {}

  explicit CreateHostGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostGroupId) {
      res["HostGroupId"] = boost::any(*hostGroupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostGroupId") != m.end() && !m["HostGroupId"].empty()) {
      hostGroupId = make_shared<string>(boost::any_cast<string>(m["HostGroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateHostGroupResponseBody() = default;
};
class CreateHostGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateHostGroupResponseBody> body{};

  CreateHostGroupResponse() {}

  explicit CreateHostGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class CreateUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> source{};
  shared_ptr<string> userName{};
  shared_ptr<string> password{};
  shared_ptr<string> displayName{};
  shared_ptr<string> comment{};
  shared_ptr<string> email{};
  shared_ptr<string> mobile{};
  shared_ptr<string> sourceUserId{};
  shared_ptr<string> mobileCountryCode{};

  CreateUserRequest() {}

  explicit CreateUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (sourceUserId) {
      res["SourceUserId"] = boost::any(*sourceUserId);
    }
    if (mobileCountryCode) {
      res["MobileCountryCode"] = boost::any(*mobileCountryCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("SourceUserId") != m.end() && !m["SourceUserId"].empty()) {
      sourceUserId = make_shared<string>(boost::any_cast<string>(m["SourceUserId"]));
    }
    if (m.find("MobileCountryCode") != m.end() && !m["MobileCountryCode"].empty()) {
      mobileCountryCode = make_shared<string>(boost::any_cast<string>(m["MobileCountryCode"]));
    }
  }


  virtual ~CreateUserRequest() = default;
};
class CreateUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> requestId{};

  CreateUserResponseBody() {}

  explicit CreateUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateUserResponseBody() = default;
};
class CreateUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateUserResponseBody> body{};

  CreateUserResponse() {}

  explicit CreateUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class CreateUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> userGroupName{};
  shared_ptr<string> comment{};

  CreateUserGroupRequest() {}

  explicit CreateUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (userGroupName) {
      res["UserGroupName"] = boost::any(*userGroupName);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UserGroupName") != m.end() && !m["UserGroupName"].empty()) {
      userGroupName = make_shared<string>(boost::any_cast<string>(m["UserGroupName"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
  }


  virtual ~CreateUserGroupRequest() = default;
};
class CreateUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> userGroupId{};
  shared_ptr<string> requestId{};

  CreateUserGroupResponseBody() {}

  explicit CreateUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateUserGroupResponseBody() = default;
};
class CreateUserGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateUserGroupResponseBody> body{};

  CreateUserGroupResponse() {}

  explicit CreateUserGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateUserGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateUserGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateUserGroupResponse() = default;
};
class DeleteHostRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> hostId{};

  DeleteHostRequest() {}

  explicit DeleteHostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
  }


  virtual ~DeleteHostRequest() = default;
};
class DeleteHostResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteHostResponseBody() {}

  explicit DeleteHostResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteHostResponseBody() = default;
};
class DeleteHostResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteHostResponseBody> body{};

  DeleteHostResponse() {}

  explicit DeleteHostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteHostResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteHostResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteHostResponse() = default;
};
class DeleteHostAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> hostAccountId{};

  DeleteHostAccountRequest() {}

  explicit DeleteHostAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (hostAccountId) {
      res["HostAccountId"] = boost::any(*hostAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("HostAccountId") != m.end() && !m["HostAccountId"].empty()) {
      hostAccountId = make_shared<string>(boost::any_cast<string>(m["HostAccountId"]));
    }
  }


  virtual ~DeleteHostAccountRequest() = default;
};
class DeleteHostAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteHostAccountResponseBody() {}

  explicit DeleteHostAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteHostAccountResponseBody() = default;
};
class DeleteHostAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteHostAccountResponseBody> body{};

  DeleteHostAccountResponse() {}

  explicit DeleteHostAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteHostAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteHostAccountResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteHostAccountResponse() = default;
};
class DeleteHostGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> hostGroupId{};

  DeleteHostGroupRequest() {}

  explicit DeleteHostGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (hostGroupId) {
      res["HostGroupId"] = boost::any(*hostGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("HostGroupId") != m.end() && !m["HostGroupId"].empty()) {
      hostGroupId = make_shared<string>(boost::any_cast<string>(m["HostGroupId"]));
    }
  }


  virtual ~DeleteHostGroupRequest() = default;
};
class DeleteHostGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteHostGroupResponseBody() {}

  explicit DeleteHostGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteHostGroupResponseBody() = default;
};
class DeleteHostGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteHostGroupResponseBody> body{};

  DeleteHostGroupResponse() {}

  explicit DeleteHostGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DeleteUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
  shared_ptr<DeleteUserResponseBody> body{};

  DeleteUserResponse() {}

  explicit DeleteUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DeleteUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> userGroupId{};

  DeleteUserGroupRequest() {}

  explicit DeleteUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
  }


  virtual ~DeleteUserGroupRequest() = default;
};
class DeleteUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteUserGroupResponseBody() {}

  explicit DeleteUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteUserGroupResponseBody() = default;
};
class DeleteUserGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteUserGroupResponseBody> body{};

  DeleteUserGroupResponse() {}

  explicit DeleteUserGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteUserGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUserGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUserGroupResponse() = default;
};
class DescribeInstanceAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};

  DescribeInstanceAttributeRequest() {}

  explicit DescribeInstanceAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeInstanceAttributeRequest() = default;
};
class DescribeInstanceAttributeResponseBodyInstanceAttributePorts : public Darabonba::Model {
public:
  shared_ptr<long> standardPort{};
  shared_ptr<long> customPort{};

  DescribeInstanceAttributeResponseBodyInstanceAttributePorts() {}

  explicit DescribeInstanceAttributeResponseBodyInstanceAttributePorts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (standardPort) {
      res["StandardPort"] = boost::any(*standardPort);
    }
    if (customPort) {
      res["CustomPort"] = boost::any(*customPort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StandardPort") != m.end() && !m["StandardPort"].empty()) {
      standardPort = make_shared<long>(boost::any_cast<long>(m["StandardPort"]));
    }
    if (m.find("CustomPort") != m.end() && !m["CustomPort"].empty()) {
      customPort = make_shared<long>(boost::any_cast<long>(m["CustomPort"]));
    }
  }


  virtual ~DescribeInstanceAttributeResponseBodyInstanceAttributePorts() = default;
};
class DescribeInstanceAttributeResponseBodyInstanceAttribute : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> description{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> modifyPasswordModule{};
  shared_ptr<string> eniInstanceId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> internetEndpoint{};
  shared_ptr<string> regionId{};
  shared_ptr<string> intranetEndpoint{};
  shared_ptr<long> startTime{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> networkProxyModule{};
  shared_ptr<string> webTerminalModule{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> licenseCode{};
  shared_ptr<bool> publicNetworkAccess{};
  shared_ptr<long> storage{};
  shared_ptr<vector<DescribeInstanceAttributeResponseBodyInstanceAttributePorts>> ports{};
  shared_ptr<vector<string>> publicExportIps{};
  shared_ptr<vector<string>> publicWhiteList{};
  shared_ptr<vector<string>> authorizedSecurityGroups{};
  shared_ptr<vector<string>> privateExportIps{};
  shared_ptr<vector<string>> publicIps{};
  shared_ptr<vector<string>> securityGroupIds{};
  shared_ptr<vector<string>> privateWhiteList{};

  DescribeInstanceAttributeResponseBodyInstanceAttribute() {}

  explicit DescribeInstanceAttributeResponseBodyInstanceAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (modifyPasswordModule) {
      res["ModifyPasswordModule"] = boost::any(*modifyPasswordModule);
    }
    if (eniInstanceId) {
      res["EniInstanceId"] = boost::any(*eniInstanceId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (internetEndpoint) {
      res["InternetEndpoint"] = boost::any(*internetEndpoint);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (intranetEndpoint) {
      res["IntranetEndpoint"] = boost::any(*intranetEndpoint);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (networkProxyModule) {
      res["NetworkProxyModule"] = boost::any(*networkProxyModule);
    }
    if (webTerminalModule) {
      res["WebTerminalModule"] = boost::any(*webTerminalModule);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (licenseCode) {
      res["LicenseCode"] = boost::any(*licenseCode);
    }
    if (publicNetworkAccess) {
      res["PublicNetworkAccess"] = boost::any(*publicNetworkAccess);
    }
    if (storage) {
      res["Storage"] = boost::any(*storage);
    }
    if (ports) {
      vector<boost::any> temp1;
      for(auto item1:*ports){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Ports"] = boost::any(temp1);
    }
    if (publicExportIps) {
      res["PublicExportIps"] = boost::any(*publicExportIps);
    }
    if (publicWhiteList) {
      res["PublicWhiteList"] = boost::any(*publicWhiteList);
    }
    if (authorizedSecurityGroups) {
      res["AuthorizedSecurityGroups"] = boost::any(*authorizedSecurityGroups);
    }
    if (privateExportIps) {
      res["PrivateExportIps"] = boost::any(*privateExportIps);
    }
    if (publicIps) {
      res["PublicIps"] = boost::any(*publicIps);
    }
    if (securityGroupIds) {
      res["SecurityGroupIds"] = boost::any(*securityGroupIds);
    }
    if (privateWhiteList) {
      res["PrivateWhiteList"] = boost::any(*privateWhiteList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("ModifyPasswordModule") != m.end() && !m["ModifyPasswordModule"].empty()) {
      modifyPasswordModule = make_shared<string>(boost::any_cast<string>(m["ModifyPasswordModule"]));
    }
    if (m.find("EniInstanceId") != m.end() && !m["EniInstanceId"].empty()) {
      eniInstanceId = make_shared<string>(boost::any_cast<string>(m["EniInstanceId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InternetEndpoint") != m.end() && !m["InternetEndpoint"].empty()) {
      internetEndpoint = make_shared<string>(boost::any_cast<string>(m["InternetEndpoint"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("IntranetEndpoint") != m.end() && !m["IntranetEndpoint"].empty()) {
      intranetEndpoint = make_shared<string>(boost::any_cast<string>(m["IntranetEndpoint"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("NetworkProxyModule") != m.end() && !m["NetworkProxyModule"].empty()) {
      networkProxyModule = make_shared<string>(boost::any_cast<string>(m["NetworkProxyModule"]));
    }
    if (m.find("WebTerminalModule") != m.end() && !m["WebTerminalModule"].empty()) {
      webTerminalModule = make_shared<string>(boost::any_cast<string>(m["WebTerminalModule"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("LicenseCode") != m.end() && !m["LicenseCode"].empty()) {
      licenseCode = make_shared<string>(boost::any_cast<string>(m["LicenseCode"]));
    }
    if (m.find("PublicNetworkAccess") != m.end() && !m["PublicNetworkAccess"].empty()) {
      publicNetworkAccess = make_shared<bool>(boost::any_cast<bool>(m["PublicNetworkAccess"]));
    }
    if (m.find("Storage") != m.end() && !m["Storage"].empty()) {
      storage = make_shared<long>(boost::any_cast<long>(m["Storage"]));
    }
    if (m.find("Ports") != m.end() && !m["Ports"].empty()) {
      if (typeid(vector<boost::any>) == m["Ports"].type()) {
        vector<DescribeInstanceAttributeResponseBodyInstanceAttributePorts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Ports"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceAttributeResponseBodyInstanceAttributePorts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ports = make_shared<vector<DescribeInstanceAttributeResponseBodyInstanceAttributePorts>>(expect1);
      }
    }
    if (m.find("PublicExportIps") != m.end() && !m["PublicExportIps"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PublicExportIps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PublicExportIps"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      publicExportIps = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PublicWhiteList") != m.end() && !m["PublicWhiteList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PublicWhiteList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PublicWhiteList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      publicWhiteList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AuthorizedSecurityGroups") != m.end() && !m["AuthorizedSecurityGroups"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AuthorizedSecurityGroups"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AuthorizedSecurityGroups"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorizedSecurityGroups = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PrivateExportIps") != m.end() && !m["PrivateExportIps"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PrivateExportIps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PrivateExportIps"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      privateExportIps = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PublicIps") != m.end() && !m["PublicIps"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PublicIps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PublicIps"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      publicIps = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SecurityGroupIds") != m.end() && !m["SecurityGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecurityGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecurityGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PrivateWhiteList") != m.end() && !m["PrivateWhiteList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PrivateWhiteList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PrivateWhiteList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      privateWhiteList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeInstanceAttributeResponseBodyInstanceAttribute() = default;
};
class DescribeInstanceAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeInstanceAttributeResponseBodyInstanceAttribute> instanceAttribute{};

  DescribeInstanceAttributeResponseBody() {}

  explicit DescribeInstanceAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceAttribute) {
      res["InstanceAttribute"] = instanceAttribute ? boost::any(instanceAttribute->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceAttribute") != m.end() && !m["InstanceAttribute"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceAttribute"].type()) {
        DescribeInstanceAttributeResponseBodyInstanceAttribute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceAttribute"]));
        instanceAttribute = make_shared<DescribeInstanceAttributeResponseBodyInstanceAttribute>(model1);
      }
    }
  }


  virtual ~DescribeInstanceAttributeResponseBody() = default;
};
class DescribeInstanceAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeInstanceAttributeResponseBody> body{};

  DescribeInstanceAttributeResponse() {}

  explicit DescribeInstanceAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeInstanceAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceAttributeResponse() = default;
};
class DescribeInstancesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeInstancesRequestTag() {}

  explicit DescribeInstancesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeInstancesRequestTag() = default;
};
class DescribeInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<string>> instanceId{};
  shared_ptr<vector<DescribeInstancesRequestTag>> tag{};

  DescribeInstancesRequest() {}

  explicit DescribeInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeInstancesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstancesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeInstancesRequestTag>>(expect1);
      }
    }
  }


  virtual ~DescribeInstancesRequest() = default;
};
class DescribeInstancesResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> imageVersion{};
  shared_ptr<string> planCode{};
  shared_ptr<string> description{};
  shared_ptr<long> expireTime{};
  shared_ptr<bool> legacy{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> internetEndpoint{};
  shared_ptr<string> regionId{};
  shared_ptr<string> intranetEndpoint{};
  shared_ptr<long> startTime{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> licenseCode{};
  shared_ptr<bool> publicNetworkAccess{};

  DescribeInstancesResponseBodyInstances() {}

  explicit DescribeInstancesResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    if (imageVersion) {
      res["ImageVersion"] = boost::any(*imageVersion);
    }
    if (planCode) {
      res["PlanCode"] = boost::any(*planCode);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (legacy) {
      res["Legacy"] = boost::any(*legacy);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (internetEndpoint) {
      res["InternetEndpoint"] = boost::any(*internetEndpoint);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (intranetEndpoint) {
      res["IntranetEndpoint"] = boost::any(*intranetEndpoint);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (licenseCode) {
      res["LicenseCode"] = boost::any(*licenseCode);
    }
    if (publicNetworkAccess) {
      res["PublicNetworkAccess"] = boost::any(*publicNetworkAccess);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("ImageVersion") != m.end() && !m["ImageVersion"].empty()) {
      imageVersion = make_shared<string>(boost::any_cast<string>(m["ImageVersion"]));
    }
    if (m.find("PlanCode") != m.end() && !m["PlanCode"].empty()) {
      planCode = make_shared<string>(boost::any_cast<string>(m["PlanCode"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("Legacy") != m.end() && !m["Legacy"].empty()) {
      legacy = make_shared<bool>(boost::any_cast<bool>(m["Legacy"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InternetEndpoint") != m.end() && !m["InternetEndpoint"].empty()) {
      internetEndpoint = make_shared<string>(boost::any_cast<string>(m["InternetEndpoint"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("IntranetEndpoint") != m.end() && !m["IntranetEndpoint"].empty()) {
      intranetEndpoint = make_shared<string>(boost::any_cast<string>(m["IntranetEndpoint"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("LicenseCode") != m.end() && !m["LicenseCode"].empty()) {
      licenseCode = make_shared<string>(boost::any_cast<string>(m["LicenseCode"]));
    }
    if (m.find("PublicNetworkAccess") != m.end() && !m["PublicNetworkAccess"].empty()) {
      publicNetworkAccess = make_shared<bool>(boost::any_cast<bool>(m["PublicNetworkAccess"]));
    }
  }


  virtual ~DescribeInstancesResponseBodyInstances() = default;
};
class DescribeInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeInstancesResponseBodyInstances>> instances{};

  DescribeInstancesResponseBody() {}

  explicit DescribeInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instances"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(vector<boost::any>) == m["Instances"].type()) {
        vector<DescribeInstancesResponseBodyInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstancesResponseBodyInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<DescribeInstancesResponseBodyInstances>>(expect1);
      }
    }
  }


  virtual ~DescribeInstancesResponseBody() = default;
};
class DescribeInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeInstancesResponseBody> body{};

  DescribeInstancesResponse() {}

  explicit DescribeInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstancesResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<string> regionEndpoint{};
  shared_ptr<string> localName{};
  shared_ptr<string> regionId{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionEndpoint) {
      res["RegionEndpoint"] = boost::any(*regionEndpoint);
    }
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionEndpoint") != m.end() && !m["RegionEndpoint"].empty()) {
      regionEndpoint = make_shared<string>(boost::any_cast<string>(m["RegionEndpoint"]));
    }
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeRegionsResponseBodyRegions>> regions{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (regions) {
      vector<boost::any> temp1;
      for(auto item1:*regions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Regions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(vector<boost::any>) == m["Regions"].type()) {
        vector<DescribeRegionsResponseBodyRegions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Regions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regions = make_shared<vector<DescribeRegionsResponseBodyRegions>>(expect1);
      }
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
class DetachHostAccountsFromUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> userId{};
  shared_ptr<string> hosts{};

  DetachHostAccountsFromUserRequest() {}

  explicit DetachHostAccountsFromUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (hosts) {
      res["Hosts"] = boost::any(*hosts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("Hosts") != m.end() && !m["Hosts"].empty()) {
      hosts = make_shared<string>(boost::any_cast<string>(m["Hosts"]));
    }
  }


  virtual ~DetachHostAccountsFromUserRequest() = default;
};
class DetachHostAccountsFromUserResponseBodyResultsHostAccounts : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> hostAccountId{};

  DetachHostAccountsFromUserResponseBodyResultsHostAccounts() {}

  explicit DetachHostAccountsFromUserResponseBodyResultsHostAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (hostAccountId) {
      res["HostAccountId"] = boost::any(*hostAccountId);
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
    if (m.find("HostAccountId") != m.end() && !m["HostAccountId"].empty()) {
      hostAccountId = make_shared<string>(boost::any_cast<string>(m["HostAccountId"]));
    }
  }


  virtual ~DetachHostAccountsFromUserResponseBodyResultsHostAccounts() = default;
};
class DetachHostAccountsFromUserResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> hostId{};
  shared_ptr<string> userId{};
  shared_ptr<vector<DetachHostAccountsFromUserResponseBodyResultsHostAccounts>> hostAccounts{};

  DetachHostAccountsFromUserResponseBodyResults() {}

  explicit DetachHostAccountsFromUserResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (hostAccounts) {
      vector<boost::any> temp1;
      for(auto item1:*hostAccounts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HostAccounts"] = boost::any(temp1);
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
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("HostAccounts") != m.end() && !m["HostAccounts"].empty()) {
      if (typeid(vector<boost::any>) == m["HostAccounts"].type()) {
        vector<DetachHostAccountsFromUserResponseBodyResultsHostAccounts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HostAccounts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetachHostAccountsFromUserResponseBodyResultsHostAccounts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostAccounts = make_shared<vector<DetachHostAccountsFromUserResponseBodyResultsHostAccounts>>(expect1);
      }
    }
  }


  virtual ~DetachHostAccountsFromUserResponseBodyResults() = default;
};
class DetachHostAccountsFromUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DetachHostAccountsFromUserResponseBodyResults>> results{};

  DetachHostAccountsFromUserResponseBody() {}

  explicit DetachHostAccountsFromUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<DetachHostAccountsFromUserResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetachHostAccountsFromUserResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<DetachHostAccountsFromUserResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~DetachHostAccountsFromUserResponseBody() = default;
};
class DetachHostAccountsFromUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetachHostAccountsFromUserResponseBody> body{};

  DetachHostAccountsFromUserResponse() {}

  explicit DetachHostAccountsFromUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DetachHostAccountsFromUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachHostAccountsFromUserResponseBody>(model1);
      }
    }
  }


  virtual ~DetachHostAccountsFromUserResponse() = default;
};
class DetachHostAccountsFromUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> userGroupId{};
  shared_ptr<string> hosts{};

  DetachHostAccountsFromUserGroupRequest() {}

  explicit DetachHostAccountsFromUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (hosts) {
      res["Hosts"] = boost::any(*hosts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("Hosts") != m.end() && !m["Hosts"].empty()) {
      hosts = make_shared<string>(boost::any_cast<string>(m["Hosts"]));
    }
  }


  virtual ~DetachHostAccountsFromUserGroupRequest() = default;
};
class DetachHostAccountsFromUserGroupResponseBodyResultsHostAccounts : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> hostAccountId{};

  DetachHostAccountsFromUserGroupResponseBodyResultsHostAccounts() {}

  explicit DetachHostAccountsFromUserGroupResponseBodyResultsHostAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (hostAccountId) {
      res["HostAccountId"] = boost::any(*hostAccountId);
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
    if (m.find("HostAccountId") != m.end() && !m["HostAccountId"].empty()) {
      hostAccountId = make_shared<string>(boost::any_cast<string>(m["HostAccountId"]));
    }
  }


  virtual ~DetachHostAccountsFromUserGroupResponseBodyResultsHostAccounts() = default;
};
class DetachHostAccountsFromUserGroupResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> hostId{};
  shared_ptr<string> userGroupId{};
  shared_ptr<vector<DetachHostAccountsFromUserGroupResponseBodyResultsHostAccounts>> hostAccounts{};

  DetachHostAccountsFromUserGroupResponseBodyResults() {}

  explicit DetachHostAccountsFromUserGroupResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (hostAccounts) {
      vector<boost::any> temp1;
      for(auto item1:*hostAccounts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HostAccounts"] = boost::any(temp1);
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
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("HostAccounts") != m.end() && !m["HostAccounts"].empty()) {
      if (typeid(vector<boost::any>) == m["HostAccounts"].type()) {
        vector<DetachHostAccountsFromUserGroupResponseBodyResultsHostAccounts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HostAccounts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetachHostAccountsFromUserGroupResponseBodyResultsHostAccounts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostAccounts = make_shared<vector<DetachHostAccountsFromUserGroupResponseBodyResultsHostAccounts>>(expect1);
      }
    }
  }


  virtual ~DetachHostAccountsFromUserGroupResponseBodyResults() = default;
};
class DetachHostAccountsFromUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DetachHostAccountsFromUserGroupResponseBodyResults>> results{};

  DetachHostAccountsFromUserGroupResponseBody() {}

  explicit DetachHostAccountsFromUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<DetachHostAccountsFromUserGroupResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetachHostAccountsFromUserGroupResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<DetachHostAccountsFromUserGroupResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~DetachHostAccountsFromUserGroupResponseBody() = default;
};
class DetachHostAccountsFromUserGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetachHostAccountsFromUserGroupResponseBody> body{};

  DetachHostAccountsFromUserGroupResponse() {}

  explicit DetachHostAccountsFromUserGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DetachHostAccountsFromUserGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachHostAccountsFromUserGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DetachHostAccountsFromUserGroupResponse() = default;
};
class DetachHostGroupAccountsFromUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> userId{};
  shared_ptr<string> hostGroups{};

  DetachHostGroupAccountsFromUserRequest() {}

  explicit DetachHostGroupAccountsFromUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (hostGroups) {
      res["HostGroups"] = boost::any(*hostGroups);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("HostGroups") != m.end() && !m["HostGroups"].empty()) {
      hostGroups = make_shared<string>(boost::any_cast<string>(m["HostGroups"]));
    }
  }


  virtual ~DetachHostGroupAccountsFromUserRequest() = default;
};
class DetachHostGroupAccountsFromUserResponseBodyResultsHostAccountNames : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> hostAccountName{};

  DetachHostGroupAccountsFromUserResponseBodyResultsHostAccountNames() {}

  explicit DetachHostGroupAccountsFromUserResponseBodyResultsHostAccountNames(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (hostAccountName) {
      res["HostAccountName"] = boost::any(*hostAccountName);
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
    if (m.find("HostAccountName") != m.end() && !m["HostAccountName"].empty()) {
      hostAccountName = make_shared<string>(boost::any_cast<string>(m["HostAccountName"]));
    }
  }


  virtual ~DetachHostGroupAccountsFromUserResponseBodyResultsHostAccountNames() = default;
};
class DetachHostGroupAccountsFromUserResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> hostGroupId{};
  shared_ptr<string> userId{};
  shared_ptr<vector<DetachHostGroupAccountsFromUserResponseBodyResultsHostAccountNames>> hostAccountNames{};

  DetachHostGroupAccountsFromUserResponseBodyResults() {}

  explicit DetachHostGroupAccountsFromUserResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (hostGroupId) {
      res["HostGroupId"] = boost::any(*hostGroupId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (hostAccountNames) {
      vector<boost::any> temp1;
      for(auto item1:*hostAccountNames){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HostAccountNames"] = boost::any(temp1);
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
    if (m.find("HostGroupId") != m.end() && !m["HostGroupId"].empty()) {
      hostGroupId = make_shared<string>(boost::any_cast<string>(m["HostGroupId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("HostAccountNames") != m.end() && !m["HostAccountNames"].empty()) {
      if (typeid(vector<boost::any>) == m["HostAccountNames"].type()) {
        vector<DetachHostGroupAccountsFromUserResponseBodyResultsHostAccountNames> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HostAccountNames"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetachHostGroupAccountsFromUserResponseBodyResultsHostAccountNames model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostAccountNames = make_shared<vector<DetachHostGroupAccountsFromUserResponseBodyResultsHostAccountNames>>(expect1);
      }
    }
  }


  virtual ~DetachHostGroupAccountsFromUserResponseBodyResults() = default;
};
class DetachHostGroupAccountsFromUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DetachHostGroupAccountsFromUserResponseBodyResults>> results{};

  DetachHostGroupAccountsFromUserResponseBody() {}

  explicit DetachHostGroupAccountsFromUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<DetachHostGroupAccountsFromUserResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetachHostGroupAccountsFromUserResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<DetachHostGroupAccountsFromUserResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~DetachHostGroupAccountsFromUserResponseBody() = default;
};
class DetachHostGroupAccountsFromUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetachHostGroupAccountsFromUserResponseBody> body{};

  DetachHostGroupAccountsFromUserResponse() {}

  explicit DetachHostGroupAccountsFromUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DetachHostGroupAccountsFromUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachHostGroupAccountsFromUserResponseBody>(model1);
      }
    }
  }


  virtual ~DetachHostGroupAccountsFromUserResponse() = default;
};
class DetachHostGroupAccountsFromUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> userGroupId{};
  shared_ptr<string> hostGroups{};

  DetachHostGroupAccountsFromUserGroupRequest() {}

  explicit DetachHostGroupAccountsFromUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (hostGroups) {
      res["HostGroups"] = boost::any(*hostGroups);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("HostGroups") != m.end() && !m["HostGroups"].empty()) {
      hostGroups = make_shared<string>(boost::any_cast<string>(m["HostGroups"]));
    }
  }


  virtual ~DetachHostGroupAccountsFromUserGroupRequest() = default;
};
class DetachHostGroupAccountsFromUserGroupResponseBodyResultsHostAccountNames : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> hostAccountName{};

  DetachHostGroupAccountsFromUserGroupResponseBodyResultsHostAccountNames() {}

  explicit DetachHostGroupAccountsFromUserGroupResponseBodyResultsHostAccountNames(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (hostAccountName) {
      res["HostAccountName"] = boost::any(*hostAccountName);
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
    if (m.find("HostAccountName") != m.end() && !m["HostAccountName"].empty()) {
      hostAccountName = make_shared<string>(boost::any_cast<string>(m["HostAccountName"]));
    }
  }


  virtual ~DetachHostGroupAccountsFromUserGroupResponseBodyResultsHostAccountNames() = default;
};
class DetachHostGroupAccountsFromUserGroupResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> hostGroupId{};
  shared_ptr<string> userGroupId{};
  shared_ptr<vector<DetachHostGroupAccountsFromUserGroupResponseBodyResultsHostAccountNames>> hostAccountNames{};

  DetachHostGroupAccountsFromUserGroupResponseBodyResults() {}

  explicit DetachHostGroupAccountsFromUserGroupResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (hostGroupId) {
      res["HostGroupId"] = boost::any(*hostGroupId);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (hostAccountNames) {
      vector<boost::any> temp1;
      for(auto item1:*hostAccountNames){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HostAccountNames"] = boost::any(temp1);
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
    if (m.find("HostGroupId") != m.end() && !m["HostGroupId"].empty()) {
      hostGroupId = make_shared<string>(boost::any_cast<string>(m["HostGroupId"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("HostAccountNames") != m.end() && !m["HostAccountNames"].empty()) {
      if (typeid(vector<boost::any>) == m["HostAccountNames"].type()) {
        vector<DetachHostGroupAccountsFromUserGroupResponseBodyResultsHostAccountNames> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HostAccountNames"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetachHostGroupAccountsFromUserGroupResponseBodyResultsHostAccountNames model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostAccountNames = make_shared<vector<DetachHostGroupAccountsFromUserGroupResponseBodyResultsHostAccountNames>>(expect1);
      }
    }
  }


  virtual ~DetachHostGroupAccountsFromUserGroupResponseBodyResults() = default;
};
class DetachHostGroupAccountsFromUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DetachHostGroupAccountsFromUserGroupResponseBodyResults>> results{};

  DetachHostGroupAccountsFromUserGroupResponseBody() {}

  explicit DetachHostGroupAccountsFromUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<DetachHostGroupAccountsFromUserGroupResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetachHostGroupAccountsFromUserGroupResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<DetachHostGroupAccountsFromUserGroupResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~DetachHostGroupAccountsFromUserGroupResponseBody() = default;
};
class DetachHostGroupAccountsFromUserGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetachHostGroupAccountsFromUserGroupResponseBody> body{};

  DetachHostGroupAccountsFromUserGroupResponse() {}

  explicit DetachHostGroupAccountsFromUserGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DetachHostGroupAccountsFromUserGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachHostGroupAccountsFromUserGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DetachHostGroupAccountsFromUserGroupResponse() = default;
};
class DisableInstancePublicAccessRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  DisableInstancePublicAccessRequest() {}

  explicit DisableInstancePublicAccessRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DisableInstancePublicAccessRequest() = default;
};
class DisableInstancePublicAccessResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestId{};

  DisableInstancePublicAccessResponseBody() {}

  explicit DisableInstancePublicAccessResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableInstancePublicAccessResponseBody() = default;
};
class DisableInstancePublicAccessResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DisableInstancePublicAccessResponseBody> body{};

  DisableInstancePublicAccessResponse() {}

  explicit DisableInstancePublicAccessResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DisableInstancePublicAccessResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableInstancePublicAccessResponseBody>(model1);
      }
    }
  }


  virtual ~DisableInstancePublicAccessResponse() = default;
};
class EnableInstancePublicAccessRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  EnableInstancePublicAccessRequest() {}

  explicit EnableInstancePublicAccessRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~EnableInstancePublicAccessRequest() = default;
};
class EnableInstancePublicAccessResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestId{};

  EnableInstancePublicAccessResponseBody() {}

  explicit EnableInstancePublicAccessResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableInstancePublicAccessResponseBody() = default;
};
class EnableInstancePublicAccessResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableInstancePublicAccessResponseBody> body{};

  EnableInstancePublicAccessResponse() {}

  explicit EnableInstancePublicAccessResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EnableInstancePublicAccessResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableInstancePublicAccessResponseBody>(model1);
      }
    }
  }


  virtual ~EnableInstancePublicAccessResponse() = default;
};
class GetHostRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> hostId{};

  GetHostRequest() {}

  explicit GetHostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
  }


  virtual ~GetHostRequest() = default;
};
class GetHostResponseBodyHostProtocols : public Darabonba::Model {
public:
  shared_ptr<string> hostFingerPrint{};
  shared_ptr<long> port{};
  shared_ptr<string> protocolName{};

  GetHostResponseBodyHostProtocols() {}

  explicit GetHostResponseBodyHostProtocols(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostFingerPrint) {
      res["HostFingerPrint"] = boost::any(*hostFingerPrint);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (protocolName) {
      res["ProtocolName"] = boost::any(*protocolName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostFingerPrint") != m.end() && !m["HostFingerPrint"].empty()) {
      hostFingerPrint = make_shared<string>(boost::any_cast<string>(m["HostFingerPrint"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ProtocolName") != m.end() && !m["ProtocolName"].empty()) {
      protocolName = make_shared<string>(boost::any_cast<string>(m["ProtocolName"]));
    }
  }


  virtual ~GetHostResponseBodyHostProtocols() = default;
};
class GetHostResponseBodyHost : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> activeAddressType{};
  shared_ptr<string> hostPublicAddress{};
  shared_ptr<string> hostName{};
  shared_ptr<string> source{};
  shared_ptr<string> hostPrivateAddress{};
  shared_ptr<string> OSType{};
  shared_ptr<string> hostId{};
  shared_ptr<string> sourceInstanceState{};
  shared_ptr<string> sourceInstanceId{};
  shared_ptr<vector<GetHostResponseBodyHostProtocols>> protocols{};

  GetHostResponseBodyHost() {}

  explicit GetHostResponseBodyHost(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (activeAddressType) {
      res["ActiveAddressType"] = boost::any(*activeAddressType);
    }
    if (hostPublicAddress) {
      res["HostPublicAddress"] = boost::any(*hostPublicAddress);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (hostPrivateAddress) {
      res["HostPrivateAddress"] = boost::any(*hostPrivateAddress);
    }
    if (OSType) {
      res["OSType"] = boost::any(*OSType);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (sourceInstanceState) {
      res["SourceInstanceState"] = boost::any(*sourceInstanceState);
    }
    if (sourceInstanceId) {
      res["SourceInstanceId"] = boost::any(*sourceInstanceId);
    }
    if (protocols) {
      vector<boost::any> temp1;
      for(auto item1:*protocols){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Protocols"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("ActiveAddressType") != m.end() && !m["ActiveAddressType"].empty()) {
      activeAddressType = make_shared<string>(boost::any_cast<string>(m["ActiveAddressType"]));
    }
    if (m.find("HostPublicAddress") != m.end() && !m["HostPublicAddress"].empty()) {
      hostPublicAddress = make_shared<string>(boost::any_cast<string>(m["HostPublicAddress"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("HostPrivateAddress") != m.end() && !m["HostPrivateAddress"].empty()) {
      hostPrivateAddress = make_shared<string>(boost::any_cast<string>(m["HostPrivateAddress"]));
    }
    if (m.find("OSType") != m.end() && !m["OSType"].empty()) {
      OSType = make_shared<string>(boost::any_cast<string>(m["OSType"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("SourceInstanceState") != m.end() && !m["SourceInstanceState"].empty()) {
      sourceInstanceState = make_shared<string>(boost::any_cast<string>(m["SourceInstanceState"]));
    }
    if (m.find("SourceInstanceId") != m.end() && !m["SourceInstanceId"].empty()) {
      sourceInstanceId = make_shared<string>(boost::any_cast<string>(m["SourceInstanceId"]));
    }
    if (m.find("Protocols") != m.end() && !m["Protocols"].empty()) {
      if (typeid(vector<boost::any>) == m["Protocols"].type()) {
        vector<GetHostResponseBodyHostProtocols> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Protocols"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetHostResponseBodyHostProtocols model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        protocols = make_shared<vector<GetHostResponseBodyHostProtocols>>(expect1);
      }
    }
  }


  virtual ~GetHostResponseBodyHost() = default;
};
class GetHostResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetHostResponseBodyHost> host{};

  GetHostResponseBody() {}

  explicit GetHostResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (host) {
      res["Host"] = host ? boost::any(host->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      if (typeid(map<string, boost::any>) == m["Host"].type()) {
        GetHostResponseBodyHost model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Host"]));
        host = make_shared<GetHostResponseBodyHost>(model1);
      }
    }
  }


  virtual ~GetHostResponseBody() = default;
};
class GetHostResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetHostResponseBody> body{};

  GetHostResponse() {}

  explicit GetHostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetHostResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHostResponseBody>(model1);
      }
    }
  }


  virtual ~GetHostResponse() = default;
};
class GetHostAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> hostAccountId{};

  GetHostAccountRequest() {}

  explicit GetHostAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (hostAccountId) {
      res["HostAccountId"] = boost::any(*hostAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("HostAccountId") != m.end() && !m["HostAccountId"].empty()) {
      hostAccountId = make_shared<string>(boost::any_cast<string>(m["HostAccountId"]));
    }
  }


  virtual ~GetHostAccountRequest() = default;
};
class GetHostAccountResponseBodyHostAccount : public Darabonba::Model {
public:
  shared_ptr<bool> hasPassword{};
  shared_ptr<string> privateKeyFingerprint{};
  shared_ptr<string> protocolName{};
  shared_ptr<string> hostAccountName{};
  shared_ptr<string> hostAccountId{};
  shared_ptr<string> hostId{};

  GetHostAccountResponseBodyHostAccount() {}

  explicit GetHostAccountResponseBodyHostAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasPassword) {
      res["HasPassword"] = boost::any(*hasPassword);
    }
    if (privateKeyFingerprint) {
      res["PrivateKeyFingerprint"] = boost::any(*privateKeyFingerprint);
    }
    if (protocolName) {
      res["ProtocolName"] = boost::any(*protocolName);
    }
    if (hostAccountName) {
      res["HostAccountName"] = boost::any(*hostAccountName);
    }
    if (hostAccountId) {
      res["HostAccountId"] = boost::any(*hostAccountId);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasPassword") != m.end() && !m["HasPassword"].empty()) {
      hasPassword = make_shared<bool>(boost::any_cast<bool>(m["HasPassword"]));
    }
    if (m.find("PrivateKeyFingerprint") != m.end() && !m["PrivateKeyFingerprint"].empty()) {
      privateKeyFingerprint = make_shared<string>(boost::any_cast<string>(m["PrivateKeyFingerprint"]));
    }
    if (m.find("ProtocolName") != m.end() && !m["ProtocolName"].empty()) {
      protocolName = make_shared<string>(boost::any_cast<string>(m["ProtocolName"]));
    }
    if (m.find("HostAccountName") != m.end() && !m["HostAccountName"].empty()) {
      hostAccountName = make_shared<string>(boost::any_cast<string>(m["HostAccountName"]));
    }
    if (m.find("HostAccountId") != m.end() && !m["HostAccountId"].empty()) {
      hostAccountId = make_shared<string>(boost::any_cast<string>(m["HostAccountId"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
  }


  virtual ~GetHostAccountResponseBodyHostAccount() = default;
};
class GetHostAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetHostAccountResponseBodyHostAccount> hostAccount{};

  GetHostAccountResponseBody() {}

  explicit GetHostAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (hostAccount) {
      res["HostAccount"] = hostAccount ? boost::any(hostAccount->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HostAccount") != m.end() && !m["HostAccount"].empty()) {
      if (typeid(map<string, boost::any>) == m["HostAccount"].type()) {
        GetHostAccountResponseBodyHostAccount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HostAccount"]));
        hostAccount = make_shared<GetHostAccountResponseBodyHostAccount>(model1);
      }
    }
  }


  virtual ~GetHostAccountResponseBody() = default;
};
class GetHostAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetHostAccountResponseBody> body{};

  GetHostAccountResponse() {}

  explicit GetHostAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetHostAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHostAccountResponseBody>(model1);
      }
    }
  }


  virtual ~GetHostAccountResponse() = default;
};
class GetHostGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> hostGroupId{};

  GetHostGroupRequest() {}

  explicit GetHostGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (hostGroupId) {
      res["HostGroupId"] = boost::any(*hostGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("HostGroupId") != m.end() && !m["HostGroupId"].empty()) {
      hostGroupId = make_shared<string>(boost::any_cast<string>(m["HostGroupId"]));
    }
  }


  virtual ~GetHostGroupRequest() = default;
};
class GetHostGroupResponseBodyHostGroup : public Darabonba::Model {
public:
  shared_ptr<string> hostGroupId{};
  shared_ptr<string> comment{};
  shared_ptr<string> hostGroupName{};

  GetHostGroupResponseBodyHostGroup() {}

  explicit GetHostGroupResponseBodyHostGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostGroupId) {
      res["HostGroupId"] = boost::any(*hostGroupId);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (hostGroupName) {
      res["HostGroupName"] = boost::any(*hostGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostGroupId") != m.end() && !m["HostGroupId"].empty()) {
      hostGroupId = make_shared<string>(boost::any_cast<string>(m["HostGroupId"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("HostGroupName") != m.end() && !m["HostGroupName"].empty()) {
      hostGroupName = make_shared<string>(boost::any_cast<string>(m["HostGroupName"]));
    }
  }


  virtual ~GetHostGroupResponseBodyHostGroup() = default;
};
class GetHostGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetHostGroupResponseBodyHostGroup> hostGroup{};

  GetHostGroupResponseBody() {}

  explicit GetHostGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (hostGroup) {
      res["HostGroup"] = hostGroup ? boost::any(hostGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HostGroup") != m.end() && !m["HostGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["HostGroup"].type()) {
        GetHostGroupResponseBodyHostGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HostGroup"]));
        hostGroup = make_shared<GetHostGroupResponseBodyHostGroup>(model1);
      }
    }
  }


  virtual ~GetHostGroupResponseBody() = default;
};
class GetHostGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetHostGroupResponseBody> body{};

  GetHostGroupResponse() {}

  explicit GetHostGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class GetInstanceUpgradeInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  GetInstanceUpgradeInfoRequest() {}

  explicit GetInstanceUpgradeInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetInstanceUpgradeInfoRequest() = default;
};
class GetInstanceUpgradeInfoResponseBodyInstanceUpgradeInfoCandidatePeriodList : public Darabonba::Model {
public:
  shared_ptr<long> candidateStartTime{};
  shared_ptr<long> candidateEndTime{};

  GetInstanceUpgradeInfoResponseBodyInstanceUpgradeInfoCandidatePeriodList() {}

  explicit GetInstanceUpgradeInfoResponseBodyInstanceUpgradeInfoCandidatePeriodList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (candidateStartTime) {
      res["CandidateStartTime"] = boost::any(*candidateStartTime);
    }
    if (candidateEndTime) {
      res["CandidateEndTime"] = boost::any(*candidateEndTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CandidateStartTime") != m.end() && !m["CandidateStartTime"].empty()) {
      candidateStartTime = make_shared<long>(boost::any_cast<long>(m["CandidateStartTime"]));
    }
    if (m.find("CandidateEndTime") != m.end() && !m["CandidateEndTime"].empty()) {
      candidateEndTime = make_shared<long>(boost::any_cast<long>(m["CandidateEndTime"]));
    }
  }


  virtual ~GetInstanceUpgradeInfoResponseBodyInstanceUpgradeInfoCandidatePeriodList() = default;
};
class GetInstanceUpgradeInfoResponseBodyInstanceUpgradeInfoInvalidPeriodList : public Darabonba::Model {
public:
  shared_ptr<long> invalidEndTime{};
  shared_ptr<long> invalidStartTime{};

  GetInstanceUpgradeInfoResponseBodyInstanceUpgradeInfoInvalidPeriodList() {}

  explicit GetInstanceUpgradeInfoResponseBodyInstanceUpgradeInfoInvalidPeriodList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invalidEndTime) {
      res["InvalidEndTime"] = boost::any(*invalidEndTime);
    }
    if (invalidStartTime) {
      res["InvalidStartTime"] = boost::any(*invalidStartTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InvalidEndTime") != m.end() && !m["InvalidEndTime"].empty()) {
      invalidEndTime = make_shared<long>(boost::any_cast<long>(m["InvalidEndTime"]));
    }
    if (m.find("InvalidStartTime") != m.end() && !m["InvalidStartTime"].empty()) {
      invalidStartTime = make_shared<long>(boost::any_cast<long>(m["InvalidStartTime"]));
    }
  }


  virtual ~GetInstanceUpgradeInfoResponseBodyInstanceUpgradeInfoInvalidPeriodList() = default;
};
class GetInstanceUpgradeInfoResponseBodyInstanceUpgradeInfo : public Darabonba::Model {
public:
  shared_ptr<string> upgradeMode{};
  shared_ptr<bool> operable{};
  shared_ptr<long> aliUid{};
  shared_ptr<long> latestStartTime{};
  shared_ptr<string> imageVersion{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> periodInterval{};
  shared_ptr<long> upgradeStartTime{};
  shared_ptr<long> upgradeEndTime{};
  shared_ptr<vector<GetInstanceUpgradeInfoResponseBodyInstanceUpgradeInfoCandidatePeriodList>> candidatePeriodList{};
  shared_ptr<vector<GetInstanceUpgradeInfoResponseBodyInstanceUpgradeInfoInvalidPeriodList>> invalidPeriodList{};

  GetInstanceUpgradeInfoResponseBodyInstanceUpgradeInfo() {}

  explicit GetInstanceUpgradeInfoResponseBodyInstanceUpgradeInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (upgradeMode) {
      res["UpgradeMode"] = boost::any(*upgradeMode);
    }
    if (operable) {
      res["Operable"] = boost::any(*operable);
    }
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (latestStartTime) {
      res["LatestStartTime"] = boost::any(*latestStartTime);
    }
    if (imageVersion) {
      res["ImageVersion"] = boost::any(*imageVersion);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (periodInterval) {
      res["PeriodInterval"] = boost::any(*periodInterval);
    }
    if (upgradeStartTime) {
      res["UpgradeStartTime"] = boost::any(*upgradeStartTime);
    }
    if (upgradeEndTime) {
      res["UpgradeEndTime"] = boost::any(*upgradeEndTime);
    }
    if (candidatePeriodList) {
      vector<boost::any> temp1;
      for(auto item1:*candidatePeriodList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CandidatePeriodList"] = boost::any(temp1);
    }
    if (invalidPeriodList) {
      vector<boost::any> temp1;
      for(auto item1:*invalidPeriodList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InvalidPeriodList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UpgradeMode") != m.end() && !m["UpgradeMode"].empty()) {
      upgradeMode = make_shared<string>(boost::any_cast<string>(m["UpgradeMode"]));
    }
    if (m.find("Operable") != m.end() && !m["Operable"].empty()) {
      operable = make_shared<bool>(boost::any_cast<bool>(m["Operable"]));
    }
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("LatestStartTime") != m.end() && !m["LatestStartTime"].empty()) {
      latestStartTime = make_shared<long>(boost::any_cast<long>(m["LatestStartTime"]));
    }
    if (m.find("ImageVersion") != m.end() && !m["ImageVersion"].empty()) {
      imageVersion = make_shared<string>(boost::any_cast<string>(m["ImageVersion"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PeriodInterval") != m.end() && !m["PeriodInterval"].empty()) {
      periodInterval = make_shared<long>(boost::any_cast<long>(m["PeriodInterval"]));
    }
    if (m.find("UpgradeStartTime") != m.end() && !m["UpgradeStartTime"].empty()) {
      upgradeStartTime = make_shared<long>(boost::any_cast<long>(m["UpgradeStartTime"]));
    }
    if (m.find("UpgradeEndTime") != m.end() && !m["UpgradeEndTime"].empty()) {
      upgradeEndTime = make_shared<long>(boost::any_cast<long>(m["UpgradeEndTime"]));
    }
    if (m.find("CandidatePeriodList") != m.end() && !m["CandidatePeriodList"].empty()) {
      if (typeid(vector<boost::any>) == m["CandidatePeriodList"].type()) {
        vector<GetInstanceUpgradeInfoResponseBodyInstanceUpgradeInfoCandidatePeriodList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CandidatePeriodList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceUpgradeInfoResponseBodyInstanceUpgradeInfoCandidatePeriodList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        candidatePeriodList = make_shared<vector<GetInstanceUpgradeInfoResponseBodyInstanceUpgradeInfoCandidatePeriodList>>(expect1);
      }
    }
    if (m.find("InvalidPeriodList") != m.end() && !m["InvalidPeriodList"].empty()) {
      if (typeid(vector<boost::any>) == m["InvalidPeriodList"].type()) {
        vector<GetInstanceUpgradeInfoResponseBodyInstanceUpgradeInfoInvalidPeriodList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InvalidPeriodList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceUpgradeInfoResponseBodyInstanceUpgradeInfoInvalidPeriodList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        invalidPeriodList = make_shared<vector<GetInstanceUpgradeInfoResponseBodyInstanceUpgradeInfoInvalidPeriodList>>(expect1);
      }
    }
  }


  virtual ~GetInstanceUpgradeInfoResponseBodyInstanceUpgradeInfo() = default;
};
class GetInstanceUpgradeInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetInstanceUpgradeInfoResponseBodyInstanceUpgradeInfo> instanceUpgradeInfo{};

  GetInstanceUpgradeInfoResponseBody() {}

  explicit GetInstanceUpgradeInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceUpgradeInfo) {
      res["InstanceUpgradeInfo"] = instanceUpgradeInfo ? boost::any(instanceUpgradeInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceUpgradeInfo") != m.end() && !m["InstanceUpgradeInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceUpgradeInfo"].type()) {
        GetInstanceUpgradeInfoResponseBodyInstanceUpgradeInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceUpgradeInfo"]));
        instanceUpgradeInfo = make_shared<GetInstanceUpgradeInfoResponseBodyInstanceUpgradeInfo>(model1);
      }
    }
  }


  virtual ~GetInstanceUpgradeInfoResponseBody() = default;
};
class GetInstanceUpgradeInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetInstanceUpgradeInfoResponseBody> body{};

  GetInstanceUpgradeInfoResponse() {}

  explicit GetInstanceUpgradeInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetInstanceUpgradeInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceUpgradeInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceUpgradeInfoResponse() = default;
};
class GetUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetUserRequest() = default;
};
class GetUserResponseBodyUser : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> comment{};
  shared_ptr<string> email{};
  shared_ptr<string> mobile{};
  shared_ptr<string> mobileCountryCode{};
  shared_ptr<string> userId{};
  shared_ptr<string> source{};
  shared_ptr<string> userName{};
  shared_ptr<string> sourceUserId{};
  shared_ptr<vector<string>> userState{};

  GetUserResponseBodyUser() {}

  explicit GetUserResponseBodyUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (mobileCountryCode) {
      res["MobileCountryCode"] = boost::any(*mobileCountryCode);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (sourceUserId) {
      res["SourceUserId"] = boost::any(*sourceUserId);
    }
    if (userState) {
      res["UserState"] = boost::any(*userState);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("MobileCountryCode") != m.end() && !m["MobileCountryCode"].empty()) {
      mobileCountryCode = make_shared<string>(boost::any_cast<string>(m["MobileCountryCode"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("SourceUserId") != m.end() && !m["SourceUserId"].empty()) {
      sourceUserId = make_shared<string>(boost::any_cast<string>(m["SourceUserId"]));
    }
    if (m.find("UserState") != m.end() && !m["UserState"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserState"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserState"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userState = make_shared<vector<string>>(toVec1);
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
  shared_ptr<GetUserResponseBody> body{};

  GetUserResponse() {}

  explicit GetUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class GetUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> userGroupId{};

  GetUserGroupRequest() {}

  explicit GetUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
  }


  virtual ~GetUserGroupRequest() = default;
};
class GetUserGroupResponseBodyUserGroup : public Darabonba::Model {
public:
  shared_ptr<string> userGroupName{};
  shared_ptr<string> comment{};
  shared_ptr<string> userGroupId{};

  GetUserGroupResponseBodyUserGroup() {}

  explicit GetUserGroupResponseBodyUserGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userGroupName) {
      res["UserGroupName"] = boost::any(*userGroupName);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserGroupName") != m.end() && !m["UserGroupName"].empty()) {
      userGroupName = make_shared<string>(boost::any_cast<string>(m["UserGroupName"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
  }


  virtual ~GetUserGroupResponseBodyUserGroup() = default;
};
class GetUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetUserGroupResponseBodyUserGroup> userGroup{};

  GetUserGroupResponseBody() {}

  explicit GetUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userGroup) {
      res["UserGroup"] = userGroup ? boost::any(userGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserGroup") != m.end() && !m["UserGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserGroup"].type()) {
        GetUserGroupResponseBodyUserGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserGroup"]));
        userGroup = make_shared<GetUserGroupResponseBodyUserGroup>(model1);
      }
    }
  }


  virtual ~GetUserGroupResponseBody() = default;
};
class GetUserGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetUserGroupResponseBody> body{};

  GetUserGroupResponse() {}

  explicit GetUserGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetUserGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserGroupResponse() = default;
};
class ListHostAccountsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> hostId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> hostAccountName{};
  shared_ptr<string> protocolName{};

  ListHostAccountsRequest() {}

  explicit ListHostAccountsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (hostAccountName) {
      res["HostAccountName"] = boost::any(*hostAccountName);
    }
    if (protocolName) {
      res["ProtocolName"] = boost::any(*protocolName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("HostAccountName") != m.end() && !m["HostAccountName"].empty()) {
      hostAccountName = make_shared<string>(boost::any_cast<string>(m["HostAccountName"]));
    }
    if (m.find("ProtocolName") != m.end() && !m["ProtocolName"].empty()) {
      protocolName = make_shared<string>(boost::any_cast<string>(m["ProtocolName"]));
    }
  }


  virtual ~ListHostAccountsRequest() = default;
};
class ListHostAccountsResponseBodyHostAccounts : public Darabonba::Model {
public:
  shared_ptr<bool> hasPassword{};
  shared_ptr<string> privateKeyFingerprint{};
  shared_ptr<string> protocolName{};
  shared_ptr<string> hostAccountName{};
  shared_ptr<string> hostAccountId{};
  shared_ptr<string> hostId{};

  ListHostAccountsResponseBodyHostAccounts() {}

  explicit ListHostAccountsResponseBodyHostAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasPassword) {
      res["HasPassword"] = boost::any(*hasPassword);
    }
    if (privateKeyFingerprint) {
      res["PrivateKeyFingerprint"] = boost::any(*privateKeyFingerprint);
    }
    if (protocolName) {
      res["ProtocolName"] = boost::any(*protocolName);
    }
    if (hostAccountName) {
      res["HostAccountName"] = boost::any(*hostAccountName);
    }
    if (hostAccountId) {
      res["HostAccountId"] = boost::any(*hostAccountId);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasPassword") != m.end() && !m["HasPassword"].empty()) {
      hasPassword = make_shared<bool>(boost::any_cast<bool>(m["HasPassword"]));
    }
    if (m.find("PrivateKeyFingerprint") != m.end() && !m["PrivateKeyFingerprint"].empty()) {
      privateKeyFingerprint = make_shared<string>(boost::any_cast<string>(m["PrivateKeyFingerprint"]));
    }
    if (m.find("ProtocolName") != m.end() && !m["ProtocolName"].empty()) {
      protocolName = make_shared<string>(boost::any_cast<string>(m["ProtocolName"]));
    }
    if (m.find("HostAccountName") != m.end() && !m["HostAccountName"].empty()) {
      hostAccountName = make_shared<string>(boost::any_cast<string>(m["HostAccountName"]));
    }
    if (m.find("HostAccountId") != m.end() && !m["HostAccountId"].empty()) {
      hostAccountId = make_shared<string>(boost::any_cast<string>(m["HostAccountId"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
  }


  virtual ~ListHostAccountsResponseBodyHostAccounts() = default;
};
class ListHostAccountsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListHostAccountsResponseBodyHostAccounts>> hostAccounts{};

  ListHostAccountsResponseBody() {}

  explicit ListHostAccountsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (hostAccounts) {
      vector<boost::any> temp1;
      for(auto item1:*hostAccounts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HostAccounts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HostAccounts") != m.end() && !m["HostAccounts"].empty()) {
      if (typeid(vector<boost::any>) == m["HostAccounts"].type()) {
        vector<ListHostAccountsResponseBodyHostAccounts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HostAccounts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHostAccountsResponseBodyHostAccounts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostAccounts = make_shared<vector<ListHostAccountsResponseBodyHostAccounts>>(expect1);
      }
    }
  }


  virtual ~ListHostAccountsResponseBody() = default;
};
class ListHostAccountsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListHostAccountsResponseBody> body{};

  ListHostAccountsResponse() {}

  explicit ListHostAccountsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListHostAccountsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHostAccountsResponseBody>(model1);
      }
    }
  }


  virtual ~ListHostAccountsResponse() = default;
};
class ListHostAccountsForUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> userId{};
  shared_ptr<string> hostId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> hostAccountName{};

  ListHostAccountsForUserRequest() {}

  explicit ListHostAccountsForUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (hostAccountName) {
      res["HostAccountName"] = boost::any(*hostAccountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("HostAccountName") != m.end() && !m["HostAccountName"].empty()) {
      hostAccountName = make_shared<string>(boost::any_cast<string>(m["HostAccountName"]));
    }
  }


  virtual ~ListHostAccountsForUserRequest() = default;
};
class ListHostAccountsForUserResponseBodyHostAccounts : public Darabonba::Model {
public:
  shared_ptr<string> hostAccountName{};
  shared_ptr<string> hostAccountId{};
  shared_ptr<bool> isAuthorized{};
  shared_ptr<string> protocolName{};
  shared_ptr<string> hostId{};

  ListHostAccountsForUserResponseBodyHostAccounts() {}

  explicit ListHostAccountsForUserResponseBodyHostAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostAccountName) {
      res["HostAccountName"] = boost::any(*hostAccountName);
    }
    if (hostAccountId) {
      res["HostAccountId"] = boost::any(*hostAccountId);
    }
    if (isAuthorized) {
      res["IsAuthorized"] = boost::any(*isAuthorized);
    }
    if (protocolName) {
      res["ProtocolName"] = boost::any(*protocolName);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostAccountName") != m.end() && !m["HostAccountName"].empty()) {
      hostAccountName = make_shared<string>(boost::any_cast<string>(m["HostAccountName"]));
    }
    if (m.find("HostAccountId") != m.end() && !m["HostAccountId"].empty()) {
      hostAccountId = make_shared<string>(boost::any_cast<string>(m["HostAccountId"]));
    }
    if (m.find("IsAuthorized") != m.end() && !m["IsAuthorized"].empty()) {
      isAuthorized = make_shared<bool>(boost::any_cast<bool>(m["IsAuthorized"]));
    }
    if (m.find("ProtocolName") != m.end() && !m["ProtocolName"].empty()) {
      protocolName = make_shared<string>(boost::any_cast<string>(m["ProtocolName"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
  }


  virtual ~ListHostAccountsForUserResponseBodyHostAccounts() = default;
};
class ListHostAccountsForUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListHostAccountsForUserResponseBodyHostAccounts>> hostAccounts{};

  ListHostAccountsForUserResponseBody() {}

  explicit ListHostAccountsForUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (hostAccounts) {
      vector<boost::any> temp1;
      for(auto item1:*hostAccounts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HostAccounts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HostAccounts") != m.end() && !m["HostAccounts"].empty()) {
      if (typeid(vector<boost::any>) == m["HostAccounts"].type()) {
        vector<ListHostAccountsForUserResponseBodyHostAccounts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HostAccounts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHostAccountsForUserResponseBodyHostAccounts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostAccounts = make_shared<vector<ListHostAccountsForUserResponseBodyHostAccounts>>(expect1);
      }
    }
  }


  virtual ~ListHostAccountsForUserResponseBody() = default;
};
class ListHostAccountsForUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListHostAccountsForUserResponseBody> body{};

  ListHostAccountsForUserResponse() {}

  explicit ListHostAccountsForUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListHostAccountsForUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHostAccountsForUserResponseBody>(model1);
      }
    }
  }


  virtual ~ListHostAccountsForUserResponse() = default;
};
class ListHostAccountsForUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> userGroupId{};
  shared_ptr<string> hostId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> hostAccountName{};

  ListHostAccountsForUserGroupRequest() {}

  explicit ListHostAccountsForUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (hostAccountName) {
      res["HostAccountName"] = boost::any(*hostAccountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("HostAccountName") != m.end() && !m["HostAccountName"].empty()) {
      hostAccountName = make_shared<string>(boost::any_cast<string>(m["HostAccountName"]));
    }
  }


  virtual ~ListHostAccountsForUserGroupRequest() = default;
};
class ListHostAccountsForUserGroupResponseBodyHostAccounts : public Darabonba::Model {
public:
  shared_ptr<string> hostAccountName{};
  shared_ptr<string> hostAccountId{};
  shared_ptr<bool> isAuthorized{};
  shared_ptr<string> protocolName{};
  shared_ptr<string> hostId{};

  ListHostAccountsForUserGroupResponseBodyHostAccounts() {}

  explicit ListHostAccountsForUserGroupResponseBodyHostAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostAccountName) {
      res["HostAccountName"] = boost::any(*hostAccountName);
    }
    if (hostAccountId) {
      res["HostAccountId"] = boost::any(*hostAccountId);
    }
    if (isAuthorized) {
      res["IsAuthorized"] = boost::any(*isAuthorized);
    }
    if (protocolName) {
      res["ProtocolName"] = boost::any(*protocolName);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostAccountName") != m.end() && !m["HostAccountName"].empty()) {
      hostAccountName = make_shared<string>(boost::any_cast<string>(m["HostAccountName"]));
    }
    if (m.find("HostAccountId") != m.end() && !m["HostAccountId"].empty()) {
      hostAccountId = make_shared<string>(boost::any_cast<string>(m["HostAccountId"]));
    }
    if (m.find("IsAuthorized") != m.end() && !m["IsAuthorized"].empty()) {
      isAuthorized = make_shared<bool>(boost::any_cast<bool>(m["IsAuthorized"]));
    }
    if (m.find("ProtocolName") != m.end() && !m["ProtocolName"].empty()) {
      protocolName = make_shared<string>(boost::any_cast<string>(m["ProtocolName"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
  }


  virtual ~ListHostAccountsForUserGroupResponseBodyHostAccounts() = default;
};
class ListHostAccountsForUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListHostAccountsForUserGroupResponseBodyHostAccounts>> hostAccounts{};

  ListHostAccountsForUserGroupResponseBody() {}

  explicit ListHostAccountsForUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (hostAccounts) {
      vector<boost::any> temp1;
      for(auto item1:*hostAccounts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HostAccounts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HostAccounts") != m.end() && !m["HostAccounts"].empty()) {
      if (typeid(vector<boost::any>) == m["HostAccounts"].type()) {
        vector<ListHostAccountsForUserGroupResponseBodyHostAccounts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HostAccounts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHostAccountsForUserGroupResponseBodyHostAccounts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostAccounts = make_shared<vector<ListHostAccountsForUserGroupResponseBodyHostAccounts>>(expect1);
      }
    }
  }


  virtual ~ListHostAccountsForUserGroupResponseBody() = default;
};
class ListHostAccountsForUserGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListHostAccountsForUserGroupResponseBody> body{};

  ListHostAccountsForUserGroupResponse() {}

  explicit ListHostAccountsForUserGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListHostAccountsForUserGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHostAccountsForUserGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ListHostAccountsForUserGroupResponse() = default;
};
class ListHostGroupAccountNamesForUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> userId{};
  shared_ptr<string> hostGroupId{};

  ListHostGroupAccountNamesForUserRequest() {}

  explicit ListHostGroupAccountNamesForUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (hostGroupId) {
      res["HostGroupId"] = boost::any(*hostGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("HostGroupId") != m.end() && !m["HostGroupId"].empty()) {
      hostGroupId = make_shared<string>(boost::any_cast<string>(m["HostGroupId"]));
    }
  }


  virtual ~ListHostGroupAccountNamesForUserRequest() = default;
};
class ListHostGroupAccountNamesForUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> hostAccountNames{};

  ListHostGroupAccountNamesForUserResponseBody() {}

  explicit ListHostGroupAccountNamesForUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (hostAccountNames) {
      res["HostAccountNames"] = boost::any(*hostAccountNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HostAccountNames") != m.end() && !m["HostAccountNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HostAccountNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HostAccountNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      hostAccountNames = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListHostGroupAccountNamesForUserResponseBody() = default;
};
class ListHostGroupAccountNamesForUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListHostGroupAccountNamesForUserResponseBody> body{};

  ListHostGroupAccountNamesForUserResponse() {}

  explicit ListHostGroupAccountNamesForUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListHostGroupAccountNamesForUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHostGroupAccountNamesForUserResponseBody>(model1);
      }
    }
  }


  virtual ~ListHostGroupAccountNamesForUserResponse() = default;
};
class ListHostGroupAccountNamesForUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> userGroupId{};
  shared_ptr<string> hostGroupId{};

  ListHostGroupAccountNamesForUserGroupRequest() {}

  explicit ListHostGroupAccountNamesForUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (hostGroupId) {
      res["HostGroupId"] = boost::any(*hostGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("HostGroupId") != m.end() && !m["HostGroupId"].empty()) {
      hostGroupId = make_shared<string>(boost::any_cast<string>(m["HostGroupId"]));
    }
  }


  virtual ~ListHostGroupAccountNamesForUserGroupRequest() = default;
};
class ListHostGroupAccountNamesForUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> hostAccountNames{};

  ListHostGroupAccountNamesForUserGroupResponseBody() {}

  explicit ListHostGroupAccountNamesForUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (hostAccountNames) {
      res["HostAccountNames"] = boost::any(*hostAccountNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HostAccountNames") != m.end() && !m["HostAccountNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HostAccountNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HostAccountNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      hostAccountNames = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListHostGroupAccountNamesForUserGroupResponseBody() = default;
};
class ListHostGroupAccountNamesForUserGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListHostGroupAccountNamesForUserGroupResponseBody> body{};

  ListHostGroupAccountNamesForUserGroupResponse() {}

  explicit ListHostGroupAccountNamesForUserGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListHostGroupAccountNamesForUserGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHostGroupAccountNamesForUserGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ListHostGroupAccountNamesForUserGroupResponse() = default;
};
class ListHostGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> hostGroupName{};

  ListHostGroupsRequest() {}

  explicit ListHostGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (hostGroupName) {
      res["HostGroupName"] = boost::any(*hostGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("HostGroupName") != m.end() && !m["HostGroupName"].empty()) {
      hostGroupName = make_shared<string>(boost::any_cast<string>(m["HostGroupName"]));
    }
  }


  virtual ~ListHostGroupsRequest() = default;
};
class ListHostGroupsResponseBodyHostGroups : public Darabonba::Model {
public:
  shared_ptr<long> memberCount{};
  shared_ptr<string> hostGroupId{};
  shared_ptr<string> comment{};
  shared_ptr<string> hostGroupName{};

  ListHostGroupsResponseBodyHostGroups() {}

  explicit ListHostGroupsResponseBodyHostGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberCount) {
      res["MemberCount"] = boost::any(*memberCount);
    }
    if (hostGroupId) {
      res["HostGroupId"] = boost::any(*hostGroupId);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (hostGroupName) {
      res["HostGroupName"] = boost::any(*hostGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberCount") != m.end() && !m["MemberCount"].empty()) {
      memberCount = make_shared<long>(boost::any_cast<long>(m["MemberCount"]));
    }
    if (m.find("HostGroupId") != m.end() && !m["HostGroupId"].empty()) {
      hostGroupId = make_shared<string>(boost::any_cast<string>(m["HostGroupId"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("HostGroupName") != m.end() && !m["HostGroupName"].empty()) {
      hostGroupName = make_shared<string>(boost::any_cast<string>(m["HostGroupName"]));
    }
  }


  virtual ~ListHostGroupsResponseBodyHostGroups() = default;
};
class ListHostGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListHostGroupsResponseBodyHostGroups>> hostGroups{};

  ListHostGroupsResponseBody() {}

  explicit ListHostGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (hostGroups) {
      vector<boost::any> temp1;
      for(auto item1:*hostGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HostGroups"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HostGroups") != m.end() && !m["HostGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["HostGroups"].type()) {
        vector<ListHostGroupsResponseBodyHostGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HostGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHostGroupsResponseBodyHostGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostGroups = make_shared<vector<ListHostGroupsResponseBodyHostGroups>>(expect1);
      }
    }
  }


  virtual ~ListHostGroupsResponseBody() = default;
};
class ListHostGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListHostGroupsResponseBody> body{};

  ListHostGroupsResponse() {}

  explicit ListHostGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class ListHostGroupsForUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> mode{};
  shared_ptr<string> userId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> hostGroupName{};

  ListHostGroupsForUserRequest() {}

  explicit ListHostGroupsForUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (hostGroupName) {
      res["HostGroupName"] = boost::any(*hostGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("HostGroupName") != m.end() && !m["HostGroupName"].empty()) {
      hostGroupName = make_shared<string>(boost::any_cast<string>(m["HostGroupName"]));
    }
  }


  virtual ~ListHostGroupsForUserRequest() = default;
};
class ListHostGroupsForUserResponseBodyHostGroups : public Darabonba::Model {
public:
  shared_ptr<string> hostGroupId{};
  shared_ptr<string> comment{};
  shared_ptr<string> hostGroupName{};

  ListHostGroupsForUserResponseBodyHostGroups() {}

  explicit ListHostGroupsForUserResponseBodyHostGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostGroupId) {
      res["HostGroupId"] = boost::any(*hostGroupId);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (hostGroupName) {
      res["HostGroupName"] = boost::any(*hostGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostGroupId") != m.end() && !m["HostGroupId"].empty()) {
      hostGroupId = make_shared<string>(boost::any_cast<string>(m["HostGroupId"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("HostGroupName") != m.end() && !m["HostGroupName"].empty()) {
      hostGroupName = make_shared<string>(boost::any_cast<string>(m["HostGroupName"]));
    }
  }


  virtual ~ListHostGroupsForUserResponseBodyHostGroups() = default;
};
class ListHostGroupsForUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListHostGroupsForUserResponseBodyHostGroups>> hostGroups{};

  ListHostGroupsForUserResponseBody() {}

  explicit ListHostGroupsForUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (hostGroups) {
      vector<boost::any> temp1;
      for(auto item1:*hostGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HostGroups"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HostGroups") != m.end() && !m["HostGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["HostGroups"].type()) {
        vector<ListHostGroupsForUserResponseBodyHostGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HostGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHostGroupsForUserResponseBodyHostGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostGroups = make_shared<vector<ListHostGroupsForUserResponseBodyHostGroups>>(expect1);
      }
    }
  }


  virtual ~ListHostGroupsForUserResponseBody() = default;
};
class ListHostGroupsForUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListHostGroupsForUserResponseBody> body{};

  ListHostGroupsForUserResponse() {}

  explicit ListHostGroupsForUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListHostGroupsForUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHostGroupsForUserResponseBody>(model1);
      }
    }
  }


  virtual ~ListHostGroupsForUserResponse() = default;
};
class ListHostGroupsForUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> mode{};
  shared_ptr<string> userGroupId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> hostGroupName{};

  ListHostGroupsForUserGroupRequest() {}

  explicit ListHostGroupsForUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (hostGroupName) {
      res["HostGroupName"] = boost::any(*hostGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("HostGroupName") != m.end() && !m["HostGroupName"].empty()) {
      hostGroupName = make_shared<string>(boost::any_cast<string>(m["HostGroupName"]));
    }
  }


  virtual ~ListHostGroupsForUserGroupRequest() = default;
};
class ListHostGroupsForUserGroupResponseBodyHostGroups : public Darabonba::Model {
public:
  shared_ptr<string> hostGroupId{};
  shared_ptr<string> comment{};
  shared_ptr<string> hostGroupName{};

  ListHostGroupsForUserGroupResponseBodyHostGroups() {}

  explicit ListHostGroupsForUserGroupResponseBodyHostGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostGroupId) {
      res["HostGroupId"] = boost::any(*hostGroupId);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (hostGroupName) {
      res["HostGroupName"] = boost::any(*hostGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostGroupId") != m.end() && !m["HostGroupId"].empty()) {
      hostGroupId = make_shared<string>(boost::any_cast<string>(m["HostGroupId"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("HostGroupName") != m.end() && !m["HostGroupName"].empty()) {
      hostGroupName = make_shared<string>(boost::any_cast<string>(m["HostGroupName"]));
    }
  }


  virtual ~ListHostGroupsForUserGroupResponseBodyHostGroups() = default;
};
class ListHostGroupsForUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListHostGroupsForUserGroupResponseBodyHostGroups>> hostGroups{};

  ListHostGroupsForUserGroupResponseBody() {}

  explicit ListHostGroupsForUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (hostGroups) {
      vector<boost::any> temp1;
      for(auto item1:*hostGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HostGroups"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HostGroups") != m.end() && !m["HostGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["HostGroups"].type()) {
        vector<ListHostGroupsForUserGroupResponseBodyHostGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HostGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHostGroupsForUserGroupResponseBodyHostGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostGroups = make_shared<vector<ListHostGroupsForUserGroupResponseBodyHostGroups>>(expect1);
      }
    }
  }


  virtual ~ListHostGroupsForUserGroupResponseBody() = default;
};
class ListHostGroupsForUserGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListHostGroupsForUserGroupResponseBody> body{};

  ListHostGroupsForUserGroupResponse() {}

  explicit ListHostGroupsForUserGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListHostGroupsForUserGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHostGroupsForUserGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ListHostGroupsForUserGroupResponse() = default;
};
class ListHostsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> OSType{};
  shared_ptr<string> hostName{};
  shared_ptr<string> hostAddress{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceInstanceId{};
  shared_ptr<string> sourceInstanceState{};
  shared_ptr<string> hostGroupId{};

  ListHostsRequest() {}

  explicit ListHostsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (OSType) {
      res["OSType"] = boost::any(*OSType);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (hostAddress) {
      res["HostAddress"] = boost::any(*hostAddress);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceInstanceId) {
      res["SourceInstanceId"] = boost::any(*sourceInstanceId);
    }
    if (sourceInstanceState) {
      res["SourceInstanceState"] = boost::any(*sourceInstanceState);
    }
    if (hostGroupId) {
      res["HostGroupId"] = boost::any(*hostGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("OSType") != m.end() && !m["OSType"].empty()) {
      OSType = make_shared<string>(boost::any_cast<string>(m["OSType"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("HostAddress") != m.end() && !m["HostAddress"].empty()) {
      hostAddress = make_shared<string>(boost::any_cast<string>(m["HostAddress"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceInstanceId") != m.end() && !m["SourceInstanceId"].empty()) {
      sourceInstanceId = make_shared<string>(boost::any_cast<string>(m["SourceInstanceId"]));
    }
    if (m.find("SourceInstanceState") != m.end() && !m["SourceInstanceState"].empty()) {
      sourceInstanceState = make_shared<string>(boost::any_cast<string>(m["SourceInstanceState"]));
    }
    if (m.find("HostGroupId") != m.end() && !m["HostGroupId"].empty()) {
      hostGroupId = make_shared<string>(boost::any_cast<string>(m["HostGroupId"]));
    }
  }


  virtual ~ListHostsRequest() = default;
};
class ListHostsResponseBodyHosts : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> activeAddressType{};
  shared_ptr<string> hostPublicAddress{};
  shared_ptr<string> hostName{};
  shared_ptr<long> hostAccountCount{};
  shared_ptr<string> source{};
  shared_ptr<string> hostPrivateAddress{};
  shared_ptr<string> OSType{};
  shared_ptr<string> hostId{};
  shared_ptr<string> sourceInstanceState{};
  shared_ptr<string> sourceInstanceId{};

  ListHostsResponseBodyHosts() {}

  explicit ListHostsResponseBodyHosts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (activeAddressType) {
      res["ActiveAddressType"] = boost::any(*activeAddressType);
    }
    if (hostPublicAddress) {
      res["HostPublicAddress"] = boost::any(*hostPublicAddress);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (hostAccountCount) {
      res["HostAccountCount"] = boost::any(*hostAccountCount);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (hostPrivateAddress) {
      res["HostPrivateAddress"] = boost::any(*hostPrivateAddress);
    }
    if (OSType) {
      res["OSType"] = boost::any(*OSType);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (sourceInstanceState) {
      res["SourceInstanceState"] = boost::any(*sourceInstanceState);
    }
    if (sourceInstanceId) {
      res["SourceInstanceId"] = boost::any(*sourceInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("ActiveAddressType") != m.end() && !m["ActiveAddressType"].empty()) {
      activeAddressType = make_shared<string>(boost::any_cast<string>(m["ActiveAddressType"]));
    }
    if (m.find("HostPublicAddress") != m.end() && !m["HostPublicAddress"].empty()) {
      hostPublicAddress = make_shared<string>(boost::any_cast<string>(m["HostPublicAddress"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("HostAccountCount") != m.end() && !m["HostAccountCount"].empty()) {
      hostAccountCount = make_shared<long>(boost::any_cast<long>(m["HostAccountCount"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("HostPrivateAddress") != m.end() && !m["HostPrivateAddress"].empty()) {
      hostPrivateAddress = make_shared<string>(boost::any_cast<string>(m["HostPrivateAddress"]));
    }
    if (m.find("OSType") != m.end() && !m["OSType"].empty()) {
      OSType = make_shared<string>(boost::any_cast<string>(m["OSType"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("SourceInstanceState") != m.end() && !m["SourceInstanceState"].empty()) {
      sourceInstanceState = make_shared<string>(boost::any_cast<string>(m["SourceInstanceState"]));
    }
    if (m.find("SourceInstanceId") != m.end() && !m["SourceInstanceId"].empty()) {
      sourceInstanceId = make_shared<string>(boost::any_cast<string>(m["SourceInstanceId"]));
    }
  }


  virtual ~ListHostsResponseBodyHosts() = default;
};
class ListHostsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListHostsResponseBodyHosts>> hosts{};

  ListHostsResponseBody() {}

  explicit ListHostsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (hosts) {
      vector<boost::any> temp1;
      for(auto item1:*hosts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Hosts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Hosts") != m.end() && !m["Hosts"].empty()) {
      if (typeid(vector<boost::any>) == m["Hosts"].type()) {
        vector<ListHostsResponseBodyHosts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Hosts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHostsResponseBodyHosts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hosts = make_shared<vector<ListHostsResponseBodyHosts>>(expect1);
      }
    }
  }


  virtual ~ListHostsResponseBody() = default;
};
class ListHostsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListHostsResponseBody> body{};

  ListHostsResponse() {}

  explicit ListHostsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListHostsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHostsResponseBody>(model1);
      }
    }
  }


  virtual ~ListHostsResponse() = default;
};
class ListHostsForUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> mode{};
  shared_ptr<string> userId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> hostAddress{};
  shared_ptr<string> hostName{};
  shared_ptr<string> OSType{};

  ListHostsForUserRequest() {}

  explicit ListHostsForUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (hostAddress) {
      res["HostAddress"] = boost::any(*hostAddress);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (OSType) {
      res["OSType"] = boost::any(*OSType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("HostAddress") != m.end() && !m["HostAddress"].empty()) {
      hostAddress = make_shared<string>(boost::any_cast<string>(m["HostAddress"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("OSType") != m.end() && !m["OSType"].empty()) {
      OSType = make_shared<string>(boost::any_cast<string>(m["OSType"]));
    }
  }


  virtual ~ListHostsForUserRequest() = default;
};
class ListHostsForUserResponseBodyHosts : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> activeAddressType{};
  shared_ptr<string> hostPublicAddress{};
  shared_ptr<string> hostName{};
  shared_ptr<string> hostPrivateAddress{};
  shared_ptr<string> OSType{};
  shared_ptr<string> hostId{};

  ListHostsForUserResponseBodyHosts() {}

  explicit ListHostsForUserResponseBodyHosts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (activeAddressType) {
      res["ActiveAddressType"] = boost::any(*activeAddressType);
    }
    if (hostPublicAddress) {
      res["HostPublicAddress"] = boost::any(*hostPublicAddress);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (hostPrivateAddress) {
      res["HostPrivateAddress"] = boost::any(*hostPrivateAddress);
    }
    if (OSType) {
      res["OSType"] = boost::any(*OSType);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("ActiveAddressType") != m.end() && !m["ActiveAddressType"].empty()) {
      activeAddressType = make_shared<string>(boost::any_cast<string>(m["ActiveAddressType"]));
    }
    if (m.find("HostPublicAddress") != m.end() && !m["HostPublicAddress"].empty()) {
      hostPublicAddress = make_shared<string>(boost::any_cast<string>(m["HostPublicAddress"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("HostPrivateAddress") != m.end() && !m["HostPrivateAddress"].empty()) {
      hostPrivateAddress = make_shared<string>(boost::any_cast<string>(m["HostPrivateAddress"]));
    }
    if (m.find("OSType") != m.end() && !m["OSType"].empty()) {
      OSType = make_shared<string>(boost::any_cast<string>(m["OSType"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
  }


  virtual ~ListHostsForUserResponseBodyHosts() = default;
};
class ListHostsForUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListHostsForUserResponseBodyHosts>> hosts{};

  ListHostsForUserResponseBody() {}

  explicit ListHostsForUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (hosts) {
      vector<boost::any> temp1;
      for(auto item1:*hosts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Hosts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Hosts") != m.end() && !m["Hosts"].empty()) {
      if (typeid(vector<boost::any>) == m["Hosts"].type()) {
        vector<ListHostsForUserResponseBodyHosts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Hosts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHostsForUserResponseBodyHosts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hosts = make_shared<vector<ListHostsForUserResponseBodyHosts>>(expect1);
      }
    }
  }


  virtual ~ListHostsForUserResponseBody() = default;
};
class ListHostsForUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListHostsForUserResponseBody> body{};

  ListHostsForUserResponse() {}

  explicit ListHostsForUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListHostsForUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHostsForUserResponseBody>(model1);
      }
    }
  }


  virtual ~ListHostsForUserResponse() = default;
};
class ListHostsForUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> mode{};
  shared_ptr<string> userGroupId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> hostAddress{};
  shared_ptr<string> hostName{};
  shared_ptr<string> OSType{};

  ListHostsForUserGroupRequest() {}

  explicit ListHostsForUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (hostAddress) {
      res["HostAddress"] = boost::any(*hostAddress);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (OSType) {
      res["OSType"] = boost::any(*OSType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("HostAddress") != m.end() && !m["HostAddress"].empty()) {
      hostAddress = make_shared<string>(boost::any_cast<string>(m["HostAddress"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("OSType") != m.end() && !m["OSType"].empty()) {
      OSType = make_shared<string>(boost::any_cast<string>(m["OSType"]));
    }
  }


  virtual ~ListHostsForUserGroupRequest() = default;
};
class ListHostsForUserGroupResponseBodyHosts : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> activeAddressType{};
  shared_ptr<string> hostPublicAddress{};
  shared_ptr<string> hostName{};
  shared_ptr<string> hostPrivateAddress{};
  shared_ptr<string> OSType{};
  shared_ptr<string> hostId{};

  ListHostsForUserGroupResponseBodyHosts() {}

  explicit ListHostsForUserGroupResponseBodyHosts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (activeAddressType) {
      res["ActiveAddressType"] = boost::any(*activeAddressType);
    }
    if (hostPublicAddress) {
      res["HostPublicAddress"] = boost::any(*hostPublicAddress);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (hostPrivateAddress) {
      res["HostPrivateAddress"] = boost::any(*hostPrivateAddress);
    }
    if (OSType) {
      res["OSType"] = boost::any(*OSType);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("ActiveAddressType") != m.end() && !m["ActiveAddressType"].empty()) {
      activeAddressType = make_shared<string>(boost::any_cast<string>(m["ActiveAddressType"]));
    }
    if (m.find("HostPublicAddress") != m.end() && !m["HostPublicAddress"].empty()) {
      hostPublicAddress = make_shared<string>(boost::any_cast<string>(m["HostPublicAddress"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("HostPrivateAddress") != m.end() && !m["HostPrivateAddress"].empty()) {
      hostPrivateAddress = make_shared<string>(boost::any_cast<string>(m["HostPrivateAddress"]));
    }
    if (m.find("OSType") != m.end() && !m["OSType"].empty()) {
      OSType = make_shared<string>(boost::any_cast<string>(m["OSType"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
  }


  virtual ~ListHostsForUserGroupResponseBodyHosts() = default;
};
class ListHostsForUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListHostsForUserGroupResponseBodyHosts>> hosts{};

  ListHostsForUserGroupResponseBody() {}

  explicit ListHostsForUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (hosts) {
      vector<boost::any> temp1;
      for(auto item1:*hosts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Hosts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Hosts") != m.end() && !m["Hosts"].empty()) {
      if (typeid(vector<boost::any>) == m["Hosts"].type()) {
        vector<ListHostsForUserGroupResponseBodyHosts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Hosts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHostsForUserGroupResponseBodyHosts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hosts = make_shared<vector<ListHostsForUserGroupResponseBodyHosts>>(expect1);
      }
    }
  }


  virtual ~ListHostsForUserGroupResponseBody() = default;
};
class ListHostsForUserGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListHostsForUserGroupResponseBody> body{};

  ListHostsForUserGroupResponse() {}

  explicit ListHostsForUserGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListHostsForUserGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHostsForUserGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ListHostsForUserGroupResponse() = default;
};
class ListTagKeysRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  ListTagKeysRequest() {}

  explicit ListTagKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~ListTagKeysRequest() = default;
};
class ListTagKeysResponseBodyTagKeys : public Darabonba::Model {
public:
  shared_ptr<long> tagCount{};
  shared_ptr<string> tagKey{};

  ListTagKeysResponseBodyTagKeys() {}

  explicit ListTagKeysResponseBodyTagKeys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagCount) {
      res["TagCount"] = boost::any(*tagCount);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagCount") != m.end() && !m["TagCount"].empty()) {
      tagCount = make_shared<long>(boost::any_cast<long>(m["TagCount"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
  }


  virtual ~ListTagKeysResponseBodyTagKeys() = default;
};
class ListTagKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListTagKeysResponseBodyTagKeys>> tagKeys{};

  ListTagKeysResponseBody() {}

  explicit ListTagKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (tagKeys) {
      vector<boost::any> temp1;
      for(auto item1:*tagKeys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagKeys"] = boost::any(temp1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TagKeys") != m.end() && !m["TagKeys"].empty()) {
      if (typeid(vector<boost::any>) == m["TagKeys"].type()) {
        vector<ListTagKeysResponseBodyTagKeys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagKeys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagKeysResponseBodyTagKeys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagKeys = make_shared<vector<ListTagKeysResponseBodyTagKeys>>(expect1);
      }
    }
  }


  virtual ~ListTagKeysResponseBody() = default;
};
class ListTagKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTagKeysResponseBody> body{};

  ListTagKeysResponse() {}

  explicit ListTagKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTagKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagKeysResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagKeysResponse() = default;
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
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<vector<ListTagResourcesRequestTag>> tag{};

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
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
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
  }


  virtual ~ListTagResourcesRequest() = default;
};
class ListTagResourcesResponseBodyTagResources : public Darabonba::Model {
public:
  shared_ptr<string> tagValue{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> tagKey{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
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
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResources() = default;
};
class ListTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTagResourcesResponseBodyTagResources>> tagResources{};

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
    if (tagResources) {
      vector<boost::any> temp1;
      for(auto item1:*tagResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagResources"] = boost::any(temp1);
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
    if (m.find("TagResources") != m.end() && !m["TagResources"].empty()) {
      if (typeid(vector<boost::any>) == m["TagResources"].type()) {
        vector<ListTagResourcesResponseBodyTagResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagResources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesResponseBodyTagResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagResources = make_shared<vector<ListTagResourcesResponseBodyTagResources>>(expect1);
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
class ListUserGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> userGroupName{};

  ListUserGroupsRequest() {}

  explicit ListUserGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (userGroupName) {
      res["UserGroupName"] = boost::any(*userGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("UserGroupName") != m.end() && !m["UserGroupName"].empty()) {
      userGroupName = make_shared<string>(boost::any_cast<string>(m["UserGroupName"]));
    }
  }


  virtual ~ListUserGroupsRequest() = default;
};
class ListUserGroupsResponseBodyUserGroups : public Darabonba::Model {
public:
  shared_ptr<string> userGroupName{};
  shared_ptr<long> memberCount{};
  shared_ptr<string> comment{};
  shared_ptr<string> userGroupId{};

  ListUserGroupsResponseBodyUserGroups() {}

  explicit ListUserGroupsResponseBodyUserGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userGroupName) {
      res["UserGroupName"] = boost::any(*userGroupName);
    }
    if (memberCount) {
      res["MemberCount"] = boost::any(*memberCount);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserGroupName") != m.end() && !m["UserGroupName"].empty()) {
      userGroupName = make_shared<string>(boost::any_cast<string>(m["UserGroupName"]));
    }
    if (m.find("MemberCount") != m.end() && !m["MemberCount"].empty()) {
      memberCount = make_shared<long>(boost::any_cast<long>(m["MemberCount"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
  }


  virtual ~ListUserGroupsResponseBodyUserGroups() = default;
};
class ListUserGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListUserGroupsResponseBodyUserGroups>> userGroups{};

  ListUserGroupsResponseBody() {}

  explicit ListUserGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userGroups) {
      vector<boost::any> temp1;
      for(auto item1:*userGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserGroups"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserGroups") != m.end() && !m["UserGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["UserGroups"].type()) {
        vector<ListUserGroupsResponseBodyUserGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserGroupsResponseBodyUserGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userGroups = make_shared<vector<ListUserGroupsResponseBodyUserGroups>>(expect1);
      }
    }
  }


  virtual ~ListUserGroupsResponseBody() = default;
};
class ListUserGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListUserGroupsResponseBody> body{};

  ListUserGroupsResponse() {}

  explicit ListUserGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListUserGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserGroupsResponse() = default;
};
class ListUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> userName{};
  shared_ptr<string> displayName{};
  shared_ptr<string> source{};
  shared_ptr<string> mobile{};
  shared_ptr<string> userState{};
  shared_ptr<string> sourceUserId{};
  shared_ptr<string> userGroupId{};

  ListUsersRequest() {}

  explicit ListUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (userState) {
      res["UserState"] = boost::any(*userState);
    }
    if (sourceUserId) {
      res["SourceUserId"] = boost::any(*sourceUserId);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("UserState") != m.end() && !m["UserState"].empty()) {
      userState = make_shared<string>(boost::any_cast<string>(m["UserState"]));
    }
    if (m.find("SourceUserId") != m.end() && !m["SourceUserId"].empty()) {
      sourceUserId = make_shared<string>(boost::any_cast<string>(m["SourceUserId"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
  }


  virtual ~ListUsersRequest() = default;
};
class ListUsersResponseBodyUsers : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> email{};
  shared_ptr<string> comment{};
  shared_ptr<string> mobileCountryCode{};
  shared_ptr<string> mobile{};
  shared_ptr<string> userId{};
  shared_ptr<string> source{};
  shared_ptr<string> userName{};
  shared_ptr<string> sourceUserId{};
  shared_ptr<vector<string>> userState{};

  ListUsersResponseBodyUsers() {}

  explicit ListUsersResponseBodyUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (mobileCountryCode) {
      res["MobileCountryCode"] = boost::any(*mobileCountryCode);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (sourceUserId) {
      res["SourceUserId"] = boost::any(*sourceUserId);
    }
    if (userState) {
      res["UserState"] = boost::any(*userState);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("MobileCountryCode") != m.end() && !m["MobileCountryCode"].empty()) {
      mobileCountryCode = make_shared<string>(boost::any_cast<string>(m["MobileCountryCode"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("SourceUserId") != m.end() && !m["SourceUserId"].empty()) {
      sourceUserId = make_shared<string>(boost::any_cast<string>(m["SourceUserId"]));
    }
    if (m.find("UserState") != m.end() && !m["UserState"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserState"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserState"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userState = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListUsersResponseBodyUsers() = default;
};
class ListUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListUsersResponseBodyUsers>> users{};

  ListUsersResponseBody() {}

  explicit ListUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
  shared_ptr<ListUsersResponseBody> body{};

  ListUsersResponse() {}

  explicit ListUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class LockUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> userIds{};

  LockUsersRequest() {}

  explicit LockUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (userIds) {
      res["UserIds"] = boost::any(*userIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UserIds") != m.end() && !m["UserIds"].empty()) {
      userIds = make_shared<string>(boost::any_cast<string>(m["UserIds"]));
    }
  }


  virtual ~LockUsersRequest() = default;
};
class LockUsersResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> userId{};

  LockUsersResponseBodyResults() {}

  explicit LockUsersResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (userId) {
      res["UserId"] = boost::any(*userId);
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
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~LockUsersResponseBodyResults() = default;
};
class LockUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<LockUsersResponseBodyResults>> results{};

  LockUsersResponseBody() {}

  explicit LockUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<LockUsersResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LockUsersResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<LockUsersResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~LockUsersResponseBody() = default;
};
class LockUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<LockUsersResponseBody> body{};

  LockUsersResponse() {}

  explicit LockUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class ModifyHostRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> hostId{};
  shared_ptr<string> hostPrivateAddress{};
  shared_ptr<string> hostPublicAddress{};
  shared_ptr<string> OSType{};
  shared_ptr<string> hostName{};
  shared_ptr<string> comment{};

  ModifyHostRequest() {}

  explicit ModifyHostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (hostPrivateAddress) {
      res["HostPrivateAddress"] = boost::any(*hostPrivateAddress);
    }
    if (hostPublicAddress) {
      res["HostPublicAddress"] = boost::any(*hostPublicAddress);
    }
    if (OSType) {
      res["OSType"] = boost::any(*OSType);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("HostPrivateAddress") != m.end() && !m["HostPrivateAddress"].empty()) {
      hostPrivateAddress = make_shared<string>(boost::any_cast<string>(m["HostPrivateAddress"]));
    }
    if (m.find("HostPublicAddress") != m.end() && !m["HostPublicAddress"].empty()) {
      hostPublicAddress = make_shared<string>(boost::any_cast<string>(m["HostPublicAddress"]));
    }
    if (m.find("OSType") != m.end() && !m["OSType"].empty()) {
      OSType = make_shared<string>(boost::any_cast<string>(m["OSType"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
  }


  virtual ~ModifyHostRequest() = default;
};
class ModifyHostResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyHostResponseBody() {}

  explicit ModifyHostResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyHostResponseBody() = default;
};
class ModifyHostResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyHostResponseBody> body{};

  ModifyHostResponse() {}

  explicit ModifyHostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyHostResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyHostResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyHostResponse() = default;
};
class ModifyHostAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> hostAccountId{};
  shared_ptr<string> hostAccountName{};
  shared_ptr<string> password{};
  shared_ptr<string> privateKey{};
  shared_ptr<string> passPhrase{};

  ModifyHostAccountRequest() {}

  explicit ModifyHostAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (hostAccountId) {
      res["HostAccountId"] = boost::any(*hostAccountId);
    }
    if (hostAccountName) {
      res["HostAccountName"] = boost::any(*hostAccountName);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (privateKey) {
      res["PrivateKey"] = boost::any(*privateKey);
    }
    if (passPhrase) {
      res["PassPhrase"] = boost::any(*passPhrase);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("HostAccountId") != m.end() && !m["HostAccountId"].empty()) {
      hostAccountId = make_shared<string>(boost::any_cast<string>(m["HostAccountId"]));
    }
    if (m.find("HostAccountName") != m.end() && !m["HostAccountName"].empty()) {
      hostAccountName = make_shared<string>(boost::any_cast<string>(m["HostAccountName"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("PrivateKey") != m.end() && !m["PrivateKey"].empty()) {
      privateKey = make_shared<string>(boost::any_cast<string>(m["PrivateKey"]));
    }
    if (m.find("PassPhrase") != m.end() && !m["PassPhrase"].empty()) {
      passPhrase = make_shared<string>(boost::any_cast<string>(m["PassPhrase"]));
    }
  }


  virtual ~ModifyHostAccountRequest() = default;
};
class ModifyHostAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyHostAccountResponseBody() {}

  explicit ModifyHostAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyHostAccountResponseBody() = default;
};
class ModifyHostAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyHostAccountResponseBody> body{};

  ModifyHostAccountResponse() {}

  explicit ModifyHostAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyHostAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyHostAccountResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyHostAccountResponse() = default;
};
class ModifyHostGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> hostGroupId{};
  shared_ptr<string> hostGroupName{};
  shared_ptr<string> comment{};

  ModifyHostGroupRequest() {}

  explicit ModifyHostGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (hostGroupId) {
      res["HostGroupId"] = boost::any(*hostGroupId);
    }
    if (hostGroupName) {
      res["HostGroupName"] = boost::any(*hostGroupName);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("HostGroupId") != m.end() && !m["HostGroupId"].empty()) {
      hostGroupId = make_shared<string>(boost::any_cast<string>(m["HostGroupId"]));
    }
    if (m.find("HostGroupName") != m.end() && !m["HostGroupName"].empty()) {
      hostGroupName = make_shared<string>(boost::any_cast<string>(m["HostGroupName"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
  }


  virtual ~ModifyHostGroupRequest() = default;
};
class ModifyHostGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyHostGroupResponseBody() {}

  explicit ModifyHostGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyHostGroupResponseBody() = default;
};
class ModifyHostGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyHostGroupResponseBody> body{};

  ModifyHostGroupResponse() {}

  explicit ModifyHostGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyHostGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyHostGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyHostGroupResponse() = default;
};
class ModifyHostsActiveAddressTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> hostIds{};
  shared_ptr<string> activeAddressType{};

  ModifyHostsActiveAddressTypeRequest() {}

  explicit ModifyHostsActiveAddressTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (hostIds) {
      res["HostIds"] = boost::any(*hostIds);
    }
    if (activeAddressType) {
      res["ActiveAddressType"] = boost::any(*activeAddressType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("HostIds") != m.end() && !m["HostIds"].empty()) {
      hostIds = make_shared<string>(boost::any_cast<string>(m["HostIds"]));
    }
    if (m.find("ActiveAddressType") != m.end() && !m["ActiveAddressType"].empty()) {
      activeAddressType = make_shared<string>(boost::any_cast<string>(m["ActiveAddressType"]));
    }
  }


  virtual ~ModifyHostsActiveAddressTypeRequest() = default;
};
class ModifyHostsActiveAddressTypeResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> hostId{};

  ModifyHostsActiveAddressTypeResponseBodyResults() {}

  explicit ModifyHostsActiveAddressTypeResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
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
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
  }


  virtual ~ModifyHostsActiveAddressTypeResponseBodyResults() = default;
};
class ModifyHostsActiveAddressTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ModifyHostsActiveAddressTypeResponseBodyResults>> results{};

  ModifyHostsActiveAddressTypeResponseBody() {}

  explicit ModifyHostsActiveAddressTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<ModifyHostsActiveAddressTypeResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyHostsActiveAddressTypeResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<ModifyHostsActiveAddressTypeResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~ModifyHostsActiveAddressTypeResponseBody() = default;
};
class ModifyHostsActiveAddressTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyHostsActiveAddressTypeResponseBody> body{};

  ModifyHostsActiveAddressTypeResponse() {}

  explicit ModifyHostsActiveAddressTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyHostsActiveAddressTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyHostsActiveAddressTypeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyHostsActiveAddressTypeResponse() = default;
};
class ModifyHostsPortRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> hostIds{};
  shared_ptr<string> protocolName{};
  shared_ptr<string> port{};

  ModifyHostsPortRequest() {}

  explicit ModifyHostsPortRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (hostIds) {
      res["HostIds"] = boost::any(*hostIds);
    }
    if (protocolName) {
      res["ProtocolName"] = boost::any(*protocolName);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("HostIds") != m.end() && !m["HostIds"].empty()) {
      hostIds = make_shared<string>(boost::any_cast<string>(m["HostIds"]));
    }
    if (m.find("ProtocolName") != m.end() && !m["ProtocolName"].empty()) {
      protocolName = make_shared<string>(boost::any_cast<string>(m["ProtocolName"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
  }


  virtual ~ModifyHostsPortRequest() = default;
};
class ModifyHostsPortResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> hostId{};

  ModifyHostsPortResponseBodyResults() {}

  explicit ModifyHostsPortResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
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
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
  }


  virtual ~ModifyHostsPortResponseBodyResults() = default;
};
class ModifyHostsPortResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ModifyHostsPortResponseBodyResults>> results{};

  ModifyHostsPortResponseBody() {}

  explicit ModifyHostsPortResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<ModifyHostsPortResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyHostsPortResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<ModifyHostsPortResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~ModifyHostsPortResponseBody() = default;
};
class ModifyHostsPortResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyHostsPortResponseBody> body{};

  ModifyHostsPortResponse() {}

  explicit ModifyHostsPortResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyHostsPortResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyHostsPortResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyHostsPortResponse() = default;
};
class ModifyInstanceAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> description{};
  shared_ptr<string> regionId{};

  ModifyInstanceAttributeRequest() {}

  explicit ModifyInstanceAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ModifyInstanceAttributeRequest() = default;
};
class ModifyInstanceAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyInstanceAttributeResponseBody() {}

  explicit ModifyInstanceAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyInstanceAttributeResponseBody() = default;
};
class ModifyInstanceAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyInstanceAttributeResponseBody> body{};

  ModifyInstanceAttributeResponse() {}

  explicit ModifyInstanceAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyInstanceAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceAttributeResponse() = default;
};
class ModifyInstanceUpgradePeriodRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> upgradeStartTime{};
  shared_ptr<string> upgradeMode{};

  ModifyInstanceUpgradePeriodRequest() {}

  explicit ModifyInstanceUpgradePeriodRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (upgradeStartTime) {
      res["UpgradeStartTime"] = boost::any(*upgradeStartTime);
    }
    if (upgradeMode) {
      res["UpgradeMode"] = boost::any(*upgradeMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UpgradeStartTime") != m.end() && !m["UpgradeStartTime"].empty()) {
      upgradeStartTime = make_shared<string>(boost::any_cast<string>(m["UpgradeStartTime"]));
    }
    if (m.find("UpgradeMode") != m.end() && !m["UpgradeMode"].empty()) {
      upgradeMode = make_shared<string>(boost::any_cast<string>(m["UpgradeMode"]));
    }
  }


  virtual ~ModifyInstanceUpgradePeriodRequest() = default;
};
class ModifyInstanceUpgradePeriodResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyInstanceUpgradePeriodResponseBody() {}

  explicit ModifyInstanceUpgradePeriodResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyInstanceUpgradePeriodResponseBody() = default;
};
class ModifyInstanceUpgradePeriodResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyInstanceUpgradePeriodResponseBody> body{};

  ModifyInstanceUpgradePeriodResponse() {}

  explicit ModifyInstanceUpgradePeriodResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyInstanceUpgradePeriodResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceUpgradePeriodResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceUpgradePeriodResponse() = default;
};
class ModifyUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> userId{};
  shared_ptr<string> password{};
  shared_ptr<string> displayName{};
  shared_ptr<string> comment{};
  shared_ptr<string> email{};
  shared_ptr<string> mobile{};
  shared_ptr<string> mobileCountryCode{};

  ModifyUserRequest() {}

  explicit ModifyUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (mobileCountryCode) {
      res["MobileCountryCode"] = boost::any(*mobileCountryCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("MobileCountryCode") != m.end() && !m["MobileCountryCode"].empty()) {
      mobileCountryCode = make_shared<string>(boost::any_cast<string>(m["MobileCountryCode"]));
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
  shared_ptr<ModifyUserResponseBody> body{};

  ModifyUserResponse() {}

  explicit ModifyUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class ModifyUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> userGroupId{};
  shared_ptr<string> userGroupName{};
  shared_ptr<string> comment{};

  ModifyUserGroupRequest() {}

  explicit ModifyUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (userGroupName) {
      res["UserGroupName"] = boost::any(*userGroupName);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("UserGroupName") != m.end() && !m["UserGroupName"].empty()) {
      userGroupName = make_shared<string>(boost::any_cast<string>(m["UserGroupName"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
  }


  virtual ~ModifyUserGroupRequest() = default;
};
class ModifyUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyUserGroupResponseBody() {}

  explicit ModifyUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyUserGroupResponseBody() = default;
};
class ModifyUserGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyUserGroupResponseBody> body{};

  ModifyUserGroupResponse() {}

  explicit ModifyUserGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyUserGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyUserGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyUserGroupResponse() = default;
};
class MoveResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> regionId{};

  MoveResourceGroupRequest() {}

  explicit MoveResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~MoveResourceGroupRequest() = default;
};
class MoveResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  MoveResourceGroupResponseBody() {}

  explicit MoveResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~MoveResourceGroupResponseBody() = default;
};
class MoveResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<MoveResourceGroupResponseBody> body{};

  MoveResourceGroupResponse() {}

  explicit MoveResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        MoveResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MoveResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~MoveResourceGroupResponse() = default;
};
class RemoveHostsFromGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> hostGroupId{};
  shared_ptr<string> hostIds{};

  RemoveHostsFromGroupRequest() {}

  explicit RemoveHostsFromGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (hostGroupId) {
      res["HostGroupId"] = boost::any(*hostGroupId);
    }
    if (hostIds) {
      res["HostIds"] = boost::any(*hostIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("HostGroupId") != m.end() && !m["HostGroupId"].empty()) {
      hostGroupId = make_shared<string>(boost::any_cast<string>(m["HostGroupId"]));
    }
    if (m.find("HostIds") != m.end() && !m["HostIds"].empty()) {
      hostIds = make_shared<string>(boost::any_cast<string>(m["HostIds"]));
    }
  }


  virtual ~RemoveHostsFromGroupRequest() = default;
};
class RemoveHostsFromGroupResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> hostGroupId{};
  shared_ptr<string> hostId{};

  RemoveHostsFromGroupResponseBodyResults() {}

  explicit RemoveHostsFromGroupResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (hostGroupId) {
      res["HostGroupId"] = boost::any(*hostGroupId);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
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
    if (m.find("HostGroupId") != m.end() && !m["HostGroupId"].empty()) {
      hostGroupId = make_shared<string>(boost::any_cast<string>(m["HostGroupId"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
  }


  virtual ~RemoveHostsFromGroupResponseBodyResults() = default;
};
class RemoveHostsFromGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<RemoveHostsFromGroupResponseBodyResults>> results{};

  RemoveHostsFromGroupResponseBody() {}

  explicit RemoveHostsFromGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<RemoveHostsFromGroupResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RemoveHostsFromGroupResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<RemoveHostsFromGroupResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~RemoveHostsFromGroupResponseBody() = default;
};
class RemoveHostsFromGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveHostsFromGroupResponseBody> body{};

  RemoveHostsFromGroupResponse() {}

  explicit RemoveHostsFromGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveHostsFromGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveHostsFromGroupResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveHostsFromGroupResponse() = default;
};
class RemoveUsersFromGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> userGroupId{};
  shared_ptr<string> userIds{};

  RemoveUsersFromGroupRequest() {}

  explicit RemoveUsersFromGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (userIds) {
      res["UserIds"] = boost::any(*userIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("UserIds") != m.end() && !m["UserIds"].empty()) {
      userIds = make_shared<string>(boost::any_cast<string>(m["UserIds"]));
    }
  }


  virtual ~RemoveUsersFromGroupRequest() = default;
};
class RemoveUsersFromGroupResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> userGroupId{};
  shared_ptr<string> userId{};

  RemoveUsersFromGroupResponseBodyResults() {}

  explicit RemoveUsersFromGroupResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
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
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~RemoveUsersFromGroupResponseBodyResults() = default;
};
class RemoveUsersFromGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<RemoveUsersFromGroupResponseBodyResults>> results{};

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
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<RemoveUsersFromGroupResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RemoveUsersFromGroupResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<RemoveUsersFromGroupResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~RemoveUsersFromGroupResponseBody() = default;
};
class RemoveUsersFromGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveUsersFromGroupResponseBody> body{};

  RemoveUsersFromGroupResponse() {}

  explicit RemoveUsersFromGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class ResetHostAccountCredentialRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> hostAccountId{};
  shared_ptr<string> credentialType{};

  ResetHostAccountCredentialRequest() {}

  explicit ResetHostAccountCredentialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (hostAccountId) {
      res["HostAccountId"] = boost::any(*hostAccountId);
    }
    if (credentialType) {
      res["CredentialType"] = boost::any(*credentialType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("HostAccountId") != m.end() && !m["HostAccountId"].empty()) {
      hostAccountId = make_shared<string>(boost::any_cast<string>(m["HostAccountId"]));
    }
    if (m.find("CredentialType") != m.end() && !m["CredentialType"].empty()) {
      credentialType = make_shared<string>(boost::any_cast<string>(m["CredentialType"]));
    }
  }


  virtual ~ResetHostAccountCredentialRequest() = default;
};
class ResetHostAccountCredentialResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResetHostAccountCredentialResponseBody() {}

  explicit ResetHostAccountCredentialResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResetHostAccountCredentialResponseBody() = default;
};
class ResetHostAccountCredentialResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ResetHostAccountCredentialResponseBody> body{};

  ResetHostAccountCredentialResponse() {}

  explicit ResetHostAccountCredentialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ResetHostAccountCredentialResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetHostAccountCredentialResponseBody>(model1);
      }
    }
  }


  virtual ~ResetHostAccountCredentialResponse() = default;
};
class StartInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> securityGroupIds{};

  StartInstanceRequest() {}

  explicit StartInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityGroupIds) {
      res["SecurityGroupIds"] = boost::any(*securityGroupIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityGroupIds") != m.end() && !m["SecurityGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecurityGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecurityGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityGroupIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~StartInstanceRequest() = default;
};
class StartInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestId{};

  StartInstanceResponseBody() {}

  explicit StartInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartInstanceResponseBody() = default;
};
class StartInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartInstanceResponseBody> body{};

  StartInstanceResponse() {}

  explicit StartInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~StartInstanceResponse() = default;
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
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<vector<TagResourcesRequestTag>> tag{};

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
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
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
  }


  virtual ~TagResourcesRequest() = default;
};
class TagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TagResourcesResponseBody() {}

  explicit TagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
class UnlockUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> userIds{};

  UnlockUsersRequest() {}

  explicit UnlockUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (userIds) {
      res["UserIds"] = boost::any(*userIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UserIds") != m.end() && !m["UserIds"].empty()) {
      userIds = make_shared<string>(boost::any_cast<string>(m["UserIds"]));
    }
  }


  virtual ~UnlockUsersRequest() = default;
};
class UnlockUsersResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> userId{};

  UnlockUsersResponseBodyResults() {}

  explicit UnlockUsersResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (userId) {
      res["UserId"] = boost::any(*userId);
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
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~UnlockUsersResponseBodyResults() = default;
};
class UnlockUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<UnlockUsersResponseBodyResults>> results{};

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
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<UnlockUsersResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UnlockUsersResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<UnlockUsersResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~UnlockUsersResponseBody() = default;
};
class UnlockUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UnlockUsersResponseBody> body{};

  UnlockUsersResponse() {}

  explicit UnlockUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<string> requestId{};

  UntagResourcesResponseBody() {}

  explicit UntagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
class UpgradeInstanceImageVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  UpgradeInstanceImageVersionRequest() {}

  explicit UpgradeInstanceImageVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpgradeInstanceImageVersionRequest() = default;
};
class UpgradeInstanceImageVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpgradeInstanceImageVersionResponseBody() {}

  explicit UpgradeInstanceImageVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpgradeInstanceImageVersionResponseBody() = default;
};
class UpgradeInstanceImageVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpgradeInstanceImageVersionResponseBody> body{};

  UpgradeInstanceImageVersionResponse() {}

  explicit UpgradeInstanceImageVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpgradeInstanceImageVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeInstanceImageVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeInstanceImageVersionResponse() = default;
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
  AddHostsToGroupResponse addHostsToGroupWithOptions(shared_ptr<AddHostsToGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddHostsToGroupResponse addHostsToGroup(shared_ptr<AddHostsToGroupRequest> request);
  AddUsersToGroupResponse addUsersToGroupWithOptions(shared_ptr<AddUsersToGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddUsersToGroupResponse addUsersToGroup(shared_ptr<AddUsersToGroupRequest> request);
  AttachHostAccountsToUserResponse attachHostAccountsToUserWithOptions(shared_ptr<AttachHostAccountsToUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachHostAccountsToUserResponse attachHostAccountsToUser(shared_ptr<AttachHostAccountsToUserRequest> request);
  AttachHostAccountsToUserGroupResponse attachHostAccountsToUserGroupWithOptions(shared_ptr<AttachHostAccountsToUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachHostAccountsToUserGroupResponse attachHostAccountsToUserGroup(shared_ptr<AttachHostAccountsToUserGroupRequest> request);
  AttachHostGroupAccountsToUserResponse attachHostGroupAccountsToUserWithOptions(shared_ptr<AttachHostGroupAccountsToUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachHostGroupAccountsToUserResponse attachHostGroupAccountsToUser(shared_ptr<AttachHostGroupAccountsToUserRequest> request);
  AttachHostGroupAccountsToUserGroupResponse attachHostGroupAccountsToUserGroupWithOptions(shared_ptr<AttachHostGroupAccountsToUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachHostGroupAccountsToUserGroupResponse attachHostGroupAccountsToUserGroup(shared_ptr<AttachHostGroupAccountsToUserGroupRequest> request);
  ConfigInstanceSecurityGroupsResponse configInstanceSecurityGroupsWithOptions(shared_ptr<ConfigInstanceSecurityGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigInstanceSecurityGroupsResponse configInstanceSecurityGroups(shared_ptr<ConfigInstanceSecurityGroupsRequest> request);
  ConfigInstanceWhiteListResponse configInstanceWhiteListWithOptions(shared_ptr<ConfigInstanceWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigInstanceWhiteListResponse configInstanceWhiteList(shared_ptr<ConfigInstanceWhiteListRequest> request);
  CreateHostResponse createHostWithOptions(shared_ptr<CreateHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateHostResponse createHost(shared_ptr<CreateHostRequest> request);
  CreateHostAccountResponse createHostAccountWithOptions(shared_ptr<CreateHostAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateHostAccountResponse createHostAccount(shared_ptr<CreateHostAccountRequest> request);
  CreateHostGroupResponse createHostGroupWithOptions(shared_ptr<CreateHostGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateHostGroupResponse createHostGroup(shared_ptr<CreateHostGroupRequest> request);
  CreateUserResponse createUserWithOptions(shared_ptr<CreateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUserResponse createUser(shared_ptr<CreateUserRequest> request);
  CreateUserGroupResponse createUserGroupWithOptions(shared_ptr<CreateUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUserGroupResponse createUserGroup(shared_ptr<CreateUserGroupRequest> request);
  DeleteHostResponse deleteHostWithOptions(shared_ptr<DeleteHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteHostResponse deleteHost(shared_ptr<DeleteHostRequest> request);
  DeleteHostAccountResponse deleteHostAccountWithOptions(shared_ptr<DeleteHostAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteHostAccountResponse deleteHostAccount(shared_ptr<DeleteHostAccountRequest> request);
  DeleteHostGroupResponse deleteHostGroupWithOptions(shared_ptr<DeleteHostGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteHostGroupResponse deleteHostGroup(shared_ptr<DeleteHostGroupRequest> request);
  DeleteUserResponse deleteUserWithOptions(shared_ptr<DeleteUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserResponse deleteUser(shared_ptr<DeleteUserRequest> request);
  DeleteUserGroupResponse deleteUserGroupWithOptions(shared_ptr<DeleteUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserGroupResponse deleteUserGroup(shared_ptr<DeleteUserGroupRequest> request);
  DescribeInstanceAttributeResponse describeInstanceAttributeWithOptions(shared_ptr<DescribeInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceAttributeResponse describeInstanceAttribute(shared_ptr<DescribeInstanceAttributeRequest> request);
  DescribeInstancesResponse describeInstancesWithOptions(shared_ptr<DescribeInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstancesResponse describeInstances(shared_ptr<DescribeInstancesRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DetachHostAccountsFromUserResponse detachHostAccountsFromUserWithOptions(shared_ptr<DetachHostAccountsFromUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachHostAccountsFromUserResponse detachHostAccountsFromUser(shared_ptr<DetachHostAccountsFromUserRequest> request);
  DetachHostAccountsFromUserGroupResponse detachHostAccountsFromUserGroupWithOptions(shared_ptr<DetachHostAccountsFromUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachHostAccountsFromUserGroupResponse detachHostAccountsFromUserGroup(shared_ptr<DetachHostAccountsFromUserGroupRequest> request);
  DetachHostGroupAccountsFromUserResponse detachHostGroupAccountsFromUserWithOptions(shared_ptr<DetachHostGroupAccountsFromUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachHostGroupAccountsFromUserResponse detachHostGroupAccountsFromUser(shared_ptr<DetachHostGroupAccountsFromUserRequest> request);
  DetachHostGroupAccountsFromUserGroupResponse detachHostGroupAccountsFromUserGroupWithOptions(shared_ptr<DetachHostGroupAccountsFromUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachHostGroupAccountsFromUserGroupResponse detachHostGroupAccountsFromUserGroup(shared_ptr<DetachHostGroupAccountsFromUserGroupRequest> request);
  DisableInstancePublicAccessResponse disableInstancePublicAccessWithOptions(shared_ptr<DisableInstancePublicAccessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableInstancePublicAccessResponse disableInstancePublicAccess(shared_ptr<DisableInstancePublicAccessRequest> request);
  EnableInstancePublicAccessResponse enableInstancePublicAccessWithOptions(shared_ptr<EnableInstancePublicAccessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableInstancePublicAccessResponse enableInstancePublicAccess(shared_ptr<EnableInstancePublicAccessRequest> request);
  GetHostResponse getHostWithOptions(shared_ptr<GetHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHostResponse getHost(shared_ptr<GetHostRequest> request);
  GetHostAccountResponse getHostAccountWithOptions(shared_ptr<GetHostAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHostAccountResponse getHostAccount(shared_ptr<GetHostAccountRequest> request);
  GetHostGroupResponse getHostGroupWithOptions(shared_ptr<GetHostGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHostGroupResponse getHostGroup(shared_ptr<GetHostGroupRequest> request);
  GetInstanceUpgradeInfoResponse getInstanceUpgradeInfoWithOptions(shared_ptr<GetInstanceUpgradeInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceUpgradeInfoResponse getInstanceUpgradeInfo(shared_ptr<GetInstanceUpgradeInfoRequest> request);
  GetUserResponse getUserWithOptions(shared_ptr<GetUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserResponse getUser(shared_ptr<GetUserRequest> request);
  GetUserGroupResponse getUserGroupWithOptions(shared_ptr<GetUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserGroupResponse getUserGroup(shared_ptr<GetUserGroupRequest> request);
  ListHostAccountsResponse listHostAccountsWithOptions(shared_ptr<ListHostAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHostAccountsResponse listHostAccounts(shared_ptr<ListHostAccountsRequest> request);
  ListHostAccountsForUserResponse listHostAccountsForUserWithOptions(shared_ptr<ListHostAccountsForUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHostAccountsForUserResponse listHostAccountsForUser(shared_ptr<ListHostAccountsForUserRequest> request);
  ListHostAccountsForUserGroupResponse listHostAccountsForUserGroupWithOptions(shared_ptr<ListHostAccountsForUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHostAccountsForUserGroupResponse listHostAccountsForUserGroup(shared_ptr<ListHostAccountsForUserGroupRequest> request);
  ListHostGroupAccountNamesForUserResponse listHostGroupAccountNamesForUserWithOptions(shared_ptr<ListHostGroupAccountNamesForUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHostGroupAccountNamesForUserResponse listHostGroupAccountNamesForUser(shared_ptr<ListHostGroupAccountNamesForUserRequest> request);
  ListHostGroupAccountNamesForUserGroupResponse listHostGroupAccountNamesForUserGroupWithOptions(shared_ptr<ListHostGroupAccountNamesForUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHostGroupAccountNamesForUserGroupResponse listHostGroupAccountNamesForUserGroup(shared_ptr<ListHostGroupAccountNamesForUserGroupRequest> request);
  ListHostGroupsResponse listHostGroupsWithOptions(shared_ptr<ListHostGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHostGroupsResponse listHostGroups(shared_ptr<ListHostGroupsRequest> request);
  ListHostGroupsForUserResponse listHostGroupsForUserWithOptions(shared_ptr<ListHostGroupsForUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHostGroupsForUserResponse listHostGroupsForUser(shared_ptr<ListHostGroupsForUserRequest> request);
  ListHostGroupsForUserGroupResponse listHostGroupsForUserGroupWithOptions(shared_ptr<ListHostGroupsForUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHostGroupsForUserGroupResponse listHostGroupsForUserGroup(shared_ptr<ListHostGroupsForUserGroupRequest> request);
  ListHostsResponse listHostsWithOptions(shared_ptr<ListHostsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHostsResponse listHosts(shared_ptr<ListHostsRequest> request);
  ListHostsForUserResponse listHostsForUserWithOptions(shared_ptr<ListHostsForUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHostsForUserResponse listHostsForUser(shared_ptr<ListHostsForUserRequest> request);
  ListHostsForUserGroupResponse listHostsForUserGroupWithOptions(shared_ptr<ListHostsForUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHostsForUserGroupResponse listHostsForUserGroup(shared_ptr<ListHostsForUserGroupRequest> request);
  ListTagKeysResponse listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagKeysResponse listTagKeys(shared_ptr<ListTagKeysRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ListUserGroupsResponse listUserGroupsWithOptions(shared_ptr<ListUserGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserGroupsResponse listUserGroups(shared_ptr<ListUserGroupsRequest> request);
  ListUsersResponse listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUsersResponse listUsers(shared_ptr<ListUsersRequest> request);
  LockUsersResponse lockUsersWithOptions(shared_ptr<LockUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LockUsersResponse lockUsers(shared_ptr<LockUsersRequest> request);
  ModifyHostResponse modifyHostWithOptions(shared_ptr<ModifyHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyHostResponse modifyHost(shared_ptr<ModifyHostRequest> request);
  ModifyHostAccountResponse modifyHostAccountWithOptions(shared_ptr<ModifyHostAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyHostAccountResponse modifyHostAccount(shared_ptr<ModifyHostAccountRequest> request);
  ModifyHostGroupResponse modifyHostGroupWithOptions(shared_ptr<ModifyHostGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyHostGroupResponse modifyHostGroup(shared_ptr<ModifyHostGroupRequest> request);
  ModifyHostsActiveAddressTypeResponse modifyHostsActiveAddressTypeWithOptions(shared_ptr<ModifyHostsActiveAddressTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyHostsActiveAddressTypeResponse modifyHostsActiveAddressType(shared_ptr<ModifyHostsActiveAddressTypeRequest> request);
  ModifyHostsPortResponse modifyHostsPortWithOptions(shared_ptr<ModifyHostsPortRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyHostsPortResponse modifyHostsPort(shared_ptr<ModifyHostsPortRequest> request);
  ModifyInstanceAttributeResponse modifyInstanceAttributeWithOptions(shared_ptr<ModifyInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceAttributeResponse modifyInstanceAttribute(shared_ptr<ModifyInstanceAttributeRequest> request);
  ModifyInstanceUpgradePeriodResponse modifyInstanceUpgradePeriodWithOptions(shared_ptr<ModifyInstanceUpgradePeriodRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceUpgradePeriodResponse modifyInstanceUpgradePeriod(shared_ptr<ModifyInstanceUpgradePeriodRequest> request);
  ModifyUserResponse modifyUserWithOptions(shared_ptr<ModifyUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyUserResponse modifyUser(shared_ptr<ModifyUserRequest> request);
  ModifyUserGroupResponse modifyUserGroupWithOptions(shared_ptr<ModifyUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyUserGroupResponse modifyUserGroup(shared_ptr<ModifyUserGroupRequest> request);
  MoveResourceGroupResponse moveResourceGroupWithOptions(shared_ptr<MoveResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MoveResourceGroupResponse moveResourceGroup(shared_ptr<MoveResourceGroupRequest> request);
  RemoveHostsFromGroupResponse removeHostsFromGroupWithOptions(shared_ptr<RemoveHostsFromGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveHostsFromGroupResponse removeHostsFromGroup(shared_ptr<RemoveHostsFromGroupRequest> request);
  RemoveUsersFromGroupResponse removeUsersFromGroupWithOptions(shared_ptr<RemoveUsersFromGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveUsersFromGroupResponse removeUsersFromGroup(shared_ptr<RemoveUsersFromGroupRequest> request);
  ResetHostAccountCredentialResponse resetHostAccountCredentialWithOptions(shared_ptr<ResetHostAccountCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetHostAccountCredentialResponse resetHostAccountCredential(shared_ptr<ResetHostAccountCredentialRequest> request);
  StartInstanceResponse startInstanceWithOptions(shared_ptr<StartInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartInstanceResponse startInstance(shared_ptr<StartInstanceRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UnlockUsersResponse unlockUsersWithOptions(shared_ptr<UnlockUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnlockUsersResponse unlockUsers(shared_ptr<UnlockUsersRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpgradeInstanceImageVersionResponse upgradeInstanceImageVersionWithOptions(shared_ptr<UpgradeInstanceImageVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeInstanceImageVersionResponse upgradeInstanceImageVersion(shared_ptr<UpgradeInstanceImageVersionRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Yundun-bastionhost20191209

#endif
