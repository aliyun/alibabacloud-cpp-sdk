// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ALIDING20230426_H_
#define ALIBABACLOUD_ALIDING20230426_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Aliding20230426 {
class AddWorkspaceDocMembersHeadersAccountContext : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  AddWorkspaceDocMembersHeadersAccountContext() {}

  explicit AddWorkspaceDocMembersHeadersAccountContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
  }


  virtual ~AddWorkspaceDocMembersHeadersAccountContext() = default;
};
class AddWorkspaceDocMembersHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<AddWorkspaceDocMembersHeadersAccountContext> accountContext{};

  AddWorkspaceDocMembersHeaders() {}

  explicit AddWorkspaceDocMembersHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (accountContext) {
      res["AccountContext"] = accountContext ? boost::any(accountContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("AccountContext") != m.end() && !m["AccountContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccountContext"].type()) {
        AddWorkspaceDocMembersHeadersAccountContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccountContext"]));
        accountContext = make_shared<AddWorkspaceDocMembersHeadersAccountContext>(model1);
      }
    }
  }


  virtual ~AddWorkspaceDocMembersHeaders() = default;
};
class AddWorkspaceDocMembersShrinkHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> accountContextShrink{};

  AddWorkspaceDocMembersShrinkHeaders() {}

  explicit AddWorkspaceDocMembersShrinkHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (accountContextShrink) {
      res["AccountContext"] = boost::any(*accountContextShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("AccountContext") != m.end() && !m["AccountContext"].empty()) {
      accountContextShrink = make_shared<string>(boost::any_cast<string>(m["AccountContext"]));
    }
  }


  virtual ~AddWorkspaceDocMembersShrinkHeaders() = default;
};
class AddWorkspaceDocMembersRequestMembers : public Darabonba::Model {
public:
  shared_ptr<string> memberId{};
  shared_ptr<string> memberType{};
  shared_ptr<string> roleType{};

  AddWorkspaceDocMembersRequestMembers() {}

  explicit AddWorkspaceDocMembersRequestMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (memberType) {
      res["MemberType"] = boost::any(*memberType);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("MemberType") != m.end() && !m["MemberType"].empty()) {
      memberType = make_shared<string>(boost::any_cast<string>(m["MemberType"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
  }


  virtual ~AddWorkspaceDocMembersRequestMembers() = default;
};
class AddWorkspaceDocMembersRequestTenantContext : public Darabonba::Model {
public:
  shared_ptr<string> tenantId{};

  AddWorkspaceDocMembersRequestTenantContext() {}

  explicit AddWorkspaceDocMembersRequestTenantContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~AddWorkspaceDocMembersRequestTenantContext() = default;
};
class AddWorkspaceDocMembersRequest : public Darabonba::Model {
public:
  shared_ptr<vector<AddWorkspaceDocMembersRequestMembers>> members{};
  shared_ptr<string> nodeId{};
  shared_ptr<AddWorkspaceDocMembersRequestTenantContext> tenantContext{};
  shared_ptr<string> workspaceId{};

  AddWorkspaceDocMembersRequest() {}

  explicit AddWorkspaceDocMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (members) {
      vector<boost::any> temp1;
      for(auto item1:*members){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Members"] = boost::any(temp1);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (tenantContext) {
      res["TenantContext"] = tenantContext ? boost::any(tenantContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<AddWorkspaceDocMembersRequestMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Members"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddWorkspaceDocMembersRequestMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        members = make_shared<vector<AddWorkspaceDocMembersRequestMembers>>(expect1);
      }
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("TenantContext") != m.end() && !m["TenantContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["TenantContext"].type()) {
        AddWorkspaceDocMembersRequestTenantContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TenantContext"]));
        tenantContext = make_shared<AddWorkspaceDocMembersRequestTenantContext>(model1);
      }
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~AddWorkspaceDocMembersRequest() = default;
};
class AddWorkspaceDocMembersShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> membersShrink{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> tenantContextShrink{};
  shared_ptr<string> workspaceId{};

  AddWorkspaceDocMembersShrinkRequest() {}

  explicit AddWorkspaceDocMembersShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (membersShrink) {
      res["Members"] = boost::any(*membersShrink);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (tenantContextShrink) {
      res["TenantContext"] = boost::any(*tenantContextShrink);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      membersShrink = make_shared<string>(boost::any_cast<string>(m["Members"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("TenantContext") != m.end() && !m["TenantContext"].empty()) {
      tenantContextShrink = make_shared<string>(boost::any_cast<string>(m["TenantContext"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~AddWorkspaceDocMembersShrinkRequest() = default;
};
class AddWorkspaceDocMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddWorkspaceDocMembersResponseBody() {}

  explicit AddWorkspaceDocMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~AddWorkspaceDocMembersResponseBody() = default;
};
class AddWorkspaceDocMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddWorkspaceDocMembersResponseBody> body{};

  AddWorkspaceDocMembersResponse() {}

  explicit AddWorkspaceDocMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddWorkspaceDocMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddWorkspaceDocMembersResponseBody>(model1);
      }
    }
  }


  virtual ~AddWorkspaceDocMembersResponse() = default;
};
class AddWorkspaceMembersHeadersAccountContext : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  AddWorkspaceMembersHeadersAccountContext() {}

  explicit AddWorkspaceMembersHeadersAccountContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
  }


  virtual ~AddWorkspaceMembersHeadersAccountContext() = default;
};
class AddWorkspaceMembersHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<AddWorkspaceMembersHeadersAccountContext> accountContext{};

  AddWorkspaceMembersHeaders() {}

  explicit AddWorkspaceMembersHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (accountContext) {
      res["AccountContext"] = accountContext ? boost::any(accountContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("AccountContext") != m.end() && !m["AccountContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccountContext"].type()) {
        AddWorkspaceMembersHeadersAccountContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccountContext"]));
        accountContext = make_shared<AddWorkspaceMembersHeadersAccountContext>(model1);
      }
    }
  }


  virtual ~AddWorkspaceMembersHeaders() = default;
};
class AddWorkspaceMembersShrinkHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> accountContextShrink{};

  AddWorkspaceMembersShrinkHeaders() {}

  explicit AddWorkspaceMembersShrinkHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (accountContextShrink) {
      res["AccountContext"] = boost::any(*accountContextShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("AccountContext") != m.end() && !m["AccountContext"].empty()) {
      accountContextShrink = make_shared<string>(boost::any_cast<string>(m["AccountContext"]));
    }
  }


  virtual ~AddWorkspaceMembersShrinkHeaders() = default;
};
class AddWorkspaceMembersRequestMembers : public Darabonba::Model {
public:
  shared_ptr<string> memberId{};
  shared_ptr<string> memberType{};
  shared_ptr<string> roleType{};

  AddWorkspaceMembersRequestMembers() {}

  explicit AddWorkspaceMembersRequestMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (memberType) {
      res["MemberType"] = boost::any(*memberType);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("MemberType") != m.end() && !m["MemberType"].empty()) {
      memberType = make_shared<string>(boost::any_cast<string>(m["MemberType"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
  }


  virtual ~AddWorkspaceMembersRequestMembers() = default;
};
class AddWorkspaceMembersRequestTenantContext : public Darabonba::Model {
public:
  shared_ptr<string> tenantId{};

  AddWorkspaceMembersRequestTenantContext() {}

  explicit AddWorkspaceMembersRequestTenantContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~AddWorkspaceMembersRequestTenantContext() = default;
};
class AddWorkspaceMembersRequest : public Darabonba::Model {
public:
  shared_ptr<vector<AddWorkspaceMembersRequestMembers>> members{};
  shared_ptr<AddWorkspaceMembersRequestTenantContext> tenantContext{};
  shared_ptr<string> workspaceId{};

  AddWorkspaceMembersRequest() {}

  explicit AddWorkspaceMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (members) {
      vector<boost::any> temp1;
      for(auto item1:*members){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Members"] = boost::any(temp1);
    }
    if (tenantContext) {
      res["TenantContext"] = tenantContext ? boost::any(tenantContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<AddWorkspaceMembersRequestMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Members"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddWorkspaceMembersRequestMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        members = make_shared<vector<AddWorkspaceMembersRequestMembers>>(expect1);
      }
    }
    if (m.find("TenantContext") != m.end() && !m["TenantContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["TenantContext"].type()) {
        AddWorkspaceMembersRequestTenantContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TenantContext"]));
        tenantContext = make_shared<AddWorkspaceMembersRequestTenantContext>(model1);
      }
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~AddWorkspaceMembersRequest() = default;
};
class AddWorkspaceMembersShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> membersShrink{};
  shared_ptr<string> tenantContextShrink{};
  shared_ptr<string> workspaceId{};

  AddWorkspaceMembersShrinkRequest() {}

  explicit AddWorkspaceMembersShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (membersShrink) {
      res["Members"] = boost::any(*membersShrink);
    }
    if (tenantContextShrink) {
      res["TenantContext"] = boost::any(*tenantContextShrink);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      membersShrink = make_shared<string>(boost::any_cast<string>(m["Members"]));
    }
    if (m.find("TenantContext") != m.end() && !m["TenantContext"].empty()) {
      tenantContextShrink = make_shared<string>(boost::any_cast<string>(m["TenantContext"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~AddWorkspaceMembersShrinkRequest() = default;
};
class AddWorkspaceMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> notInOrgList{};
  shared_ptr<string> requestId{};

  AddWorkspaceMembersResponseBody() {}

  explicit AddWorkspaceMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (notInOrgList) {
      res["NotInOrgList"] = boost::any(*notInOrgList);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NotInOrgList") != m.end() && !m["NotInOrgList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NotInOrgList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NotInOrgList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      notInOrgList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~AddWorkspaceMembersResponseBody() = default;
};
class AddWorkspaceMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddWorkspaceMembersResponseBody> body{};

  AddWorkspaceMembersResponse() {}

  explicit AddWorkspaceMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddWorkspaceMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddWorkspaceMembersResponseBody>(model1);
      }
    }
  }


  virtual ~AddWorkspaceMembersResponse() = default;
};
class CreateSheetHeadersAccountContext : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  CreateSheetHeadersAccountContext() {}

  explicit CreateSheetHeadersAccountContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
  }


  virtual ~CreateSheetHeadersAccountContext() = default;
};
class CreateSheetHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<CreateSheetHeadersAccountContext> accountContext{};

  CreateSheetHeaders() {}

  explicit CreateSheetHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (accountContext) {
      res["AccountContext"] = accountContext ? boost::any(accountContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("AccountContext") != m.end() && !m["AccountContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccountContext"].type()) {
        CreateSheetHeadersAccountContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccountContext"]));
        accountContext = make_shared<CreateSheetHeadersAccountContext>(model1);
      }
    }
  }


  virtual ~CreateSheetHeaders() = default;
};
class CreateSheetShrinkHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> accountContextShrink{};

  CreateSheetShrinkHeaders() {}

  explicit CreateSheetShrinkHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (accountContextShrink) {
      res["AccountContext"] = boost::any(*accountContextShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("AccountContext") != m.end() && !m["AccountContext"].empty()) {
      accountContextShrink = make_shared<string>(boost::any_cast<string>(m["AccountContext"]));
    }
  }


  virtual ~CreateSheetShrinkHeaders() = default;
};
class CreateSheetRequestTenantContext : public Darabonba::Model {
public:
  shared_ptr<string> tenantId{};

  CreateSheetRequestTenantContext() {}

  explicit CreateSheetRequestTenantContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~CreateSheetRequestTenantContext() = default;
};
class CreateSheetRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<CreateSheetRequestTenantContext> tenantContext{};
  shared_ptr<string> workbookId{};

  CreateSheetRequest() {}

  explicit CreateSheetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (tenantContext) {
      res["TenantContext"] = tenantContext ? boost::any(tenantContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workbookId) {
      res["WorkbookId"] = boost::any(*workbookId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TenantContext") != m.end() && !m["TenantContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["TenantContext"].type()) {
        CreateSheetRequestTenantContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TenantContext"]));
        tenantContext = make_shared<CreateSheetRequestTenantContext>(model1);
      }
    }
    if (m.find("WorkbookId") != m.end() && !m["WorkbookId"].empty()) {
      workbookId = make_shared<string>(boost::any_cast<string>(m["WorkbookId"]));
    }
  }


  virtual ~CreateSheetRequest() = default;
};
class CreateSheetShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> tenantContextShrink{};
  shared_ptr<string> workbookId{};

  CreateSheetShrinkRequest() {}

  explicit CreateSheetShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (tenantContextShrink) {
      res["TenantContext"] = boost::any(*tenantContextShrink);
    }
    if (workbookId) {
      res["WorkbookId"] = boost::any(*workbookId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TenantContext") != m.end() && !m["TenantContext"].empty()) {
      tenantContextShrink = make_shared<string>(boost::any_cast<string>(m["TenantContext"]));
    }
    if (m.find("WorkbookId") != m.end() && !m["WorkbookId"].empty()) {
      workbookId = make_shared<string>(boost::any_cast<string>(m["WorkbookId"]));
    }
  }


  virtual ~CreateSheetShrinkRequest() = default;
};
class CreateSheetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> visibility{};

  CreateSheetResponseBody() {}

  explicit CreateSheetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (visibility) {
      res["visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("visibility") != m.end() && !m["visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["visibility"]));
    }
  }


  virtual ~CreateSheetResponseBody() = default;
};
class CreateSheetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSheetResponseBody> body{};

  CreateSheetResponse() {}

  explicit CreateSheetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSheetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSheetResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSheetResponse() = default;
};
class CreateWorkspaceHeadersAccountContext : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  CreateWorkspaceHeadersAccountContext() {}

  explicit CreateWorkspaceHeadersAccountContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
  }


  virtual ~CreateWorkspaceHeadersAccountContext() = default;
};
class CreateWorkspaceHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<CreateWorkspaceHeadersAccountContext> accountContext{};

  CreateWorkspaceHeaders() {}

  explicit CreateWorkspaceHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (accountContext) {
      res["AccountContext"] = accountContext ? boost::any(accountContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("AccountContext") != m.end() && !m["AccountContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccountContext"].type()) {
        CreateWorkspaceHeadersAccountContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccountContext"]));
        accountContext = make_shared<CreateWorkspaceHeadersAccountContext>(model1);
      }
    }
  }


  virtual ~CreateWorkspaceHeaders() = default;
};
class CreateWorkspaceShrinkHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> accountContextShrink{};

  CreateWorkspaceShrinkHeaders() {}

  explicit CreateWorkspaceShrinkHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (accountContextShrink) {
      res["AccountContext"] = boost::any(*accountContextShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("AccountContext") != m.end() && !m["AccountContext"].empty()) {
      accountContextShrink = make_shared<string>(boost::any_cast<string>(m["AccountContext"]));
    }
  }


  virtual ~CreateWorkspaceShrinkHeaders() = default;
};
class CreateWorkspaceRequestTenantContext : public Darabonba::Model {
public:
  shared_ptr<string> tenantId{};

  CreateWorkspaceRequestTenantContext() {}

  explicit CreateWorkspaceRequestTenantContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~CreateWorkspaceRequestTenantContext() = default;
};
class CreateWorkspaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<CreateWorkspaceRequestTenantContext> tenantContext{};

  CreateWorkspaceRequest() {}

  explicit CreateWorkspaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (tenantContext) {
      res["TenantContext"] = tenantContext ? boost::any(tenantContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TenantContext") != m.end() && !m["TenantContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["TenantContext"].type()) {
        CreateWorkspaceRequestTenantContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TenantContext"]));
        tenantContext = make_shared<CreateWorkspaceRequestTenantContext>(model1);
      }
    }
  }


  virtual ~CreateWorkspaceRequest() = default;
};
class CreateWorkspaceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> tenantContextShrink{};

  CreateWorkspaceShrinkRequest() {}

  explicit CreateWorkspaceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (tenantContextShrink) {
      res["TenantContext"] = boost::any(*tenantContextShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TenantContext") != m.end() && !m["TenantContext"].empty()) {
      tenantContextShrink = make_shared<string>(boost::any_cast<string>(m["TenantContext"]));
    }
  }


  virtual ~CreateWorkspaceShrinkRequest() = default;
};
class CreateWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> url{};
  shared_ptr<string> workspaceId{};

  CreateWorkspaceResponseBody() {}

  explicit CreateWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
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
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
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
class CreateWorkspaceDocHeadersAccountContext : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  CreateWorkspaceDocHeadersAccountContext() {}

  explicit CreateWorkspaceDocHeadersAccountContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
  }


  virtual ~CreateWorkspaceDocHeadersAccountContext() = default;
};
class CreateWorkspaceDocHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<CreateWorkspaceDocHeadersAccountContext> accountContext{};

  CreateWorkspaceDocHeaders() {}

  explicit CreateWorkspaceDocHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (accountContext) {
      res["AccountContext"] = accountContext ? boost::any(accountContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("AccountContext") != m.end() && !m["AccountContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccountContext"].type()) {
        CreateWorkspaceDocHeadersAccountContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccountContext"]));
        accountContext = make_shared<CreateWorkspaceDocHeadersAccountContext>(model1);
      }
    }
  }


  virtual ~CreateWorkspaceDocHeaders() = default;
};
class CreateWorkspaceDocShrinkHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> accountContextShrink{};

  CreateWorkspaceDocShrinkHeaders() {}

  explicit CreateWorkspaceDocShrinkHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (accountContextShrink) {
      res["AccountContext"] = boost::any(*accountContextShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("AccountContext") != m.end() && !m["AccountContext"].empty()) {
      accountContextShrink = make_shared<string>(boost::any_cast<string>(m["AccountContext"]));
    }
  }


  virtual ~CreateWorkspaceDocShrinkHeaders() = default;
};
class CreateWorkspaceDocRequestTenantContext : public Darabonba::Model {
public:
  shared_ptr<string> tenantId{};

  CreateWorkspaceDocRequestTenantContext() {}

  explicit CreateWorkspaceDocRequestTenantContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~CreateWorkspaceDocRequestTenantContext() = default;
};
class CreateWorkspaceDocRequest : public Darabonba::Model {
public:
  shared_ptr<string> docType{};
  shared_ptr<string> name{};
  shared_ptr<string> parentNodeId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateType{};
  shared_ptr<CreateWorkspaceDocRequestTenantContext> tenantContext{};
  shared_ptr<string> workspaceId{};

  CreateWorkspaceDocRequest() {}

  explicit CreateWorkspaceDocRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docType) {
      res["DocType"] = boost::any(*docType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parentNodeId) {
      res["ParentNodeId"] = boost::any(*parentNodeId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    if (tenantContext) {
      res["TenantContext"] = tenantContext ? boost::any(tenantContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DocType") != m.end() && !m["DocType"].empty()) {
      docType = make_shared<string>(boost::any_cast<string>(m["DocType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParentNodeId") != m.end() && !m["ParentNodeId"].empty()) {
      parentNodeId = make_shared<string>(boost::any_cast<string>(m["ParentNodeId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
    if (m.find("TenantContext") != m.end() && !m["TenantContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["TenantContext"].type()) {
        CreateWorkspaceDocRequestTenantContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TenantContext"]));
        tenantContext = make_shared<CreateWorkspaceDocRequestTenantContext>(model1);
      }
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateWorkspaceDocRequest() = default;
};
class CreateWorkspaceDocShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> docType{};
  shared_ptr<string> name{};
  shared_ptr<string> parentNodeId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateType{};
  shared_ptr<string> tenantContextShrink{};
  shared_ptr<string> workspaceId{};

  CreateWorkspaceDocShrinkRequest() {}

  explicit CreateWorkspaceDocShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docType) {
      res["DocType"] = boost::any(*docType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parentNodeId) {
      res["ParentNodeId"] = boost::any(*parentNodeId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    if (tenantContextShrink) {
      res["TenantContext"] = boost::any(*tenantContextShrink);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DocType") != m.end() && !m["DocType"].empty()) {
      docType = make_shared<string>(boost::any_cast<string>(m["DocType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParentNodeId") != m.end() && !m["ParentNodeId"].empty()) {
      parentNodeId = make_shared<string>(boost::any_cast<string>(m["ParentNodeId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
    if (m.find("TenantContext") != m.end() && !m["TenantContext"].empty()) {
      tenantContextShrink = make_shared<string>(boost::any_cast<string>(m["TenantContext"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateWorkspaceDocShrinkRequest() = default;
};
class CreateWorkspaceDocResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> docKey{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> url{};
  shared_ptr<string> workspaceId{};

  CreateWorkspaceDocResponseBody() {}

  explicit CreateWorkspaceDocResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docKey) {
      res["docKey"] = boost::any(*docKey);
    }
    if (nodeId) {
      res["nodeId"] = boost::any(*nodeId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("docKey") != m.end() && !m["docKey"].empty()) {
      docKey = make_shared<string>(boost::any_cast<string>(m["docKey"]));
    }
    if (m.find("nodeId") != m.end() && !m["nodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["nodeId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~CreateWorkspaceDocResponseBody() = default;
};
class CreateWorkspaceDocResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateWorkspaceDocResponseBody> body{};

  CreateWorkspaceDocResponse() {}

  explicit CreateWorkspaceDocResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateWorkspaceDocResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateWorkspaceDocResponseBody>(model1);
      }
    }
  }


  virtual ~CreateWorkspaceDocResponse() = default;
};
class DeleteWorkspaceDocMembersHeadersAccountContext : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  DeleteWorkspaceDocMembersHeadersAccountContext() {}

  explicit DeleteWorkspaceDocMembersHeadersAccountContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
  }


  virtual ~DeleteWorkspaceDocMembersHeadersAccountContext() = default;
};
class DeleteWorkspaceDocMembersHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<DeleteWorkspaceDocMembersHeadersAccountContext> accountContext{};

  DeleteWorkspaceDocMembersHeaders() {}

  explicit DeleteWorkspaceDocMembersHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (accountContext) {
      res["AccountContext"] = accountContext ? boost::any(accountContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("AccountContext") != m.end() && !m["AccountContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccountContext"].type()) {
        DeleteWorkspaceDocMembersHeadersAccountContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccountContext"]));
        accountContext = make_shared<DeleteWorkspaceDocMembersHeadersAccountContext>(model1);
      }
    }
  }


  virtual ~DeleteWorkspaceDocMembersHeaders() = default;
};
class DeleteWorkspaceDocMembersShrinkHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> accountContextShrink{};

  DeleteWorkspaceDocMembersShrinkHeaders() {}

  explicit DeleteWorkspaceDocMembersShrinkHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (accountContextShrink) {
      res["AccountContext"] = boost::any(*accountContextShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("AccountContext") != m.end() && !m["AccountContext"].empty()) {
      accountContextShrink = make_shared<string>(boost::any_cast<string>(m["AccountContext"]));
    }
  }


  virtual ~DeleteWorkspaceDocMembersShrinkHeaders() = default;
};
class DeleteWorkspaceDocMembersRequestMembers : public Darabonba::Model {
public:
  shared_ptr<string> memberId{};
  shared_ptr<string> memberType{};

  DeleteWorkspaceDocMembersRequestMembers() {}

  explicit DeleteWorkspaceDocMembersRequestMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (memberType) {
      res["MemberType"] = boost::any(*memberType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("MemberType") != m.end() && !m["MemberType"].empty()) {
      memberType = make_shared<string>(boost::any_cast<string>(m["MemberType"]));
    }
  }


  virtual ~DeleteWorkspaceDocMembersRequestMembers() = default;
};
class DeleteWorkspaceDocMembersRequestTenantContext : public Darabonba::Model {
public:
  shared_ptr<string> tenantId{};

  DeleteWorkspaceDocMembersRequestTenantContext() {}

  explicit DeleteWorkspaceDocMembersRequestTenantContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~DeleteWorkspaceDocMembersRequestTenantContext() = default;
};
class DeleteWorkspaceDocMembersRequest : public Darabonba::Model {
public:
  shared_ptr<vector<DeleteWorkspaceDocMembersRequestMembers>> members{};
  shared_ptr<string> nodeId{};
  shared_ptr<DeleteWorkspaceDocMembersRequestTenantContext> tenantContext{};
  shared_ptr<string> workspaceId{};

  DeleteWorkspaceDocMembersRequest() {}

  explicit DeleteWorkspaceDocMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (members) {
      vector<boost::any> temp1;
      for(auto item1:*members){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Members"] = boost::any(temp1);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (tenantContext) {
      res["TenantContext"] = tenantContext ? boost::any(tenantContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<DeleteWorkspaceDocMembersRequestMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Members"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeleteWorkspaceDocMembersRequestMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        members = make_shared<vector<DeleteWorkspaceDocMembersRequestMembers>>(expect1);
      }
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("TenantContext") != m.end() && !m["TenantContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["TenantContext"].type()) {
        DeleteWorkspaceDocMembersRequestTenantContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TenantContext"]));
        tenantContext = make_shared<DeleteWorkspaceDocMembersRequestTenantContext>(model1);
      }
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~DeleteWorkspaceDocMembersRequest() = default;
};
class DeleteWorkspaceDocMembersShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> membersShrink{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> tenantContextShrink{};
  shared_ptr<string> workspaceId{};

  DeleteWorkspaceDocMembersShrinkRequest() {}

  explicit DeleteWorkspaceDocMembersShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (membersShrink) {
      res["Members"] = boost::any(*membersShrink);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (tenantContextShrink) {
      res["TenantContext"] = boost::any(*tenantContextShrink);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      membersShrink = make_shared<string>(boost::any_cast<string>(m["Members"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("TenantContext") != m.end() && !m["TenantContext"].empty()) {
      tenantContextShrink = make_shared<string>(boost::any_cast<string>(m["TenantContext"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~DeleteWorkspaceDocMembersShrinkRequest() = default;
};
class DeleteWorkspaceDocMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteWorkspaceDocMembersResponseBody() {}

  explicit DeleteWorkspaceDocMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteWorkspaceDocMembersResponseBody() = default;
};
class DeleteWorkspaceDocMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteWorkspaceDocMembersResponseBody> body{};

  DeleteWorkspaceDocMembersResponse() {}

  explicit DeleteWorkspaceDocMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteWorkspaceDocMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteWorkspaceDocMembersResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteWorkspaceDocMembersResponse() = default;
};
class DeleteWorkspaceMembersHeadersAccountContext : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  DeleteWorkspaceMembersHeadersAccountContext() {}

  explicit DeleteWorkspaceMembersHeadersAccountContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
  }


  virtual ~DeleteWorkspaceMembersHeadersAccountContext() = default;
};
class DeleteWorkspaceMembersHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<DeleteWorkspaceMembersHeadersAccountContext> accountContext{};

  DeleteWorkspaceMembersHeaders() {}

  explicit DeleteWorkspaceMembersHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (accountContext) {
      res["AccountContext"] = accountContext ? boost::any(accountContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("AccountContext") != m.end() && !m["AccountContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccountContext"].type()) {
        DeleteWorkspaceMembersHeadersAccountContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccountContext"]));
        accountContext = make_shared<DeleteWorkspaceMembersHeadersAccountContext>(model1);
      }
    }
  }


  virtual ~DeleteWorkspaceMembersHeaders() = default;
};
class DeleteWorkspaceMembersShrinkHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> accountContextShrink{};

  DeleteWorkspaceMembersShrinkHeaders() {}

  explicit DeleteWorkspaceMembersShrinkHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (accountContextShrink) {
      res["AccountContext"] = boost::any(*accountContextShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("AccountContext") != m.end() && !m["AccountContext"].empty()) {
      accountContextShrink = make_shared<string>(boost::any_cast<string>(m["AccountContext"]));
    }
  }


  virtual ~DeleteWorkspaceMembersShrinkHeaders() = default;
};
class DeleteWorkspaceMembersRequestMembers : public Darabonba::Model {
public:
  shared_ptr<string> memberId{};
  shared_ptr<string> memberType{};

  DeleteWorkspaceMembersRequestMembers() {}

  explicit DeleteWorkspaceMembersRequestMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (memberType) {
      res["MemberType"] = boost::any(*memberType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("MemberType") != m.end() && !m["MemberType"].empty()) {
      memberType = make_shared<string>(boost::any_cast<string>(m["MemberType"]));
    }
  }


  virtual ~DeleteWorkspaceMembersRequestMembers() = default;
};
class DeleteWorkspaceMembersRequestTenantContext : public Darabonba::Model {
public:
  shared_ptr<string> tenantId{};

  DeleteWorkspaceMembersRequestTenantContext() {}

  explicit DeleteWorkspaceMembersRequestTenantContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~DeleteWorkspaceMembersRequestTenantContext() = default;
};
class DeleteWorkspaceMembersRequest : public Darabonba::Model {
public:
  shared_ptr<vector<DeleteWorkspaceMembersRequestMembers>> members{};
  shared_ptr<DeleteWorkspaceMembersRequestTenantContext> tenantContext{};
  shared_ptr<string> workspaceId{};

  DeleteWorkspaceMembersRequest() {}

  explicit DeleteWorkspaceMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (members) {
      vector<boost::any> temp1;
      for(auto item1:*members){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Members"] = boost::any(temp1);
    }
    if (tenantContext) {
      res["TenantContext"] = tenantContext ? boost::any(tenantContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<DeleteWorkspaceMembersRequestMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Members"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeleteWorkspaceMembersRequestMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        members = make_shared<vector<DeleteWorkspaceMembersRequestMembers>>(expect1);
      }
    }
    if (m.find("TenantContext") != m.end() && !m["TenantContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["TenantContext"].type()) {
        DeleteWorkspaceMembersRequestTenantContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TenantContext"]));
        tenantContext = make_shared<DeleteWorkspaceMembersRequestTenantContext>(model1);
      }
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~DeleteWorkspaceMembersRequest() = default;
};
class DeleteWorkspaceMembersShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> membersShrink{};
  shared_ptr<string> tenantContextShrink{};
  shared_ptr<string> workspaceId{};

  DeleteWorkspaceMembersShrinkRequest() {}

  explicit DeleteWorkspaceMembersShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (membersShrink) {
      res["Members"] = boost::any(*membersShrink);
    }
    if (tenantContextShrink) {
      res["TenantContext"] = boost::any(*tenantContextShrink);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      membersShrink = make_shared<string>(boost::any_cast<string>(m["Members"]));
    }
    if (m.find("TenantContext") != m.end() && !m["TenantContext"].empty()) {
      tenantContextShrink = make_shared<string>(boost::any_cast<string>(m["TenantContext"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~DeleteWorkspaceMembersShrinkRequest() = default;
};
class DeleteWorkspaceMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteWorkspaceMembersResponseBody() {}

  explicit DeleteWorkspaceMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteWorkspaceMembersResponseBody() = default;
};
class DeleteWorkspaceMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteWorkspaceMembersResponseBody> body{};

  DeleteWorkspaceMembersResponse() {}

  explicit DeleteWorkspaceMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteWorkspaceMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteWorkspaceMembersResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteWorkspaceMembersResponse() = default;
};
class GetUserHeadersAccountContext : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  GetUserHeadersAccountContext() {}

  explicit GetUserHeadersAccountContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
  }


  virtual ~GetUserHeadersAccountContext() = default;
};
class GetUserHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<GetUserHeadersAccountContext> accountContext{};

  GetUserHeaders() {}

  explicit GetUserHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (accountContext) {
      res["AccountContext"] = accountContext ? boost::any(accountContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("AccountContext") != m.end() && !m["AccountContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccountContext"].type()) {
        GetUserHeadersAccountContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccountContext"]));
        accountContext = make_shared<GetUserHeadersAccountContext>(model1);
      }
    }
  }


  virtual ~GetUserHeaders() = default;
};
class GetUserShrinkHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> accountContextShrink{};

  GetUserShrinkHeaders() {}

  explicit GetUserShrinkHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (accountContextShrink) {
      res["AccountContext"] = boost::any(*accountContextShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("AccountContext") != m.end() && !m["AccountContext"].empty()) {
      accountContextShrink = make_shared<string>(boost::any_cast<string>(m["AccountContext"]));
    }
  }


  virtual ~GetUserShrinkHeaders() = default;
};
class GetUserRequestTenantContext : public Darabonba::Model {
public:
  shared_ptr<string> tenantId{};

  GetUserRequestTenantContext() {}

  explicit GetUserRequestTenantContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~GetUserRequestTenantContext() = default;
};
class GetUserRequest : public Darabonba::Model {
public:
  shared_ptr<GetUserRequestTenantContext> tenantContext{};
  shared_ptr<string> language{};

  GetUserRequest() {}

  explicit GetUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tenantContext) {
      res["TenantContext"] = tenantContext ? boost::any(tenantContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (language) {
      res["language"] = boost::any(*language);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TenantContext") != m.end() && !m["TenantContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["TenantContext"].type()) {
        GetUserRequestTenantContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TenantContext"]));
        tenantContext = make_shared<GetUserRequestTenantContext>(model1);
      }
    }
    if (m.find("language") != m.end() && !m["language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["language"]));
    }
  }


  virtual ~GetUserRequest() = default;
};
class GetUserShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> tenantContextShrink{};
  shared_ptr<string> language{};

  GetUserShrinkRequest() {}

  explicit GetUserShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tenantContextShrink) {
      res["TenantContext"] = boost::any(*tenantContextShrink);
    }
    if (language) {
      res["language"] = boost::any(*language);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TenantContext") != m.end() && !m["TenantContext"].empty()) {
      tenantContextShrink = make_shared<string>(boost::any_cast<string>(m["TenantContext"]));
    }
    if (m.find("language") != m.end() && !m["language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["language"]));
    }
  }


  virtual ~GetUserShrinkRequest() = default;
};
class GetUserResponseBodyDeptOrderList : public Darabonba::Model {
public:
  shared_ptr<long> deptId{};
  shared_ptr<long> order{};

  GetUserResponseBodyDeptOrderList() {}

  explicit GetUserResponseBodyDeptOrderList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deptId) {
      res["deptId"] = boost::any(*deptId);
    }
    if (order) {
      res["order"] = boost::any(*order);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deptId") != m.end() && !m["deptId"].empty()) {
      deptId = make_shared<long>(boost::any_cast<long>(m["deptId"]));
    }
    if (m.find("order") != m.end() && !m["order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["order"]));
    }
  }


  virtual ~GetUserResponseBodyDeptOrderList() = default;
};
class GetUserResponseBodyLeaderInDept : public Darabonba::Model {
public:
  shared_ptr<long> deptId{};
  shared_ptr<bool> leader{};

  GetUserResponseBodyLeaderInDept() {}

  explicit GetUserResponseBodyLeaderInDept(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deptId) {
      res["deptId"] = boost::any(*deptId);
    }
    if (leader) {
      res["leader"] = boost::any(*leader);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deptId") != m.end() && !m["deptId"].empty()) {
      deptId = make_shared<long>(boost::any_cast<long>(m["deptId"]));
    }
    if (m.find("leader") != m.end() && !m["leader"].empty()) {
      leader = make_shared<bool>(boost::any_cast<bool>(m["leader"]));
    }
  }


  virtual ~GetUserResponseBodyLeaderInDept() = default;
};
class GetUserResponseBodyRoleList : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  GetUserResponseBodyRoleList() {}

  explicit GetUserResponseBodyRoleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["groupName"] = boost::any(*groupName);
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
    if (m.find("groupName") != m.end() && !m["groupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["groupName"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GetUserResponseBodyRoleList() = default;
};
class GetUserResponseBodyUnionEmpExtUnionEmpMapList : public Darabonba::Model {
public:
  shared_ptr<string> cropId{};
  shared_ptr<string> userid{};

  GetUserResponseBodyUnionEmpExtUnionEmpMapList() {}

  explicit GetUserResponseBodyUnionEmpExtUnionEmpMapList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cropId) {
      res["cropId"] = boost::any(*cropId);
    }
    if (userid) {
      res["userid"] = boost::any(*userid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cropId") != m.end() && !m["cropId"].empty()) {
      cropId = make_shared<string>(boost::any_cast<string>(m["cropId"]));
    }
    if (m.find("userid") != m.end() && !m["userid"].empty()) {
      userid = make_shared<string>(boost::any_cast<string>(m["userid"]));
    }
  }


  virtual ~GetUserResponseBodyUnionEmpExtUnionEmpMapList() = default;
};
class GetUserResponseBodyUnionEmpExt : public Darabonba::Model {
public:
  shared_ptr<string> corpId{};
  shared_ptr<vector<GetUserResponseBodyUnionEmpExtUnionEmpMapList>> unionEmpMapList{};
  shared_ptr<string> userid{};

  GetUserResponseBodyUnionEmpExt() {}

  explicit GetUserResponseBodyUnionEmpExt(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpId) {
      res["corpId"] = boost::any(*corpId);
    }
    if (unionEmpMapList) {
      vector<boost::any> temp1;
      for(auto item1:*unionEmpMapList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["unionEmpMapList"] = boost::any(temp1);
    }
    if (userid) {
      res["userid"] = boost::any(*userid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("corpId") != m.end() && !m["corpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["corpId"]));
    }
    if (m.find("unionEmpMapList") != m.end() && !m["unionEmpMapList"].empty()) {
      if (typeid(vector<boost::any>) == m["unionEmpMapList"].type()) {
        vector<GetUserResponseBodyUnionEmpExtUnionEmpMapList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["unionEmpMapList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetUserResponseBodyUnionEmpExtUnionEmpMapList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        unionEmpMapList = make_shared<vector<GetUserResponseBodyUnionEmpExtUnionEmpMapList>>(expect1);
      }
    }
    if (m.find("userid") != m.end() && !m["userid"].empty()) {
      userid = make_shared<string>(boost::any_cast<string>(m["userid"]));
    }
  }


  virtual ~GetUserResponseBodyUnionEmpExt() = default;
};
class GetUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<bool> admin{};
  shared_ptr<string> avatar{};
  shared_ptr<bool> boss{};
  shared_ptr<vector<long>> deptIdList{};
  shared_ptr<vector<GetUserResponseBodyDeptOrderList>> deptOrderList{};
  shared_ptr<string> email{};
  shared_ptr<bool> exclusiveAccount{};
  shared_ptr<string> exclusiveAccountCorpId{};
  shared_ptr<string> exclusiveAccountCorpName{};
  shared_ptr<string> exclusiveAccountType{};
  shared_ptr<string> extension{};
  shared_ptr<bool> hideMobile{};
  shared_ptr<long> hiredDate{};
  shared_ptr<string> jobNumber{};
  shared_ptr<vector<GetUserResponseBodyLeaderInDept>> leaderInDept{};
  shared_ptr<string> loginId{};
  shared_ptr<string> managerUserid{};
  shared_ptr<string> mobile{};
  shared_ptr<string> name{};
  shared_ptr<string> nickname{};
  shared_ptr<string> orgEmail{};
  shared_ptr<bool> realAuthed{};
  shared_ptr<string> remark{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetUserResponseBodyRoleList>> roleList{};
  shared_ptr<bool> senior{};
  shared_ptr<string> stateCode{};
  shared_ptr<string> telephone{};
  shared_ptr<string> title{};
  shared_ptr<GetUserResponseBodyUnionEmpExt> unionEmpExt{};
  shared_ptr<string> userid{};
  shared_ptr<string> workPlace{};

  GetUserResponseBody() {}

  explicit GetUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["active"] = boost::any(*active);
    }
    if (admin) {
      res["admin"] = boost::any(*admin);
    }
    if (avatar) {
      res["avatar"] = boost::any(*avatar);
    }
    if (boss) {
      res["boss"] = boost::any(*boss);
    }
    if (deptIdList) {
      res["deptIdList"] = boost::any(*deptIdList);
    }
    if (deptOrderList) {
      vector<boost::any> temp1;
      for(auto item1:*deptOrderList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["deptOrderList"] = boost::any(temp1);
    }
    if (email) {
      res["email"] = boost::any(*email);
    }
    if (exclusiveAccount) {
      res["exclusiveAccount"] = boost::any(*exclusiveAccount);
    }
    if (exclusiveAccountCorpId) {
      res["exclusiveAccountCorpId"] = boost::any(*exclusiveAccountCorpId);
    }
    if (exclusiveAccountCorpName) {
      res["exclusiveAccountCorpName"] = boost::any(*exclusiveAccountCorpName);
    }
    if (exclusiveAccountType) {
      res["exclusiveAccountType"] = boost::any(*exclusiveAccountType);
    }
    if (extension) {
      res["extension"] = boost::any(*extension);
    }
    if (hideMobile) {
      res["hideMobile"] = boost::any(*hideMobile);
    }
    if (hiredDate) {
      res["hiredDate"] = boost::any(*hiredDate);
    }
    if (jobNumber) {
      res["jobNumber"] = boost::any(*jobNumber);
    }
    if (leaderInDept) {
      vector<boost::any> temp1;
      for(auto item1:*leaderInDept){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["leaderInDept"] = boost::any(temp1);
    }
    if (loginId) {
      res["loginId"] = boost::any(*loginId);
    }
    if (managerUserid) {
      res["managerUserid"] = boost::any(*managerUserid);
    }
    if (mobile) {
      res["mobile"] = boost::any(*mobile);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nickname) {
      res["nickname"] = boost::any(*nickname);
    }
    if (orgEmail) {
      res["orgEmail"] = boost::any(*orgEmail);
    }
    if (realAuthed) {
      res["realAuthed"] = boost::any(*realAuthed);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (roleList) {
      vector<boost::any> temp1;
      for(auto item1:*roleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["roleList"] = boost::any(temp1);
    }
    if (senior) {
      res["senior"] = boost::any(*senior);
    }
    if (stateCode) {
      res["stateCode"] = boost::any(*stateCode);
    }
    if (telephone) {
      res["telephone"] = boost::any(*telephone);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (unionEmpExt) {
      res["unionEmpExt"] = unionEmpExt ? boost::any(unionEmpExt->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userid) {
      res["userid"] = boost::any(*userid);
    }
    if (workPlace) {
      res["workPlace"] = boost::any(*workPlace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("active") != m.end() && !m["active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["active"]));
    }
    if (m.find("admin") != m.end() && !m["admin"].empty()) {
      admin = make_shared<bool>(boost::any_cast<bool>(m["admin"]));
    }
    if (m.find("avatar") != m.end() && !m["avatar"].empty()) {
      avatar = make_shared<string>(boost::any_cast<string>(m["avatar"]));
    }
    if (m.find("boss") != m.end() && !m["boss"].empty()) {
      boss = make_shared<bool>(boost::any_cast<bool>(m["boss"]));
    }
    if (m.find("deptIdList") != m.end() && !m["deptIdList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["deptIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["deptIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      deptIdList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("deptOrderList") != m.end() && !m["deptOrderList"].empty()) {
      if (typeid(vector<boost::any>) == m["deptOrderList"].type()) {
        vector<GetUserResponseBodyDeptOrderList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["deptOrderList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetUserResponseBodyDeptOrderList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deptOrderList = make_shared<vector<GetUserResponseBodyDeptOrderList>>(expect1);
      }
    }
    if (m.find("email") != m.end() && !m["email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["email"]));
    }
    if (m.find("exclusiveAccount") != m.end() && !m["exclusiveAccount"].empty()) {
      exclusiveAccount = make_shared<bool>(boost::any_cast<bool>(m["exclusiveAccount"]));
    }
    if (m.find("exclusiveAccountCorpId") != m.end() && !m["exclusiveAccountCorpId"].empty()) {
      exclusiveAccountCorpId = make_shared<string>(boost::any_cast<string>(m["exclusiveAccountCorpId"]));
    }
    if (m.find("exclusiveAccountCorpName") != m.end() && !m["exclusiveAccountCorpName"].empty()) {
      exclusiveAccountCorpName = make_shared<string>(boost::any_cast<string>(m["exclusiveAccountCorpName"]));
    }
    if (m.find("exclusiveAccountType") != m.end() && !m["exclusiveAccountType"].empty()) {
      exclusiveAccountType = make_shared<string>(boost::any_cast<string>(m["exclusiveAccountType"]));
    }
    if (m.find("extension") != m.end() && !m["extension"].empty()) {
      extension = make_shared<string>(boost::any_cast<string>(m["extension"]));
    }
    if (m.find("hideMobile") != m.end() && !m["hideMobile"].empty()) {
      hideMobile = make_shared<bool>(boost::any_cast<bool>(m["hideMobile"]));
    }
    if (m.find("hiredDate") != m.end() && !m["hiredDate"].empty()) {
      hiredDate = make_shared<long>(boost::any_cast<long>(m["hiredDate"]));
    }
    if (m.find("jobNumber") != m.end() && !m["jobNumber"].empty()) {
      jobNumber = make_shared<string>(boost::any_cast<string>(m["jobNumber"]));
    }
    if (m.find("leaderInDept") != m.end() && !m["leaderInDept"].empty()) {
      if (typeid(vector<boost::any>) == m["leaderInDept"].type()) {
        vector<GetUserResponseBodyLeaderInDept> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["leaderInDept"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetUserResponseBodyLeaderInDept model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        leaderInDept = make_shared<vector<GetUserResponseBodyLeaderInDept>>(expect1);
      }
    }
    if (m.find("loginId") != m.end() && !m["loginId"].empty()) {
      loginId = make_shared<string>(boost::any_cast<string>(m["loginId"]));
    }
    if (m.find("managerUserid") != m.end() && !m["managerUserid"].empty()) {
      managerUserid = make_shared<string>(boost::any_cast<string>(m["managerUserid"]));
    }
    if (m.find("mobile") != m.end() && !m["mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["mobile"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nickname") != m.end() && !m["nickname"].empty()) {
      nickname = make_shared<string>(boost::any_cast<string>(m["nickname"]));
    }
    if (m.find("orgEmail") != m.end() && !m["orgEmail"].empty()) {
      orgEmail = make_shared<string>(boost::any_cast<string>(m["orgEmail"]));
    }
    if (m.find("realAuthed") != m.end() && !m["realAuthed"].empty()) {
      realAuthed = make_shared<bool>(boost::any_cast<bool>(m["realAuthed"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("roleList") != m.end() && !m["roleList"].empty()) {
      if (typeid(vector<boost::any>) == m["roleList"].type()) {
        vector<GetUserResponseBodyRoleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["roleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetUserResponseBodyRoleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        roleList = make_shared<vector<GetUserResponseBodyRoleList>>(expect1);
      }
    }
    if (m.find("senior") != m.end() && !m["senior"].empty()) {
      senior = make_shared<bool>(boost::any_cast<bool>(m["senior"]));
    }
    if (m.find("stateCode") != m.end() && !m["stateCode"].empty()) {
      stateCode = make_shared<string>(boost::any_cast<string>(m["stateCode"]));
    }
    if (m.find("telephone") != m.end() && !m["telephone"].empty()) {
      telephone = make_shared<string>(boost::any_cast<string>(m["telephone"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("unionEmpExt") != m.end() && !m["unionEmpExt"].empty()) {
      if (typeid(map<string, boost::any>) == m["unionEmpExt"].type()) {
        GetUserResponseBodyUnionEmpExt model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["unionEmpExt"]));
        unionEmpExt = make_shared<GetUserResponseBodyUnionEmpExt>(model1);
      }
    }
    if (m.find("userid") != m.end() && !m["userid"].empty()) {
      userid = make_shared<string>(boost::any_cast<string>(m["userid"]));
    }
    if (m.find("workPlace") != m.end() && !m["workPlace"].empty()) {
      workPlace = make_shared<string>(boost::any_cast<string>(m["workPlace"]));
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
        GetUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserResponse() = default;
};
class InsertRowsBeforeHeadersAccountContext : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  InsertRowsBeforeHeadersAccountContext() {}

  explicit InsertRowsBeforeHeadersAccountContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
  }


  virtual ~InsertRowsBeforeHeadersAccountContext() = default;
};
class InsertRowsBeforeHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<InsertRowsBeforeHeadersAccountContext> accountContext{};

  InsertRowsBeforeHeaders() {}

  explicit InsertRowsBeforeHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (accountContext) {
      res["AccountContext"] = accountContext ? boost::any(accountContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("AccountContext") != m.end() && !m["AccountContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccountContext"].type()) {
        InsertRowsBeforeHeadersAccountContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccountContext"]));
        accountContext = make_shared<InsertRowsBeforeHeadersAccountContext>(model1);
      }
    }
  }


  virtual ~InsertRowsBeforeHeaders() = default;
};
class InsertRowsBeforeShrinkHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> accountContextShrink{};

  InsertRowsBeforeShrinkHeaders() {}

  explicit InsertRowsBeforeShrinkHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (accountContextShrink) {
      res["AccountContext"] = boost::any(*accountContextShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("AccountContext") != m.end() && !m["AccountContext"].empty()) {
      accountContextShrink = make_shared<string>(boost::any_cast<string>(m["AccountContext"]));
    }
  }


  virtual ~InsertRowsBeforeShrinkHeaders() = default;
};
class InsertRowsBeforeRequestTenantContext : public Darabonba::Model {
public:
  shared_ptr<string> tenantId{};

  InsertRowsBeforeRequestTenantContext() {}

  explicit InsertRowsBeforeRequestTenantContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~InsertRowsBeforeRequestTenantContext() = default;
};
class InsertRowsBeforeRequest : public Darabonba::Model {
public:
  shared_ptr<long> row{};
  shared_ptr<long> rowCount{};
  shared_ptr<string> sheetId{};
  shared_ptr<InsertRowsBeforeRequestTenantContext> tenantContext{};
  shared_ptr<string> workbookId{};

  InsertRowsBeforeRequest() {}

  explicit InsertRowsBeforeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (row) {
      res["Row"] = boost::any(*row);
    }
    if (rowCount) {
      res["RowCount"] = boost::any(*rowCount);
    }
    if (sheetId) {
      res["SheetId"] = boost::any(*sheetId);
    }
    if (tenantContext) {
      res["TenantContext"] = tenantContext ? boost::any(tenantContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workbookId) {
      res["WorkbookId"] = boost::any(*workbookId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Row") != m.end() && !m["Row"].empty()) {
      row = make_shared<long>(boost::any_cast<long>(m["Row"]));
    }
    if (m.find("RowCount") != m.end() && !m["RowCount"].empty()) {
      rowCount = make_shared<long>(boost::any_cast<long>(m["RowCount"]));
    }
    if (m.find("SheetId") != m.end() && !m["SheetId"].empty()) {
      sheetId = make_shared<string>(boost::any_cast<string>(m["SheetId"]));
    }
    if (m.find("TenantContext") != m.end() && !m["TenantContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["TenantContext"].type()) {
        InsertRowsBeforeRequestTenantContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TenantContext"]));
        tenantContext = make_shared<InsertRowsBeforeRequestTenantContext>(model1);
      }
    }
    if (m.find("WorkbookId") != m.end() && !m["WorkbookId"].empty()) {
      workbookId = make_shared<string>(boost::any_cast<string>(m["WorkbookId"]));
    }
  }


  virtual ~InsertRowsBeforeRequest() = default;
};
class InsertRowsBeforeShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> row{};
  shared_ptr<long> rowCount{};
  shared_ptr<string> sheetId{};
  shared_ptr<string> tenantContextShrink{};
  shared_ptr<string> workbookId{};

  InsertRowsBeforeShrinkRequest() {}

  explicit InsertRowsBeforeShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (row) {
      res["Row"] = boost::any(*row);
    }
    if (rowCount) {
      res["RowCount"] = boost::any(*rowCount);
    }
    if (sheetId) {
      res["SheetId"] = boost::any(*sheetId);
    }
    if (tenantContextShrink) {
      res["TenantContext"] = boost::any(*tenantContextShrink);
    }
    if (workbookId) {
      res["WorkbookId"] = boost::any(*workbookId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Row") != m.end() && !m["Row"].empty()) {
      row = make_shared<long>(boost::any_cast<long>(m["Row"]));
    }
    if (m.find("RowCount") != m.end() && !m["RowCount"].empty()) {
      rowCount = make_shared<long>(boost::any_cast<long>(m["RowCount"]));
    }
    if (m.find("SheetId") != m.end() && !m["SheetId"].empty()) {
      sheetId = make_shared<string>(boost::any_cast<string>(m["SheetId"]));
    }
    if (m.find("TenantContext") != m.end() && !m["TenantContext"].empty()) {
      tenantContextShrink = make_shared<string>(boost::any_cast<string>(m["TenantContext"]));
    }
    if (m.find("WorkbookId") != m.end() && !m["WorkbookId"].empty()) {
      workbookId = make_shared<string>(boost::any_cast<string>(m["WorkbookId"]));
    }
  }


  virtual ~InsertRowsBeforeShrinkRequest() = default;
};
class InsertRowsBeforeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  InsertRowsBeforeResponseBody() {}

  explicit InsertRowsBeforeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~InsertRowsBeforeResponseBody() = default;
};
class InsertRowsBeforeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InsertRowsBeforeResponseBody> body{};

  InsertRowsBeforeResponse() {}

  explicit InsertRowsBeforeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InsertRowsBeforeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InsertRowsBeforeResponseBody>(model1);
      }
    }
  }


  virtual ~InsertRowsBeforeResponse() = default;
};
class UpdateWorkspaceDocMembersHeadersAccountContext : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  UpdateWorkspaceDocMembersHeadersAccountContext() {}

  explicit UpdateWorkspaceDocMembersHeadersAccountContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
  }


  virtual ~UpdateWorkspaceDocMembersHeadersAccountContext() = default;
};
class UpdateWorkspaceDocMembersHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<UpdateWorkspaceDocMembersHeadersAccountContext> accountContext{};

  UpdateWorkspaceDocMembersHeaders() {}

  explicit UpdateWorkspaceDocMembersHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (accountContext) {
      res["AccountContext"] = accountContext ? boost::any(accountContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("AccountContext") != m.end() && !m["AccountContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccountContext"].type()) {
        UpdateWorkspaceDocMembersHeadersAccountContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccountContext"]));
        accountContext = make_shared<UpdateWorkspaceDocMembersHeadersAccountContext>(model1);
      }
    }
  }


  virtual ~UpdateWorkspaceDocMembersHeaders() = default;
};
class UpdateWorkspaceDocMembersShrinkHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> accountContextShrink{};

  UpdateWorkspaceDocMembersShrinkHeaders() {}

  explicit UpdateWorkspaceDocMembersShrinkHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (accountContextShrink) {
      res["AccountContext"] = boost::any(*accountContextShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("AccountContext") != m.end() && !m["AccountContext"].empty()) {
      accountContextShrink = make_shared<string>(boost::any_cast<string>(m["AccountContext"]));
    }
  }


  virtual ~UpdateWorkspaceDocMembersShrinkHeaders() = default;
};
class UpdateWorkspaceDocMembersRequestMembers : public Darabonba::Model {
public:
  shared_ptr<string> memberId{};
  shared_ptr<string> memberType{};
  shared_ptr<string> roleType{};

  UpdateWorkspaceDocMembersRequestMembers() {}

  explicit UpdateWorkspaceDocMembersRequestMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (memberType) {
      res["MemberType"] = boost::any(*memberType);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("MemberType") != m.end() && !m["MemberType"].empty()) {
      memberType = make_shared<string>(boost::any_cast<string>(m["MemberType"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
  }


  virtual ~UpdateWorkspaceDocMembersRequestMembers() = default;
};
class UpdateWorkspaceDocMembersRequestTenantContext : public Darabonba::Model {
public:
  shared_ptr<string> tenantId{};

  UpdateWorkspaceDocMembersRequestTenantContext() {}

  explicit UpdateWorkspaceDocMembersRequestTenantContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~UpdateWorkspaceDocMembersRequestTenantContext() = default;
};
class UpdateWorkspaceDocMembersRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateWorkspaceDocMembersRequestMembers>> members{};
  shared_ptr<string> nodeId{};
  shared_ptr<UpdateWorkspaceDocMembersRequestTenantContext> tenantContext{};
  shared_ptr<string> workspaceId{};

  UpdateWorkspaceDocMembersRequest() {}

  explicit UpdateWorkspaceDocMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (members) {
      vector<boost::any> temp1;
      for(auto item1:*members){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Members"] = boost::any(temp1);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (tenantContext) {
      res["TenantContext"] = tenantContext ? boost::any(tenantContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<UpdateWorkspaceDocMembersRequestMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Members"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateWorkspaceDocMembersRequestMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        members = make_shared<vector<UpdateWorkspaceDocMembersRequestMembers>>(expect1);
      }
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("TenantContext") != m.end() && !m["TenantContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["TenantContext"].type()) {
        UpdateWorkspaceDocMembersRequestTenantContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TenantContext"]));
        tenantContext = make_shared<UpdateWorkspaceDocMembersRequestTenantContext>(model1);
      }
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~UpdateWorkspaceDocMembersRequest() = default;
};
class UpdateWorkspaceDocMembersShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> membersShrink{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> tenantContextShrink{};
  shared_ptr<string> workspaceId{};

  UpdateWorkspaceDocMembersShrinkRequest() {}

  explicit UpdateWorkspaceDocMembersShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (membersShrink) {
      res["Members"] = boost::any(*membersShrink);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (tenantContextShrink) {
      res["TenantContext"] = boost::any(*tenantContextShrink);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      membersShrink = make_shared<string>(boost::any_cast<string>(m["Members"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("TenantContext") != m.end() && !m["TenantContext"].empty()) {
      tenantContextShrink = make_shared<string>(boost::any_cast<string>(m["TenantContext"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~UpdateWorkspaceDocMembersShrinkRequest() = default;
};
class UpdateWorkspaceDocMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateWorkspaceDocMembersResponseBody() {}

  explicit UpdateWorkspaceDocMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateWorkspaceDocMembersResponseBody() = default;
};
class UpdateWorkspaceDocMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateWorkspaceDocMembersResponseBody> body{};

  UpdateWorkspaceDocMembersResponse() {}

  explicit UpdateWorkspaceDocMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateWorkspaceDocMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateWorkspaceDocMembersResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateWorkspaceDocMembersResponse() = default;
};
class UpdateWorkspaceMembersHeadersAccountContext : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  UpdateWorkspaceMembersHeadersAccountContext() {}

  explicit UpdateWorkspaceMembersHeadersAccountContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
  }


  virtual ~UpdateWorkspaceMembersHeadersAccountContext() = default;
};
class UpdateWorkspaceMembersHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<UpdateWorkspaceMembersHeadersAccountContext> accountContext{};

  UpdateWorkspaceMembersHeaders() {}

  explicit UpdateWorkspaceMembersHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (accountContext) {
      res["AccountContext"] = accountContext ? boost::any(accountContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("AccountContext") != m.end() && !m["AccountContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccountContext"].type()) {
        UpdateWorkspaceMembersHeadersAccountContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccountContext"]));
        accountContext = make_shared<UpdateWorkspaceMembersHeadersAccountContext>(model1);
      }
    }
  }


  virtual ~UpdateWorkspaceMembersHeaders() = default;
};
class UpdateWorkspaceMembersShrinkHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> accountContextShrink{};

  UpdateWorkspaceMembersShrinkHeaders() {}

  explicit UpdateWorkspaceMembersShrinkHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (accountContextShrink) {
      res["AccountContext"] = boost::any(*accountContextShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("AccountContext") != m.end() && !m["AccountContext"].empty()) {
      accountContextShrink = make_shared<string>(boost::any_cast<string>(m["AccountContext"]));
    }
  }


  virtual ~UpdateWorkspaceMembersShrinkHeaders() = default;
};
class UpdateWorkspaceMembersRequestMembers : public Darabonba::Model {
public:
  shared_ptr<string> memberId{};
  shared_ptr<string> memberType{};
  shared_ptr<string> roleType{};

  UpdateWorkspaceMembersRequestMembers() {}

  explicit UpdateWorkspaceMembersRequestMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (memberType) {
      res["MemberType"] = boost::any(*memberType);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("MemberType") != m.end() && !m["MemberType"].empty()) {
      memberType = make_shared<string>(boost::any_cast<string>(m["MemberType"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
  }


  virtual ~UpdateWorkspaceMembersRequestMembers() = default;
};
class UpdateWorkspaceMembersRequestTenantContext : public Darabonba::Model {
public:
  shared_ptr<string> tenantId{};

  UpdateWorkspaceMembersRequestTenantContext() {}

  explicit UpdateWorkspaceMembersRequestTenantContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tenantId) {
      res["tenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tenantId") != m.end() && !m["tenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["tenantId"]));
    }
  }


  virtual ~UpdateWorkspaceMembersRequestTenantContext() = default;
};
class UpdateWorkspaceMembersRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateWorkspaceMembersRequestMembers>> members{};
  shared_ptr<UpdateWorkspaceMembersRequestTenantContext> tenantContext{};
  shared_ptr<string> workspaceId{};

  UpdateWorkspaceMembersRequest() {}

  explicit UpdateWorkspaceMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (members) {
      vector<boost::any> temp1;
      for(auto item1:*members){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Members"] = boost::any(temp1);
    }
    if (tenantContext) {
      res["TenantContext"] = tenantContext ? boost::any(tenantContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<UpdateWorkspaceMembersRequestMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Members"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateWorkspaceMembersRequestMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        members = make_shared<vector<UpdateWorkspaceMembersRequestMembers>>(expect1);
      }
    }
    if (m.find("TenantContext") != m.end() && !m["TenantContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["TenantContext"].type()) {
        UpdateWorkspaceMembersRequestTenantContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TenantContext"]));
        tenantContext = make_shared<UpdateWorkspaceMembersRequestTenantContext>(model1);
      }
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~UpdateWorkspaceMembersRequest() = default;
};
class UpdateWorkspaceMembersShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> membersShrink{};
  shared_ptr<string> tenantContextShrink{};
  shared_ptr<string> workspaceId{};

  UpdateWorkspaceMembersShrinkRequest() {}

  explicit UpdateWorkspaceMembersShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (membersShrink) {
      res["Members"] = boost::any(*membersShrink);
    }
    if (tenantContextShrink) {
      res["TenantContext"] = boost::any(*tenantContextShrink);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      membersShrink = make_shared<string>(boost::any_cast<string>(m["Members"]));
    }
    if (m.find("TenantContext") != m.end() && !m["TenantContext"].empty()) {
      tenantContextShrink = make_shared<string>(boost::any_cast<string>(m["TenantContext"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~UpdateWorkspaceMembersShrinkRequest() = default;
};
class UpdateWorkspaceMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateWorkspaceMembersResponseBody() {}

  explicit UpdateWorkspaceMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateWorkspaceMembersResponseBody() = default;
};
class UpdateWorkspaceMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateWorkspaceMembersResponseBody> body{};

  UpdateWorkspaceMembersResponse() {}

  explicit UpdateWorkspaceMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateWorkspaceMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateWorkspaceMembersResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateWorkspaceMembersResponse() = default;
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
  AddWorkspaceDocMembersResponse addWorkspaceDocMembersWithOptions(shared_ptr<AddWorkspaceDocMembersRequest> tmpReq, shared_ptr<AddWorkspaceDocMembersHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddWorkspaceDocMembersResponse addWorkspaceDocMembers(shared_ptr<AddWorkspaceDocMembersRequest> request);
  AddWorkspaceMembersResponse addWorkspaceMembersWithOptions(shared_ptr<AddWorkspaceMembersRequest> tmpReq, shared_ptr<AddWorkspaceMembersHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddWorkspaceMembersResponse addWorkspaceMembers(shared_ptr<AddWorkspaceMembersRequest> request);
  CreateSheetResponse createSheetWithOptions(shared_ptr<CreateSheetRequest> tmpReq, shared_ptr<CreateSheetHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSheetResponse createSheet(shared_ptr<CreateSheetRequest> request);
  CreateWorkspaceResponse createWorkspaceWithOptions(shared_ptr<CreateWorkspaceRequest> tmpReq, shared_ptr<CreateWorkspaceHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateWorkspaceResponse createWorkspace(shared_ptr<CreateWorkspaceRequest> request);
  CreateWorkspaceDocResponse createWorkspaceDocWithOptions(shared_ptr<CreateWorkspaceDocRequest> tmpReq, shared_ptr<CreateWorkspaceDocHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateWorkspaceDocResponse createWorkspaceDoc(shared_ptr<CreateWorkspaceDocRequest> request);
  DeleteWorkspaceDocMembersResponse deleteWorkspaceDocMembersWithOptions(shared_ptr<DeleteWorkspaceDocMembersRequest> tmpReq, shared_ptr<DeleteWorkspaceDocMembersHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteWorkspaceDocMembersResponse deleteWorkspaceDocMembers(shared_ptr<DeleteWorkspaceDocMembersRequest> request);
  DeleteWorkspaceMembersResponse deleteWorkspaceMembersWithOptions(shared_ptr<DeleteWorkspaceMembersRequest> tmpReq, shared_ptr<DeleteWorkspaceMembersHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteWorkspaceMembersResponse deleteWorkspaceMembers(shared_ptr<DeleteWorkspaceMembersRequest> request);
  GetUserResponse getUserWithOptions(shared_ptr<GetUserRequest> tmpReq, shared_ptr<GetUserHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserResponse getUser(shared_ptr<GetUserRequest> request);
  InsertRowsBeforeResponse insertRowsBeforeWithOptions(shared_ptr<InsertRowsBeforeRequest> tmpReq, shared_ptr<InsertRowsBeforeHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InsertRowsBeforeResponse insertRowsBefore(shared_ptr<InsertRowsBeforeRequest> request);
  UpdateWorkspaceDocMembersResponse updateWorkspaceDocMembersWithOptions(shared_ptr<UpdateWorkspaceDocMembersRequest> tmpReq, shared_ptr<UpdateWorkspaceDocMembersHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateWorkspaceDocMembersResponse updateWorkspaceDocMembers(shared_ptr<UpdateWorkspaceDocMembersRequest> request);
  UpdateWorkspaceMembersResponse updateWorkspaceMembersWithOptions(shared_ptr<UpdateWorkspaceMembersRequest> tmpReq, shared_ptr<UpdateWorkspaceMembersHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateWorkspaceMembersResponse updateWorkspaceMembers(shared_ptr<UpdateWorkspaceMembersRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Aliding20230426

#endif
