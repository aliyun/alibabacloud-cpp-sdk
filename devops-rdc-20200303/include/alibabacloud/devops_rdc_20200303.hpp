// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DEVOPS-RDC20200303_H_
#define ALIBABACLOUD_DEVOPS-RDC20200303_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Devops-rdc20200303 {
class InsertPipelineMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<long> pipelineId{};
  shared_ptr<string> userPk{};
  shared_ptr<string> userId{};
  shared_ptr<string> roleName{};

  InsertPipelineMemberRequest() {}

  explicit InsertPipelineMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    if (userPk) {
      res["UserPk"] = boost::any(*userPk);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<long>(boost::any_cast<long>(m["PipelineId"]));
    }
    if (m.find("UserPk") != m.end() && !m["UserPk"].empty()) {
      userPk = make_shared<string>(boost::any_cast<string>(m["UserPk"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~InsertPipelineMemberRequest() = default;
};
class InsertPipelineMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> object{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  InsertPipelineMemberResponseBody() {}

  explicit InsertPipelineMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (object) {
      res["Object"] = boost::any(*object);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<bool>(boost::any_cast<bool>(m["Object"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~InsertPipelineMemberResponseBody() = default;
};
class InsertPipelineMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<InsertPipelineMemberResponseBody> body{};

  InsertPipelineMemberResponse() {}

  explicit InsertPipelineMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        InsertPipelineMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InsertPipelineMemberResponseBody>(model1);
      }
    }
  }


  virtual ~InsertPipelineMemberResponse() = default;
};
class ListDevopsProjectTaskFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> projectId{};

  ListDevopsProjectTaskFlowRequest() {}

  explicit ListDevopsProjectTaskFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~ListDevopsProjectTaskFlowRequest() = default;
};
class ListDevopsProjectTaskFlowResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> name{};
  shared_ptr<string> id{};

  ListDevopsProjectTaskFlowResponseBodyObject() {}

  explicit ListDevopsProjectTaskFlowResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~ListDevopsProjectTaskFlowResponseBodyObject() = default;
};
class ListDevopsProjectTaskFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<ListDevopsProjectTaskFlowResponseBodyObject>> object{};

  ListDevopsProjectTaskFlowResponseBody() {}

  explicit ListDevopsProjectTaskFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      vector<boost::any> temp1;
      for(auto item1:*object){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Object"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(vector<boost::any>) == m["Object"].type()) {
        vector<ListDevopsProjectTaskFlowResponseBodyObject> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Object"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDevopsProjectTaskFlowResponseBodyObject model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        object = make_shared<vector<ListDevopsProjectTaskFlowResponseBodyObject>>(expect1);
      }
    }
  }


  virtual ~ListDevopsProjectTaskFlowResponseBody() = default;
};
class ListDevopsProjectTaskFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDevopsProjectTaskFlowResponseBody> body{};

  ListDevopsProjectTaskFlowResponse() {}

  explicit ListDevopsProjectTaskFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDevopsProjectTaskFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDevopsProjectTaskFlowResponseBody>(model1);
      }
    }
  }


  virtual ~ListDevopsProjectTaskFlowResponse() = default;
};
class GetDevopsProjectMembersRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> projectId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> pageToken{};

  GetDevopsProjectMembersRequest() {}

  explicit GetDevopsProjectMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageToken) {
      res["PageToken"] = boost::any(*pageToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageToken") != m.end() && !m["PageToken"].empty()) {
      pageToken = make_shared<string>(boost::any_cast<string>(m["PageToken"]));
    }
  }


  virtual ~GetDevopsProjectMembersRequest() = default;
};
class GetDevopsProjectMembersResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> userId{};
  shared_ptr<string> memberId{};
  shared_ptr<long> role{};
  shared_ptr<string> name{};
  shared_ptr<string> phone{};

  GetDevopsProjectMembersResponseBodyObject() {}

  explicit GetDevopsProjectMembersResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (name) {
      res["Name"] = boost::any(*name);
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
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<long>(boost::any_cast<long>(m["Role"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
  }


  virtual ~GetDevopsProjectMembersResponseBodyObject() = default;
};
class GetDevopsProjectMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> nextPageToken{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<bool> successful{};
  shared_ptr<long> total{};
  shared_ptr<vector<GetDevopsProjectMembersResponseBodyObject>> object{};

  GetDevopsProjectMembersResponseBody() {}

  explicit GetDevopsProjectMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (nextPageToken) {
      res["NextPageToken"] = boost::any(*nextPageToken);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (object) {
      vector<boost::any> temp1;
      for(auto item1:*object){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Object"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("NextPageToken") != m.end() && !m["NextPageToken"].empty()) {
      nextPageToken = make_shared<string>(boost::any_cast<string>(m["NextPageToken"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(vector<boost::any>) == m["Object"].type()) {
        vector<GetDevopsProjectMembersResponseBodyObject> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Object"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDevopsProjectMembersResponseBodyObject model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        object = make_shared<vector<GetDevopsProjectMembersResponseBodyObject>>(expect1);
      }
    }
  }


  virtual ~GetDevopsProjectMembersResponseBody() = default;
};
class GetDevopsProjectMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDevopsProjectMembersResponseBody> body{};

  GetDevopsProjectMembersResponse() {}

  explicit GetDevopsProjectMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetDevopsProjectMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDevopsProjectMembersResponseBody>(model1);
      }
    }
  }


  virtual ~GetDevopsProjectMembersResponse() = default;
};
class AddCodeupSourceToPipelineRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<long> pipelineId{};
  shared_ptr<string> codePath{};
  shared_ptr<string> codeBranch{};

  AddCodeupSourceToPipelineRequest() {}

  explicit AddCodeupSourceToPipelineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    if (codePath) {
      res["CodePath"] = boost::any(*codePath);
    }
    if (codeBranch) {
      res["CodeBranch"] = boost::any(*codeBranch);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<long>(boost::any_cast<long>(m["PipelineId"]));
    }
    if (m.find("CodePath") != m.end() && !m["CodePath"].empty()) {
      codePath = make_shared<string>(boost::any_cast<string>(m["CodePath"]));
    }
    if (m.find("CodeBranch") != m.end() && !m["CodeBranch"].empty()) {
      codeBranch = make_shared<string>(boost::any_cast<string>(m["CodeBranch"]));
    }
  }


  virtual ~AddCodeupSourceToPipelineRequest() = default;
};
class AddCodeupSourceToPipelineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> pipelineId{};

  AddCodeupSourceToPipelineResponseBody() {}

  explicit AddCodeupSourceToPipelineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<long>(boost::any_cast<long>(m["PipelineId"]));
    }
  }


  virtual ~AddCodeupSourceToPipelineResponseBody() = default;
};
class AddCodeupSourceToPipelineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddCodeupSourceToPipelineResponseBody> body{};

  AddCodeupSourceToPipelineResponse() {}

  explicit AddCodeupSourceToPipelineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddCodeupSourceToPipelineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddCodeupSourceToPipelineResponseBody>(model1);
      }
    }
  }


  virtual ~AddCodeupSourceToPipelineResponse() = default;
};
class DeleteDevopsProjectSprintRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> sprintId{};

  DeleteDevopsProjectSprintRequest() {}

  explicit DeleteDevopsProjectSprintRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (sprintId) {
      res["SprintId"] = boost::any(*sprintId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("SprintId") != m.end() && !m["SprintId"].empty()) {
      sprintId = make_shared<string>(boost::any_cast<string>(m["SprintId"]));
    }
  }


  virtual ~DeleteDevopsProjectSprintRequest() = default;
};
class DeleteDevopsProjectSprintResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> object{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};

  DeleteDevopsProjectSprintResponseBody() {}

  explicit DeleteDevopsProjectSprintResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (object) {
      res["Object"] = boost::any(*object);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<bool>(boost::any_cast<bool>(m["Object"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
  }


  virtual ~DeleteDevopsProjectSprintResponseBody() = default;
};
class DeleteDevopsProjectSprintResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDevopsProjectSprintResponseBody> body{};

  DeleteDevopsProjectSprintResponse() {}

  explicit DeleteDevopsProjectSprintResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDevopsProjectSprintResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDevopsProjectSprintResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDevopsProjectSprintResponse() = default;
};
class DeleteCommonGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> projectId{};
  shared_ptr<string> commonGroupId{};

  DeleteCommonGroupRequest() {}

  explicit DeleteCommonGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (commonGroupId) {
      res["CommonGroupId"] = boost::any(*commonGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("CommonGroupId") != m.end() && !m["CommonGroupId"].empty()) {
      commonGroupId = make_shared<string>(boost::any_cast<string>(m["CommonGroupId"]));
    }
  }


  virtual ~DeleteCommonGroupRequest() = default;
};
class DeleteCommonGroupResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  DeleteCommonGroupResponseBodyObject() {}

  explicit DeleteCommonGroupResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DeleteCommonGroupResponseBodyObject() = default;
};
class DeleteCommonGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};
  shared_ptr<DeleteCommonGroupResponseBodyObject> object{};

  DeleteCommonGroupResponseBody() {}

  explicit DeleteCommonGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      res["Object"] = object ? boost::any(object->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(map<string, boost::any>) == m["Object"].type()) {
        DeleteCommonGroupResponseBodyObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Object"]));
        object = make_shared<DeleteCommonGroupResponseBodyObject>(model1);
      }
    }
  }


  virtual ~DeleteCommonGroupResponseBody() = default;
};
class DeleteCommonGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteCommonGroupResponseBody> body{};

  DeleteCommonGroupResponse() {}

  explicit DeleteCommonGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteCommonGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCommonGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCommonGroupResponse() = default;
};
class ListProjectCustomFieldsRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> projectId{};

  ListProjectCustomFieldsRequest() {}

  explicit ListProjectCustomFieldsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~ListProjectCustomFieldsRequest() = default;
};
class ListProjectCustomFieldsResponseBodyObjectValues : public Darabonba::Model {
public:
  shared_ptr<string> value{};
  shared_ptr<string> id{};

  ListProjectCustomFieldsResponseBodyObjectValues() {}

  explicit ListProjectCustomFieldsResponseBodyObjectValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~ListProjectCustomFieldsResponseBodyObjectValues() = default;
};
class ListProjectCustomFieldsResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> customFieldId{};
  shared_ptr<string> subtype{};
  shared_ptr<string> name{};
  shared_ptr<vector<ListProjectCustomFieldsResponseBodyObjectValues>> values{};

  ListProjectCustomFieldsResponseBodyObject() {}

  explicit ListProjectCustomFieldsResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (customFieldId) {
      res["CustomFieldId"] = boost::any(*customFieldId);
    }
    if (subtype) {
      res["Subtype"] = boost::any(*subtype);
    }
    if (name) {
      res["Name"] = boost::any(*name);
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
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("CustomFieldId") != m.end() && !m["CustomFieldId"].empty()) {
      customFieldId = make_shared<string>(boost::any_cast<string>(m["CustomFieldId"]));
    }
    if (m.find("Subtype") != m.end() && !m["Subtype"].empty()) {
      subtype = make_shared<string>(boost::any_cast<string>(m["Subtype"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<ListProjectCustomFieldsResponseBodyObjectValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Values"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProjectCustomFieldsResponseBodyObjectValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        values = make_shared<vector<ListProjectCustomFieldsResponseBodyObjectValues>>(expect1);
      }
    }
  }


  virtual ~ListProjectCustomFieldsResponseBodyObject() = default;
};
class ListProjectCustomFieldsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<ListProjectCustomFieldsResponseBodyObject>> object{};

  ListProjectCustomFieldsResponseBody() {}

  explicit ListProjectCustomFieldsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      vector<boost::any> temp1;
      for(auto item1:*object){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Object"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(vector<boost::any>) == m["Object"].type()) {
        vector<ListProjectCustomFieldsResponseBodyObject> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Object"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProjectCustomFieldsResponseBodyObject model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        object = make_shared<vector<ListProjectCustomFieldsResponseBodyObject>>(expect1);
      }
    }
  }


  virtual ~ListProjectCustomFieldsResponseBody() = default;
};
class ListProjectCustomFieldsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListProjectCustomFieldsResponseBody> body{};

  ListProjectCustomFieldsResponse() {}

  explicit ListProjectCustomFieldsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListProjectCustomFieldsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProjectCustomFieldsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProjectCustomFieldsResponse() = default;
};
class InsertDevopsUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> userPk{};
  shared_ptr<string> userName{};
  shared_ptr<string> phone{};
  shared_ptr<string> email{};

  InsertDevopsUserRequest() {}

  explicit InsertDevopsUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPk) {
      res["UserPk"] = boost::any(*userPk);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPk") != m.end() && !m["UserPk"].empty()) {
      userPk = make_shared<string>(boost::any_cast<string>(m["UserPk"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
  }


  virtual ~InsertDevopsUserRequest() = default;
};
class InsertDevopsUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> object{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};

  InsertDevopsUserResponseBody() {}

  explicit InsertDevopsUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (object) {
      res["Object"] = boost::any(*object);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<string>(boost::any_cast<string>(m["Object"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
  }


  virtual ~InsertDevopsUserResponseBody() = default;
};
class InsertDevopsUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<InsertDevopsUserResponseBody> body{};

  InsertDevopsUserResponse() {}

  explicit InsertDevopsUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        InsertDevopsUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InsertDevopsUserResponseBody>(model1);
      }
    }
  }


  virtual ~InsertDevopsUserResponse() = default;
};
class UpdateDevopsProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> name{};
  shared_ptr<string> description{};
  shared_ptr<string> projectId{};

  UpdateDevopsProjectRequest() {}

  explicit UpdateDevopsProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~UpdateDevopsProjectRequest() = default;
};
class UpdateDevopsProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> object{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};

  UpdateDevopsProjectResponseBody() {}

  explicit UpdateDevopsProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (object) {
      res["Object"] = boost::any(*object);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<string>(boost::any_cast<string>(m["Object"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
  }


  virtual ~UpdateDevopsProjectResponseBody() = default;
};
class UpdateDevopsProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateDevopsProjectResponseBody> body{};

  UpdateDevopsProjectResponse() {}

  explicit UpdateDevopsProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateDevopsProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDevopsProjectResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDevopsProjectResponse() = default;
};
class CheckAliyunAccountExistsRequest : public Darabonba::Model {
public:
  shared_ptr<string> userPk{};

  CheckAliyunAccountExistsRequest() {}

  explicit CheckAliyunAccountExistsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPk) {
      res["UserPk"] = boost::any(*userPk);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPk") != m.end() && !m["UserPk"].empty()) {
      userPk = make_shared<string>(boost::any_cast<string>(m["UserPk"]));
    }
  }


  virtual ~CheckAliyunAccountExistsRequest() = default;
};
class CheckAliyunAccountExistsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> object{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};

  CheckAliyunAccountExistsResponseBody() {}

  explicit CheckAliyunAccountExistsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (object) {
      res["Object"] = boost::any(*object);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<bool>(boost::any_cast<bool>(m["Object"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
  }


  virtual ~CheckAliyunAccountExistsResponseBody() = default;
};
class CheckAliyunAccountExistsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CheckAliyunAccountExistsResponseBody> body{};

  CheckAliyunAccountExistsResponse() {}

  explicit CheckAliyunAccountExistsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckAliyunAccountExistsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckAliyunAccountExistsResponseBody>(model1);
      }
    }
  }


  virtual ~CheckAliyunAccountExistsResponse() = default;
};
class GetPipelineInstanceInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<long> pipelineId{};
  shared_ptr<string> flowInstanceId{};
  shared_ptr<string> userPk{};

  GetPipelineInstanceInfoRequest() {}

  explicit GetPipelineInstanceInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    if (flowInstanceId) {
      res["FlowInstanceId"] = boost::any(*flowInstanceId);
    }
    if (userPk) {
      res["UserPk"] = boost::any(*userPk);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<long>(boost::any_cast<long>(m["PipelineId"]));
    }
    if (m.find("FlowInstanceId") != m.end() && !m["FlowInstanceId"].empty()) {
      flowInstanceId = make_shared<string>(boost::any_cast<string>(m["FlowInstanceId"]));
    }
    if (m.find("UserPk") != m.end() && !m["UserPk"].empty()) {
      userPk = make_shared<string>(boost::any_cast<string>(m["UserPk"]));
    }
  }


  virtual ~GetPipelineInstanceInfoRequest() = default;
};
class GetPipelineInstanceInfoResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<string> employeeId{};
  shared_ptr<long> endTime{};
  shared_ptr<string> status{};
  shared_ptr<long> startTime{};
  shared_ptr<string> sources{};
  shared_ptr<vector<string>> dockerImages{};
  shared_ptr<vector<string>> packageDownloadUrls{};

  GetPipelineInstanceInfoResponseBodyObject() {}

  explicit GetPipelineInstanceInfoResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (employeeId) {
      res["EmployeeId"] = boost::any(*employeeId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (sources) {
      res["Sources"] = boost::any(*sources);
    }
    if (dockerImages) {
      res["DockerImages"] = boost::any(*dockerImages);
    }
    if (packageDownloadUrls) {
      res["PackageDownloadUrls"] = boost::any(*packageDownloadUrls);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EmployeeId") != m.end() && !m["EmployeeId"].empty()) {
      employeeId = make_shared<string>(boost::any_cast<string>(m["EmployeeId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      sources = make_shared<string>(boost::any_cast<string>(m["Sources"]));
    }
    if (m.find("DockerImages") != m.end() && !m["DockerImages"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DockerImages"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DockerImages"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dockerImages = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PackageDownloadUrls") != m.end() && !m["PackageDownloadUrls"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PackageDownloadUrls"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PackageDownloadUrls"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      packageDownloadUrls = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetPipelineInstanceInfoResponseBodyObject() = default;
};
class GetPipelineInstanceInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetPipelineInstanceInfoResponseBodyObject> object{};

  GetPipelineInstanceInfoResponseBody() {}

  explicit GetPipelineInstanceInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (object) {
      res["Object"] = object ? boost::any(object->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(map<string, boost::any>) == m["Object"].type()) {
        GetPipelineInstanceInfoResponseBodyObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Object"]));
        object = make_shared<GetPipelineInstanceInfoResponseBodyObject>(model1);
      }
    }
  }


  virtual ~GetPipelineInstanceInfoResponseBody() = default;
};
class GetPipelineInstanceInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPipelineInstanceInfoResponseBody> body{};

  GetPipelineInstanceInfoResponse() {}

  explicit GetPipelineInstanceInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPipelineInstanceInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPipelineInstanceInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetPipelineInstanceInfoResponse() = default;
};
class BatchInsertMembersRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> members{};
  shared_ptr<string> realPk{};

  BatchInsertMembersRequest() {}

  explicit BatchInsertMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (members) {
      res["Members"] = boost::any(*members);
    }
    if (realPk) {
      res["RealPk"] = boost::any(*realPk);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      members = make_shared<string>(boost::any_cast<string>(m["Members"]));
    }
    if (m.find("RealPk") != m.end() && !m["RealPk"].empty()) {
      realPk = make_shared<string>(boost::any_cast<string>(m["RealPk"]));
    }
  }


  virtual ~BatchInsertMembersRequest() = default;
};
class BatchInsertMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> object{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};

  BatchInsertMembersResponseBody() {}

  explicit BatchInsertMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (object) {
      res["Object"] = boost::any(*object);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<bool>(boost::any_cast<bool>(m["Object"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
  }


  virtual ~BatchInsertMembersResponseBody() = default;
};
class BatchInsertMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchInsertMembersResponseBody> body{};

  BatchInsertMembersResponse() {}

  explicit BatchInsertMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BatchInsertMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchInsertMembersResponseBody>(model1);
      }
    }
  }


  virtual ~BatchInsertMembersResponse() = default;
};
class ListServiceConnectionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> scType{};
  shared_ptr<string> userPk{};

  ListServiceConnectionsRequest() {}

  explicit ListServiceConnectionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (scType) {
      res["ScType"] = boost::any(*scType);
    }
    if (userPk) {
      res["UserPk"] = boost::any(*userPk);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("ScType") != m.end() && !m["ScType"].empty()) {
      scType = make_shared<string>(boost::any_cast<string>(m["ScType"]));
    }
    if (m.find("UserPk") != m.end() && !m["UserPk"].empty()) {
      userPk = make_shared<string>(boost::any_cast<string>(m["UserPk"]));
    }
  }


  virtual ~ListServiceConnectionsRequest() = default;
};
class ListServiceConnectionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<map<string, boost::any>>> object{};

  ListServiceConnectionsResponseBody() {}

  explicit ListServiceConnectionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      res["Object"] = boost::any(*object);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Object"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Object"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      object = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~ListServiceConnectionsResponseBody() = default;
};
class ListServiceConnectionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListServiceConnectionsResponseBody> body{};

  ListServiceConnectionsResponse() {}

  explicit ListServiceConnectionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class GetUserNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> userId{};

  GetUserNameRequest() {}

  explicit GetUserNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetUserNameRequest() = default;
};
class GetUserNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<string> object{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};

  GetUserNameResponseBody() {}

  explicit GetUserNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (object) {
      res["Object"] = boost::any(*object);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<string>(boost::any_cast<string>(m["Object"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
  }


  virtual ~GetUserNameResponseBody() = default;
};
class GetUserNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetUserNameResponseBody> body{};

  GetUserNameResponse() {}

  explicit GetUserNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetUserNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserNameResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserNameResponse() = default;
};
class InsertProjectMembersRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> projectId{};
  shared_ptr<string> members{};

  InsertProjectMembersRequest() {}

  explicit InsertProjectMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (members) {
      res["Members"] = boost::any(*members);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      members = make_shared<string>(boost::any_cast<string>(m["Members"]));
    }
  }


  virtual ~InsertProjectMembersRequest() = default;
};
class InsertProjectMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> object{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};

  InsertProjectMembersResponseBody() {}

  explicit InsertProjectMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (object) {
      res["Object"] = boost::any(*object);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<bool>(boost::any_cast<bool>(m["Object"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
  }


  virtual ~InsertProjectMembersResponseBody() = default;
};
class InsertProjectMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<InsertProjectMembersResponseBody> body{};

  InsertProjectMembersResponse() {}

  explicit InsertProjectMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        InsertProjectMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InsertProjectMembersResponseBody>(model1);
      }
    }
  }


  virtual ~InsertProjectMembersResponse() = default;
};
class ListDevopsProjectTaskListRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> projectId{};

  ListDevopsProjectTaskListRequest() {}

  explicit ListDevopsProjectTaskListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~ListDevopsProjectTaskListRequest() = default;
};
class ListDevopsProjectTaskListResponseBodyObjectResult : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  ListDevopsProjectTaskListResponseBodyObjectResult() {}

  explicit ListDevopsProjectTaskListResponseBodyObjectResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~ListDevopsProjectTaskListResponseBodyObjectResult() = default;
};
class ListDevopsProjectTaskListResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<vector<ListDevopsProjectTaskListResponseBodyObjectResult>> result{};

  ListDevopsProjectTaskListResponseBodyObject() {}

  explicit ListDevopsProjectTaskListResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListDevopsProjectTaskListResponseBodyObjectResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDevopsProjectTaskListResponseBodyObjectResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListDevopsProjectTaskListResponseBodyObjectResult>>(expect1);
      }
    }
  }


  virtual ~ListDevopsProjectTaskListResponseBodyObject() = default;
};
class ListDevopsProjectTaskListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};
  shared_ptr<ListDevopsProjectTaskListResponseBodyObject> object{};

  ListDevopsProjectTaskListResponseBody() {}

  explicit ListDevopsProjectTaskListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      res["Object"] = object ? boost::any(object->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(map<string, boost::any>) == m["Object"].type()) {
        ListDevopsProjectTaskListResponseBodyObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Object"]));
        object = make_shared<ListDevopsProjectTaskListResponseBodyObject>(model1);
      }
    }
  }


  virtual ~ListDevopsProjectTaskListResponseBody() = default;
};
class ListDevopsProjectTaskListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDevopsProjectTaskListResponseBody> body{};

  ListDevopsProjectTaskListResponse() {}

  explicit ListDevopsProjectTaskListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDevopsProjectTaskListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDevopsProjectTaskListResponseBody>(model1);
      }
    }
  }


  virtual ~ListDevopsProjectTaskListResponse() = default;
};
class GetTaskDetailBaseRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> projectId{};
  shared_ptr<string> taskId{};

  GetTaskDetailBaseRequest() {}

  explicit GetTaskDetailBaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetTaskDetailBaseRequest() = default;
};
class GetTaskDetailBaseResponseBodyObjectCustomfieldsValue : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> title{};

  GetTaskDetailBaseResponseBodyObjectCustomfieldsValue() {}

  explicit GetTaskDetailBaseResponseBodyObjectCustomfieldsValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~GetTaskDetailBaseResponseBodyObjectCustomfieldsValue() = default;
};
class GetTaskDetailBaseResponseBodyObjectCustomfields : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> customfieldId{};
  shared_ptr<vector<GetTaskDetailBaseResponseBodyObjectCustomfieldsValue>> value{};
  shared_ptr<vector<string>> values{};

  GetTaskDetailBaseResponseBodyObjectCustomfields() {}

  explicit GetTaskDetailBaseResponseBodyObjectCustomfields(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (customfieldId) {
      res["CustomfieldId"] = boost::any(*customfieldId);
    }
    if (value) {
      vector<boost::any> temp1;
      for(auto item1:*value){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Value"] = boost::any(temp1);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("CustomfieldId") != m.end() && !m["CustomfieldId"].empty()) {
      customfieldId = make_shared<string>(boost::any_cast<string>(m["CustomfieldId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      if (typeid(vector<boost::any>) == m["Value"].type()) {
        vector<GetTaskDetailBaseResponseBodyObjectCustomfieldsValue> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Value"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTaskDetailBaseResponseBodyObjectCustomfieldsValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        value = make_shared<vector<GetTaskDetailBaseResponseBodyObjectCustomfieldsValue>>(expect1);
      }
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


  virtual ~GetTaskDetailBaseResponseBodyObjectCustomfields() = default;
};
class GetTaskDetailBaseResponseBodyObjectSubtasks : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> id{};

  GetTaskDetailBaseResponseBodyObjectSubtasks() {}

  explicit GetTaskDetailBaseResponseBodyObjectSubtasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~GetTaskDetailBaseResponseBodyObjectSubtasks() = default;
};
class GetTaskDetailBaseResponseBodyObjectInvolvers : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> id{};

  GetTaskDetailBaseResponseBodyObjectInvolvers() {}

  explicit GetTaskDetailBaseResponseBodyObjectInvolvers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~GetTaskDetailBaseResponseBodyObjectInvolvers() = default;
};
class GetTaskDetailBaseResponseBodyObjectScenariofieldconfig : public Darabonba::Model {
public:
  shared_ptr<string> icon{};
  shared_ptr<string> proTemplateConfigType{};
  shared_ptr<string> name{};
  shared_ptr<string> id{};

  GetTaskDetailBaseResponseBodyObjectScenariofieldconfig() {}

  explicit GetTaskDetailBaseResponseBodyObjectScenariofieldconfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (proTemplateConfigType) {
      res["ProTemplateConfigType"] = boost::any(*proTemplateConfigType);
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
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("ProTemplateConfigType") != m.end() && !m["ProTemplateConfigType"].empty()) {
      proTemplateConfigType = make_shared<string>(boost::any_cast<string>(m["ProTemplateConfigType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~GetTaskDetailBaseResponseBodyObjectScenariofieldconfig() = default;
};
class GetTaskDetailBaseResponseBodyObjectExecutor : public Darabonba::Model {
public:
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> name{};
  shared_ptr<string> id{};

  GetTaskDetailBaseResponseBodyObjectExecutor() {}

  explicit GetTaskDetailBaseResponseBodyObjectExecutor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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


  virtual ~GetTaskDetailBaseResponseBodyObjectExecutor() = default;
};
class GetTaskDetailBaseResponseBodyObjectTasklist : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> title{};

  GetTaskDetailBaseResponseBodyObjectTasklist() {}

  explicit GetTaskDetailBaseResponseBodyObjectTasklist(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~GetTaskDetailBaseResponseBodyObjectTasklist() = default;
};
class GetTaskDetailBaseResponseBodyObjectTaskflowstatus : public Darabonba::Model {
public:
  shared_ptr<string> taskflowId{};
  shared_ptr<string> name{};
  shared_ptr<string> id{};
  shared_ptr<string> kind{};

  GetTaskDetailBaseResponseBodyObjectTaskflowstatus() {}

  explicit GetTaskDetailBaseResponseBodyObjectTaskflowstatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskflowId) {
      res["TaskflowId"] = boost::any(*taskflowId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (kind) {
      res["Kind"] = boost::any(*kind);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskflowId") != m.end() && !m["TaskflowId"].empty()) {
      taskflowId = make_shared<string>(boost::any_cast<string>(m["TaskflowId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Kind") != m.end() && !m["Kind"].empty()) {
      kind = make_shared<string>(boost::any_cast<string>(m["Kind"]));
    }
  }


  virtual ~GetTaskDetailBaseResponseBodyObjectTaskflowstatus() = default;
};
class GetTaskDetailBaseResponseBodyObjectCreator : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> id{};

  GetTaskDetailBaseResponseBodyObjectCreator() {}

  explicit GetTaskDetailBaseResponseBodyObjectCreator(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~GetTaskDetailBaseResponseBodyObjectCreator() = default;
};
class GetTaskDetailBaseResponseBodyObjectReminder : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> date{};
  shared_ptr<string> method{};
  shared_ptr<string> creatorId{};
  shared_ptr<vector<string>> memberRoles{};
  shared_ptr<vector<string>> members{};
  shared_ptr<vector<string>> rules{};

  GetTaskDetailBaseResponseBodyObjectReminder() {}

  explicit GetTaskDetailBaseResponseBodyObjectReminder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (method) {
      res["Method"] = boost::any(*method);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (memberRoles) {
      res["MemberRoles"] = boost::any(*memberRoles);
    }
    if (members) {
      res["Members"] = boost::any(*members);
    }
    if (rules) {
      res["Rules"] = boost::any(*rules);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("Method") != m.end() && !m["Method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["Method"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["CreatorId"]));
    }
    if (m.find("MemberRoles") != m.end() && !m["MemberRoles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MemberRoles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MemberRoles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      memberRoles = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Members"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      members = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Rules"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      rules = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetTaskDetailBaseResponseBodyObjectReminder() = default;
};
class GetTaskDetailBaseResponseBodyObjectSubtaskCount : public Darabonba::Model {
public:
  shared_ptr<long> done{};
  shared_ptr<long> total{};

  GetTaskDetailBaseResponseBodyObjectSubtaskCount() {}

  explicit GetTaskDetailBaseResponseBodyObjectSubtaskCount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (done) {
      res["Done"] = boost::any(*done);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Done") != m.end() && !m["Done"].empty()) {
      done = make_shared<long>(boost::any_cast<long>(m["Done"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~GetTaskDetailBaseResponseBodyObjectSubtaskCount() = default;
};
class GetTaskDetailBaseResponseBodyObjectWorkTime : public Darabonba::Model {
public:
  shared_ptr<long> usedTime{};
  shared_ptr<long> totalTime{};
  shared_ptr<string> unit{};

  GetTaskDetailBaseResponseBodyObjectWorkTime() {}

  explicit GetTaskDetailBaseResponseBodyObjectWorkTime(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (usedTime) {
      res["UsedTime"] = boost::any(*usedTime);
    }
    if (totalTime) {
      res["TotalTime"] = boost::any(*totalTime);
    }
    if (unit) {
      res["Unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UsedTime") != m.end() && !m["UsedTime"].empty()) {
      usedTime = make_shared<long>(boost::any_cast<long>(m["UsedTime"]));
    }
    if (m.find("TotalTime") != m.end() && !m["TotalTime"].empty()) {
      totalTime = make_shared<long>(boost::any_cast<long>(m["TotalTime"]));
    }
    if (m.find("Unit") != m.end() && !m["Unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["Unit"]));
    }
  }


  virtual ~GetTaskDetailBaseResponseBodyObjectWorkTime() = default;
};
class GetTaskDetailBaseResponseBodyObjectBadges : public Darabonba::Model {
public:
  shared_ptr<long> likesCount{};
  shared_ptr<long> objectlinksCount{};
  shared_ptr<long> attachmentsCount{};
  shared_ptr<long> commentsCount{};

  GetTaskDetailBaseResponseBodyObjectBadges() {}

  explicit GetTaskDetailBaseResponseBodyObjectBadges(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (likesCount) {
      res["LikesCount"] = boost::any(*likesCount);
    }
    if (objectlinksCount) {
      res["ObjectlinksCount"] = boost::any(*objectlinksCount);
    }
    if (attachmentsCount) {
      res["AttachmentsCount"] = boost::any(*attachmentsCount);
    }
    if (commentsCount) {
      res["CommentsCount"] = boost::any(*commentsCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LikesCount") != m.end() && !m["LikesCount"].empty()) {
      likesCount = make_shared<long>(boost::any_cast<long>(m["LikesCount"]));
    }
    if (m.find("ObjectlinksCount") != m.end() && !m["ObjectlinksCount"].empty()) {
      objectlinksCount = make_shared<long>(boost::any_cast<long>(m["ObjectlinksCount"]));
    }
    if (m.find("AttachmentsCount") != m.end() && !m["AttachmentsCount"].empty()) {
      attachmentsCount = make_shared<long>(boost::any_cast<long>(m["AttachmentsCount"]));
    }
    if (m.find("CommentsCount") != m.end() && !m["CommentsCount"].empty()) {
      commentsCount = make_shared<long>(boost::any_cast<long>(m["CommentsCount"]));
    }
  }


  virtual ~GetTaskDetailBaseResponseBodyObjectBadges() = default;
};
class GetTaskDetailBaseResponseBodyObjectStage : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> id{};

  GetTaskDetailBaseResponseBodyObjectStage() {}

  explicit GetTaskDetailBaseResponseBodyObjectStage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~GetTaskDetailBaseResponseBodyObjectStage() = default;
};
class GetTaskDetailBaseResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<bool> isFavorite{};
  shared_ptr<string> organization{};
  shared_ptr<string> executorId{};
  shared_ptr<string> scenariofieldconfigId{};
  shared_ptr<string> projectId{};
  shared_ptr<bool> isTopInProject{};
  shared_ptr<long> priority{};
  shared_ptr<long> shareStatus{};
  shared_ptr<string> accomplished{};
  shared_ptr<string> taskflowstatusId{};
  shared_ptr<string> note{};
  shared_ptr<string> updated{};
  shared_ptr<long> uniqueId{};
  shared_ptr<bool> isArchived{};
  shared_ptr<string> content{};
  shared_ptr<long> commentsCount{};
  shared_ptr<long> rating{};
  shared_ptr<string> recurrence{};
  shared_ptr<string> objectType{};
  shared_ptr<long> progress{};
  shared_ptr<string> untilDate{};
  shared_ptr<string> startDate{};
  shared_ptr<string> storyPoint{};
  shared_ptr<long> objectlinksCount{};
  shared_ptr<string> sprint{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> sourceDate{};
  shared_ptr<long> likesCount{};
  shared_ptr<string> stageId{};
  shared_ptr<string> visible{};
  shared_ptr<bool> isDone{};
  shared_ptr<string> parent{};
  shared_ptr<string> sprintId{};
  shared_ptr<long> attachmentsCount{};
  shared_ptr<string> dueDate{};
  shared_ptr<string> created{};
  shared_ptr<string> taskId{};
  shared_ptr<string> id{};
  shared_ptr<vector<GetTaskDetailBaseResponseBodyObjectCustomfields>> customfields{};
  shared_ptr<vector<GetTaskDetailBaseResponseBodyObjectSubtasks>> subtasks{};
  shared_ptr<vector<GetTaskDetailBaseResponseBodyObjectInvolvers>> involvers{};
  shared_ptr<vector<string>> labels{};
  shared_ptr<vector<string>> divisions{};
  shared_ptr<vector<string>> ancestors{};
  shared_ptr<vector<string>> involveMembers{};
  shared_ptr<vector<string>> tagIds{};
  shared_ptr<vector<string>> ancestorIds{};
  shared_ptr<GetTaskDetailBaseResponseBodyObjectScenariofieldconfig> scenariofieldconfig{};
  shared_ptr<GetTaskDetailBaseResponseBodyObjectExecutor> executor{};
  shared_ptr<GetTaskDetailBaseResponseBodyObjectTasklist> tasklist{};
  shared_ptr<GetTaskDetailBaseResponseBodyObjectTaskflowstatus> taskflowstatus{};
  shared_ptr<GetTaskDetailBaseResponseBodyObjectCreator> creator{};
  shared_ptr<GetTaskDetailBaseResponseBodyObjectReminder> reminder{};
  shared_ptr<GetTaskDetailBaseResponseBodyObjectSubtaskCount> subtaskCount{};
  shared_ptr<GetTaskDetailBaseResponseBodyObjectWorkTime> workTime{};
  shared_ptr<GetTaskDetailBaseResponseBodyObjectBadges> badges{};
  shared_ptr<GetTaskDetailBaseResponseBodyObjectStage> stage{};

  GetTaskDetailBaseResponseBodyObject() {}

  explicit GetTaskDetailBaseResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isFavorite) {
      res["IsFavorite"] = boost::any(*isFavorite);
    }
    if (organization) {
      res["Organization"] = boost::any(*organization);
    }
    if (executorId) {
      res["ExecutorId"] = boost::any(*executorId);
    }
    if (scenariofieldconfigId) {
      res["ScenariofieldconfigId"] = boost::any(*scenariofieldconfigId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (isTopInProject) {
      res["IsTopInProject"] = boost::any(*isTopInProject);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (shareStatus) {
      res["ShareStatus"] = boost::any(*shareStatus);
    }
    if (accomplished) {
      res["Accomplished"] = boost::any(*accomplished);
    }
    if (taskflowstatusId) {
      res["TaskflowstatusId"] = boost::any(*taskflowstatusId);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (updated) {
      res["Updated"] = boost::any(*updated);
    }
    if (uniqueId) {
      res["UniqueId"] = boost::any(*uniqueId);
    }
    if (isArchived) {
      res["IsArchived"] = boost::any(*isArchived);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (commentsCount) {
      res["CommentsCount"] = boost::any(*commentsCount);
    }
    if (rating) {
      res["Rating"] = boost::any(*rating);
    }
    if (recurrence) {
      res["Recurrence"] = boost::any(*recurrence);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (untilDate) {
      res["UntilDate"] = boost::any(*untilDate);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (storyPoint) {
      res["StoryPoint"] = boost::any(*storyPoint);
    }
    if (objectlinksCount) {
      res["ObjectlinksCount"] = boost::any(*objectlinksCount);
    }
    if (sprint) {
      res["Sprint"] = boost::any(*sprint);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (sourceDate) {
      res["SourceDate"] = boost::any(*sourceDate);
    }
    if (likesCount) {
      res["LikesCount"] = boost::any(*likesCount);
    }
    if (stageId) {
      res["StageId"] = boost::any(*stageId);
    }
    if (visible) {
      res["Visible"] = boost::any(*visible);
    }
    if (isDone) {
      res["IsDone"] = boost::any(*isDone);
    }
    if (parent) {
      res["Parent"] = boost::any(*parent);
    }
    if (sprintId) {
      res["SprintId"] = boost::any(*sprintId);
    }
    if (attachmentsCount) {
      res["AttachmentsCount"] = boost::any(*attachmentsCount);
    }
    if (dueDate) {
      res["DueDate"] = boost::any(*dueDate);
    }
    if (created) {
      res["Created"] = boost::any(*created);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (customfields) {
      vector<boost::any> temp1;
      for(auto item1:*customfields){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Customfields"] = boost::any(temp1);
    }
    if (subtasks) {
      vector<boost::any> temp1;
      for(auto item1:*subtasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Subtasks"] = boost::any(temp1);
    }
    if (involvers) {
      vector<boost::any> temp1;
      for(auto item1:*involvers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Involvers"] = boost::any(temp1);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (divisions) {
      res["Divisions"] = boost::any(*divisions);
    }
    if (ancestors) {
      res["Ancestors"] = boost::any(*ancestors);
    }
    if (involveMembers) {
      res["InvolveMembers"] = boost::any(*involveMembers);
    }
    if (tagIds) {
      res["TagIds"] = boost::any(*tagIds);
    }
    if (ancestorIds) {
      res["AncestorIds"] = boost::any(*ancestorIds);
    }
    if (scenariofieldconfig) {
      res["Scenariofieldconfig"] = scenariofieldconfig ? boost::any(scenariofieldconfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (executor) {
      res["Executor"] = executor ? boost::any(executor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tasklist) {
      res["Tasklist"] = tasklist ? boost::any(tasklist->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskflowstatus) {
      res["Taskflowstatus"] = taskflowstatus ? boost::any(taskflowstatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (creator) {
      res["Creator"] = creator ? boost::any(creator->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (reminder) {
      res["Reminder"] = reminder ? boost::any(reminder->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (subtaskCount) {
      res["SubtaskCount"] = subtaskCount ? boost::any(subtaskCount->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workTime) {
      res["WorkTime"] = workTime ? boost::any(workTime->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (badges) {
      res["Badges"] = badges ? boost::any(badges->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (stage) {
      res["Stage"] = stage ? boost::any(stage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsFavorite") != m.end() && !m["IsFavorite"].empty()) {
      isFavorite = make_shared<bool>(boost::any_cast<bool>(m["IsFavorite"]));
    }
    if (m.find("Organization") != m.end() && !m["Organization"].empty()) {
      organization = make_shared<string>(boost::any_cast<string>(m["Organization"]));
    }
    if (m.find("ExecutorId") != m.end() && !m["ExecutorId"].empty()) {
      executorId = make_shared<string>(boost::any_cast<string>(m["ExecutorId"]));
    }
    if (m.find("ScenariofieldconfigId") != m.end() && !m["ScenariofieldconfigId"].empty()) {
      scenariofieldconfigId = make_shared<string>(boost::any_cast<string>(m["ScenariofieldconfigId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("IsTopInProject") != m.end() && !m["IsTopInProject"].empty()) {
      isTopInProject = make_shared<bool>(boost::any_cast<bool>(m["IsTopInProject"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("ShareStatus") != m.end() && !m["ShareStatus"].empty()) {
      shareStatus = make_shared<long>(boost::any_cast<long>(m["ShareStatus"]));
    }
    if (m.find("Accomplished") != m.end() && !m["Accomplished"].empty()) {
      accomplished = make_shared<string>(boost::any_cast<string>(m["Accomplished"]));
    }
    if (m.find("TaskflowstatusId") != m.end() && !m["TaskflowstatusId"].empty()) {
      taskflowstatusId = make_shared<string>(boost::any_cast<string>(m["TaskflowstatusId"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("Updated") != m.end() && !m["Updated"].empty()) {
      updated = make_shared<string>(boost::any_cast<string>(m["Updated"]));
    }
    if (m.find("UniqueId") != m.end() && !m["UniqueId"].empty()) {
      uniqueId = make_shared<long>(boost::any_cast<long>(m["UniqueId"]));
    }
    if (m.find("IsArchived") != m.end() && !m["IsArchived"].empty()) {
      isArchived = make_shared<bool>(boost::any_cast<bool>(m["IsArchived"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CommentsCount") != m.end() && !m["CommentsCount"].empty()) {
      commentsCount = make_shared<long>(boost::any_cast<long>(m["CommentsCount"]));
    }
    if (m.find("Rating") != m.end() && !m["Rating"].empty()) {
      rating = make_shared<long>(boost::any_cast<long>(m["Rating"]));
    }
    if (m.find("Recurrence") != m.end() && !m["Recurrence"].empty()) {
      recurrence = make_shared<string>(boost::any_cast<string>(m["Recurrence"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("UntilDate") != m.end() && !m["UntilDate"].empty()) {
      untilDate = make_shared<string>(boost::any_cast<string>(m["UntilDate"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("StoryPoint") != m.end() && !m["StoryPoint"].empty()) {
      storyPoint = make_shared<string>(boost::any_cast<string>(m["StoryPoint"]));
    }
    if (m.find("ObjectlinksCount") != m.end() && !m["ObjectlinksCount"].empty()) {
      objectlinksCount = make_shared<long>(boost::any_cast<long>(m["ObjectlinksCount"]));
    }
    if (m.find("Sprint") != m.end() && !m["Sprint"].empty()) {
      sprint = make_shared<string>(boost::any_cast<string>(m["Sprint"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["CreatorId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("SourceDate") != m.end() && !m["SourceDate"].empty()) {
      sourceDate = make_shared<string>(boost::any_cast<string>(m["SourceDate"]));
    }
    if (m.find("LikesCount") != m.end() && !m["LikesCount"].empty()) {
      likesCount = make_shared<long>(boost::any_cast<long>(m["LikesCount"]));
    }
    if (m.find("StageId") != m.end() && !m["StageId"].empty()) {
      stageId = make_shared<string>(boost::any_cast<string>(m["StageId"]));
    }
    if (m.find("Visible") != m.end() && !m["Visible"].empty()) {
      visible = make_shared<string>(boost::any_cast<string>(m["Visible"]));
    }
    if (m.find("IsDone") != m.end() && !m["IsDone"].empty()) {
      isDone = make_shared<bool>(boost::any_cast<bool>(m["IsDone"]));
    }
    if (m.find("Parent") != m.end() && !m["Parent"].empty()) {
      parent = make_shared<string>(boost::any_cast<string>(m["Parent"]));
    }
    if (m.find("SprintId") != m.end() && !m["SprintId"].empty()) {
      sprintId = make_shared<string>(boost::any_cast<string>(m["SprintId"]));
    }
    if (m.find("AttachmentsCount") != m.end() && !m["AttachmentsCount"].empty()) {
      attachmentsCount = make_shared<long>(boost::any_cast<long>(m["AttachmentsCount"]));
    }
    if (m.find("DueDate") != m.end() && !m["DueDate"].empty()) {
      dueDate = make_shared<string>(boost::any_cast<string>(m["DueDate"]));
    }
    if (m.find("Created") != m.end() && !m["Created"].empty()) {
      created = make_shared<string>(boost::any_cast<string>(m["Created"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Customfields") != m.end() && !m["Customfields"].empty()) {
      if (typeid(vector<boost::any>) == m["Customfields"].type()) {
        vector<GetTaskDetailBaseResponseBodyObjectCustomfields> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Customfields"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTaskDetailBaseResponseBodyObjectCustomfields model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customfields = make_shared<vector<GetTaskDetailBaseResponseBodyObjectCustomfields>>(expect1);
      }
    }
    if (m.find("Subtasks") != m.end() && !m["Subtasks"].empty()) {
      if (typeid(vector<boost::any>) == m["Subtasks"].type()) {
        vector<GetTaskDetailBaseResponseBodyObjectSubtasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Subtasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTaskDetailBaseResponseBodyObjectSubtasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subtasks = make_shared<vector<GetTaskDetailBaseResponseBodyObjectSubtasks>>(expect1);
      }
    }
    if (m.find("Involvers") != m.end() && !m["Involvers"].empty()) {
      if (typeid(vector<boost::any>) == m["Involvers"].type()) {
        vector<GetTaskDetailBaseResponseBodyObjectInvolvers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Involvers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTaskDetailBaseResponseBodyObjectInvolvers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        involvers = make_shared<vector<GetTaskDetailBaseResponseBodyObjectInvolvers>>(expect1);
      }
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
    if (m.find("Divisions") != m.end() && !m["Divisions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Divisions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Divisions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      divisions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Ancestors") != m.end() && !m["Ancestors"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ancestors"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ancestors"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ancestors = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InvolveMembers") != m.end() && !m["InvolveMembers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InvolveMembers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InvolveMembers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      involveMembers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TagIds") != m.end() && !m["TagIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AncestorIds") != m.end() && !m["AncestorIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AncestorIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AncestorIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ancestorIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Scenariofieldconfig") != m.end() && !m["Scenariofieldconfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["Scenariofieldconfig"].type()) {
        GetTaskDetailBaseResponseBodyObjectScenariofieldconfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Scenariofieldconfig"]));
        scenariofieldconfig = make_shared<GetTaskDetailBaseResponseBodyObjectScenariofieldconfig>(model1);
      }
    }
    if (m.find("Executor") != m.end() && !m["Executor"].empty()) {
      if (typeid(map<string, boost::any>) == m["Executor"].type()) {
        GetTaskDetailBaseResponseBodyObjectExecutor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Executor"]));
        executor = make_shared<GetTaskDetailBaseResponseBodyObjectExecutor>(model1);
      }
    }
    if (m.find("Tasklist") != m.end() && !m["Tasklist"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tasklist"].type()) {
        GetTaskDetailBaseResponseBodyObjectTasklist model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tasklist"]));
        tasklist = make_shared<GetTaskDetailBaseResponseBodyObjectTasklist>(model1);
      }
    }
    if (m.find("Taskflowstatus") != m.end() && !m["Taskflowstatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["Taskflowstatus"].type()) {
        GetTaskDetailBaseResponseBodyObjectTaskflowstatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Taskflowstatus"]));
        taskflowstatus = make_shared<GetTaskDetailBaseResponseBodyObjectTaskflowstatus>(model1);
      }
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      if (typeid(map<string, boost::any>) == m["Creator"].type()) {
        GetTaskDetailBaseResponseBodyObjectCreator model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Creator"]));
        creator = make_shared<GetTaskDetailBaseResponseBodyObjectCreator>(model1);
      }
    }
    if (m.find("Reminder") != m.end() && !m["Reminder"].empty()) {
      if (typeid(map<string, boost::any>) == m["Reminder"].type()) {
        GetTaskDetailBaseResponseBodyObjectReminder model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Reminder"]));
        reminder = make_shared<GetTaskDetailBaseResponseBodyObjectReminder>(model1);
      }
    }
    if (m.find("SubtaskCount") != m.end() && !m["SubtaskCount"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubtaskCount"].type()) {
        GetTaskDetailBaseResponseBodyObjectSubtaskCount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubtaskCount"]));
        subtaskCount = make_shared<GetTaskDetailBaseResponseBodyObjectSubtaskCount>(model1);
      }
    }
    if (m.find("WorkTime") != m.end() && !m["WorkTime"].empty()) {
      if (typeid(map<string, boost::any>) == m["WorkTime"].type()) {
        GetTaskDetailBaseResponseBodyObjectWorkTime model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["WorkTime"]));
        workTime = make_shared<GetTaskDetailBaseResponseBodyObjectWorkTime>(model1);
      }
    }
    if (m.find("Badges") != m.end() && !m["Badges"].empty()) {
      if (typeid(map<string, boost::any>) == m["Badges"].type()) {
        GetTaskDetailBaseResponseBodyObjectBadges model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Badges"]));
        badges = make_shared<GetTaskDetailBaseResponseBodyObjectBadges>(model1);
      }
    }
    if (m.find("Stage") != m.end() && !m["Stage"].empty()) {
      if (typeid(map<string, boost::any>) == m["Stage"].type()) {
        GetTaskDetailBaseResponseBodyObjectStage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Stage"]));
        stage = make_shared<GetTaskDetailBaseResponseBodyObjectStage>(model1);
      }
    }
  }


  virtual ~GetTaskDetailBaseResponseBodyObject() = default;
};
class GetTaskDetailBaseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetTaskDetailBaseResponseBodyObject> object{};

  GetTaskDetailBaseResponseBody() {}

  explicit GetTaskDetailBaseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      res["Object"] = object ? boost::any(object->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(map<string, boost::any>) == m["Object"].type()) {
        GetTaskDetailBaseResponseBodyObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Object"]));
        object = make_shared<GetTaskDetailBaseResponseBodyObject>(model1);
      }
    }
  }


  virtual ~GetTaskDetailBaseResponseBody() = default;
};
class GetTaskDetailBaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetTaskDetailBaseResponseBody> body{};

  GetTaskDetailBaseResponse() {}

  explicit GetTaskDetailBaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetTaskDetailBaseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskDetailBaseResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskDetailBaseResponse() = default;
};
class DeleteDevopsProjectMembersRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> projectId{};
  shared_ptr<string> userIds{};

  DeleteDevopsProjectMembersRequest() {}

  explicit DeleteDevopsProjectMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (userIds) {
      res["UserIds"] = boost::any(*userIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("UserIds") != m.end() && !m["UserIds"].empty()) {
      userIds = make_shared<string>(boost::any_cast<string>(m["UserIds"]));
    }
  }


  virtual ~DeleteDevopsProjectMembersRequest() = default;
};
class DeleteDevopsProjectMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> object{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};

  DeleteDevopsProjectMembersResponseBody() {}

  explicit DeleteDevopsProjectMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (object) {
      res["Object"] = boost::any(*object);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<bool>(boost::any_cast<bool>(m["Object"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
  }


  virtual ~DeleteDevopsProjectMembersResponseBody() = default;
};
class DeleteDevopsProjectMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDevopsProjectMembersResponseBody> body{};

  DeleteDevopsProjectMembersResponse() {}

  explicit DeleteDevopsProjectMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDevopsProjectMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDevopsProjectMembersResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDevopsProjectMembersResponse() = default;
};
class CreateDevopsProjectSprintRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> name{};
  shared_ptr<string> description{};
  shared_ptr<string> projectId{};
  shared_ptr<string> executorId{};
  shared_ptr<string> startDate{};
  shared_ptr<string> dueDate{};

  CreateDevopsProjectSprintRequest() {}

  explicit CreateDevopsProjectSprintRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (executorId) {
      res["ExecutorId"] = boost::any(*executorId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (dueDate) {
      res["DueDate"] = boost::any(*dueDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ExecutorId") != m.end() && !m["ExecutorId"].empty()) {
      executorId = make_shared<string>(boost::any_cast<string>(m["ExecutorId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("DueDate") != m.end() && !m["DueDate"].empty()) {
      dueDate = make_shared<string>(boost::any_cast<string>(m["DueDate"]));
    }
  }


  virtual ~CreateDevopsProjectSprintRequest() = default;
};
class CreateDevopsProjectSprintResponseBodyObjectPlanToDo : public Darabonba::Model {
public:
  shared_ptr<long> tasks{};
  shared_ptr<long> workTimes{};
  shared_ptr<long> storyPoints{};

  CreateDevopsProjectSprintResponseBodyObjectPlanToDo() {}

  explicit CreateDevopsProjectSprintResponseBodyObjectPlanToDo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tasks) {
      res["Tasks"] = boost::any(*tasks);
    }
    if (workTimes) {
      res["WorkTimes"] = boost::any(*workTimes);
    }
    if (storyPoints) {
      res["StoryPoints"] = boost::any(*storyPoints);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      tasks = make_shared<long>(boost::any_cast<long>(m["Tasks"]));
    }
    if (m.find("WorkTimes") != m.end() && !m["WorkTimes"].empty()) {
      workTimes = make_shared<long>(boost::any_cast<long>(m["WorkTimes"]));
    }
    if (m.find("StoryPoints") != m.end() && !m["StoryPoints"].empty()) {
      storyPoints = make_shared<long>(boost::any_cast<long>(m["StoryPoints"]));
    }
  }


  virtual ~CreateDevopsProjectSprintResponseBodyObjectPlanToDo() = default;
};
class CreateDevopsProjectSprintResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> projectId{};
  shared_ptr<string> startDate{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> executor{};
  shared_ptr<string> description{};
  shared_ptr<string> accomplished{};
  shared_ptr<bool> isDeleted{};
  shared_ptr<string> updated{};
  shared_ptr<string> dueDate{};
  shared_ptr<string> created{};
  shared_ptr<string> name{};
  shared_ptr<string> id{};
  shared_ptr<CreateDevopsProjectSprintResponseBodyObjectPlanToDo> planToDo{};

  CreateDevopsProjectSprintResponseBodyObject() {}

  explicit CreateDevopsProjectSprintResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (executor) {
      res["Executor"] = boost::any(*executor);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (accomplished) {
      res["Accomplished"] = boost::any(*accomplished);
    }
    if (isDeleted) {
      res["IsDeleted"] = boost::any(*isDeleted);
    }
    if (updated) {
      res["Updated"] = boost::any(*updated);
    }
    if (dueDate) {
      res["DueDate"] = boost::any(*dueDate);
    }
    if (created) {
      res["Created"] = boost::any(*created);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (planToDo) {
      res["PlanToDo"] = planToDo ? boost::any(planToDo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["CreatorId"]));
    }
    if (m.find("Executor") != m.end() && !m["Executor"].empty()) {
      executor = make_shared<string>(boost::any_cast<string>(m["Executor"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Accomplished") != m.end() && !m["Accomplished"].empty()) {
      accomplished = make_shared<string>(boost::any_cast<string>(m["Accomplished"]));
    }
    if (m.find("IsDeleted") != m.end() && !m["IsDeleted"].empty()) {
      isDeleted = make_shared<bool>(boost::any_cast<bool>(m["IsDeleted"]));
    }
    if (m.find("Updated") != m.end() && !m["Updated"].empty()) {
      updated = make_shared<string>(boost::any_cast<string>(m["Updated"]));
    }
    if (m.find("DueDate") != m.end() && !m["DueDate"].empty()) {
      dueDate = make_shared<string>(boost::any_cast<string>(m["DueDate"]));
    }
    if (m.find("Created") != m.end() && !m["Created"].empty()) {
      created = make_shared<string>(boost::any_cast<string>(m["Created"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("PlanToDo") != m.end() && !m["PlanToDo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PlanToDo"].type()) {
        CreateDevopsProjectSprintResponseBodyObjectPlanToDo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PlanToDo"]));
        planToDo = make_shared<CreateDevopsProjectSprintResponseBodyObjectPlanToDo>(model1);
      }
    }
  }


  virtual ~CreateDevopsProjectSprintResponseBodyObject() = default;
};
class CreateDevopsProjectSprintResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};
  shared_ptr<CreateDevopsProjectSprintResponseBodyObject> object{};

  CreateDevopsProjectSprintResponseBody() {}

  explicit CreateDevopsProjectSprintResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      res["Object"] = object ? boost::any(object->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(map<string, boost::any>) == m["Object"].type()) {
        CreateDevopsProjectSprintResponseBodyObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Object"]));
        object = make_shared<CreateDevopsProjectSprintResponseBodyObject>(model1);
      }
    }
  }


  virtual ~CreateDevopsProjectSprintResponseBody() = default;
};
class CreateDevopsProjectSprintResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDevopsProjectSprintResponseBody> body{};

  CreateDevopsProjectSprintResponse() {}

  explicit CreateDevopsProjectSprintResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDevopsProjectSprintResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDevopsProjectSprintResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDevopsProjectSprintResponse() = default;
};
class UpdateDevopsProjectSprintRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> name{};
  shared_ptr<string> description{};
  shared_ptr<string> projectId{};
  shared_ptr<string> executorId{};
  shared_ptr<string> startDate{};
  shared_ptr<string> dueDate{};
  shared_ptr<string> sprintId{};

  UpdateDevopsProjectSprintRequest() {}

  explicit UpdateDevopsProjectSprintRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (executorId) {
      res["ExecutorId"] = boost::any(*executorId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (dueDate) {
      res["DueDate"] = boost::any(*dueDate);
    }
    if (sprintId) {
      res["SprintId"] = boost::any(*sprintId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ExecutorId") != m.end() && !m["ExecutorId"].empty()) {
      executorId = make_shared<string>(boost::any_cast<string>(m["ExecutorId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("DueDate") != m.end() && !m["DueDate"].empty()) {
      dueDate = make_shared<string>(boost::any_cast<string>(m["DueDate"]));
    }
    if (m.find("SprintId") != m.end() && !m["SprintId"].empty()) {
      sprintId = make_shared<string>(boost::any_cast<string>(m["SprintId"]));
    }
  }


  virtual ~UpdateDevopsProjectSprintRequest() = default;
};
class UpdateDevopsProjectSprintResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> object{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};

  UpdateDevopsProjectSprintResponseBody() {}

  explicit UpdateDevopsProjectSprintResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (object) {
      res["Object"] = boost::any(*object);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<bool>(boost::any_cast<bool>(m["Object"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
  }


  virtual ~UpdateDevopsProjectSprintResponseBody() = default;
};
class UpdateDevopsProjectSprintResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateDevopsProjectSprintResponseBody> body{};

  UpdateDevopsProjectSprintResponse() {}

  explicit UpdateDevopsProjectSprintResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateDevopsProjectSprintResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDevopsProjectSprintResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDevopsProjectSprintResponse() = default;
};
class DeleteDevopsOrganizationRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};

  DeleteDevopsOrganizationRequest() {}

  explicit DeleteDevopsOrganizationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
  }


  virtual ~DeleteDevopsOrganizationRequest() = default;
};
class DeleteDevopsOrganizationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> object{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};

  DeleteDevopsOrganizationResponseBody() {}

  explicit DeleteDevopsOrganizationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (object) {
      res["Object"] = boost::any(*object);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<string>(boost::any_cast<string>(m["Object"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
  }


  virtual ~DeleteDevopsOrganizationResponseBody() = default;
};
class DeleteDevopsOrganizationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDevopsOrganizationResponseBody> body{};

  DeleteDevopsOrganizationResponse() {}

  explicit DeleteDevopsOrganizationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDevopsOrganizationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDevopsOrganizationResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDevopsOrganizationResponse() = default;
};
class CancelPipelineRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<long> pipelineId{};
  shared_ptr<long> flowInstanceId{};
  shared_ptr<string> userPk{};

  CancelPipelineRequest() {}

  explicit CancelPipelineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    if (flowInstanceId) {
      res["FlowInstanceId"] = boost::any(*flowInstanceId);
    }
    if (userPk) {
      res["UserPk"] = boost::any(*userPk);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<long>(boost::any_cast<long>(m["PipelineId"]));
    }
    if (m.find("FlowInstanceId") != m.end() && !m["FlowInstanceId"].empty()) {
      flowInstanceId = make_shared<long>(boost::any_cast<long>(m["FlowInstanceId"]));
    }
    if (m.find("UserPk") != m.end() && !m["UserPk"].empty()) {
      userPk = make_shared<string>(boost::any_cast<string>(m["UserPk"]));
    }
  }


  virtual ~CancelPipelineRequest() = default;
};
class CancelPipelineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> object{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  CancelPipelineResponseBody() {}

  explicit CancelPipelineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (object) {
      res["Object"] = boost::any(*object);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<bool>(boost::any_cast<bool>(m["Object"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CancelPipelineResponseBody() = default;
};
class CancelPipelineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CancelPipelineResponseBody> body{};

  CancelPipelineResponse() {}

  explicit CancelPipelineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CancelPipelineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelPipelineResponseBody>(model1);
      }
    }
  }


  virtual ~CancelPipelineResponse() = default;
};
class ListDevopsProjectTaskFlowStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> taskFlowId{};

  ListDevopsProjectTaskFlowStatusRequest() {}

  explicit ListDevopsProjectTaskFlowStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (taskFlowId) {
      res["TaskFlowId"] = boost::any(*taskFlowId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("TaskFlowId") != m.end() && !m["TaskFlowId"].empty()) {
      taskFlowId = make_shared<string>(boost::any_cast<string>(m["TaskFlowId"]));
    }
  }


  virtual ~ListDevopsProjectTaskFlowStatusRequest() = default;
};
class ListDevopsProjectTaskFlowStatusResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<string> taskflowId{};
  shared_ptr<string> kind{};
  shared_ptr<long> pos{};
  shared_ptr<bool> isDeleted{};
  shared_ptr<string> updated{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> name{};
  shared_ptr<string> created{};
  shared_ptr<string> rejectStatusIds{};
  shared_ptr<string> id{};

  ListDevopsProjectTaskFlowStatusResponseBodyObject() {}

  explicit ListDevopsProjectTaskFlowStatusResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskflowId) {
      res["TaskflowId"] = boost::any(*taskflowId);
    }
    if (kind) {
      res["Kind"] = boost::any(*kind);
    }
    if (pos) {
      res["Pos"] = boost::any(*pos);
    }
    if (isDeleted) {
      res["IsDeleted"] = boost::any(*isDeleted);
    }
    if (updated) {
      res["Updated"] = boost::any(*updated);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (created) {
      res["Created"] = boost::any(*created);
    }
    if (rejectStatusIds) {
      res["RejectStatusIds"] = boost::any(*rejectStatusIds);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskflowId") != m.end() && !m["TaskflowId"].empty()) {
      taskflowId = make_shared<string>(boost::any_cast<string>(m["TaskflowId"]));
    }
    if (m.find("Kind") != m.end() && !m["Kind"].empty()) {
      kind = make_shared<string>(boost::any_cast<string>(m["Kind"]));
    }
    if (m.find("Pos") != m.end() && !m["Pos"].empty()) {
      pos = make_shared<long>(boost::any_cast<long>(m["Pos"]));
    }
    if (m.find("IsDeleted") != m.end() && !m["IsDeleted"].empty()) {
      isDeleted = make_shared<bool>(boost::any_cast<bool>(m["IsDeleted"]));
    }
    if (m.find("Updated") != m.end() && !m["Updated"].empty()) {
      updated = make_shared<string>(boost::any_cast<string>(m["Updated"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["CreatorId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Created") != m.end() && !m["Created"].empty()) {
      created = make_shared<string>(boost::any_cast<string>(m["Created"]));
    }
    if (m.find("RejectStatusIds") != m.end() && !m["RejectStatusIds"].empty()) {
      rejectStatusIds = make_shared<string>(boost::any_cast<string>(m["RejectStatusIds"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~ListDevopsProjectTaskFlowStatusResponseBodyObject() = default;
};
class ListDevopsProjectTaskFlowStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<ListDevopsProjectTaskFlowStatusResponseBodyObject>> object{};

  ListDevopsProjectTaskFlowStatusResponseBody() {}

  explicit ListDevopsProjectTaskFlowStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      vector<boost::any> temp1;
      for(auto item1:*object){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Object"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(vector<boost::any>) == m["Object"].type()) {
        vector<ListDevopsProjectTaskFlowStatusResponseBodyObject> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Object"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDevopsProjectTaskFlowStatusResponseBodyObject model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        object = make_shared<vector<ListDevopsProjectTaskFlowStatusResponseBodyObject>>(expect1);
      }
    }
  }


  virtual ~ListDevopsProjectTaskFlowStatusResponseBody() = default;
};
class ListDevopsProjectTaskFlowStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDevopsProjectTaskFlowStatusResponseBody> body{};

  ListDevopsProjectTaskFlowStatusResponse() {}

  explicit ListDevopsProjectTaskFlowStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDevopsProjectTaskFlowStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDevopsProjectTaskFlowStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ListDevopsProjectTaskFlowStatusResponse() = default;
};
class ListUserOrganizationRequest : public Darabonba::Model {
public:
  shared_ptr<string> realPk{};

  ListUserOrganizationRequest() {}

  explicit ListUserOrganizationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (realPk) {
      res["RealPk"] = boost::any(*realPk);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RealPk") != m.end() && !m["RealPk"].empty()) {
      realPk = make_shared<string>(boost::any_cast<string>(m["RealPk"]));
    }
  }


  virtual ~ListUserOrganizationRequest() = default;
};
class ListUserOrganizationResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> id{};

  ListUserOrganizationResponseBodyObject() {}

  explicit ListUserOrganizationResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~ListUserOrganizationResponseBodyObject() = default;
};
class ListUserOrganizationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<ListUserOrganizationResponseBodyObject>> object{};

  ListUserOrganizationResponseBody() {}

  explicit ListUserOrganizationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (object) {
      vector<boost::any> temp1;
      for(auto item1:*object){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Object"] = boost::any(temp1);
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
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(vector<boost::any>) == m["Object"].type()) {
        vector<ListUserOrganizationResponseBodyObject> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Object"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserOrganizationResponseBodyObject model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        object = make_shared<vector<ListUserOrganizationResponseBodyObject>>(expect1);
      }
    }
  }


  virtual ~ListUserOrganizationResponseBody() = default;
};
class ListUserOrganizationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListUserOrganizationResponseBody> body{};

  ListUserOrganizationResponse() {}

  explicit ListUserOrganizationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListUserOrganizationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserOrganizationResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserOrganizationResponse() = default;
};
class UpdatePipelineEnvVarsRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<long> pipelineId{};
  shared_ptr<string> envVars{};

  UpdatePipelineEnvVarsRequest() {}

  explicit UpdatePipelineEnvVarsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    if (envVars) {
      res["EnvVars"] = boost::any(*envVars);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<long>(boost::any_cast<long>(m["PipelineId"]));
    }
    if (m.find("EnvVars") != m.end() && !m["EnvVars"].empty()) {
      envVars = make_shared<string>(boost::any_cast<string>(m["EnvVars"]));
    }
  }


  virtual ~UpdatePipelineEnvVarsRequest() = default;
};
class UpdatePipelineEnvVarsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> pipelineId{};

  UpdatePipelineEnvVarsResponseBody() {}

  explicit UpdatePipelineEnvVarsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<long>(boost::any_cast<long>(m["PipelineId"]));
    }
  }


  virtual ~UpdatePipelineEnvVarsResponseBody() = default;
};
class UpdatePipelineEnvVarsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdatePipelineEnvVarsResponseBody> body{};

  UpdatePipelineEnvVarsResponse() {}

  explicit UpdatePipelineEnvVarsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdatePipelineEnvVarsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePipelineEnvVarsResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePipelineEnvVarsResponse() = default;
};
class DeleteDevopsProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> projectId{};

  DeleteDevopsProjectRequest() {}

  explicit DeleteDevopsProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~DeleteDevopsProjectRequest() = default;
};
class DeleteDevopsProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> object{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};

  DeleteDevopsProjectResponseBody() {}

  explicit DeleteDevopsProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (object) {
      res["Object"] = boost::any(*object);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<string>(boost::any_cast<string>(m["Object"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
  }


  virtual ~DeleteDevopsProjectResponseBody() = default;
};
class DeleteDevopsProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDevopsProjectResponseBody> body{};

  DeleteDevopsProjectResponse() {}

  explicit DeleteDevopsProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDevopsProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDevopsProjectResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDevopsProjectResponse() = default;
};
class GetPipelineInstanceStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<long> pipelineId{};
  shared_ptr<long> flowInstanceId{};
  shared_ptr<string> userPk{};

  GetPipelineInstanceStatusRequest() {}

  explicit GetPipelineInstanceStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    if (flowInstanceId) {
      res["FlowInstanceId"] = boost::any(*flowInstanceId);
    }
    if (userPk) {
      res["UserPk"] = boost::any(*userPk);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<long>(boost::any_cast<long>(m["PipelineId"]));
    }
    if (m.find("FlowInstanceId") != m.end() && !m["FlowInstanceId"].empty()) {
      flowInstanceId = make_shared<long>(boost::any_cast<long>(m["FlowInstanceId"]));
    }
    if (m.find("UserPk") != m.end() && !m["UserPk"].empty()) {
      userPk = make_shared<string>(boost::any_cast<string>(m["UserPk"]));
    }
  }


  virtual ~GetPipelineInstanceStatusRequest() = default;
};
class GetPipelineInstanceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> object{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  GetPipelineInstanceStatusResponseBody() {}

  explicit GetPipelineInstanceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (object) {
      res["Object"] = boost::any(*object);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<string>(boost::any_cast<string>(m["Object"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetPipelineInstanceStatusResponseBody() = default;
};
class GetPipelineInstanceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPipelineInstanceStatusResponseBody> body{};

  GetPipelineInstanceStatusResponse() {}

  explicit GetPipelineInstanceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPipelineInstanceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPipelineInstanceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetPipelineInstanceStatusResponse() = default;
};
class GetPipelineLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<long> pipelineId{};
  shared_ptr<string> userPk{};
  shared_ptr<long> jobId{};

  GetPipelineLogRequest() {}

  explicit GetPipelineLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    if (userPk) {
      res["UserPk"] = boost::any(*userPk);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<long>(boost::any_cast<long>(m["PipelineId"]));
    }
    if (m.find("UserPk") != m.end() && !m["UserPk"].empty()) {
      userPk = make_shared<string>(boost::any_cast<string>(m["UserPk"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
  }


  virtual ~GetPipelineLogRequest() = default;
};
class GetPipelineLogResponseBodyObjectBuildProcessNodes : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<long> nodeIndex{};
  shared_ptr<string> nodeName{};

  GetPipelineLogResponseBodyObjectBuildProcessNodes() {}

  explicit GetPipelineLogResponseBodyObjectBuildProcessNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (nodeIndex) {
      res["NodeIndex"] = boost::any(*nodeIndex);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("NodeIndex") != m.end() && !m["NodeIndex"].empty()) {
      nodeIndex = make_shared<long>(boost::any_cast<long>(m["NodeIndex"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
  }


  virtual ~GetPipelineLogResponseBodyObjectBuildProcessNodes() = default;
};
class GetPipelineLogResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<string> actionName{};
  shared_ptr<string> startTime{};
  shared_ptr<long> jobId{};
  shared_ptr<vector<GetPipelineLogResponseBodyObjectBuildProcessNodes>> buildProcessNodes{};

  GetPipelineLogResponseBodyObject() {}

  explicit GetPipelineLogResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionName) {
      res["ActionName"] = boost::any(*actionName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (buildProcessNodes) {
      vector<boost::any> temp1;
      for(auto item1:*buildProcessNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BuildProcessNodes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionName") != m.end() && !m["ActionName"].empty()) {
      actionName = make_shared<string>(boost::any_cast<string>(m["ActionName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("BuildProcessNodes") != m.end() && !m["BuildProcessNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["BuildProcessNodes"].type()) {
        vector<GetPipelineLogResponseBodyObjectBuildProcessNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BuildProcessNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPipelineLogResponseBodyObjectBuildProcessNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        buildProcessNodes = make_shared<vector<GetPipelineLogResponseBodyObjectBuildProcessNodes>>(expect1);
      }
    }
  }


  virtual ~GetPipelineLogResponseBodyObject() = default;
};
class GetPipelineLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<GetPipelineLogResponseBodyObject>> object{};

  GetPipelineLogResponseBody() {}

  explicit GetPipelineLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      vector<boost::any> temp1;
      for(auto item1:*object){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Object"] = boost::any(temp1);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(vector<boost::any>) == m["Object"].type()) {
        vector<GetPipelineLogResponseBodyObject> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Object"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPipelineLogResponseBodyObject model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        object = make_shared<vector<GetPipelineLogResponseBodyObject>>(expect1);
      }
    }
  }


  virtual ~GetPipelineLogResponseBody() = default;
};
class GetPipelineLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPipelineLogResponseBody> body{};

  GetPipelineLogResponse() {}

  explicit GetPipelineLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPipelineLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPipelineLogResponseBody>(model1);
      }
    }
  }


  virtual ~GetPipelineLogResponse() = default;
};
class GetUserByAliyunUidRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> userPk{};

  GetUserByAliyunUidRequest() {}

  explicit GetUserByAliyunUidRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (userPk) {
      res["UserPk"] = boost::any(*userPk);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("UserPk") != m.end() && !m["UserPk"].empty()) {
      userPk = make_shared<string>(boost::any_cast<string>(m["UserPk"]));
    }
  }


  virtual ~GetUserByAliyunUidRequest() = default;
};
class GetUserByAliyunUidResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<string> aliyunPk{};
  shared_ptr<string> email{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> name{};
  shared_ptr<string> id{};
  shared_ptr<string> phone{};

  GetUserByAliyunUidResponseBodyObject() {}

  explicit GetUserByAliyunUidResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunPk) {
      res["AliyunPk"] = boost::any(*aliyunPk);
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
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunPk") != m.end() && !m["AliyunPk"].empty()) {
      aliyunPk = make_shared<string>(boost::any_cast<string>(m["AliyunPk"]));
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
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
  }


  virtual ~GetUserByAliyunUidResponseBodyObject() = default;
};
class GetUserByAliyunUidResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetUserByAliyunUidResponseBodyObject> object{};

  GetUserByAliyunUidResponseBody() {}

  explicit GetUserByAliyunUidResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      res["Object"] = object ? boost::any(object->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(map<string, boost::any>) == m["Object"].type()) {
        GetUserByAliyunUidResponseBodyObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Object"]));
        object = make_shared<GetUserByAliyunUidResponseBodyObject>(model1);
      }
    }
  }


  virtual ~GetUserByAliyunUidResponseBody() = default;
};
class GetUserByAliyunUidResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetUserByAliyunUidResponseBody> body{};

  GetUserByAliyunUidResponse() {}

  explicit GetUserByAliyunUidResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetUserByAliyunUidResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserByAliyunUidResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserByAliyunUidResponse() = default;
};
class UpdatePipelineMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<long> pipelineId{};
  shared_ptr<string> userPk{};
  shared_ptr<string> userId{};
  shared_ptr<string> roleName{};

  UpdatePipelineMemberRequest() {}

  explicit UpdatePipelineMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    if (userPk) {
      res["UserPk"] = boost::any(*userPk);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<long>(boost::any_cast<long>(m["PipelineId"]));
    }
    if (m.find("UserPk") != m.end() && !m["UserPk"].empty()) {
      userPk = make_shared<string>(boost::any_cast<string>(m["UserPk"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~UpdatePipelineMemberRequest() = default;
};
class UpdatePipelineMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> object{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  UpdatePipelineMemberResponseBody() {}

  explicit UpdatePipelineMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (object) {
      res["Object"] = boost::any(*object);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<bool>(boost::any_cast<bool>(m["Object"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdatePipelineMemberResponseBody() = default;
};
class UpdatePipelineMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdatePipelineMemberResponseBody> body{};

  UpdatePipelineMemberResponse() {}

  explicit UpdatePipelineMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdatePipelineMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePipelineMemberResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePipelineMemberResponse() = default;
};
class ListDevopsProjectsRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> pageToken{};
  shared_ptr<string> selectBy{};

  ListDevopsProjectsRequest() {}

  explicit ListDevopsProjectsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (pageToken) {
      res["PageToken"] = boost::any(*pageToken);
    }
    if (selectBy) {
      res["SelectBy"] = boost::any(*selectBy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("PageToken") != m.end() && !m["PageToken"].empty()) {
      pageToken = make_shared<string>(boost::any_cast<string>(m["PageToken"]));
    }
    if (m.find("SelectBy") != m.end() && !m["SelectBy"].empty()) {
      selectBy = make_shared<string>(boost::any_cast<string>(m["SelectBy"]));
    }
  }


  virtual ~ListDevopsProjectsRequest() = default;
};
class ListDevopsProjectsResponseBodyObjectResult : public Darabonba::Model {
public:
  shared_ptr<string> logo{};
  shared_ptr<bool> isStar{};
  shared_ptr<string> creatorId{};
  shared_ptr<long> membersCount{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> visibility{};
  shared_ptr<bool> isTemplate{};
  shared_ptr<string> description{};
  shared_ptr<string> updated{};
  shared_ptr<string> created{};
  shared_ptr<bool> isArchived{};
  shared_ptr<string> name{};
  shared_ptr<bool> isPublic{};
  shared_ptr<long> tasksCount{};
  shared_ptr<string> roleId{};
  shared_ptr<string> id{};

  ListDevopsProjectsResponseBodyObjectResult() {}

  explicit ListDevopsProjectsResponseBodyObjectResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logo) {
      res["Logo"] = boost::any(*logo);
    }
    if (isStar) {
      res["IsStar"] = boost::any(*isStar);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (membersCount) {
      res["MembersCount"] = boost::any(*membersCount);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    if (isTemplate) {
      res["IsTemplate"] = boost::any(*isTemplate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (updated) {
      res["Updated"] = boost::any(*updated);
    }
    if (created) {
      res["Created"] = boost::any(*created);
    }
    if (isArchived) {
      res["IsArchived"] = boost::any(*isArchived);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (isPublic) {
      res["IsPublic"] = boost::any(*isPublic);
    }
    if (tasksCount) {
      res["TasksCount"] = boost::any(*tasksCount);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Logo") != m.end() && !m["Logo"].empty()) {
      logo = make_shared<string>(boost::any_cast<string>(m["Logo"]));
    }
    if (m.find("IsStar") != m.end() && !m["IsStar"].empty()) {
      isStar = make_shared<bool>(boost::any_cast<bool>(m["IsStar"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["CreatorId"]));
    }
    if (m.find("MembersCount") != m.end() && !m["MembersCount"].empty()) {
      membersCount = make_shared<long>(boost::any_cast<long>(m["MembersCount"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
    if (m.find("IsTemplate") != m.end() && !m["IsTemplate"].empty()) {
      isTemplate = make_shared<bool>(boost::any_cast<bool>(m["IsTemplate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Updated") != m.end() && !m["Updated"].empty()) {
      updated = make_shared<string>(boost::any_cast<string>(m["Updated"]));
    }
    if (m.find("Created") != m.end() && !m["Created"].empty()) {
      created = make_shared<string>(boost::any_cast<string>(m["Created"]));
    }
    if (m.find("IsArchived") != m.end() && !m["IsArchived"].empty()) {
      isArchived = make_shared<bool>(boost::any_cast<bool>(m["IsArchived"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("IsPublic") != m.end() && !m["IsPublic"].empty()) {
      isPublic = make_shared<bool>(boost::any_cast<bool>(m["IsPublic"]));
    }
    if (m.find("TasksCount") != m.end() && !m["TasksCount"].empty()) {
      tasksCount = make_shared<long>(boost::any_cast<long>(m["TasksCount"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~ListDevopsProjectsResponseBodyObjectResult() = default;
};
class ListDevopsProjectsResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<string> nextPageToken{};
  shared_ptr<vector<ListDevopsProjectsResponseBodyObjectResult>> result{};

  ListDevopsProjectsResponseBodyObject() {}

  explicit ListDevopsProjectsResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextPageToken) {
      res["NextPageToken"] = boost::any(*nextPageToken);
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
    if (m.find("NextPageToken") != m.end() && !m["NextPageToken"].empty()) {
      nextPageToken = make_shared<string>(boost::any_cast<string>(m["NextPageToken"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListDevopsProjectsResponseBodyObjectResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDevopsProjectsResponseBodyObjectResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListDevopsProjectsResponseBodyObjectResult>>(expect1);
      }
    }
  }


  virtual ~ListDevopsProjectsResponseBodyObject() = default;
};
class ListDevopsProjectsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};
  shared_ptr<ListDevopsProjectsResponseBodyObject> object{};

  ListDevopsProjectsResponseBody() {}

  explicit ListDevopsProjectsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      res["Object"] = object ? boost::any(object->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(map<string, boost::any>) == m["Object"].type()) {
        ListDevopsProjectsResponseBodyObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Object"]));
        object = make_shared<ListDevopsProjectsResponseBodyObject>(model1);
      }
    }
  }


  virtual ~ListDevopsProjectsResponseBody() = default;
};
class ListDevopsProjectsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDevopsProjectsResponseBody> body{};

  ListDevopsProjectsResponse() {}

  explicit ListDevopsProjectsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDevopsProjectsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDevopsProjectsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDevopsProjectsResponse() = default;
};
class CreateDevopsProjectTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> content{};
  shared_ptr<string> projectId{};
  shared_ptr<string> executorId{};
  shared_ptr<string> startDate{};
  shared_ptr<string> dueDate{};
  shared_ptr<string> scenarioFieldConfigId{};
  shared_ptr<string> taskFlowStatusId{};
  shared_ptr<string> note{};
  shared_ptr<long> priority{};
  shared_ptr<string> visible{};
  shared_ptr<string> parentTaskId{};
  shared_ptr<string> sprintId{};
  shared_ptr<string> taskListId{};

  CreateDevopsProjectTaskRequest() {}

  explicit CreateDevopsProjectTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (executorId) {
      res["ExecutorId"] = boost::any(*executorId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (dueDate) {
      res["DueDate"] = boost::any(*dueDate);
    }
    if (scenarioFieldConfigId) {
      res["ScenarioFieldConfigId"] = boost::any(*scenarioFieldConfigId);
    }
    if (taskFlowStatusId) {
      res["TaskFlowStatusId"] = boost::any(*taskFlowStatusId);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (visible) {
      res["Visible"] = boost::any(*visible);
    }
    if (parentTaskId) {
      res["ParentTaskId"] = boost::any(*parentTaskId);
    }
    if (sprintId) {
      res["SprintId"] = boost::any(*sprintId);
    }
    if (taskListId) {
      res["TaskListId"] = boost::any(*taskListId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ExecutorId") != m.end() && !m["ExecutorId"].empty()) {
      executorId = make_shared<string>(boost::any_cast<string>(m["ExecutorId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("DueDate") != m.end() && !m["DueDate"].empty()) {
      dueDate = make_shared<string>(boost::any_cast<string>(m["DueDate"]));
    }
    if (m.find("ScenarioFieldConfigId") != m.end() && !m["ScenarioFieldConfigId"].empty()) {
      scenarioFieldConfigId = make_shared<string>(boost::any_cast<string>(m["ScenarioFieldConfigId"]));
    }
    if (m.find("TaskFlowStatusId") != m.end() && !m["TaskFlowStatusId"].empty()) {
      taskFlowStatusId = make_shared<string>(boost::any_cast<string>(m["TaskFlowStatusId"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("Visible") != m.end() && !m["Visible"].empty()) {
      visible = make_shared<string>(boost::any_cast<string>(m["Visible"]));
    }
    if (m.find("ParentTaskId") != m.end() && !m["ParentTaskId"].empty()) {
      parentTaskId = make_shared<string>(boost::any_cast<string>(m["ParentTaskId"]));
    }
    if (m.find("SprintId") != m.end() && !m["SprintId"].empty()) {
      sprintId = make_shared<string>(boost::any_cast<string>(m["SprintId"]));
    }
    if (m.find("TaskListId") != m.end() && !m["TaskListId"].empty()) {
      taskListId = make_shared<string>(boost::any_cast<string>(m["TaskListId"]));
    }
  }


  virtual ~CreateDevopsProjectTaskRequest() = default;
};
class CreateDevopsProjectTaskResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<string> executorId{};
  shared_ptr<string> projectId{};
  shared_ptr<long> priority{};
  shared_ptr<string> scenarioFieldConfigId{};
  shared_ptr<string> ancestorIds{};
  shared_ptr<string> taskType{};
  shared_ptr<string> tasklistId{};
  shared_ptr<string> taskflowstatusId{};
  shared_ptr<string> note{};
  shared_ptr<string> updated{};
  shared_ptr<long> uniqueId{};
  shared_ptr<string> content{};
  shared_ptr<long> rating{};
  shared_ptr<long> pos{};
  shared_ptr<string> storyPoint{};
  shared_ptr<string> startDate{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> source{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> visible{};
  shared_ptr<bool> isDone{};
  shared_ptr<string> sprintId{};
  shared_ptr<string> dueDate{};
  shared_ptr<string> created{};
  shared_ptr<string> id{};

  CreateDevopsProjectTaskResponseBodyObject() {}

  explicit CreateDevopsProjectTaskResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executorId) {
      res["ExecutorId"] = boost::any(*executorId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (scenarioFieldConfigId) {
      res["ScenarioFieldConfigId"] = boost::any(*scenarioFieldConfigId);
    }
    if (ancestorIds) {
      res["AncestorIds"] = boost::any(*ancestorIds);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (tasklistId) {
      res["TasklistId"] = boost::any(*tasklistId);
    }
    if (taskflowstatusId) {
      res["TaskflowstatusId"] = boost::any(*taskflowstatusId);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (updated) {
      res["Updated"] = boost::any(*updated);
    }
    if (uniqueId) {
      res["UniqueId"] = boost::any(*uniqueId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (rating) {
      res["Rating"] = boost::any(*rating);
    }
    if (pos) {
      res["Pos"] = boost::any(*pos);
    }
    if (storyPoint) {
      res["StoryPoint"] = boost::any(*storyPoint);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (visible) {
      res["Visible"] = boost::any(*visible);
    }
    if (isDone) {
      res["IsDone"] = boost::any(*isDone);
    }
    if (sprintId) {
      res["SprintId"] = boost::any(*sprintId);
    }
    if (dueDate) {
      res["DueDate"] = boost::any(*dueDate);
    }
    if (created) {
      res["Created"] = boost::any(*created);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExecutorId") != m.end() && !m["ExecutorId"].empty()) {
      executorId = make_shared<string>(boost::any_cast<string>(m["ExecutorId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("ScenarioFieldConfigId") != m.end() && !m["ScenarioFieldConfigId"].empty()) {
      scenarioFieldConfigId = make_shared<string>(boost::any_cast<string>(m["ScenarioFieldConfigId"]));
    }
    if (m.find("AncestorIds") != m.end() && !m["AncestorIds"].empty()) {
      ancestorIds = make_shared<string>(boost::any_cast<string>(m["AncestorIds"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("TasklistId") != m.end() && !m["TasklistId"].empty()) {
      tasklistId = make_shared<string>(boost::any_cast<string>(m["TasklistId"]));
    }
    if (m.find("TaskflowstatusId") != m.end() && !m["TaskflowstatusId"].empty()) {
      taskflowstatusId = make_shared<string>(boost::any_cast<string>(m["TaskflowstatusId"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("Updated") != m.end() && !m["Updated"].empty()) {
      updated = make_shared<string>(boost::any_cast<string>(m["Updated"]));
    }
    if (m.find("UniqueId") != m.end() && !m["UniqueId"].empty()) {
      uniqueId = make_shared<long>(boost::any_cast<long>(m["UniqueId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Rating") != m.end() && !m["Rating"].empty()) {
      rating = make_shared<long>(boost::any_cast<long>(m["Rating"]));
    }
    if (m.find("Pos") != m.end() && !m["Pos"].empty()) {
      pos = make_shared<long>(boost::any_cast<long>(m["Pos"]));
    }
    if (m.find("StoryPoint") != m.end() && !m["StoryPoint"].empty()) {
      storyPoint = make_shared<string>(boost::any_cast<string>(m["StoryPoint"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["CreatorId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("Visible") != m.end() && !m["Visible"].empty()) {
      visible = make_shared<string>(boost::any_cast<string>(m["Visible"]));
    }
    if (m.find("IsDone") != m.end() && !m["IsDone"].empty()) {
      isDone = make_shared<bool>(boost::any_cast<bool>(m["IsDone"]));
    }
    if (m.find("SprintId") != m.end() && !m["SprintId"].empty()) {
      sprintId = make_shared<string>(boost::any_cast<string>(m["SprintId"]));
    }
    if (m.find("DueDate") != m.end() && !m["DueDate"].empty()) {
      dueDate = make_shared<string>(boost::any_cast<string>(m["DueDate"]));
    }
    if (m.find("Created") != m.end() && !m["Created"].empty()) {
      created = make_shared<string>(boost::any_cast<string>(m["Created"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~CreateDevopsProjectTaskResponseBodyObject() = default;
};
class CreateDevopsProjectTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};
  shared_ptr<CreateDevopsProjectTaskResponseBodyObject> object{};

  CreateDevopsProjectTaskResponseBody() {}

  explicit CreateDevopsProjectTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      res["Object"] = object ? boost::any(object->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(map<string, boost::any>) == m["Object"].type()) {
        CreateDevopsProjectTaskResponseBodyObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Object"]));
        object = make_shared<CreateDevopsProjectTaskResponseBodyObject>(model1);
      }
    }
  }


  virtual ~CreateDevopsProjectTaskResponseBody() = default;
};
class CreateDevopsProjectTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDevopsProjectTaskResponseBody> body{};

  CreateDevopsProjectTaskResponse() {}

  explicit CreateDevopsProjectTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDevopsProjectTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDevopsProjectTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDevopsProjectTaskResponse() = default;
};
class GetPipelineInstanceBuildNumberStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<long> pipelineId{};
  shared_ptr<string> userPk{};
  shared_ptr<long> buildNum{};

  GetPipelineInstanceBuildNumberStatusRequest() {}

  explicit GetPipelineInstanceBuildNumberStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    if (userPk) {
      res["UserPk"] = boost::any(*userPk);
    }
    if (buildNum) {
      res["BuildNum"] = boost::any(*buildNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<long>(boost::any_cast<long>(m["PipelineId"]));
    }
    if (m.find("UserPk") != m.end() && !m["UserPk"].empty()) {
      userPk = make_shared<string>(boost::any_cast<string>(m["UserPk"]));
    }
    if (m.find("BuildNum") != m.end() && !m["BuildNum"].empty()) {
      buildNum = make_shared<long>(boost::any_cast<long>(m["BuildNum"]));
    }
  }


  virtual ~GetPipelineInstanceBuildNumberStatusRequest() = default;
};
class GetPipelineInstanceBuildNumberStatusResponseBodyObjectGroupsStagesComponents : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> name{};
  shared_ptr<long> jobId{};

  GetPipelineInstanceBuildNumberStatusResponseBodyObjectGroupsStagesComponents() {}

  explicit GetPipelineInstanceBuildNumberStatusResponseBodyObjectGroupsStagesComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
  }


  virtual ~GetPipelineInstanceBuildNumberStatusResponseBodyObjectGroupsStagesComponents() = default;
};
class GetPipelineInstanceBuildNumberStatusResponseBodyObjectGroupsStages : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> sign{};
  shared_ptr<vector<GetPipelineInstanceBuildNumberStatusResponseBodyObjectGroupsStagesComponents>> components{};

  GetPipelineInstanceBuildNumberStatusResponseBodyObjectGroupsStages() {}

  explicit GetPipelineInstanceBuildNumberStatusResponseBodyObjectGroupsStages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    if (components) {
      vector<boost::any> temp1;
      for(auto item1:*components){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Components"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      if (typeid(vector<boost::any>) == m["Components"].type()) {
        vector<GetPipelineInstanceBuildNumberStatusResponseBodyObjectGroupsStagesComponents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Components"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPipelineInstanceBuildNumberStatusResponseBodyObjectGroupsStagesComponents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        components = make_shared<vector<GetPipelineInstanceBuildNumberStatusResponseBodyObjectGroupsStagesComponents>>(expect1);
      }
    }
  }


  virtual ~GetPipelineInstanceBuildNumberStatusResponseBodyObjectGroupsStages() = default;
};
class GetPipelineInstanceBuildNumberStatusResponseBodyObjectGroups : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> name{};
  shared_ptr<vector<GetPipelineInstanceBuildNumberStatusResponseBodyObjectGroupsStages>> stages{};

  GetPipelineInstanceBuildNumberStatusResponseBodyObjectGroups() {}

  explicit GetPipelineInstanceBuildNumberStatusResponseBodyObjectGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (stages) {
      vector<boost::any> temp1;
      for(auto item1:*stages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Stages"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Stages") != m.end() && !m["Stages"].empty()) {
      if (typeid(vector<boost::any>) == m["Stages"].type()) {
        vector<GetPipelineInstanceBuildNumberStatusResponseBodyObjectGroupsStages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Stages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPipelineInstanceBuildNumberStatusResponseBodyObjectGroupsStages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stages = make_shared<vector<GetPipelineInstanceBuildNumberStatusResponseBodyObjectGroupsStages>>(expect1);
      }
    }
  }


  virtual ~GetPipelineInstanceBuildNumberStatusResponseBodyObjectGroups() = default;
};
class GetPipelineInstanceBuildNumberStatusResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<vector<GetPipelineInstanceBuildNumberStatusResponseBodyObjectGroups>> groups{};

  GetPipelineInstanceBuildNumberStatusResponseBodyObject() {}

  explicit GetPipelineInstanceBuildNumberStatusResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (groups) {
      vector<boost::any> temp1;
      for(auto item1:*groups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Groups"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      if (typeid(vector<boost::any>) == m["Groups"].type()) {
        vector<GetPipelineInstanceBuildNumberStatusResponseBodyObjectGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Groups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPipelineInstanceBuildNumberStatusResponseBodyObjectGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groups = make_shared<vector<GetPipelineInstanceBuildNumberStatusResponseBodyObjectGroups>>(expect1);
      }
    }
  }


  virtual ~GetPipelineInstanceBuildNumberStatusResponseBodyObject() = default;
};
class GetPipelineInstanceBuildNumberStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetPipelineInstanceBuildNumberStatusResponseBodyObject> object{};

  GetPipelineInstanceBuildNumberStatusResponseBody() {}

  explicit GetPipelineInstanceBuildNumberStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      res["Object"] = object ? boost::any(object->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(map<string, boost::any>) == m["Object"].type()) {
        GetPipelineInstanceBuildNumberStatusResponseBodyObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Object"]));
        object = make_shared<GetPipelineInstanceBuildNumberStatusResponseBodyObject>(model1);
      }
    }
  }


  virtual ~GetPipelineInstanceBuildNumberStatusResponseBody() = default;
};
class GetPipelineInstanceBuildNumberStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPipelineInstanceBuildNumberStatusResponseBody> body{};

  GetPipelineInstanceBuildNumberStatusResponse() {}

  explicit GetPipelineInstanceBuildNumberStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPipelineInstanceBuildNumberStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPipelineInstanceBuildNumberStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetPipelineInstanceBuildNumberStatusResponse() = default;
};
class ListDevopsProjectSprintsRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> projectId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> pageToken{};

  ListDevopsProjectSprintsRequest() {}

  explicit ListDevopsProjectSprintsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageToken) {
      res["PageToken"] = boost::any(*pageToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageToken") != m.end() && !m["PageToken"].empty()) {
      pageToken = make_shared<string>(boost::any_cast<string>(m["PageToken"]));
    }
  }


  virtual ~ListDevopsProjectSprintsRequest() = default;
};
class ListDevopsProjectSprintsResponseBodyObjectPlanToDo : public Darabonba::Model {
public:
  shared_ptr<long> tasks{};
  shared_ptr<long> workTimes{};
  shared_ptr<long> storyPoints{};

  ListDevopsProjectSprintsResponseBodyObjectPlanToDo() {}

  explicit ListDevopsProjectSprintsResponseBodyObjectPlanToDo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tasks) {
      res["Tasks"] = boost::any(*tasks);
    }
    if (workTimes) {
      res["WorkTimes"] = boost::any(*workTimes);
    }
    if (storyPoints) {
      res["StoryPoints"] = boost::any(*storyPoints);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      tasks = make_shared<long>(boost::any_cast<long>(m["Tasks"]));
    }
    if (m.find("WorkTimes") != m.end() && !m["WorkTimes"].empty()) {
      workTimes = make_shared<long>(boost::any_cast<long>(m["WorkTimes"]));
    }
    if (m.find("StoryPoints") != m.end() && !m["StoryPoints"].empty()) {
      storyPoints = make_shared<long>(boost::any_cast<long>(m["StoryPoints"]));
    }
  }


  virtual ~ListDevopsProjectSprintsResponseBodyObjectPlanToDo() = default;
};
class ListDevopsProjectSprintsResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> accomplished{};
  shared_ptr<string> projectId{};
  shared_ptr<bool> isDeleted{};
  shared_ptr<string> startDate{};
  shared_ptr<string> updated{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> dueDate{};
  shared_ptr<string> name{};
  shared_ptr<string> created{};
  shared_ptr<string> id{};
  shared_ptr<ListDevopsProjectSprintsResponseBodyObjectPlanToDo> planToDo{};

  ListDevopsProjectSprintsResponseBodyObject() {}

  explicit ListDevopsProjectSprintsResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (accomplished) {
      res["Accomplished"] = boost::any(*accomplished);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (isDeleted) {
      res["IsDeleted"] = boost::any(*isDeleted);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (updated) {
      res["Updated"] = boost::any(*updated);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (dueDate) {
      res["DueDate"] = boost::any(*dueDate);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (created) {
      res["Created"] = boost::any(*created);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (planToDo) {
      res["PlanToDo"] = planToDo ? boost::any(planToDo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Accomplished") != m.end() && !m["Accomplished"].empty()) {
      accomplished = make_shared<string>(boost::any_cast<string>(m["Accomplished"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("IsDeleted") != m.end() && !m["IsDeleted"].empty()) {
      isDeleted = make_shared<bool>(boost::any_cast<bool>(m["IsDeleted"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("Updated") != m.end() && !m["Updated"].empty()) {
      updated = make_shared<string>(boost::any_cast<string>(m["Updated"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["CreatorId"]));
    }
    if (m.find("DueDate") != m.end() && !m["DueDate"].empty()) {
      dueDate = make_shared<string>(boost::any_cast<string>(m["DueDate"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Created") != m.end() && !m["Created"].empty()) {
      created = make_shared<string>(boost::any_cast<string>(m["Created"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("PlanToDo") != m.end() && !m["PlanToDo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PlanToDo"].type()) {
        ListDevopsProjectSprintsResponseBodyObjectPlanToDo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PlanToDo"]));
        planToDo = make_shared<ListDevopsProjectSprintsResponseBodyObjectPlanToDo>(model1);
      }
    }
  }


  virtual ~ListDevopsProjectSprintsResponseBodyObject() = default;
};
class ListDevopsProjectSprintsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<ListDevopsProjectSprintsResponseBodyObject>> object{};
  shared_ptr<string> nextPageToken{};

  ListDevopsProjectSprintsResponseBody() {}

  explicit ListDevopsProjectSprintsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      vector<boost::any> temp1;
      for(auto item1:*object){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Object"] = boost::any(temp1);
    }
    if (nextPageToken) {
      res["NextPageToken"] = boost::any(*nextPageToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(vector<boost::any>) == m["Object"].type()) {
        vector<ListDevopsProjectSprintsResponseBodyObject> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Object"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDevopsProjectSprintsResponseBodyObject model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        object = make_shared<vector<ListDevopsProjectSprintsResponseBodyObject>>(expect1);
      }
    }
    if (m.find("NextPageToken") != m.end() && !m["NextPageToken"].empty()) {
      nextPageToken = make_shared<string>(boost::any_cast<string>(m["NextPageToken"]));
    }
  }


  virtual ~ListDevopsProjectSprintsResponseBody() = default;
};
class ListDevopsProjectSprintsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDevopsProjectSprintsResponseBody> body{};

  ListDevopsProjectSprintsResponse() {}

  explicit ListDevopsProjectSprintsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDevopsProjectSprintsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDevopsProjectSprintsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDevopsProjectSprintsResponse() = default;
};
class GetDevopsProjectInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> projectId{};

  GetDevopsProjectInfoRequest() {}

  explicit GetDevopsProjectInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~GetDevopsProjectInfoRequest() = default;
};
class GetDevopsProjectInfoResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<string> sortMethod{};
  shared_ptr<string> uniqueIdPrefix{};
  shared_ptr<string> normalType{};
  shared_ptr<string> modifierId{};
  shared_ptr<string> sourceType{};
  shared_ptr<bool> isTemplate{};
  shared_ptr<string> description{};
  shared_ptr<string> defaultRoleId{};
  shared_ptr<string> rootCollectionId{};
  shared_ptr<bool> isDeleted{};
  shared_ptr<string> updated{};
  shared_ptr<string> name{};
  shared_ptr<bool> isArchived{};
  shared_ptr<string> endDate{};
  shared_ptr<string> logo{};
  shared_ptr<string> startDate{};
  shared_ptr<string> pinyin{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> defaultCollectionId{};
  shared_ptr<bool> isSuspended{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> visibility{};
  shared_ptr<string> py{};
  shared_ptr<string> category{};
  shared_ptr<long> nextTaskUniqueId{};
  shared_ptr<string> customfields{};
  shared_ptr<string> created{};
  shared_ptr<string> id{};

  GetDevopsProjectInfoResponseBodyObject() {}

  explicit GetDevopsProjectInfoResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sortMethod) {
      res["SortMethod"] = boost::any(*sortMethod);
    }
    if (uniqueIdPrefix) {
      res["UniqueIdPrefix"] = boost::any(*uniqueIdPrefix);
    }
    if (normalType) {
      res["NormalType"] = boost::any(*normalType);
    }
    if (modifierId) {
      res["ModifierId"] = boost::any(*modifierId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (isTemplate) {
      res["IsTemplate"] = boost::any(*isTemplate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (defaultRoleId) {
      res["DefaultRoleId"] = boost::any(*defaultRoleId);
    }
    if (rootCollectionId) {
      res["RootCollectionId"] = boost::any(*rootCollectionId);
    }
    if (isDeleted) {
      res["IsDeleted"] = boost::any(*isDeleted);
    }
    if (updated) {
      res["Updated"] = boost::any(*updated);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (isArchived) {
      res["IsArchived"] = boost::any(*isArchived);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (logo) {
      res["Logo"] = boost::any(*logo);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (pinyin) {
      res["Pinyin"] = boost::any(*pinyin);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (defaultCollectionId) {
      res["DefaultCollectionId"] = boost::any(*defaultCollectionId);
    }
    if (isSuspended) {
      res["IsSuspended"] = boost::any(*isSuspended);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    if (py) {
      res["Py"] = boost::any(*py);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (nextTaskUniqueId) {
      res["NextTaskUniqueId"] = boost::any(*nextTaskUniqueId);
    }
    if (customfields) {
      res["Customfields"] = boost::any(*customfields);
    }
    if (created) {
      res["Created"] = boost::any(*created);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SortMethod") != m.end() && !m["SortMethod"].empty()) {
      sortMethod = make_shared<string>(boost::any_cast<string>(m["SortMethod"]));
    }
    if (m.find("UniqueIdPrefix") != m.end() && !m["UniqueIdPrefix"].empty()) {
      uniqueIdPrefix = make_shared<string>(boost::any_cast<string>(m["UniqueIdPrefix"]));
    }
    if (m.find("NormalType") != m.end() && !m["NormalType"].empty()) {
      normalType = make_shared<string>(boost::any_cast<string>(m["NormalType"]));
    }
    if (m.find("ModifierId") != m.end() && !m["ModifierId"].empty()) {
      modifierId = make_shared<string>(boost::any_cast<string>(m["ModifierId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("IsTemplate") != m.end() && !m["IsTemplate"].empty()) {
      isTemplate = make_shared<bool>(boost::any_cast<bool>(m["IsTemplate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DefaultRoleId") != m.end() && !m["DefaultRoleId"].empty()) {
      defaultRoleId = make_shared<string>(boost::any_cast<string>(m["DefaultRoleId"]));
    }
    if (m.find("RootCollectionId") != m.end() && !m["RootCollectionId"].empty()) {
      rootCollectionId = make_shared<string>(boost::any_cast<string>(m["RootCollectionId"]));
    }
    if (m.find("IsDeleted") != m.end() && !m["IsDeleted"].empty()) {
      isDeleted = make_shared<bool>(boost::any_cast<bool>(m["IsDeleted"]));
    }
    if (m.find("Updated") != m.end() && !m["Updated"].empty()) {
      updated = make_shared<string>(boost::any_cast<string>(m["Updated"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("IsArchived") != m.end() && !m["IsArchived"].empty()) {
      isArchived = make_shared<bool>(boost::any_cast<bool>(m["IsArchived"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Logo") != m.end() && !m["Logo"].empty()) {
      logo = make_shared<string>(boost::any_cast<string>(m["Logo"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("Pinyin") != m.end() && !m["Pinyin"].empty()) {
      pinyin = make_shared<string>(boost::any_cast<string>(m["Pinyin"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["CreatorId"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("DefaultCollectionId") != m.end() && !m["DefaultCollectionId"].empty()) {
      defaultCollectionId = make_shared<string>(boost::any_cast<string>(m["DefaultCollectionId"]));
    }
    if (m.find("IsSuspended") != m.end() && !m["IsSuspended"].empty()) {
      isSuspended = make_shared<bool>(boost::any_cast<bool>(m["IsSuspended"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
    if (m.find("Py") != m.end() && !m["Py"].empty()) {
      py = make_shared<string>(boost::any_cast<string>(m["Py"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("NextTaskUniqueId") != m.end() && !m["NextTaskUniqueId"].empty()) {
      nextTaskUniqueId = make_shared<long>(boost::any_cast<long>(m["NextTaskUniqueId"]));
    }
    if (m.find("Customfields") != m.end() && !m["Customfields"].empty()) {
      customfields = make_shared<string>(boost::any_cast<string>(m["Customfields"]));
    }
    if (m.find("Created") != m.end() && !m["Created"].empty()) {
      created = make_shared<string>(boost::any_cast<string>(m["Created"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~GetDevopsProjectInfoResponseBodyObject() = default;
};
class GetDevopsProjectInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetDevopsProjectInfoResponseBodyObject> object{};

  GetDevopsProjectInfoResponseBody() {}

  explicit GetDevopsProjectInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      res["Object"] = object ? boost::any(object->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(map<string, boost::any>) == m["Object"].type()) {
        GetDevopsProjectInfoResponseBodyObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Object"]));
        object = make_shared<GetDevopsProjectInfoResponseBodyObject>(model1);
      }
    }
  }


  virtual ~GetDevopsProjectInfoResponseBody() = default;
};
class GetDevopsProjectInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDevopsProjectInfoResponseBody> body{};

  GetDevopsProjectInfoResponse() {}

  explicit GetDevopsProjectInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetDevopsProjectInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDevopsProjectInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetDevopsProjectInfoResponse() = default;
};
class DeletePipelineMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<long> pipelineId{};
  shared_ptr<string> userPk{};
  shared_ptr<string> userId{};

  DeletePipelineMemberRequest() {}

  explicit DeletePipelineMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    if (userPk) {
      res["UserPk"] = boost::any(*userPk);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<long>(boost::any_cast<long>(m["PipelineId"]));
    }
    if (m.find("UserPk") != m.end() && !m["UserPk"].empty()) {
      userPk = make_shared<string>(boost::any_cast<string>(m["UserPk"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DeletePipelineMemberRequest() = default;
};
class DeletePipelineMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> object{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  DeletePipelineMemberResponseBody() {}

  explicit DeletePipelineMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (object) {
      res["Object"] = boost::any(*object);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<bool>(boost::any_cast<bool>(m["Object"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeletePipelineMemberResponseBody() = default;
};
class DeletePipelineMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeletePipelineMemberResponseBody> body{};

  DeletePipelineMemberResponse() {}

  explicit DeletePipelineMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeletePipelineMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePipelineMemberResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePipelineMemberResponse() = default;
};
class GetDevopsProjectSprintInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> sprintId{};

  GetDevopsProjectSprintInfoRequest() {}

  explicit GetDevopsProjectSprintInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (sprintId) {
      res["SprintId"] = boost::any(*sprintId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("SprintId") != m.end() && !m["SprintId"].empty()) {
      sprintId = make_shared<string>(boost::any_cast<string>(m["SprintId"]));
    }
  }


  virtual ~GetDevopsProjectSprintInfoRequest() = default;
};
class GetDevopsProjectSprintInfoResponseBodyObjectPlanToDo : public Darabonba::Model {
public:
  shared_ptr<long> tasks{};
  shared_ptr<long> workTimes{};
  shared_ptr<long> storyPoints{};

  GetDevopsProjectSprintInfoResponseBodyObjectPlanToDo() {}

  explicit GetDevopsProjectSprintInfoResponseBodyObjectPlanToDo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tasks) {
      res["Tasks"] = boost::any(*tasks);
    }
    if (workTimes) {
      res["WorkTimes"] = boost::any(*workTimes);
    }
    if (storyPoints) {
      res["StoryPoints"] = boost::any(*storyPoints);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      tasks = make_shared<long>(boost::any_cast<long>(m["Tasks"]));
    }
    if (m.find("WorkTimes") != m.end() && !m["WorkTimes"].empty()) {
      workTimes = make_shared<long>(boost::any_cast<long>(m["WorkTimes"]));
    }
    if (m.find("StoryPoints") != m.end() && !m["StoryPoints"].empty()) {
      storyPoints = make_shared<long>(boost::any_cast<long>(m["StoryPoints"]));
    }
  }


  virtual ~GetDevopsProjectSprintInfoResponseBodyObjectPlanToDo() = default;
};
class GetDevopsProjectSprintInfoResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> accomplished{};
  shared_ptr<string> projectId{};
  shared_ptr<bool> isDeleted{};
  shared_ptr<string> startDate{};
  shared_ptr<string> updated{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> dueDate{};
  shared_ptr<string> name{};
  shared_ptr<string> created{};
  shared_ptr<string> id{};
  shared_ptr<GetDevopsProjectSprintInfoResponseBodyObjectPlanToDo> planToDo{};

  GetDevopsProjectSprintInfoResponseBodyObject() {}

  explicit GetDevopsProjectSprintInfoResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (accomplished) {
      res["Accomplished"] = boost::any(*accomplished);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (isDeleted) {
      res["IsDeleted"] = boost::any(*isDeleted);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (updated) {
      res["Updated"] = boost::any(*updated);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (dueDate) {
      res["DueDate"] = boost::any(*dueDate);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (created) {
      res["Created"] = boost::any(*created);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (planToDo) {
      res["PlanToDo"] = planToDo ? boost::any(planToDo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Accomplished") != m.end() && !m["Accomplished"].empty()) {
      accomplished = make_shared<string>(boost::any_cast<string>(m["Accomplished"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("IsDeleted") != m.end() && !m["IsDeleted"].empty()) {
      isDeleted = make_shared<bool>(boost::any_cast<bool>(m["IsDeleted"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("Updated") != m.end() && !m["Updated"].empty()) {
      updated = make_shared<string>(boost::any_cast<string>(m["Updated"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["CreatorId"]));
    }
    if (m.find("DueDate") != m.end() && !m["DueDate"].empty()) {
      dueDate = make_shared<string>(boost::any_cast<string>(m["DueDate"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Created") != m.end() && !m["Created"].empty()) {
      created = make_shared<string>(boost::any_cast<string>(m["Created"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("PlanToDo") != m.end() && !m["PlanToDo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PlanToDo"].type()) {
        GetDevopsProjectSprintInfoResponseBodyObjectPlanToDo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PlanToDo"]));
        planToDo = make_shared<GetDevopsProjectSprintInfoResponseBodyObjectPlanToDo>(model1);
      }
    }
  }


  virtual ~GetDevopsProjectSprintInfoResponseBodyObject() = default;
};
class GetDevopsProjectSprintInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetDevopsProjectSprintInfoResponseBodyObject> object{};

  GetDevopsProjectSprintInfoResponseBody() {}

  explicit GetDevopsProjectSprintInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      res["Object"] = object ? boost::any(object->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(map<string, boost::any>) == m["Object"].type()) {
        GetDevopsProjectSprintInfoResponseBodyObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Object"]));
        object = make_shared<GetDevopsProjectSprintInfoResponseBodyObject>(model1);
      }
    }
  }


  virtual ~GetDevopsProjectSprintInfoResponseBody() = default;
};
class GetDevopsProjectSprintInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDevopsProjectSprintInfoResponseBody> body{};

  GetDevopsProjectSprintInfoResponse() {}

  explicit GetDevopsProjectSprintInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetDevopsProjectSprintInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDevopsProjectSprintInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetDevopsProjectSprintInfoResponse() = default;
};
class DeleteDevopsOrganizationMembersRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> userId{};
  shared_ptr<string> realPk{};

  DeleteDevopsOrganizationMembersRequest() {}

  explicit DeleteDevopsOrganizationMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (realPk) {
      res["RealPk"] = boost::any(*realPk);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("RealPk") != m.end() && !m["RealPk"].empty()) {
      realPk = make_shared<string>(boost::any_cast<string>(m["RealPk"]));
    }
  }


  virtual ~DeleteDevopsOrganizationMembersRequest() = default;
};
class DeleteDevopsOrganizationMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> object{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};

  DeleteDevopsOrganizationMembersResponseBody() {}

  explicit DeleteDevopsOrganizationMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (object) {
      res["Object"] = boost::any(*object);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<bool>(boost::any_cast<bool>(m["Object"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
  }


  virtual ~DeleteDevopsOrganizationMembersResponseBody() = default;
};
class DeleteDevopsOrganizationMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDevopsOrganizationMembersResponseBody> body{};

  DeleteDevopsOrganizationMembersResponse() {}

  explicit DeleteDevopsOrganizationMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDevopsOrganizationMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDevopsOrganizationMembersResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDevopsOrganizationMembersResponse() = default;
};
class GetLastWorkspaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> realPk{};

  GetLastWorkspaceRequest() {}

  explicit GetLastWorkspaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (realPk) {
      res["RealPk"] = boost::any(*realPk);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("RealPk") != m.end() && !m["RealPk"].empty()) {
      realPk = make_shared<string>(boost::any_cast<string>(m["RealPk"]));
    }
  }


  virtual ~GetLastWorkspaceRequest() = default;
};
class GetLastWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> object{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};

  GetLastWorkspaceResponseBody() {}

  explicit GetLastWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (object) {
      res["Object"] = boost::any(*object);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<string>(boost::any_cast<string>(m["Object"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
  }


  virtual ~GetLastWorkspaceResponseBody() = default;
};
class GetLastWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetLastWorkspaceResponseBody> body{};

  GetLastWorkspaceResponse() {}

  explicit GetLastWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetLastWorkspaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLastWorkspaceResponseBody>(model1);
      }
    }
  }


  virtual ~GetLastWorkspaceResponse() = default;
};
class CreateCredentialRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> name{};
  shared_ptr<string> userName{};
  shared_ptr<string> password{};
  shared_ptr<string> type{};
  shared_ptr<string> userPk{};

  CreateCredentialRequest() {}

  explicit CreateCredentialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (userPk) {
      res["UserPk"] = boost::any(*userPk);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UserPk") != m.end() && !m["UserPk"].empty()) {
      userPk = make_shared<string>(boost::any_cast<string>(m["UserPk"]));
    }
  }


  virtual ~CreateCredentialRequest() = default;
};
class CreateCredentialResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> object{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};

  CreateCredentialResponseBody() {}

  explicit CreateCredentialResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (object) {
      res["Object"] = boost::any(*object);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<long>(boost::any_cast<long>(m["Object"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
  }


  virtual ~CreateCredentialResponseBody() = default;
};
class CreateCredentialResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateCredentialResponseBody> body{};

  CreateCredentialResponse() {}

  explicit CreateCredentialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateCredentialResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCredentialResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCredentialResponse() = default;
};
class ListCredentialsRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> userPk{};

  ListCredentialsRequest() {}

  explicit ListCredentialsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (userPk) {
      res["UserPk"] = boost::any(*userPk);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("UserPk") != m.end() && !m["UserPk"].empty()) {
      userPk = make_shared<string>(boost::any_cast<string>(m["UserPk"]));
    }
  }


  virtual ~ListCredentialsRequest() = default;
};
class ListCredentialsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<map<string, boost::any>>> object{};

  ListCredentialsResponseBody() {}

  explicit ListCredentialsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      res["Object"] = boost::any(*object);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Object"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Object"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      object = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~ListCredentialsResponseBody() = default;
};
class ListCredentialsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListCredentialsResponseBody> body{};

  ListCredentialsResponse() {}

  explicit ListCredentialsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListCredentialsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCredentialsResponseBody>(model1);
      }
    }
  }


  virtual ~ListCredentialsResponse() = default;
};
class CreatePipelineRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> pipeline{};
  shared_ptr<string> userPk{};

  CreatePipelineRequest() {}

  explicit CreatePipelineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (pipeline) {
      res["Pipeline"] = boost::any(*pipeline);
    }
    if (userPk) {
      res["UserPk"] = boost::any(*userPk);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("Pipeline") != m.end() && !m["Pipeline"].empty()) {
      pipeline = make_shared<string>(boost::any_cast<string>(m["Pipeline"]));
    }
    if (m.find("UserPk") != m.end() && !m["UserPk"].empty()) {
      userPk = make_shared<string>(boost::any_cast<string>(m["UserPk"]));
    }
  }


  virtual ~CreatePipelineRequest() = default;
};
class CreatePipelineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> object{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};

  CreatePipelineResponseBody() {}

  explicit CreatePipelineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (object) {
      res["Object"] = boost::any(*object);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<long>(boost::any_cast<long>(m["Object"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
  }


  virtual ~CreatePipelineResponseBody() = default;
};
class CreatePipelineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreatePipelineResponseBody> body{};

  CreatePipelineResponse() {}

  explicit CreatePipelineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreatePipelineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePipelineResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePipelineResponse() = default;
};
class ListPipelinesRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> pipelineName{};
  shared_ptr<string> creators{};
  shared_ptr<string> operators{};
  shared_ptr<string> resultStatusList{};
  shared_ptr<string> createStartTime{};
  shared_ptr<string> createEndTime{};
  shared_ptr<string> executeStartTime{};
  shared_ptr<string> executeEndTime{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageStart{};
  shared_ptr<string> userPk{};

  ListPipelinesRequest() {}

  explicit ListPipelinesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (pipelineName) {
      res["PipelineName"] = boost::any(*pipelineName);
    }
    if (creators) {
      res["Creators"] = boost::any(*creators);
    }
    if (operators) {
      res["Operators"] = boost::any(*operators);
    }
    if (resultStatusList) {
      res["ResultStatusList"] = boost::any(*resultStatusList);
    }
    if (createStartTime) {
      res["CreateStartTime"] = boost::any(*createStartTime);
    }
    if (createEndTime) {
      res["CreateEndTime"] = boost::any(*createEndTime);
    }
    if (executeStartTime) {
      res["ExecuteStartTime"] = boost::any(*executeStartTime);
    }
    if (executeEndTime) {
      res["ExecuteEndTime"] = boost::any(*executeEndTime);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageStart) {
      res["PageStart"] = boost::any(*pageStart);
    }
    if (userPk) {
      res["UserPk"] = boost::any(*userPk);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("PipelineName") != m.end() && !m["PipelineName"].empty()) {
      pipelineName = make_shared<string>(boost::any_cast<string>(m["PipelineName"]));
    }
    if (m.find("Creators") != m.end() && !m["Creators"].empty()) {
      creators = make_shared<string>(boost::any_cast<string>(m["Creators"]));
    }
    if (m.find("Operators") != m.end() && !m["Operators"].empty()) {
      operators = make_shared<string>(boost::any_cast<string>(m["Operators"]));
    }
    if (m.find("ResultStatusList") != m.end() && !m["ResultStatusList"].empty()) {
      resultStatusList = make_shared<string>(boost::any_cast<string>(m["ResultStatusList"]));
    }
    if (m.find("CreateStartTime") != m.end() && !m["CreateStartTime"].empty()) {
      createStartTime = make_shared<string>(boost::any_cast<string>(m["CreateStartTime"]));
    }
    if (m.find("CreateEndTime") != m.end() && !m["CreateEndTime"].empty()) {
      createEndTime = make_shared<string>(boost::any_cast<string>(m["CreateEndTime"]));
    }
    if (m.find("ExecuteStartTime") != m.end() && !m["ExecuteStartTime"].empty()) {
      executeStartTime = make_shared<string>(boost::any_cast<string>(m["ExecuteStartTime"]));
    }
    if (m.find("ExecuteEndTime") != m.end() && !m["ExecuteEndTime"].empty()) {
      executeEndTime = make_shared<string>(boost::any_cast<string>(m["ExecuteEndTime"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageStart") != m.end() && !m["PageStart"].empty()) {
      pageStart = make_shared<long>(boost::any_cast<long>(m["PageStart"]));
    }
    if (m.find("UserPk") != m.end() && !m["UserPk"].empty()) {
      userPk = make_shared<string>(boost::any_cast<string>(m["UserPk"]));
    }
  }


  virtual ~ListPipelinesRequest() = default;
};
class ListPipelinesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<map<string, boost::any>> object{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  ListPipelinesResponseBody() {}

  explicit ListPipelinesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (object) {
      res["Object"] = boost::any(*object);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Object"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      object = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListPipelinesResponseBody() = default;
};
class ListPipelinesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListPipelinesResponseBody> body{};

  ListPipelinesResponse() {}

  explicit ListPipelinesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class CreatePipelineFromTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<long> pipelineTemplateId{};
  shared_ptr<string> pipelineName{};

  CreatePipelineFromTemplateRequest() {}

  explicit CreatePipelineFromTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (pipelineTemplateId) {
      res["PipelineTemplateId"] = boost::any(*pipelineTemplateId);
    }
    if (pipelineName) {
      res["PipelineName"] = boost::any(*pipelineName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("PipelineTemplateId") != m.end() && !m["PipelineTemplateId"].empty()) {
      pipelineTemplateId = make_shared<long>(boost::any_cast<long>(m["PipelineTemplateId"]));
    }
    if (m.find("PipelineName") != m.end() && !m["PipelineName"].empty()) {
      pipelineName = make_shared<string>(boost::any_cast<string>(m["PipelineName"]));
    }
  }


  virtual ~CreatePipelineFromTemplateRequest() = default;
};
class CreatePipelineFromTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> pipelineId{};

  CreatePipelineFromTemplateResponseBody() {}

  explicit CreatePipelineFromTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<long>(boost::any_cast<long>(m["PipelineId"]));
    }
  }


  virtual ~CreatePipelineFromTemplateResponseBody() = default;
};
class CreatePipelineFromTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreatePipelineFromTemplateResponseBody> body{};

  CreatePipelineFromTemplateResponse() {}

  explicit CreatePipelineFromTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreatePipelineFromTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePipelineFromTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePipelineFromTemplateResponse() = default;
};
class ListSmartGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> projectId{};

  ListSmartGroupRequest() {}

  explicit ListSmartGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~ListSmartGroupRequest() = default;
};
class ListSmartGroupResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> id{};

  ListSmartGroupResponseBodyObject() {}

  explicit ListSmartGroupResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~ListSmartGroupResponseBodyObject() = default;
};
class ListSmartGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<ListSmartGroupResponseBodyObject>> object{};

  ListSmartGroupResponseBody() {}

  explicit ListSmartGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      vector<boost::any> temp1;
      for(auto item1:*object){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Object"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(vector<boost::any>) == m["Object"].type()) {
        vector<ListSmartGroupResponseBodyObject> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Object"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSmartGroupResponseBodyObject model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        object = make_shared<vector<ListSmartGroupResponseBodyObject>>(expect1);
      }
    }
  }


  virtual ~ListSmartGroupResponseBody() = default;
};
class ListSmartGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSmartGroupResponseBody> body{};

  ListSmartGroupResponse() {}

  explicit ListSmartGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSmartGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSmartGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ListSmartGroupResponse() = default;
};
class TransferPipelineOwnerRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<long> pipelineId{};
  shared_ptr<string> userPk{};
  shared_ptr<string> newOwnerId{};

  TransferPipelineOwnerRequest() {}

  explicit TransferPipelineOwnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    if (userPk) {
      res["UserPk"] = boost::any(*userPk);
    }
    if (newOwnerId) {
      res["NewOwnerId"] = boost::any(*newOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<long>(boost::any_cast<long>(m["PipelineId"]));
    }
    if (m.find("UserPk") != m.end() && !m["UserPk"].empty()) {
      userPk = make_shared<string>(boost::any_cast<string>(m["UserPk"]));
    }
    if (m.find("NewOwnerId") != m.end() && !m["NewOwnerId"].empty()) {
      newOwnerId = make_shared<string>(boost::any_cast<string>(m["NewOwnerId"]));
    }
  }


  virtual ~TransferPipelineOwnerRequest() = default;
};
class TransferPipelineOwnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<map<string, boost::any>> object{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  TransferPipelineOwnerResponseBody() {}

  explicit TransferPipelineOwnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (object) {
      res["Object"] = boost::any(*object);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Object"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      object = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~TransferPipelineOwnerResponseBody() = default;
};
class TransferPipelineOwnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TransferPipelineOwnerResponseBody> body{};

  TransferPipelineOwnerResponse() {}

  explicit TransferPipelineOwnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TransferPipelineOwnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TransferPipelineOwnerResponseBody>(model1);
      }
    }
  }


  virtual ~TransferPipelineOwnerResponse() = default;
};
class CreateCommonGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> projectId{};
  shared_ptr<string> description{};
  shared_ptr<string> smartGroupId{};
  shared_ptr<string> name{};

  CreateCommonGroupRequest() {}

  explicit CreateCommonGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (smartGroupId) {
      res["SmartGroupId"] = boost::any(*smartGroupId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("SmartGroupId") != m.end() && !m["SmartGroupId"].empty()) {
      smartGroupId = make_shared<string>(boost::any_cast<string>(m["SmartGroupId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreateCommonGroupRequest() = default;
};
class CreateCommonGroupResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  CreateCommonGroupResponseBodyObject() {}

  explicit CreateCommonGroupResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~CreateCommonGroupResponseBodyObject() = default;
};
class CreateCommonGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};
  shared_ptr<CreateCommonGroupResponseBodyObject> object{};

  CreateCommonGroupResponseBody() {}

  explicit CreateCommonGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      res["Object"] = object ? boost::any(object->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(map<string, boost::any>) == m["Object"].type()) {
        CreateCommonGroupResponseBodyObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Object"]));
        object = make_shared<CreateCommonGroupResponseBodyObject>(model1);
      }
    }
  }


  virtual ~CreateCommonGroupResponseBody() = default;
};
class CreateCommonGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateCommonGroupResponseBody> body{};

  CreateCommonGroupResponse() {}

  explicit CreateCommonGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateCommonGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCommonGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCommonGroupResponse() = default;
};
class CreateDevopsOrganizationRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgName{};
  shared_ptr<string> source{};
  shared_ptr<string> realPk{};
  shared_ptr<long> desiredMemberCount{};

  CreateDevopsOrganizationRequest() {}

  explicit CreateDevopsOrganizationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (realPk) {
      res["RealPk"] = boost::any(*realPk);
    }
    if (desiredMemberCount) {
      res["DesiredMemberCount"] = boost::any(*desiredMemberCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("RealPk") != m.end() && !m["RealPk"].empty()) {
      realPk = make_shared<string>(boost::any_cast<string>(m["RealPk"]));
    }
    if (m.find("DesiredMemberCount") != m.end() && !m["DesiredMemberCount"].empty()) {
      desiredMemberCount = make_shared<long>(boost::any_cast<long>(m["DesiredMemberCount"]));
    }
  }


  virtual ~CreateDevopsOrganizationRequest() = default;
};
class CreateDevopsOrganizationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> object{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};

  CreateDevopsOrganizationResponseBody() {}

  explicit CreateDevopsOrganizationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (object) {
      res["Object"] = boost::any(*object);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<string>(boost::any_cast<string>(m["Object"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
  }


  virtual ~CreateDevopsOrganizationResponseBody() = default;
};
class CreateDevopsOrganizationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDevopsOrganizationResponseBody> body{};

  CreateDevopsOrganizationResponse() {}

  explicit CreateDevopsOrganizationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDevopsOrganizationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDevopsOrganizationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDevopsOrganizationResponse() = default;
};
class ListDevopsScenarioFieldConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> projectId{};

  ListDevopsScenarioFieldConfigRequest() {}

  explicit ListDevopsScenarioFieldConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~ListDevopsScenarioFieldConfigRequest() = default;
};
class ListDevopsScenarioFieldConfigResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> name{};
  shared_ptr<string> id{};

  ListDevopsScenarioFieldConfigResponseBodyObject() {}

  explicit ListDevopsScenarioFieldConfigResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~ListDevopsScenarioFieldConfigResponseBodyObject() = default;
};
class ListDevopsScenarioFieldConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<ListDevopsScenarioFieldConfigResponseBodyObject>> object{};

  ListDevopsScenarioFieldConfigResponseBody() {}

  explicit ListDevopsScenarioFieldConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      vector<boost::any> temp1;
      for(auto item1:*object){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Object"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(vector<boost::any>) == m["Object"].type()) {
        vector<ListDevopsScenarioFieldConfigResponseBodyObject> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Object"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDevopsScenarioFieldConfigResponseBodyObject model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        object = make_shared<vector<ListDevopsScenarioFieldConfigResponseBodyObject>>(expect1);
      }
    }
  }


  virtual ~ListDevopsScenarioFieldConfigResponseBody() = default;
};
class ListDevopsScenarioFieldConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDevopsScenarioFieldConfigResponseBody> body{};

  ListDevopsScenarioFieldConfigResponse() {}

  explicit ListDevopsScenarioFieldConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDevopsScenarioFieldConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDevopsScenarioFieldConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ListDevopsScenarioFieldConfigResponse() = default;
};
class ListPipelineTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<long> pageStart{};
  shared_ptr<long> pageNum{};

  ListPipelineTemplatesRequest() {}

  explicit ListPipelineTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (pageStart) {
      res["PageStart"] = boost::any(*pageStart);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("PageStart") != m.end() && !m["PageStart"].empty()) {
      pageStart = make_shared<long>(boost::any_cast<long>(m["PageStart"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
  }


  virtual ~ListPipelineTemplatesRequest() = default;
};
class ListPipelineTemplatesResponseBodyDataDataList : public Darabonba::Model {
public:
  shared_ptr<string> templateName{};
  shared_ptr<long> id{};

  ListPipelineTemplatesResponseBodyDataDataList() {}

  explicit ListPipelineTemplatesResponseBodyDataDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~ListPipelineTemplatesResponseBodyDataDataList() = default;
};
class ListPipelineTemplatesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> total{};
  shared_ptr<vector<ListPipelineTemplatesResponseBodyDataDataList>> dataList{};

  ListPipelineTemplatesResponseBodyData() {}

  explicit ListPipelineTemplatesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<double>(boost::any_cast<double>(m["Total"]));
    }
    if (m.find("DataList") != m.end() && !m["DataList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataList"].type()) {
        vector<ListPipelineTemplatesResponseBodyDataDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPipelineTemplatesResponseBodyDataDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<ListPipelineTemplatesResponseBodyDataDataList>>(expect1);
      }
    }
  }


  virtual ~ListPipelineTemplatesResponseBodyData() = default;
};
class ListPipelineTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListPipelineTemplatesResponseBodyData> data{};

  ListPipelineTemplatesResponseBody() {}

  explicit ListPipelineTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListPipelineTemplatesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListPipelineTemplatesResponseBodyData>(model1);
      }
    }
  }


  virtual ~ListPipelineTemplatesResponseBody() = default;
};
class ListPipelineTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListPipelineTemplatesResponseBody> body{};

  ListPipelineTemplatesResponse() {}

  explicit ListPipelineTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListPipelineTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPipelineTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPipelineTemplatesResponse() = default;
};
class UpdateDevopsProjectTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> content{};
  shared_ptr<string> projectId{};
  shared_ptr<string> executorId{};
  shared_ptr<string> startDate{};
  shared_ptr<string> dueDate{};
  shared_ptr<string> scenarioFiieldConfigId{};
  shared_ptr<string> taskFlowStatusId{};
  shared_ptr<string> note{};
  shared_ptr<long> priority{};
  shared_ptr<string> visible{};
  shared_ptr<string> parentTaskId{};
  shared_ptr<string> sprintId{};
  shared_ptr<string> taskId{};

  UpdateDevopsProjectTaskRequest() {}

  explicit UpdateDevopsProjectTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (executorId) {
      res["ExecutorId"] = boost::any(*executorId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (dueDate) {
      res["DueDate"] = boost::any(*dueDate);
    }
    if (scenarioFiieldConfigId) {
      res["ScenarioFiieldConfigId"] = boost::any(*scenarioFiieldConfigId);
    }
    if (taskFlowStatusId) {
      res["TaskFlowStatusId"] = boost::any(*taskFlowStatusId);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (visible) {
      res["Visible"] = boost::any(*visible);
    }
    if (parentTaskId) {
      res["ParentTaskId"] = boost::any(*parentTaskId);
    }
    if (sprintId) {
      res["SprintId"] = boost::any(*sprintId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ExecutorId") != m.end() && !m["ExecutorId"].empty()) {
      executorId = make_shared<string>(boost::any_cast<string>(m["ExecutorId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("DueDate") != m.end() && !m["DueDate"].empty()) {
      dueDate = make_shared<string>(boost::any_cast<string>(m["DueDate"]));
    }
    if (m.find("ScenarioFiieldConfigId") != m.end() && !m["ScenarioFiieldConfigId"].empty()) {
      scenarioFiieldConfigId = make_shared<string>(boost::any_cast<string>(m["ScenarioFiieldConfigId"]));
    }
    if (m.find("TaskFlowStatusId") != m.end() && !m["TaskFlowStatusId"].empty()) {
      taskFlowStatusId = make_shared<string>(boost::any_cast<string>(m["TaskFlowStatusId"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("Visible") != m.end() && !m["Visible"].empty()) {
      visible = make_shared<string>(boost::any_cast<string>(m["Visible"]));
    }
    if (m.find("ParentTaskId") != m.end() && !m["ParentTaskId"].empty()) {
      parentTaskId = make_shared<string>(boost::any_cast<string>(m["ParentTaskId"]));
    }
    if (m.find("SprintId") != m.end() && !m["SprintId"].empty()) {
      sprintId = make_shared<string>(boost::any_cast<string>(m["SprintId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~UpdateDevopsProjectTaskRequest() = default;
};
class UpdateDevopsProjectTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> object{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};

  UpdateDevopsProjectTaskResponseBody() {}

  explicit UpdateDevopsProjectTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (object) {
      res["Object"] = boost::any(*object);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<bool>(boost::any_cast<bool>(m["Object"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
  }


  virtual ~UpdateDevopsProjectTaskResponseBody() = default;
};
class UpdateDevopsProjectTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateDevopsProjectTaskResponseBody> body{};

  UpdateDevopsProjectTaskResponse() {}

  explicit UpdateDevopsProjectTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateDevopsProjectTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDevopsProjectTaskResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDevopsProjectTaskResponse() = default;
};
class GetDevopsProjectTaskInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> taskId{};

  GetDevopsProjectTaskInfoRequest() {}

  explicit GetDevopsProjectTaskInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetDevopsProjectTaskInfoRequest() = default;
};
class GetDevopsProjectTaskInfoResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<string> executorId{};
  shared_ptr<string> projectId{};
  shared_ptr<string> startDate{};
  shared_ptr<string> storyPoint{};
  shared_ptr<string> priority{};
  shared_ptr<bool> isTopInProject{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> taskType{};
  shared_ptr<string> visible{};
  shared_ptr<string> tasklistId{};
  shared_ptr<bool> isDone{};
  shared_ptr<bool> isDeleted{};
  shared_ptr<string> taskflowstatusId{};
  shared_ptr<string> note{};
  shared_ptr<string> sprintId{};
  shared_ptr<string> updated{};
  shared_ptr<string> dueDate{};
  shared_ptr<string> created{};
  shared_ptr<string> content{};
  shared_ptr<string> id{};
  shared_ptr<vector<string>> involveMembers{};

  GetDevopsProjectTaskInfoResponseBodyObject() {}

  explicit GetDevopsProjectTaskInfoResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executorId) {
      res["ExecutorId"] = boost::any(*executorId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (storyPoint) {
      res["StoryPoint"] = boost::any(*storyPoint);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (isTopInProject) {
      res["IsTopInProject"] = boost::any(*isTopInProject);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (visible) {
      res["Visible"] = boost::any(*visible);
    }
    if (tasklistId) {
      res["TasklistId"] = boost::any(*tasklistId);
    }
    if (isDone) {
      res["IsDone"] = boost::any(*isDone);
    }
    if (isDeleted) {
      res["IsDeleted"] = boost::any(*isDeleted);
    }
    if (taskflowstatusId) {
      res["TaskflowstatusId"] = boost::any(*taskflowstatusId);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (sprintId) {
      res["SprintId"] = boost::any(*sprintId);
    }
    if (updated) {
      res["Updated"] = boost::any(*updated);
    }
    if (dueDate) {
      res["DueDate"] = boost::any(*dueDate);
    }
    if (created) {
      res["Created"] = boost::any(*created);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (involveMembers) {
      res["InvolveMembers"] = boost::any(*involveMembers);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExecutorId") != m.end() && !m["ExecutorId"].empty()) {
      executorId = make_shared<string>(boost::any_cast<string>(m["ExecutorId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("StoryPoint") != m.end() && !m["StoryPoint"].empty()) {
      storyPoint = make_shared<string>(boost::any_cast<string>(m["StoryPoint"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<string>(boost::any_cast<string>(m["Priority"]));
    }
    if (m.find("IsTopInProject") != m.end() && !m["IsTopInProject"].empty()) {
      isTopInProject = make_shared<bool>(boost::any_cast<bool>(m["IsTopInProject"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["CreatorId"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("Visible") != m.end() && !m["Visible"].empty()) {
      visible = make_shared<string>(boost::any_cast<string>(m["Visible"]));
    }
    if (m.find("TasklistId") != m.end() && !m["TasklistId"].empty()) {
      tasklistId = make_shared<string>(boost::any_cast<string>(m["TasklistId"]));
    }
    if (m.find("IsDone") != m.end() && !m["IsDone"].empty()) {
      isDone = make_shared<bool>(boost::any_cast<bool>(m["IsDone"]));
    }
    if (m.find("IsDeleted") != m.end() && !m["IsDeleted"].empty()) {
      isDeleted = make_shared<bool>(boost::any_cast<bool>(m["IsDeleted"]));
    }
    if (m.find("TaskflowstatusId") != m.end() && !m["TaskflowstatusId"].empty()) {
      taskflowstatusId = make_shared<string>(boost::any_cast<string>(m["TaskflowstatusId"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("SprintId") != m.end() && !m["SprintId"].empty()) {
      sprintId = make_shared<string>(boost::any_cast<string>(m["SprintId"]));
    }
    if (m.find("Updated") != m.end() && !m["Updated"].empty()) {
      updated = make_shared<string>(boost::any_cast<string>(m["Updated"]));
    }
    if (m.find("DueDate") != m.end() && !m["DueDate"].empty()) {
      dueDate = make_shared<string>(boost::any_cast<string>(m["DueDate"]));
    }
    if (m.find("Created") != m.end() && !m["Created"].empty()) {
      created = make_shared<string>(boost::any_cast<string>(m["Created"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("InvolveMembers") != m.end() && !m["InvolveMembers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InvolveMembers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InvolveMembers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      involveMembers = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetDevopsProjectTaskInfoResponseBodyObject() = default;
};
class GetDevopsProjectTaskInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetDevopsProjectTaskInfoResponseBodyObject> object{};

  GetDevopsProjectTaskInfoResponseBody() {}

  explicit GetDevopsProjectTaskInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      res["Object"] = object ? boost::any(object->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(map<string, boost::any>) == m["Object"].type()) {
        GetDevopsProjectTaskInfoResponseBodyObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Object"]));
        object = make_shared<GetDevopsProjectTaskInfoResponseBodyObject>(model1);
      }
    }
  }


  virtual ~GetDevopsProjectTaskInfoResponseBody() = default;
};
class GetDevopsProjectTaskInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDevopsProjectTaskInfoResponseBody> body{};

  GetDevopsProjectTaskInfoResponse() {}

  explicit GetDevopsProjectTaskInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetDevopsProjectTaskInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDevopsProjectTaskInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetDevopsProjectTaskInfoResponse() = default;
};
class GetPipelineInstanceGroupStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<long> pipelineId{};
  shared_ptr<string> userPk{};
  shared_ptr<long> flowInstanceId{};

  GetPipelineInstanceGroupStatusRequest() {}

  explicit GetPipelineInstanceGroupStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    if (userPk) {
      res["UserPk"] = boost::any(*userPk);
    }
    if (flowInstanceId) {
      res["FlowInstanceId"] = boost::any(*flowInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<long>(boost::any_cast<long>(m["PipelineId"]));
    }
    if (m.find("UserPk") != m.end() && !m["UserPk"].empty()) {
      userPk = make_shared<string>(boost::any_cast<string>(m["UserPk"]));
    }
    if (m.find("FlowInstanceId") != m.end() && !m["FlowInstanceId"].empty()) {
      flowInstanceId = make_shared<long>(boost::any_cast<long>(m["FlowInstanceId"]));
    }
  }


  virtual ~GetPipelineInstanceGroupStatusRequest() = default;
};
class GetPipelineInstanceGroupStatusResponseBodyObjectGroupsStagesComponents : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> name{};
  shared_ptr<string> jobId{};

  GetPipelineInstanceGroupStatusResponseBodyObjectGroupsStagesComponents() {}

  explicit GetPipelineInstanceGroupStatusResponseBodyObjectGroupsStagesComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~GetPipelineInstanceGroupStatusResponseBodyObjectGroupsStagesComponents() = default;
};
class GetPipelineInstanceGroupStatusResponseBodyObjectGroupsStages : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> sign{};
  shared_ptr<vector<GetPipelineInstanceGroupStatusResponseBodyObjectGroupsStagesComponents>> components{};

  GetPipelineInstanceGroupStatusResponseBodyObjectGroupsStages() {}

  explicit GetPipelineInstanceGroupStatusResponseBodyObjectGroupsStages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    if (components) {
      vector<boost::any> temp1;
      for(auto item1:*components){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Components"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      if (typeid(vector<boost::any>) == m["Components"].type()) {
        vector<GetPipelineInstanceGroupStatusResponseBodyObjectGroupsStagesComponents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Components"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPipelineInstanceGroupStatusResponseBodyObjectGroupsStagesComponents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        components = make_shared<vector<GetPipelineInstanceGroupStatusResponseBodyObjectGroupsStagesComponents>>(expect1);
      }
    }
  }


  virtual ~GetPipelineInstanceGroupStatusResponseBodyObjectGroupsStages() = default;
};
class GetPipelineInstanceGroupStatusResponseBodyObjectGroups : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> name{};
  shared_ptr<vector<GetPipelineInstanceGroupStatusResponseBodyObjectGroupsStages>> stages{};

  GetPipelineInstanceGroupStatusResponseBodyObjectGroups() {}

  explicit GetPipelineInstanceGroupStatusResponseBodyObjectGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (stages) {
      vector<boost::any> temp1;
      for(auto item1:*stages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Stages"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Stages") != m.end() && !m["Stages"].empty()) {
      if (typeid(vector<boost::any>) == m["Stages"].type()) {
        vector<GetPipelineInstanceGroupStatusResponseBodyObjectGroupsStages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Stages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPipelineInstanceGroupStatusResponseBodyObjectGroupsStages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stages = make_shared<vector<GetPipelineInstanceGroupStatusResponseBodyObjectGroupsStages>>(expect1);
      }
    }
  }


  virtual ~GetPipelineInstanceGroupStatusResponseBodyObjectGroups() = default;
};
class GetPipelineInstanceGroupStatusResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<vector<GetPipelineInstanceGroupStatusResponseBodyObjectGroups>> groups{};

  GetPipelineInstanceGroupStatusResponseBodyObject() {}

  explicit GetPipelineInstanceGroupStatusResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (groups) {
      vector<boost::any> temp1;
      for(auto item1:*groups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Groups"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      if (typeid(vector<boost::any>) == m["Groups"].type()) {
        vector<GetPipelineInstanceGroupStatusResponseBodyObjectGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Groups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPipelineInstanceGroupStatusResponseBodyObjectGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groups = make_shared<vector<GetPipelineInstanceGroupStatusResponseBodyObjectGroups>>(expect1);
      }
    }
  }


  virtual ~GetPipelineInstanceGroupStatusResponseBodyObject() = default;
};
class GetPipelineInstanceGroupStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetPipelineInstanceGroupStatusResponseBodyObject> object{};

  GetPipelineInstanceGroupStatusResponseBody() {}

  explicit GetPipelineInstanceGroupStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      res["Object"] = object ? boost::any(object->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(map<string, boost::any>) == m["Object"].type()) {
        GetPipelineInstanceGroupStatusResponseBodyObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Object"]));
        object = make_shared<GetPipelineInstanceGroupStatusResponseBodyObject>(model1);
      }
    }
  }


  virtual ~GetPipelineInstanceGroupStatusResponseBody() = default;
};
class GetPipelineInstanceGroupStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPipelineInstanceGroupStatusResponseBody> body{};

  GetPipelineInstanceGroupStatusResponse() {}

  explicit GetPipelineInstanceGroupStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPipelineInstanceGroupStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPipelineInstanceGroupStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetPipelineInstanceGroupStatusResponse() = default;
};
class UpdateTaskDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> content{};
  shared_ptr<string> projectId{};
  shared_ptr<string> executorId{};
  shared_ptr<string> startDate{};
  shared_ptr<string> dueDate{};
  shared_ptr<string> taskFlowStatusId{};
  shared_ptr<string> note{};
  shared_ptr<long> priority{};
  shared_ptr<string> sprintId{};
  shared_ptr<string> taskId{};
  shared_ptr<long> workTimes{};
  shared_ptr<string> customFieldId{};
  shared_ptr<string> customFieldValues{};
  shared_ptr<string> storyPoint{};
  shared_ptr<string> tagIds{};
  shared_ptr<string> delInvolvers{};
  shared_ptr<string> addInvolvers{};

  UpdateTaskDetailRequest() {}

  explicit UpdateTaskDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (executorId) {
      res["ExecutorId"] = boost::any(*executorId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (dueDate) {
      res["DueDate"] = boost::any(*dueDate);
    }
    if (taskFlowStatusId) {
      res["TaskFlowStatusId"] = boost::any(*taskFlowStatusId);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (sprintId) {
      res["SprintId"] = boost::any(*sprintId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (workTimes) {
      res["WorkTimes"] = boost::any(*workTimes);
    }
    if (customFieldId) {
      res["CustomFieldId"] = boost::any(*customFieldId);
    }
    if (customFieldValues) {
      res["CustomFieldValues"] = boost::any(*customFieldValues);
    }
    if (storyPoint) {
      res["StoryPoint"] = boost::any(*storyPoint);
    }
    if (tagIds) {
      res["TagIds"] = boost::any(*tagIds);
    }
    if (delInvolvers) {
      res["DelInvolvers"] = boost::any(*delInvolvers);
    }
    if (addInvolvers) {
      res["AddInvolvers"] = boost::any(*addInvolvers);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ExecutorId") != m.end() && !m["ExecutorId"].empty()) {
      executorId = make_shared<string>(boost::any_cast<string>(m["ExecutorId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("DueDate") != m.end() && !m["DueDate"].empty()) {
      dueDate = make_shared<string>(boost::any_cast<string>(m["DueDate"]));
    }
    if (m.find("TaskFlowStatusId") != m.end() && !m["TaskFlowStatusId"].empty()) {
      taskFlowStatusId = make_shared<string>(boost::any_cast<string>(m["TaskFlowStatusId"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("SprintId") != m.end() && !m["SprintId"].empty()) {
      sprintId = make_shared<string>(boost::any_cast<string>(m["SprintId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("WorkTimes") != m.end() && !m["WorkTimes"].empty()) {
      workTimes = make_shared<long>(boost::any_cast<long>(m["WorkTimes"]));
    }
    if (m.find("CustomFieldId") != m.end() && !m["CustomFieldId"].empty()) {
      customFieldId = make_shared<string>(boost::any_cast<string>(m["CustomFieldId"]));
    }
    if (m.find("CustomFieldValues") != m.end() && !m["CustomFieldValues"].empty()) {
      customFieldValues = make_shared<string>(boost::any_cast<string>(m["CustomFieldValues"]));
    }
    if (m.find("StoryPoint") != m.end() && !m["StoryPoint"].empty()) {
      storyPoint = make_shared<string>(boost::any_cast<string>(m["StoryPoint"]));
    }
    if (m.find("TagIds") != m.end() && !m["TagIds"].empty()) {
      tagIds = make_shared<string>(boost::any_cast<string>(m["TagIds"]));
    }
    if (m.find("DelInvolvers") != m.end() && !m["DelInvolvers"].empty()) {
      delInvolvers = make_shared<string>(boost::any_cast<string>(m["DelInvolvers"]));
    }
    if (m.find("AddInvolvers") != m.end() && !m["AddInvolvers"].empty()) {
      addInvolvers = make_shared<string>(boost::any_cast<string>(m["AddInvolvers"]));
    }
  }


  virtual ~UpdateTaskDetailRequest() = default;
};
class UpdateTaskDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> object{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};

  UpdateTaskDetailResponseBody() {}

  explicit UpdateTaskDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (object) {
      res["Object"] = boost::any(*object);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<bool>(boost::any_cast<bool>(m["Object"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
  }


  virtual ~UpdateTaskDetailResponseBody() = default;
};
class UpdateTaskDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateTaskDetailResponseBody> body{};

  UpdateTaskDetailResponse() {}

  explicit UpdateTaskDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateTaskDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTaskDetailResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTaskDetailResponse() = default;
};
class GetTaskListFilterRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> projectId{};
  shared_ptr<string> scenarioFieldConfigId{};
  shared_ptr<string> name{};
  shared_ptr<string> orderCondition{};
  shared_ptr<string> order{};
  shared_ptr<string> executorId{};
  shared_ptr<string> tagId{};
  shared_ptr<string> dueDateStart{};
  shared_ptr<string> dueDateEnd{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> involveMembers{};
  shared_ptr<bool> isDone{};
  shared_ptr<string> priority{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> pageToken{};
  shared_ptr<string> objectType{};
  shared_ptr<string> taskFlowStatusId{};
  shared_ptr<string> sprintId{};
  shared_ptr<string> extra{};

  GetTaskListFilterRequest() {}

  explicit GetTaskListFilterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (scenarioFieldConfigId) {
      res["ScenarioFieldConfigId"] = boost::any(*scenarioFieldConfigId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (orderCondition) {
      res["OrderCondition"] = boost::any(*orderCondition);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (executorId) {
      res["ExecutorId"] = boost::any(*executorId);
    }
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    if (dueDateStart) {
      res["DueDateStart"] = boost::any(*dueDateStart);
    }
    if (dueDateEnd) {
      res["DueDateEnd"] = boost::any(*dueDateEnd);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (involveMembers) {
      res["InvolveMembers"] = boost::any(*involveMembers);
    }
    if (isDone) {
      res["IsDone"] = boost::any(*isDone);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageToken) {
      res["PageToken"] = boost::any(*pageToken);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (taskFlowStatusId) {
      res["TaskFlowStatusId"] = boost::any(*taskFlowStatusId);
    }
    if (sprintId) {
      res["SprintId"] = boost::any(*sprintId);
    }
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ScenarioFieldConfigId") != m.end() && !m["ScenarioFieldConfigId"].empty()) {
      scenarioFieldConfigId = make_shared<string>(boost::any_cast<string>(m["ScenarioFieldConfigId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OrderCondition") != m.end() && !m["OrderCondition"].empty()) {
      orderCondition = make_shared<string>(boost::any_cast<string>(m["OrderCondition"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("ExecutorId") != m.end() && !m["ExecutorId"].empty()) {
      executorId = make_shared<string>(boost::any_cast<string>(m["ExecutorId"]));
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<string>(boost::any_cast<string>(m["TagId"]));
    }
    if (m.find("DueDateStart") != m.end() && !m["DueDateStart"].empty()) {
      dueDateStart = make_shared<string>(boost::any_cast<string>(m["DueDateStart"]));
    }
    if (m.find("DueDateEnd") != m.end() && !m["DueDateEnd"].empty()) {
      dueDateEnd = make_shared<string>(boost::any_cast<string>(m["DueDateEnd"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["CreatorId"]));
    }
    if (m.find("InvolveMembers") != m.end() && !m["InvolveMembers"].empty()) {
      involveMembers = make_shared<string>(boost::any_cast<string>(m["InvolveMembers"]));
    }
    if (m.find("IsDone") != m.end() && !m["IsDone"].empty()) {
      isDone = make_shared<bool>(boost::any_cast<bool>(m["IsDone"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<string>(boost::any_cast<string>(m["Priority"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageToken") != m.end() && !m["PageToken"].empty()) {
      pageToken = make_shared<string>(boost::any_cast<string>(m["PageToken"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("TaskFlowStatusId") != m.end() && !m["TaskFlowStatusId"].empty()) {
      taskFlowStatusId = make_shared<string>(boost::any_cast<string>(m["TaskFlowStatusId"]));
    }
    if (m.find("SprintId") != m.end() && !m["SprintId"].empty()) {
      sprintId = make_shared<string>(boost::any_cast<string>(m["SprintId"]));
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["Extra"]));
    }
  }


  virtual ~GetTaskListFilterRequest() = default;
};
class GetTaskListFilterResponseBodyObjectResultCustomfieldsValue : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> title{};

  GetTaskListFilterResponseBodyObjectResultCustomfieldsValue() {}

  explicit GetTaskListFilterResponseBodyObjectResultCustomfieldsValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~GetTaskListFilterResponseBodyObjectResultCustomfieldsValue() = default;
};
class GetTaskListFilterResponseBodyObjectResultCustomfields : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> customfieldId{};
  shared_ptr<string> values{};
  shared_ptr<vector<GetTaskListFilterResponseBodyObjectResultCustomfieldsValue>> value{};

  GetTaskListFilterResponseBodyObjectResultCustomfields() {}

  explicit GetTaskListFilterResponseBodyObjectResultCustomfields(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (customfieldId) {
      res["CustomfieldId"] = boost::any(*customfieldId);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    if (value) {
      vector<boost::any> temp1;
      for(auto item1:*value){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Value"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("CustomfieldId") != m.end() && !m["CustomfieldId"].empty()) {
      customfieldId = make_shared<string>(boost::any_cast<string>(m["CustomfieldId"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      values = make_shared<string>(boost::any_cast<string>(m["Values"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      if (typeid(vector<boost::any>) == m["Value"].type()) {
        vector<GetTaskListFilterResponseBodyObjectResultCustomfieldsValue> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Value"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTaskListFilterResponseBodyObjectResultCustomfieldsValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        value = make_shared<vector<GetTaskListFilterResponseBodyObjectResultCustomfieldsValue>>(expect1);
      }
    }
  }


  virtual ~GetTaskListFilterResponseBodyObjectResultCustomfields() = default;
};
class GetTaskListFilterResponseBodyObjectResultWorkTime : public Darabonba::Model {
public:
  shared_ptr<long> usedTime{};
  shared_ptr<long> totalTime{};
  shared_ptr<string> unit{};

  GetTaskListFilterResponseBodyObjectResultWorkTime() {}

  explicit GetTaskListFilterResponseBodyObjectResultWorkTime(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (usedTime) {
      res["UsedTime"] = boost::any(*usedTime);
    }
    if (totalTime) {
      res["TotalTime"] = boost::any(*totalTime);
    }
    if (unit) {
      res["Unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UsedTime") != m.end() && !m["UsedTime"].empty()) {
      usedTime = make_shared<long>(boost::any_cast<long>(m["UsedTime"]));
    }
    if (m.find("TotalTime") != m.end() && !m["TotalTime"].empty()) {
      totalTime = make_shared<long>(boost::any_cast<long>(m["TotalTime"]));
    }
    if (m.find("Unit") != m.end() && !m["Unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["Unit"]));
    }
  }


  virtual ~GetTaskListFilterResponseBodyObjectResultWorkTime() = default;
};
class GetTaskListFilterResponseBodyObjectResultBadges : public Darabonba::Model {
public:
  shared_ptr<long> likesCount{};
  shared_ptr<long> objectlinksCount{};
  shared_ptr<long> attachmentsCount{};
  shared_ptr<long> commentsCount{};

  GetTaskListFilterResponseBodyObjectResultBadges() {}

  explicit GetTaskListFilterResponseBodyObjectResultBadges(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (likesCount) {
      res["LikesCount"] = boost::any(*likesCount);
    }
    if (objectlinksCount) {
      res["ObjectlinksCount"] = boost::any(*objectlinksCount);
    }
    if (attachmentsCount) {
      res["AttachmentsCount"] = boost::any(*attachmentsCount);
    }
    if (commentsCount) {
      res["CommentsCount"] = boost::any(*commentsCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LikesCount") != m.end() && !m["LikesCount"].empty()) {
      likesCount = make_shared<long>(boost::any_cast<long>(m["LikesCount"]));
    }
    if (m.find("ObjectlinksCount") != m.end() && !m["ObjectlinksCount"].empty()) {
      objectlinksCount = make_shared<long>(boost::any_cast<long>(m["ObjectlinksCount"]));
    }
    if (m.find("AttachmentsCount") != m.end() && !m["AttachmentsCount"].empty()) {
      attachmentsCount = make_shared<long>(boost::any_cast<long>(m["AttachmentsCount"]));
    }
    if (m.find("CommentsCount") != m.end() && !m["CommentsCount"].empty()) {
      commentsCount = make_shared<long>(boost::any_cast<long>(m["CommentsCount"]));
    }
  }


  virtual ~GetTaskListFilterResponseBodyObjectResultBadges() = default;
};
class GetTaskListFilterResponseBodyObjectResultSubtaskCount : public Darabonba::Model {
public:
  shared_ptr<long> done{};
  shared_ptr<long> total{};

  GetTaskListFilterResponseBodyObjectResultSubtaskCount() {}

  explicit GetTaskListFilterResponseBodyObjectResultSubtaskCount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (done) {
      res["Done"] = boost::any(*done);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Done") != m.end() && !m["Done"].empty()) {
      done = make_shared<long>(boost::any_cast<long>(m["Done"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~GetTaskListFilterResponseBodyObjectResultSubtaskCount() = default;
};
class GetTaskListFilterResponseBodyObjectResultReminder : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> date{};
  shared_ptr<string> creatorId{};
  shared_ptr<vector<string>> members{};
  shared_ptr<vector<string>> rules{};

  GetTaskListFilterResponseBodyObjectResultReminder() {}

  explicit GetTaskListFilterResponseBodyObjectResultReminder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (members) {
      res["Members"] = boost::any(*members);
    }
    if (rules) {
      res["Rules"] = boost::any(*rules);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["CreatorId"]));
    }
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Members"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      members = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Rules"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      rules = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetTaskListFilterResponseBodyObjectResultReminder() = default;
};
class GetTaskListFilterResponseBodyObjectResultCreator : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> id{};

  GetTaskListFilterResponseBodyObjectResultCreator() {}

  explicit GetTaskListFilterResponseBodyObjectResultCreator(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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


  virtual ~GetTaskListFilterResponseBodyObjectResultCreator() = default;
};
class GetTaskListFilterResponseBodyObjectResultStage : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> id{};

  GetTaskListFilterResponseBodyObjectResultStage() {}

  explicit GetTaskListFilterResponseBodyObjectResultStage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~GetTaskListFilterResponseBodyObjectResultStage() = default;
};
class GetTaskListFilterResponseBodyObjectResultExecutor : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> id{};

  GetTaskListFilterResponseBodyObjectResultExecutor() {}

  explicit GetTaskListFilterResponseBodyObjectResultExecutor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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


  virtual ~GetTaskListFilterResponseBodyObjectResultExecutor() = default;
};
class GetTaskListFilterResponseBodyObjectResultTaskFlowStatus : public Darabonba::Model {
public:
  shared_ptr<string> taskFlowId{};
  shared_ptr<string> name{};
  shared_ptr<long> pos{};
  shared_ptr<string> kind{};
  shared_ptr<string> id{};

  GetTaskListFilterResponseBodyObjectResultTaskFlowStatus() {}

  explicit GetTaskListFilterResponseBodyObjectResultTaskFlowStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskFlowId) {
      res["TaskFlowId"] = boost::any(*taskFlowId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pos) {
      res["Pos"] = boost::any(*pos);
    }
    if (kind) {
      res["Kind"] = boost::any(*kind);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskFlowId") != m.end() && !m["TaskFlowId"].empty()) {
      taskFlowId = make_shared<string>(boost::any_cast<string>(m["TaskFlowId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Pos") != m.end() && !m["Pos"].empty()) {
      pos = make_shared<long>(boost::any_cast<long>(m["Pos"]));
    }
    if (m.find("Kind") != m.end() && !m["Kind"].empty()) {
      kind = make_shared<string>(boost::any_cast<string>(m["Kind"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~GetTaskListFilterResponseBodyObjectResultTaskFlowStatus() = default;
};
class GetTaskListFilterResponseBodyObjectResult : public Darabonba::Model {
public:
  shared_ptr<bool> isFavorite{};
  shared_ptr<string> executorId{};
  shared_ptr<string> projectId{};
  shared_ptr<long> priority{};
  shared_ptr<bool> isTopInProject{};
  shared_ptr<string> scenariofFeldConfigId{};
  shared_ptr<long> shareStatus{};
  shared_ptr<string> accomplished{};
  shared_ptr<string> taskListId{};
  shared_ptr<string> note{};
  shared_ptr<string> updated{};
  shared_ptr<long> uniqueId{};
  shared_ptr<bool> isArchived{};
  shared_ptr<string> content{};
  shared_ptr<long> rating{};
  shared_ptr<long> commentsCount{};
  shared_ptr<string> taskFlowStatusId{};
  shared_ptr<string> recurrence{};
  shared_ptr<string> objectType{};
  shared_ptr<long> progress{};
  shared_ptr<string> untilDate{};
  shared_ptr<string> storyPoint{};
  shared_ptr<long> objectlinksCount{};
  shared_ptr<string> startDate{};
  shared_ptr<string> sprint{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceDate{};
  shared_ptr<string> organizationId{};
  shared_ptr<long> likesCount{};
  shared_ptr<string> stageId{};
  shared_ptr<string> visible{};
  shared_ptr<bool> isDone{};
  shared_ptr<string> parent{};
  shared_ptr<string> sprintId{};
  shared_ptr<long> attachmentsCount{};
  shared_ptr<string> dueDate{};
  shared_ptr<string> taskUniqueId{};
  shared_ptr<string> created{};
  shared_ptr<string> taskId{};
  shared_ptr<string> id{};
  shared_ptr<vector<GetTaskListFilterResponseBodyObjectResultCustomfields>> customfields{};
  shared_ptr<vector<string>> involveMembers{};
  shared_ptr<vector<string>> tagIds{};
  shared_ptr<vector<string>> labels{};
  shared_ptr<vector<string>> divisions{};
  shared_ptr<vector<string>> ancestorIds{};
  shared_ptr<GetTaskListFilterResponseBodyObjectResultWorkTime> workTime{};
  shared_ptr<GetTaskListFilterResponseBodyObjectResultBadges> badges{};
  shared_ptr<GetTaskListFilterResponseBodyObjectResultSubtaskCount> subtaskCount{};
  shared_ptr<GetTaskListFilterResponseBodyObjectResultReminder> reminder{};
  shared_ptr<GetTaskListFilterResponseBodyObjectResultCreator> creator{};
  shared_ptr<GetTaskListFilterResponseBodyObjectResultStage> stage{};
  shared_ptr<GetTaskListFilterResponseBodyObjectResultExecutor> executor{};
  shared_ptr<GetTaskListFilterResponseBodyObjectResultTaskFlowStatus> taskFlowStatus{};

  GetTaskListFilterResponseBodyObjectResult() {}

  explicit GetTaskListFilterResponseBodyObjectResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isFavorite) {
      res["IsFavorite"] = boost::any(*isFavorite);
    }
    if (executorId) {
      res["ExecutorId"] = boost::any(*executorId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (isTopInProject) {
      res["IsTopInProject"] = boost::any(*isTopInProject);
    }
    if (scenariofFeldConfigId) {
      res["ScenariofFeldConfigId"] = boost::any(*scenariofFeldConfigId);
    }
    if (shareStatus) {
      res["ShareStatus"] = boost::any(*shareStatus);
    }
    if (accomplished) {
      res["Accomplished"] = boost::any(*accomplished);
    }
    if (taskListId) {
      res["TaskListId"] = boost::any(*taskListId);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (updated) {
      res["Updated"] = boost::any(*updated);
    }
    if (uniqueId) {
      res["UniqueId"] = boost::any(*uniqueId);
    }
    if (isArchived) {
      res["IsArchived"] = boost::any(*isArchived);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (rating) {
      res["Rating"] = boost::any(*rating);
    }
    if (commentsCount) {
      res["CommentsCount"] = boost::any(*commentsCount);
    }
    if (taskFlowStatusId) {
      res["TaskFlowStatusId"] = boost::any(*taskFlowStatusId);
    }
    if (recurrence) {
      res["Recurrence"] = boost::any(*recurrence);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (untilDate) {
      res["UntilDate"] = boost::any(*untilDate);
    }
    if (storyPoint) {
      res["StoryPoint"] = boost::any(*storyPoint);
    }
    if (objectlinksCount) {
      res["ObjectlinksCount"] = boost::any(*objectlinksCount);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (sprint) {
      res["Sprint"] = boost::any(*sprint);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceDate) {
      res["SourceDate"] = boost::any(*sourceDate);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (likesCount) {
      res["LikesCount"] = boost::any(*likesCount);
    }
    if (stageId) {
      res["StageId"] = boost::any(*stageId);
    }
    if (visible) {
      res["Visible"] = boost::any(*visible);
    }
    if (isDone) {
      res["IsDone"] = boost::any(*isDone);
    }
    if (parent) {
      res["Parent"] = boost::any(*parent);
    }
    if (sprintId) {
      res["SprintId"] = boost::any(*sprintId);
    }
    if (attachmentsCount) {
      res["AttachmentsCount"] = boost::any(*attachmentsCount);
    }
    if (dueDate) {
      res["DueDate"] = boost::any(*dueDate);
    }
    if (taskUniqueId) {
      res["TaskUniqueId"] = boost::any(*taskUniqueId);
    }
    if (created) {
      res["Created"] = boost::any(*created);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (customfields) {
      vector<boost::any> temp1;
      for(auto item1:*customfields){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Customfields"] = boost::any(temp1);
    }
    if (involveMembers) {
      res["InvolveMembers"] = boost::any(*involveMembers);
    }
    if (tagIds) {
      res["TagIds"] = boost::any(*tagIds);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (divisions) {
      res["Divisions"] = boost::any(*divisions);
    }
    if (ancestorIds) {
      res["AncestorIds"] = boost::any(*ancestorIds);
    }
    if (workTime) {
      res["WorkTime"] = workTime ? boost::any(workTime->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (badges) {
      res["Badges"] = badges ? boost::any(badges->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (subtaskCount) {
      res["SubtaskCount"] = subtaskCount ? boost::any(subtaskCount->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (reminder) {
      res["Reminder"] = reminder ? boost::any(reminder->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (creator) {
      res["Creator"] = creator ? boost::any(creator->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (stage) {
      res["Stage"] = stage ? boost::any(stage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (executor) {
      res["Executor"] = executor ? boost::any(executor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskFlowStatus) {
      res["TaskFlowStatus"] = taskFlowStatus ? boost::any(taskFlowStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsFavorite") != m.end() && !m["IsFavorite"].empty()) {
      isFavorite = make_shared<bool>(boost::any_cast<bool>(m["IsFavorite"]));
    }
    if (m.find("ExecutorId") != m.end() && !m["ExecutorId"].empty()) {
      executorId = make_shared<string>(boost::any_cast<string>(m["ExecutorId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("IsTopInProject") != m.end() && !m["IsTopInProject"].empty()) {
      isTopInProject = make_shared<bool>(boost::any_cast<bool>(m["IsTopInProject"]));
    }
    if (m.find("ScenariofFeldConfigId") != m.end() && !m["ScenariofFeldConfigId"].empty()) {
      scenariofFeldConfigId = make_shared<string>(boost::any_cast<string>(m["ScenariofFeldConfigId"]));
    }
    if (m.find("ShareStatus") != m.end() && !m["ShareStatus"].empty()) {
      shareStatus = make_shared<long>(boost::any_cast<long>(m["ShareStatus"]));
    }
    if (m.find("Accomplished") != m.end() && !m["Accomplished"].empty()) {
      accomplished = make_shared<string>(boost::any_cast<string>(m["Accomplished"]));
    }
    if (m.find("TaskListId") != m.end() && !m["TaskListId"].empty()) {
      taskListId = make_shared<string>(boost::any_cast<string>(m["TaskListId"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("Updated") != m.end() && !m["Updated"].empty()) {
      updated = make_shared<string>(boost::any_cast<string>(m["Updated"]));
    }
    if (m.find("UniqueId") != m.end() && !m["UniqueId"].empty()) {
      uniqueId = make_shared<long>(boost::any_cast<long>(m["UniqueId"]));
    }
    if (m.find("IsArchived") != m.end() && !m["IsArchived"].empty()) {
      isArchived = make_shared<bool>(boost::any_cast<bool>(m["IsArchived"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Rating") != m.end() && !m["Rating"].empty()) {
      rating = make_shared<long>(boost::any_cast<long>(m["Rating"]));
    }
    if (m.find("CommentsCount") != m.end() && !m["CommentsCount"].empty()) {
      commentsCount = make_shared<long>(boost::any_cast<long>(m["CommentsCount"]));
    }
    if (m.find("TaskFlowStatusId") != m.end() && !m["TaskFlowStatusId"].empty()) {
      taskFlowStatusId = make_shared<string>(boost::any_cast<string>(m["TaskFlowStatusId"]));
    }
    if (m.find("Recurrence") != m.end() && !m["Recurrence"].empty()) {
      recurrence = make_shared<string>(boost::any_cast<string>(m["Recurrence"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("UntilDate") != m.end() && !m["UntilDate"].empty()) {
      untilDate = make_shared<string>(boost::any_cast<string>(m["UntilDate"]));
    }
    if (m.find("StoryPoint") != m.end() && !m["StoryPoint"].empty()) {
      storyPoint = make_shared<string>(boost::any_cast<string>(m["StoryPoint"]));
    }
    if (m.find("ObjectlinksCount") != m.end() && !m["ObjectlinksCount"].empty()) {
      objectlinksCount = make_shared<long>(boost::any_cast<long>(m["ObjectlinksCount"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("Sprint") != m.end() && !m["Sprint"].empty()) {
      sprint = make_shared<string>(boost::any_cast<string>(m["Sprint"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["CreatorId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceDate") != m.end() && !m["SourceDate"].empty()) {
      sourceDate = make_shared<string>(boost::any_cast<string>(m["SourceDate"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("LikesCount") != m.end() && !m["LikesCount"].empty()) {
      likesCount = make_shared<long>(boost::any_cast<long>(m["LikesCount"]));
    }
    if (m.find("StageId") != m.end() && !m["StageId"].empty()) {
      stageId = make_shared<string>(boost::any_cast<string>(m["StageId"]));
    }
    if (m.find("Visible") != m.end() && !m["Visible"].empty()) {
      visible = make_shared<string>(boost::any_cast<string>(m["Visible"]));
    }
    if (m.find("IsDone") != m.end() && !m["IsDone"].empty()) {
      isDone = make_shared<bool>(boost::any_cast<bool>(m["IsDone"]));
    }
    if (m.find("Parent") != m.end() && !m["Parent"].empty()) {
      parent = make_shared<string>(boost::any_cast<string>(m["Parent"]));
    }
    if (m.find("SprintId") != m.end() && !m["SprintId"].empty()) {
      sprintId = make_shared<string>(boost::any_cast<string>(m["SprintId"]));
    }
    if (m.find("AttachmentsCount") != m.end() && !m["AttachmentsCount"].empty()) {
      attachmentsCount = make_shared<long>(boost::any_cast<long>(m["AttachmentsCount"]));
    }
    if (m.find("DueDate") != m.end() && !m["DueDate"].empty()) {
      dueDate = make_shared<string>(boost::any_cast<string>(m["DueDate"]));
    }
    if (m.find("TaskUniqueId") != m.end() && !m["TaskUniqueId"].empty()) {
      taskUniqueId = make_shared<string>(boost::any_cast<string>(m["TaskUniqueId"]));
    }
    if (m.find("Created") != m.end() && !m["Created"].empty()) {
      created = make_shared<string>(boost::any_cast<string>(m["Created"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Customfields") != m.end() && !m["Customfields"].empty()) {
      if (typeid(vector<boost::any>) == m["Customfields"].type()) {
        vector<GetTaskListFilterResponseBodyObjectResultCustomfields> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Customfields"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTaskListFilterResponseBodyObjectResultCustomfields model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customfields = make_shared<vector<GetTaskListFilterResponseBodyObjectResultCustomfields>>(expect1);
      }
    }
    if (m.find("InvolveMembers") != m.end() && !m["InvolveMembers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InvolveMembers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InvolveMembers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      involveMembers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TagIds") != m.end() && !m["TagIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagIds = make_shared<vector<string>>(toVec1);
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
    if (m.find("Divisions") != m.end() && !m["Divisions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Divisions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Divisions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      divisions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AncestorIds") != m.end() && !m["AncestorIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AncestorIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AncestorIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ancestorIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("WorkTime") != m.end() && !m["WorkTime"].empty()) {
      if (typeid(map<string, boost::any>) == m["WorkTime"].type()) {
        GetTaskListFilterResponseBodyObjectResultWorkTime model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["WorkTime"]));
        workTime = make_shared<GetTaskListFilterResponseBodyObjectResultWorkTime>(model1);
      }
    }
    if (m.find("Badges") != m.end() && !m["Badges"].empty()) {
      if (typeid(map<string, boost::any>) == m["Badges"].type()) {
        GetTaskListFilterResponseBodyObjectResultBadges model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Badges"]));
        badges = make_shared<GetTaskListFilterResponseBodyObjectResultBadges>(model1);
      }
    }
    if (m.find("SubtaskCount") != m.end() && !m["SubtaskCount"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubtaskCount"].type()) {
        GetTaskListFilterResponseBodyObjectResultSubtaskCount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubtaskCount"]));
        subtaskCount = make_shared<GetTaskListFilterResponseBodyObjectResultSubtaskCount>(model1);
      }
    }
    if (m.find("Reminder") != m.end() && !m["Reminder"].empty()) {
      if (typeid(map<string, boost::any>) == m["Reminder"].type()) {
        GetTaskListFilterResponseBodyObjectResultReminder model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Reminder"]));
        reminder = make_shared<GetTaskListFilterResponseBodyObjectResultReminder>(model1);
      }
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      if (typeid(map<string, boost::any>) == m["Creator"].type()) {
        GetTaskListFilterResponseBodyObjectResultCreator model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Creator"]));
        creator = make_shared<GetTaskListFilterResponseBodyObjectResultCreator>(model1);
      }
    }
    if (m.find("Stage") != m.end() && !m["Stage"].empty()) {
      if (typeid(map<string, boost::any>) == m["Stage"].type()) {
        GetTaskListFilterResponseBodyObjectResultStage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Stage"]));
        stage = make_shared<GetTaskListFilterResponseBodyObjectResultStage>(model1);
      }
    }
    if (m.find("Executor") != m.end() && !m["Executor"].empty()) {
      if (typeid(map<string, boost::any>) == m["Executor"].type()) {
        GetTaskListFilterResponseBodyObjectResultExecutor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Executor"]));
        executor = make_shared<GetTaskListFilterResponseBodyObjectResultExecutor>(model1);
      }
    }
    if (m.find("TaskFlowStatus") != m.end() && !m["TaskFlowStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["TaskFlowStatus"].type()) {
        GetTaskListFilterResponseBodyObjectResultTaskFlowStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TaskFlowStatus"]));
        taskFlowStatus = make_shared<GetTaskListFilterResponseBodyObjectResultTaskFlowStatus>(model1);
      }
    }
  }


  virtual ~GetTaskListFilterResponseBodyObjectResult() = default;
};
class GetTaskListFilterResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<string> nextPageToken{};
  shared_ptr<long> totalSize{};
  shared_ptr<vector<GetTaskListFilterResponseBodyObjectResult>> result{};

  GetTaskListFilterResponseBodyObject() {}

  explicit GetTaskListFilterResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextPageToken) {
      res["NextPageToken"] = boost::any(*nextPageToken);
    }
    if (totalSize) {
      res["TotalSize"] = boost::any(*totalSize);
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
    if (m.find("NextPageToken") != m.end() && !m["NextPageToken"].empty()) {
      nextPageToken = make_shared<string>(boost::any_cast<string>(m["NextPageToken"]));
    }
    if (m.find("TotalSize") != m.end() && !m["TotalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["TotalSize"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<GetTaskListFilterResponseBodyObjectResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTaskListFilterResponseBodyObjectResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<GetTaskListFilterResponseBodyObjectResult>>(expect1);
      }
    }
  }


  virtual ~GetTaskListFilterResponseBodyObject() = default;
};
class GetTaskListFilterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<string> successful{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetTaskListFilterResponseBodyObject> object{};

  GetTaskListFilterResponseBody() {}

  explicit GetTaskListFilterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      res["Object"] = object ? boost::any(object->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<string>(boost::any_cast<string>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(map<string, boost::any>) == m["Object"].type()) {
        GetTaskListFilterResponseBodyObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Object"]));
        object = make_shared<GetTaskListFilterResponseBodyObject>(model1);
      }
    }
  }


  virtual ~GetTaskListFilterResponseBody() = default;
};
class GetTaskListFilterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetTaskListFilterResponseBody> body{};

  GetTaskListFilterResponse() {}

  explicit GetTaskListFilterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetTaskListFilterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskListFilterResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskListFilterResponse() = default;
};
class GetProjectOptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> projectId{};
  shared_ptr<string> type{};
  shared_ptr<string> query{};

  GetProjectOptionRequest() {}

  explicit GetProjectOptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
  }


  virtual ~GetProjectOptionRequest() = default;
};
class GetProjectOptionResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<string> value{};
  shared_ptr<string> name{};
  shared_ptr<string> scopeName{};
  shared_ptr<string> kind{};

  GetProjectOptionResponseBodyObject() {}

  explicit GetProjectOptionResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (scopeName) {
      res["ScopeName"] = boost::any(*scopeName);
    }
    if (kind) {
      res["Kind"] = boost::any(*kind);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ScopeName") != m.end() && !m["ScopeName"].empty()) {
      scopeName = make_shared<string>(boost::any_cast<string>(m["ScopeName"]));
    }
    if (m.find("Kind") != m.end() && !m["Kind"].empty()) {
      kind = make_shared<string>(boost::any_cast<string>(m["Kind"]));
    }
  }


  virtual ~GetProjectOptionResponseBodyObject() = default;
};
class GetProjectOptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<GetProjectOptionResponseBodyObject>> object{};

  GetProjectOptionResponseBody() {}

  explicit GetProjectOptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      vector<boost::any> temp1;
      for(auto item1:*object){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Object"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(vector<boost::any>) == m["Object"].type()) {
        vector<GetProjectOptionResponseBodyObject> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Object"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProjectOptionResponseBodyObject model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        object = make_shared<vector<GetProjectOptionResponseBodyObject>>(expect1);
      }
    }
  }


  virtual ~GetProjectOptionResponseBody() = default;
};
class GetProjectOptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetProjectOptionResponseBody> body{};

  GetProjectOptionResponse() {}

  explicit GetProjectOptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetProjectOptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProjectOptionResponseBody>(model1);
      }
    }
  }


  virtual ~GetProjectOptionResponse() = default;
};
class UpdateCommonGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> projectId{};
  shared_ptr<string> description{};
  shared_ptr<string> smartGroupId{};
  shared_ptr<string> commonGroupId{};
  shared_ptr<string> name{};

  UpdateCommonGroupRequest() {}

  explicit UpdateCommonGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (smartGroupId) {
      res["SmartGroupId"] = boost::any(*smartGroupId);
    }
    if (commonGroupId) {
      res["CommonGroupId"] = boost::any(*commonGroupId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("SmartGroupId") != m.end() && !m["SmartGroupId"].empty()) {
      smartGroupId = make_shared<string>(boost::any_cast<string>(m["SmartGroupId"]));
    }
    if (m.find("CommonGroupId") != m.end() && !m["CommonGroupId"].empty()) {
      commonGroupId = make_shared<string>(boost::any_cast<string>(m["CommonGroupId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdateCommonGroupRequest() = default;
};
class UpdateCommonGroupResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  UpdateCommonGroupResponseBodyObject() {}

  explicit UpdateCommonGroupResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~UpdateCommonGroupResponseBodyObject() = default;
};
class UpdateCommonGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};
  shared_ptr<UpdateCommonGroupResponseBodyObject> object{};

  UpdateCommonGroupResponseBody() {}

  explicit UpdateCommonGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      res["Object"] = object ? boost::any(object->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(map<string, boost::any>) == m["Object"].type()) {
        UpdateCommonGroupResponseBodyObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Object"]));
        object = make_shared<UpdateCommonGroupResponseBodyObject>(model1);
      }
    }
  }


  virtual ~UpdateCommonGroupResponseBody() = default;
};
class UpdateCommonGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateCommonGroupResponseBody> body{};

  UpdateCommonGroupResponse() {}

  explicit UpdateCommonGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateCommonGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateCommonGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateCommonGroupResponse() = default;
};
class ListCommonGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> projectId{};
  shared_ptr<string> smartGroupId{};
  shared_ptr<bool> all{};

  ListCommonGroupRequest() {}

  explicit ListCommonGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (smartGroupId) {
      res["SmartGroupId"] = boost::any(*smartGroupId);
    }
    if (all) {
      res["All"] = boost::any(*all);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("SmartGroupId") != m.end() && !m["SmartGroupId"].empty()) {
      smartGroupId = make_shared<string>(boost::any_cast<string>(m["SmartGroupId"]));
    }
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
    }
  }


  virtual ~ListCommonGroupRequest() = default;
};
class ListCommonGroupResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<long> resourceCount{};
  shared_ptr<string> smartGroupId{};
  shared_ptr<long> pos{};
  shared_ptr<string> projectId{};
  shared_ptr<bool> isRoot{};
  shared_ptr<string> pinyin{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> name{};
  shared_ptr<string> id{};

  ListCommonGroupResponseBodyObject() {}

  explicit ListCommonGroupResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceCount) {
      res["ResourceCount"] = boost::any(*resourceCount);
    }
    if (smartGroupId) {
      res["SmartGroupId"] = boost::any(*smartGroupId);
    }
    if (pos) {
      res["Pos"] = boost::any(*pos);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (isRoot) {
      res["IsRoot"] = boost::any(*isRoot);
    }
    if (pinyin) {
      res["Pinyin"] = boost::any(*pinyin);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceCount") != m.end() && !m["ResourceCount"].empty()) {
      resourceCount = make_shared<long>(boost::any_cast<long>(m["ResourceCount"]));
    }
    if (m.find("SmartGroupId") != m.end() && !m["SmartGroupId"].empty()) {
      smartGroupId = make_shared<string>(boost::any_cast<string>(m["SmartGroupId"]));
    }
    if (m.find("Pos") != m.end() && !m["Pos"].empty()) {
      pos = make_shared<long>(boost::any_cast<long>(m["Pos"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("IsRoot") != m.end() && !m["IsRoot"].empty()) {
      isRoot = make_shared<bool>(boost::any_cast<bool>(m["IsRoot"]));
    }
    if (m.find("Pinyin") != m.end() && !m["Pinyin"].empty()) {
      pinyin = make_shared<string>(boost::any_cast<string>(m["Pinyin"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["CreatorId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
  }


  virtual ~ListCommonGroupResponseBodyObject() = default;
};
class ListCommonGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<ListCommonGroupResponseBodyObject>> object{};

  ListCommonGroupResponseBody() {}

  explicit ListCommonGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      vector<boost::any> temp1;
      for(auto item1:*object){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Object"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(vector<boost::any>) == m["Object"].type()) {
        vector<ListCommonGroupResponseBodyObject> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Object"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCommonGroupResponseBodyObject model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        object = make_shared<vector<ListCommonGroupResponseBodyObject>>(expect1);
      }
    }
  }


  virtual ~ListCommonGroupResponseBody() = default;
};
class ListCommonGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListCommonGroupResponseBody> body{};

  ListCommonGroupResponse() {}

  explicit ListCommonGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListCommonGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCommonGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ListCommonGroupResponse() = default;
};
class DeleteDevopsProjectTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> taskId{};

  DeleteDevopsProjectTaskRequest() {}

  explicit DeleteDevopsProjectTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DeleteDevopsProjectTaskRequest() = default;
};
class DeleteDevopsProjectTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> object{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};

  DeleteDevopsProjectTaskResponseBody() {}

  explicit DeleteDevopsProjectTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (object) {
      res["Object"] = boost::any(*object);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<bool>(boost::any_cast<bool>(m["Object"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
  }


  virtual ~DeleteDevopsProjectTaskResponseBody() = default;
};
class DeleteDevopsProjectTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDevopsProjectTaskResponseBody> body{};

  DeleteDevopsProjectTaskResponse() {}

  explicit DeleteDevopsProjectTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDevopsProjectTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDevopsProjectTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDevopsProjectTaskResponse() = default;
};
class GetDevopsOrganizationMembersRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};

  GetDevopsOrganizationMembersRequest() {}

  explicit GetDevopsOrganizationMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
  }


  virtual ~GetDevopsOrganizationMembersRequest() = default;
};
class GetDevopsOrganizationMembersResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<string> avatarUrl{};
  shared_ptr<string> userId{};
  shared_ptr<string> memberId{};
  shared_ptr<long> role{};
  shared_ptr<string> name{};
  shared_ptr<string> phone{};

  GetDevopsOrganizationMembersResponseBodyObject() {}

  explicit GetDevopsOrganizationMembersResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (name) {
      res["Name"] = boost::any(*name);
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
    if (m.find("AvatarUrl") != m.end() && !m["AvatarUrl"].empty()) {
      avatarUrl = make_shared<string>(boost::any_cast<string>(m["AvatarUrl"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<long>(boost::any_cast<long>(m["Role"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
  }


  virtual ~GetDevopsOrganizationMembersResponseBodyObject() = default;
};
class GetDevopsOrganizationMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<GetDevopsOrganizationMembersResponseBodyObject>> object{};

  GetDevopsOrganizationMembersResponseBody() {}

  explicit GetDevopsOrganizationMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      vector<boost::any> temp1;
      for(auto item1:*object){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Object"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(vector<boost::any>) == m["Object"].type()) {
        vector<GetDevopsOrganizationMembersResponseBodyObject> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Object"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDevopsOrganizationMembersResponseBodyObject model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        object = make_shared<vector<GetDevopsOrganizationMembersResponseBodyObject>>(expect1);
      }
    }
  }


  virtual ~GetDevopsOrganizationMembersResponseBody() = default;
};
class GetDevopsOrganizationMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDevopsOrganizationMembersResponseBody> body{};

  GetDevopsOrganizationMembersResponse() {}

  explicit GetDevopsOrganizationMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetDevopsOrganizationMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDevopsOrganizationMembersResponseBody>(model1);
      }
    }
  }


  virtual ~GetDevopsOrganizationMembersResponse() = default;
};
class CreateDevopsProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> name{};
  shared_ptr<string> description{};

  CreateDevopsProjectRequest() {}

  explicit CreateDevopsProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~CreateDevopsProjectRequest() = default;
};
class CreateDevopsProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> object{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};

  CreateDevopsProjectResponseBody() {}

  explicit CreateDevopsProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (object) {
      res["Object"] = boost::any(*object);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<string>(boost::any_cast<string>(m["Object"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
  }


  virtual ~CreateDevopsProjectResponseBody() = default;
};
class CreateDevopsProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDevopsProjectResponseBody> body{};

  CreateDevopsProjectResponse() {}

  explicit CreateDevopsProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDevopsProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDevopsProjectResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDevopsProjectResponse() = default;
};
class GetTaskDetailActivityRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> projectId{};
  shared_ptr<string> taskId{};

  GetTaskDetailActivityRequest() {}

  explicit GetTaskDetailActivityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetTaskDetailActivityRequest() = default;
};
class GetTaskDetailActivityResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<string> updated{};
  shared_ptr<string> action{};
  shared_ptr<string> title{};
  shared_ptr<string> created{};
  shared_ptr<map<string, boost::any>> content{};

  GetTaskDetailActivityResponseBodyObject() {}

  explicit GetTaskDetailActivityResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (updated) {
      res["Updated"] = boost::any(*updated);
    }
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (created) {
      res["Created"] = boost::any(*created);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Updated") != m.end() && !m["Updated"].empty()) {
      updated = make_shared<string>(boost::any_cast<string>(m["Updated"]));
    }
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Created") != m.end() && !m["Created"].empty()) {
      created = make_shared<string>(boost::any_cast<string>(m["Created"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Content"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      content = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetTaskDetailActivityResponseBodyObject() = default;
};
class GetTaskDetailActivityResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<GetTaskDetailActivityResponseBodyObject>> object{};

  GetTaskDetailActivityResponseBody() {}

  explicit GetTaskDetailActivityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      vector<boost::any> temp1;
      for(auto item1:*object){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Object"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(vector<boost::any>) == m["Object"].type()) {
        vector<GetTaskDetailActivityResponseBodyObject> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Object"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTaskDetailActivityResponseBodyObject model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        object = make_shared<vector<GetTaskDetailActivityResponseBodyObject>>(expect1);
      }
    }
  }


  virtual ~GetTaskDetailActivityResponseBody() = default;
};
class GetTaskDetailActivityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetTaskDetailActivityResponseBody> body{};

  GetTaskDetailActivityResponse() {}

  explicit GetTaskDetailActivityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetTaskDetailActivityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskDetailActivityResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskDetailActivityResponse() = default;
};
class ExecutePipelineRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<long> pipelineId{};
  shared_ptr<string> parameters{};
  shared_ptr<string> userPk{};

  ExecutePipelineRequest() {}

  explicit ExecutePipelineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (userPk) {
      res["UserPk"] = boost::any(*userPk);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<long>(boost::any_cast<long>(m["PipelineId"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("UserPk") != m.end() && !m["UserPk"].empty()) {
      userPk = make_shared<string>(boost::any_cast<string>(m["UserPk"]));
    }
  }


  virtual ~ExecutePipelineRequest() = default;
};
class ExecutePipelineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> object{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};

  ExecutePipelineResponseBody() {}

  explicit ExecutePipelineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (object) {
      res["Object"] = boost::any(*object);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<long>(boost::any_cast<long>(m["Object"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
  }


  virtual ~ExecutePipelineResponseBody() = default;
};
class ExecutePipelineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ExecutePipelineResponseBody> body{};

  ExecutePipelineResponse() {}

  explicit ExecutePipelineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ExecutePipelineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecutePipelineResponseBody>(model1);
      }
    }
  }


  virtual ~ExecutePipelineResponse() = default;
};
class CreateServiceConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceConnectionType{};
  shared_ptr<string> userPk{};
  shared_ptr<string> orgId{};

  CreateServiceConnectionRequest() {}

  explicit CreateServiceConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceConnectionType) {
      res["ServiceConnectionType"] = boost::any(*serviceConnectionType);
    }
    if (userPk) {
      res["UserPk"] = boost::any(*userPk);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceConnectionType") != m.end() && !m["ServiceConnectionType"].empty()) {
      serviceConnectionType = make_shared<string>(boost::any_cast<string>(m["ServiceConnectionType"]));
    }
    if (m.find("UserPk") != m.end() && !m["UserPk"].empty()) {
      userPk = make_shared<string>(boost::any_cast<string>(m["UserPk"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
  }


  virtual ~CreateServiceConnectionRequest() = default;
};
class CreateServiceConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> object{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};

  CreateServiceConnectionResponseBody() {}

  explicit CreateServiceConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (object) {
      res["Object"] = boost::any(*object);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<long>(boost::any_cast<long>(m["Object"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
  }


  virtual ~CreateServiceConnectionResponseBody() = default;
};
class CreateServiceConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateServiceConnectionResponseBody> body{};

  CreateServiceConnectionResponse() {}

  explicit CreateServiceConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateServiceConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceConnectionResponse() = default;
};
class GetPipelineInstHistoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<long> pipelineId{};
  shared_ptr<string> userPk{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<long> pageStart{};
  shared_ptr<long> pageSize{};

  GetPipelineInstHistoryRequest() {}

  explicit GetPipelineInstHistoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    if (userPk) {
      res["UserPk"] = boost::any(*userPk);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageStart) {
      res["PageStart"] = boost::any(*pageStart);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<long>(boost::any_cast<long>(m["PipelineId"]));
    }
    if (m.find("UserPk") != m.end() && !m["UserPk"].empty()) {
      userPk = make_shared<string>(boost::any_cast<string>(m["UserPk"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PageStart") != m.end() && !m["PageStart"].empty()) {
      pageStart = make_shared<long>(boost::any_cast<long>(m["PageStart"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~GetPipelineInstHistoryRequest() = default;
};
class GetPipelineInstHistoryResponseBodyDataDataListFlowInstanceGroups : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<long> createTime{};
  shared_ptr<string> deleteStatus{};
  shared_ptr<long> idExtent{};
  shared_ptr<string> creator{};
  shared_ptr<long> endTime{};
  shared_ptr<long> startTime{};
  shared_ptr<string> modifier{};
  shared_ptr<string> resultStatus{};
  shared_ptr<long> flowInstId{};
  shared_ptr<string> name{};
  shared_ptr<long> id{};
  shared_ptr<long> modifyTime{};

  GetPipelineInstHistoryResponseBodyDataDataListFlowInstanceGroups() {}

  explicit GetPipelineInstHistoryResponseBodyDataDataListFlowInstanceGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleteStatus) {
      res["DeleteStatus"] = boost::any(*deleteStatus);
    }
    if (idExtent) {
      res["IdExtent"] = boost::any(*idExtent);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (modifier) {
      res["Modifier"] = boost::any(*modifier);
    }
    if (resultStatus) {
      res["ResultStatus"] = boost::any(*resultStatus);
    }
    if (flowInstId) {
      res["FlowInstId"] = boost::any(*flowInstId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DeleteStatus") != m.end() && !m["DeleteStatus"].empty()) {
      deleteStatus = make_shared<string>(boost::any_cast<string>(m["DeleteStatus"]));
    }
    if (m.find("IdExtent") != m.end() && !m["IdExtent"].empty()) {
      idExtent = make_shared<long>(boost::any_cast<long>(m["IdExtent"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Modifier") != m.end() && !m["Modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["Modifier"]));
    }
    if (m.find("ResultStatus") != m.end() && !m["ResultStatus"].empty()) {
      resultStatus = make_shared<string>(boost::any_cast<string>(m["ResultStatus"]));
    }
    if (m.find("FlowInstId") != m.end() && !m["FlowInstId"].empty()) {
      flowInstId = make_shared<long>(boost::any_cast<long>(m["FlowInstId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
  }


  virtual ~GetPipelineInstHistoryResponseBodyDataDataListFlowInstanceGroups() = default;
};
class GetPipelineInstHistoryResponseBodyDataDataListFlowInstanceResult : public Darabonba::Model {
public:
  shared_ptr<long> enginePipelineNumber{};
  shared_ptr<string> mixFlowInstId{};
  shared_ptr<string> enginePipelineName{};
  shared_ptr<long> enginePipelineId{};
  shared_ptr<long> enginePipelineInstId{};
  shared_ptr<string> timeStamp{};
  shared_ptr<string> triggerMode{};
  shared_ptr<string> sources{};
  shared_ptr<string> caches{};
  shared_ptr<string> dateTime{};

  GetPipelineInstHistoryResponseBodyDataDataListFlowInstanceResult() {}

  explicit GetPipelineInstHistoryResponseBodyDataDataListFlowInstanceResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enginePipelineNumber) {
      res["EnginePipelineNumber"] = boost::any(*enginePipelineNumber);
    }
    if (mixFlowInstId) {
      res["MixFlowInstId"] = boost::any(*mixFlowInstId);
    }
    if (enginePipelineName) {
      res["EnginePipelineName"] = boost::any(*enginePipelineName);
    }
    if (enginePipelineId) {
      res["EnginePipelineId"] = boost::any(*enginePipelineId);
    }
    if (enginePipelineInstId) {
      res["EnginePipelineInstId"] = boost::any(*enginePipelineInstId);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    if (triggerMode) {
      res["TriggerMode"] = boost::any(*triggerMode);
    }
    if (sources) {
      res["Sources"] = boost::any(*sources);
    }
    if (caches) {
      res["Caches"] = boost::any(*caches);
    }
    if (dateTime) {
      res["DateTime"] = boost::any(*dateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnginePipelineNumber") != m.end() && !m["EnginePipelineNumber"].empty()) {
      enginePipelineNumber = make_shared<long>(boost::any_cast<long>(m["EnginePipelineNumber"]));
    }
    if (m.find("MixFlowInstId") != m.end() && !m["MixFlowInstId"].empty()) {
      mixFlowInstId = make_shared<string>(boost::any_cast<string>(m["MixFlowInstId"]));
    }
    if (m.find("EnginePipelineName") != m.end() && !m["EnginePipelineName"].empty()) {
      enginePipelineName = make_shared<string>(boost::any_cast<string>(m["EnginePipelineName"]));
    }
    if (m.find("EnginePipelineId") != m.end() && !m["EnginePipelineId"].empty()) {
      enginePipelineId = make_shared<long>(boost::any_cast<long>(m["EnginePipelineId"]));
    }
    if (m.find("EnginePipelineInstId") != m.end() && !m["EnginePipelineInstId"].empty()) {
      enginePipelineInstId = make_shared<long>(boost::any_cast<long>(m["EnginePipelineInstId"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
    if (m.find("TriggerMode") != m.end() && !m["TriggerMode"].empty()) {
      triggerMode = make_shared<string>(boost::any_cast<string>(m["TriggerMode"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      sources = make_shared<string>(boost::any_cast<string>(m["Sources"]));
    }
    if (m.find("Caches") != m.end() && !m["Caches"].empty()) {
      caches = make_shared<string>(boost::any_cast<string>(m["Caches"]));
    }
    if (m.find("DateTime") != m.end() && !m["DateTime"].empty()) {
      dateTime = make_shared<string>(boost::any_cast<string>(m["DateTime"]));
    }
  }


  virtual ~GetPipelineInstHistoryResponseBodyDataDataListFlowInstanceResult() = default;
};
class GetPipelineInstHistoryResponseBodyDataDataListFlowInstance : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<map<string, boost::any>> stages{};
  shared_ptr<long> createTime{};
  shared_ptr<string> statusName{};
  shared_ptr<string> runningStatus{};
  shared_ptr<string> creator{};
  shared_ptr<string> stageTopo{};
  shared_ptr<string> modifier{};
  shared_ptr<bool> autoDrivenStatus{};
  shared_ptr<string> resultStatus{};
  shared_ptr<long> id{};
  shared_ptr<string> systemCode{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> systemId{};
  shared_ptr<vector<GetPipelineInstHistoryResponseBodyDataDataListFlowInstanceGroups>> groups{};
  shared_ptr<GetPipelineInstHistoryResponseBodyDataDataListFlowInstanceResult> result{};

  GetPipelineInstHistoryResponseBodyDataDataListFlowInstance() {}

  explicit GetPipelineInstHistoryResponseBodyDataDataListFlowInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (stages) {
      res["Stages"] = boost::any(*stages);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (statusName) {
      res["StatusName"] = boost::any(*statusName);
    }
    if (runningStatus) {
      res["RunningStatus"] = boost::any(*runningStatus);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (stageTopo) {
      res["StageTopo"] = boost::any(*stageTopo);
    }
    if (modifier) {
      res["Modifier"] = boost::any(*modifier);
    }
    if (autoDrivenStatus) {
      res["AutoDrivenStatus"] = boost::any(*autoDrivenStatus);
    }
    if (resultStatus) {
      res["ResultStatus"] = boost::any(*resultStatus);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (systemCode) {
      res["SystemCode"] = boost::any(*systemCode);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (systemId) {
      res["SystemId"] = boost::any(*systemId);
    }
    if (groups) {
      vector<boost::any> temp1;
      for(auto item1:*groups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Groups"] = boost::any(temp1);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Stages") != m.end() && !m["Stages"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Stages"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      stages = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("StatusName") != m.end() && !m["StatusName"].empty()) {
      statusName = make_shared<string>(boost::any_cast<string>(m["StatusName"]));
    }
    if (m.find("RunningStatus") != m.end() && !m["RunningStatus"].empty()) {
      runningStatus = make_shared<string>(boost::any_cast<string>(m["RunningStatus"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("StageTopo") != m.end() && !m["StageTopo"].empty()) {
      stageTopo = make_shared<string>(boost::any_cast<string>(m["StageTopo"]));
    }
    if (m.find("Modifier") != m.end() && !m["Modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["Modifier"]));
    }
    if (m.find("AutoDrivenStatus") != m.end() && !m["AutoDrivenStatus"].empty()) {
      autoDrivenStatus = make_shared<bool>(boost::any_cast<bool>(m["AutoDrivenStatus"]));
    }
    if (m.find("ResultStatus") != m.end() && !m["ResultStatus"].empty()) {
      resultStatus = make_shared<string>(boost::any_cast<string>(m["ResultStatus"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("SystemCode") != m.end() && !m["SystemCode"].empty()) {
      systemCode = make_shared<string>(boost::any_cast<string>(m["SystemCode"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("SystemId") != m.end() && !m["SystemId"].empty()) {
      systemId = make_shared<string>(boost::any_cast<string>(m["SystemId"]));
    }
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      if (typeid(vector<boost::any>) == m["Groups"].type()) {
        vector<GetPipelineInstHistoryResponseBodyDataDataListFlowInstanceGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Groups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPipelineInstHistoryResponseBodyDataDataListFlowInstanceGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groups = make_shared<vector<GetPipelineInstHistoryResponseBodyDataDataListFlowInstanceGroups>>(expect1);
      }
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetPipelineInstHistoryResponseBodyDataDataListFlowInstanceResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetPipelineInstHistoryResponseBodyDataDataListFlowInstanceResult>(model1);
      }
    }
  }


  virtual ~GetPipelineInstHistoryResponseBodyDataDataListFlowInstance() = default;
};
class GetPipelineInstHistoryResponseBodyDataDataList : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<long> createTime{};
  shared_ptr<string> statusName{};
  shared_ptr<long> triggerMode{};
  shared_ptr<long> pipelineConfigId{};
  shared_ptr<string> deletion{};
  shared_ptr<string> creator{};
  shared_ptr<long> instNumber{};
  shared_ptr<string> modifier{};
  shared_ptr<string> packages{};
  shared_ptr<long> flowInstId{};
  shared_ptr<long> pipelineId{};
  shared_ptr<long> id{};
  shared_ptr<long> modifyTime{};
  shared_ptr<GetPipelineInstHistoryResponseBodyDataDataListFlowInstance> flowInstance{};

  GetPipelineInstHistoryResponseBodyDataDataList() {}

  explicit GetPipelineInstHistoryResponseBodyDataDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (statusName) {
      res["StatusName"] = boost::any(*statusName);
    }
    if (triggerMode) {
      res["TriggerMode"] = boost::any(*triggerMode);
    }
    if (pipelineConfigId) {
      res["PipelineConfigId"] = boost::any(*pipelineConfigId);
    }
    if (deletion) {
      res["Deletion"] = boost::any(*deletion);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (instNumber) {
      res["InstNumber"] = boost::any(*instNumber);
    }
    if (modifier) {
      res["Modifier"] = boost::any(*modifier);
    }
    if (packages) {
      res["Packages"] = boost::any(*packages);
    }
    if (flowInstId) {
      res["FlowInstId"] = boost::any(*flowInstId);
    }
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (flowInstance) {
      res["FlowInstance"] = flowInstance ? boost::any(flowInstance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("StatusName") != m.end() && !m["StatusName"].empty()) {
      statusName = make_shared<string>(boost::any_cast<string>(m["StatusName"]));
    }
    if (m.find("TriggerMode") != m.end() && !m["TriggerMode"].empty()) {
      triggerMode = make_shared<long>(boost::any_cast<long>(m["TriggerMode"]));
    }
    if (m.find("PipelineConfigId") != m.end() && !m["PipelineConfigId"].empty()) {
      pipelineConfigId = make_shared<long>(boost::any_cast<long>(m["PipelineConfigId"]));
    }
    if (m.find("Deletion") != m.end() && !m["Deletion"].empty()) {
      deletion = make_shared<string>(boost::any_cast<string>(m["Deletion"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("InstNumber") != m.end() && !m["InstNumber"].empty()) {
      instNumber = make_shared<long>(boost::any_cast<long>(m["InstNumber"]));
    }
    if (m.find("Modifier") != m.end() && !m["Modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["Modifier"]));
    }
    if (m.find("Packages") != m.end() && !m["Packages"].empty()) {
      packages = make_shared<string>(boost::any_cast<string>(m["Packages"]));
    }
    if (m.find("FlowInstId") != m.end() && !m["FlowInstId"].empty()) {
      flowInstId = make_shared<long>(boost::any_cast<long>(m["FlowInstId"]));
    }
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<long>(boost::any_cast<long>(m["PipelineId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("FlowInstance") != m.end() && !m["FlowInstance"].empty()) {
      if (typeid(map<string, boost::any>) == m["FlowInstance"].type()) {
        GetPipelineInstHistoryResponseBodyDataDataListFlowInstance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FlowInstance"]));
        flowInstance = make_shared<GetPipelineInstHistoryResponseBodyDataDataListFlowInstance>(model1);
      }
    }
  }


  virtual ~GetPipelineInstHistoryResponseBodyDataDataList() = default;
};
class GetPipelineInstHistoryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> total{};
  shared_ptr<vector<GetPipelineInstHistoryResponseBodyDataDataList>> dataList{};

  GetPipelineInstHistoryResponseBodyData() {}

  explicit GetPipelineInstHistoryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("DataList") != m.end() && !m["DataList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataList"].type()) {
        vector<GetPipelineInstHistoryResponseBodyDataDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPipelineInstHistoryResponseBodyDataDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<GetPipelineInstHistoryResponseBodyDataDataList>>(expect1);
      }
    }
  }


  virtual ~GetPipelineInstHistoryResponseBodyData() = default;
};
class GetPipelineInstHistoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetPipelineInstHistoryResponseBodyData> data{};

  GetPipelineInstHistoryResponseBody() {}

  explicit GetPipelineInstHistoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetPipelineInstHistoryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetPipelineInstHistoryResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetPipelineInstHistoryResponseBody() = default;
};
class GetPipelineInstHistoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPipelineInstHistoryResponseBody> body{};

  GetPipelineInstHistoryResponse() {}

  explicit GetPipelineInstHistoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPipelineInstHistoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPipelineInstHistoryResponseBody>(model1);
      }
    }
  }


  virtual ~GetPipelineInstHistoryResponse() = default;
};
class GetPipelineStepLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<long> pipelineId{};
  shared_ptr<string> userPk{};
  shared_ptr<long> jobId{};
  shared_ptr<string> stepIndex{};
  shared_ptr<long> offset{};
  shared_ptr<long> limit{};

  GetPipelineStepLogRequest() {}

  explicit GetPipelineStepLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    if (userPk) {
      res["UserPk"] = boost::any(*userPk);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (stepIndex) {
      res["StepIndex"] = boost::any(*stepIndex);
    }
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<long>(boost::any_cast<long>(m["PipelineId"]));
    }
    if (m.find("UserPk") != m.end() && !m["UserPk"].empty()) {
      userPk = make_shared<string>(boost::any_cast<string>(m["UserPk"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("StepIndex") != m.end() && !m["StepIndex"].empty()) {
      stepIndex = make_shared<string>(boost::any_cast<string>(m["StepIndex"]));
    }
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["Offset"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
  }


  virtual ~GetPipelineStepLogRequest() = default;
};
class GetPipelineStepLogResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<long> last{};
  shared_ptr<bool> more{};
  shared_ptr<string> logs{};

  GetPipelineStepLogResponseBodyObject() {}

  explicit GetPipelineStepLogResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (last) {
      res["Last"] = boost::any(*last);
    }
    if (more) {
      res["More"] = boost::any(*more);
    }
    if (logs) {
      res["Logs"] = boost::any(*logs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Last") != m.end() && !m["Last"].empty()) {
      last = make_shared<long>(boost::any_cast<long>(m["Last"]));
    }
    if (m.find("More") != m.end() && !m["More"].empty()) {
      more = make_shared<bool>(boost::any_cast<bool>(m["More"]));
    }
    if (m.find("Logs") != m.end() && !m["Logs"].empty()) {
      logs = make_shared<string>(boost::any_cast<string>(m["Logs"]));
    }
  }


  virtual ~GetPipelineStepLogResponseBodyObject() = default;
};
class GetPipelineStepLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetPipelineStepLogResponseBodyObject> object{};

  GetPipelineStepLogResponseBody() {}

  explicit GetPipelineStepLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      res["Object"] = object ? boost::any(object->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(map<string, boost::any>) == m["Object"].type()) {
        GetPipelineStepLogResponseBodyObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Object"]));
        object = make_shared<GetPipelineStepLogResponseBodyObject>(model1);
      }
    }
  }


  virtual ~GetPipelineStepLogResponseBody() = default;
};
class GetPipelineStepLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPipelineStepLogResponseBody> body{};

  GetPipelineStepLogResponse() {}

  explicit GetPipelineStepLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPipelineStepLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPipelineStepLogResponseBody>(model1);
      }
    }
  }


  virtual ~GetPipelineStepLogResponse() = default;
};
class GetPipleineLatestInstanceStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<long> pipelineId{};
  shared_ptr<string> userPk{};

  GetPipleineLatestInstanceStatusRequest() {}

  explicit GetPipleineLatestInstanceStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    if (userPk) {
      res["UserPk"] = boost::any(*userPk);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<long>(boost::any_cast<long>(m["PipelineId"]));
    }
    if (m.find("UserPk") != m.end() && !m["UserPk"].empty()) {
      userPk = make_shared<string>(boost::any_cast<string>(m["UserPk"]));
    }
  }


  virtual ~GetPipleineLatestInstanceStatusRequest() = default;
};
class GetPipleineLatestInstanceStatusResponseBodyObjectGroupsStagesComponents : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> name{};
  shared_ptr<long> jobId{};

  GetPipleineLatestInstanceStatusResponseBodyObjectGroupsStagesComponents() {}

  explicit GetPipleineLatestInstanceStatusResponseBodyObjectGroupsStagesComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
  }


  virtual ~GetPipleineLatestInstanceStatusResponseBodyObjectGroupsStagesComponents() = default;
};
class GetPipleineLatestInstanceStatusResponseBodyObjectGroupsStages : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> sign{};
  shared_ptr<vector<GetPipleineLatestInstanceStatusResponseBodyObjectGroupsStagesComponents>> components{};

  GetPipleineLatestInstanceStatusResponseBodyObjectGroupsStages() {}

  explicit GetPipleineLatestInstanceStatusResponseBodyObjectGroupsStages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    if (components) {
      vector<boost::any> temp1;
      for(auto item1:*components){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Components"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      if (typeid(vector<boost::any>) == m["Components"].type()) {
        vector<GetPipleineLatestInstanceStatusResponseBodyObjectGroupsStagesComponents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Components"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPipleineLatestInstanceStatusResponseBodyObjectGroupsStagesComponents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        components = make_shared<vector<GetPipleineLatestInstanceStatusResponseBodyObjectGroupsStagesComponents>>(expect1);
      }
    }
  }


  virtual ~GetPipleineLatestInstanceStatusResponseBodyObjectGroupsStages() = default;
};
class GetPipleineLatestInstanceStatusResponseBodyObjectGroups : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> name{};
  shared_ptr<vector<GetPipleineLatestInstanceStatusResponseBodyObjectGroupsStages>> stages{};

  GetPipleineLatestInstanceStatusResponseBodyObjectGroups() {}

  explicit GetPipleineLatestInstanceStatusResponseBodyObjectGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (stages) {
      vector<boost::any> temp1;
      for(auto item1:*stages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Stages"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Stages") != m.end() && !m["Stages"].empty()) {
      if (typeid(vector<boost::any>) == m["Stages"].type()) {
        vector<GetPipleineLatestInstanceStatusResponseBodyObjectGroupsStages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Stages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPipleineLatestInstanceStatusResponseBodyObjectGroupsStages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stages = make_shared<vector<GetPipleineLatestInstanceStatusResponseBodyObjectGroupsStages>>(expect1);
      }
    }
  }


  virtual ~GetPipleineLatestInstanceStatusResponseBodyObjectGroups() = default;
};
class GetPipleineLatestInstanceStatusResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<vector<GetPipleineLatestInstanceStatusResponseBodyObjectGroups>> groups{};

  GetPipleineLatestInstanceStatusResponseBodyObject() {}

  explicit GetPipleineLatestInstanceStatusResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (groups) {
      vector<boost::any> temp1;
      for(auto item1:*groups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Groups"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      if (typeid(vector<boost::any>) == m["Groups"].type()) {
        vector<GetPipleineLatestInstanceStatusResponseBodyObjectGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Groups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPipleineLatestInstanceStatusResponseBodyObjectGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groups = make_shared<vector<GetPipleineLatestInstanceStatusResponseBodyObjectGroups>>(expect1);
      }
    }
  }


  virtual ~GetPipleineLatestInstanceStatusResponseBodyObject() = default;
};
class GetPipleineLatestInstanceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetPipleineLatestInstanceStatusResponseBodyObject> object{};

  GetPipleineLatestInstanceStatusResponseBody() {}

  explicit GetPipleineLatestInstanceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      res["Object"] = object ? boost::any(object->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(map<string, boost::any>) == m["Object"].type()) {
        GetPipleineLatestInstanceStatusResponseBodyObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Object"]));
        object = make_shared<GetPipleineLatestInstanceStatusResponseBodyObject>(model1);
      }
    }
  }


  virtual ~GetPipleineLatestInstanceStatusResponseBody() = default;
};
class GetPipleineLatestInstanceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPipleineLatestInstanceStatusResponseBody> body{};

  GetPipleineLatestInstanceStatusResponse() {}

  explicit GetPipleineLatestInstanceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPipleineLatestInstanceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPipleineLatestInstanceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetPipleineLatestInstanceStatusResponse() = default;
};
class ListDevopsProjectTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> projectIds{};

  ListDevopsProjectTasksRequest() {}

  explicit ListDevopsProjectTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (projectIds) {
      res["ProjectIds"] = boost::any(*projectIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("ProjectIds") != m.end() && !m["ProjectIds"].empty()) {
      projectIds = make_shared<string>(boost::any_cast<string>(m["ProjectIds"]));
    }
  }


  virtual ~ListDevopsProjectTasksRequest() = default;
};
class ListDevopsProjectTasksResponseBodyObject : public Darabonba::Model {
public:
  shared_ptr<string> taskgroupId{};
  shared_ptr<string> tasklistId{};
  shared_ptr<string> projectId{};
  shared_ptr<string> modifierId{};
  shared_ptr<string> updated{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> created{};
  shared_ptr<string> name{};
  shared_ptr<string> id{};

  ListDevopsProjectTasksResponseBodyObject() {}

  explicit ListDevopsProjectTasksResponseBodyObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskgroupId) {
      res["TaskgroupId"] = boost::any(*taskgroupId);
    }
    if (tasklistId) {
      res["TasklistId"] = boost::any(*tasklistId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (modifierId) {
      res["ModifierId"] = boost::any(*modifierId);
    }
    if (updated) {
      res["Updated"] = boost::any(*updated);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (created) {
      res["Created"] = boost::any(*created);
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
    if (m.find("TaskgroupId") != m.end() && !m["TaskgroupId"].empty()) {
      taskgroupId = make_shared<string>(boost::any_cast<string>(m["TaskgroupId"]));
    }
    if (m.find("TasklistId") != m.end() && !m["TasklistId"].empty()) {
      tasklistId = make_shared<string>(boost::any_cast<string>(m["TasklistId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ModifierId") != m.end() && !m["ModifierId"].empty()) {
      modifierId = make_shared<string>(boost::any_cast<string>(m["ModifierId"]));
    }
    if (m.find("Updated") != m.end() && !m["Updated"].empty()) {
      updated = make_shared<string>(boost::any_cast<string>(m["Updated"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["CreatorId"]));
    }
    if (m.find("Created") != m.end() && !m["Created"].empty()) {
      created = make_shared<string>(boost::any_cast<string>(m["Created"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~ListDevopsProjectTasksResponseBodyObject() = default;
};
class ListDevopsProjectTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successful{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<ListDevopsProjectTasksResponseBodyObject>> object{};

  ListDevopsProjectTasksResponseBody() {}

  explicit ListDevopsProjectTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successful) {
      res["Successful"] = boost::any(*successful);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (object) {
      vector<boost::any> temp1;
      for(auto item1:*object){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Object"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Successful") != m.end() && !m["Successful"].empty()) {
      successful = make_shared<bool>(boost::any_cast<bool>(m["Successful"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      if (typeid(vector<boost::any>) == m["Object"].type()) {
        vector<ListDevopsProjectTasksResponseBodyObject> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Object"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDevopsProjectTasksResponseBodyObject model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        object = make_shared<vector<ListDevopsProjectTasksResponseBodyObject>>(expect1);
      }
    }
  }


  virtual ~ListDevopsProjectTasksResponseBody() = default;
};
class ListDevopsProjectTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDevopsProjectTasksResponseBody> body{};

  ListDevopsProjectTasksResponse() {}

  explicit ListDevopsProjectTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDevopsProjectTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDevopsProjectTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListDevopsProjectTasksResponse() = default;
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
  InsertPipelineMemberResponse insertPipelineMemberWithOptions(shared_ptr<InsertPipelineMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InsertPipelineMemberResponse insertPipelineMember(shared_ptr<InsertPipelineMemberRequest> request);
  ListDevopsProjectTaskFlowResponse listDevopsProjectTaskFlowWithOptions(shared_ptr<ListDevopsProjectTaskFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDevopsProjectTaskFlowResponse listDevopsProjectTaskFlow(shared_ptr<ListDevopsProjectTaskFlowRequest> request);
  GetDevopsProjectMembersResponse getDevopsProjectMembersWithOptions(shared_ptr<GetDevopsProjectMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDevopsProjectMembersResponse getDevopsProjectMembers(shared_ptr<GetDevopsProjectMembersRequest> request);
  AddCodeupSourceToPipelineResponse addCodeupSourceToPipelineWithOptions(shared_ptr<AddCodeupSourceToPipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddCodeupSourceToPipelineResponse addCodeupSourceToPipeline(shared_ptr<AddCodeupSourceToPipelineRequest> request);
  DeleteDevopsProjectSprintResponse deleteDevopsProjectSprintWithOptions(shared_ptr<DeleteDevopsProjectSprintRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDevopsProjectSprintResponse deleteDevopsProjectSprint(shared_ptr<DeleteDevopsProjectSprintRequest> request);
  DeleteCommonGroupResponse deleteCommonGroupWithOptions(shared_ptr<DeleteCommonGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCommonGroupResponse deleteCommonGroup(shared_ptr<DeleteCommonGroupRequest> request);
  ListProjectCustomFieldsResponse listProjectCustomFieldsWithOptions(shared_ptr<ListProjectCustomFieldsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProjectCustomFieldsResponse listProjectCustomFields(shared_ptr<ListProjectCustomFieldsRequest> request);
  InsertDevopsUserResponse insertDevopsUserWithOptions(shared_ptr<InsertDevopsUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InsertDevopsUserResponse insertDevopsUser(shared_ptr<InsertDevopsUserRequest> request);
  UpdateDevopsProjectResponse updateDevopsProjectWithOptions(shared_ptr<UpdateDevopsProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDevopsProjectResponse updateDevopsProject(shared_ptr<UpdateDevopsProjectRequest> request);
  CheckAliyunAccountExistsResponse checkAliyunAccountExistsWithOptions(shared_ptr<CheckAliyunAccountExistsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckAliyunAccountExistsResponse checkAliyunAccountExists(shared_ptr<CheckAliyunAccountExistsRequest> request);
  GetPipelineInstanceInfoResponse getPipelineInstanceInfoWithOptions(shared_ptr<GetPipelineInstanceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPipelineInstanceInfoResponse getPipelineInstanceInfo(shared_ptr<GetPipelineInstanceInfoRequest> request);
  BatchInsertMembersResponse batchInsertMembersWithOptions(shared_ptr<BatchInsertMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchInsertMembersResponse batchInsertMembers(shared_ptr<BatchInsertMembersRequest> request);
  ListServiceConnectionsResponse listServiceConnectionsWithOptions(shared_ptr<ListServiceConnectionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceConnectionsResponse listServiceConnections(shared_ptr<ListServiceConnectionsRequest> request);
  GetUserNameResponse getUserNameWithOptions(shared_ptr<GetUserNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserNameResponse getUserName(shared_ptr<GetUserNameRequest> request);
  InsertProjectMembersResponse insertProjectMembersWithOptions(shared_ptr<InsertProjectMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InsertProjectMembersResponse insertProjectMembers(shared_ptr<InsertProjectMembersRequest> request);
  ListDevopsProjectTaskListResponse listDevopsProjectTaskListWithOptions(shared_ptr<ListDevopsProjectTaskListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDevopsProjectTaskListResponse listDevopsProjectTaskList(shared_ptr<ListDevopsProjectTaskListRequest> request);
  GetTaskDetailBaseResponse getTaskDetailBaseWithOptions(shared_ptr<GetTaskDetailBaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskDetailBaseResponse getTaskDetailBase(shared_ptr<GetTaskDetailBaseRequest> request);
  DeleteDevopsProjectMembersResponse deleteDevopsProjectMembersWithOptions(shared_ptr<DeleteDevopsProjectMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDevopsProjectMembersResponse deleteDevopsProjectMembers(shared_ptr<DeleteDevopsProjectMembersRequest> request);
  CreateDevopsProjectSprintResponse createDevopsProjectSprintWithOptions(shared_ptr<CreateDevopsProjectSprintRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDevopsProjectSprintResponse createDevopsProjectSprint(shared_ptr<CreateDevopsProjectSprintRequest> request);
  UpdateDevopsProjectSprintResponse updateDevopsProjectSprintWithOptions(shared_ptr<UpdateDevopsProjectSprintRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDevopsProjectSprintResponse updateDevopsProjectSprint(shared_ptr<UpdateDevopsProjectSprintRequest> request);
  DeleteDevopsOrganizationResponse deleteDevopsOrganizationWithOptions(shared_ptr<DeleteDevopsOrganizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDevopsOrganizationResponse deleteDevopsOrganization(shared_ptr<DeleteDevopsOrganizationRequest> request);
  CancelPipelineResponse cancelPipelineWithOptions(shared_ptr<CancelPipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelPipelineResponse cancelPipeline(shared_ptr<CancelPipelineRequest> request);
  ListDevopsProjectTaskFlowStatusResponse listDevopsProjectTaskFlowStatusWithOptions(shared_ptr<ListDevopsProjectTaskFlowStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDevopsProjectTaskFlowStatusResponse listDevopsProjectTaskFlowStatus(shared_ptr<ListDevopsProjectTaskFlowStatusRequest> request);
  ListUserOrganizationResponse listUserOrganizationWithOptions(shared_ptr<ListUserOrganizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserOrganizationResponse listUserOrganization(shared_ptr<ListUserOrganizationRequest> request);
  UpdatePipelineEnvVarsResponse updatePipelineEnvVarsWithOptions(shared_ptr<UpdatePipelineEnvVarsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePipelineEnvVarsResponse updatePipelineEnvVars(shared_ptr<UpdatePipelineEnvVarsRequest> request);
  DeleteDevopsProjectResponse deleteDevopsProjectWithOptions(shared_ptr<DeleteDevopsProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDevopsProjectResponse deleteDevopsProject(shared_ptr<DeleteDevopsProjectRequest> request);
  GetPipelineInstanceStatusResponse getPipelineInstanceStatusWithOptions(shared_ptr<GetPipelineInstanceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPipelineInstanceStatusResponse getPipelineInstanceStatus(shared_ptr<GetPipelineInstanceStatusRequest> request);
  GetPipelineLogResponse getPipelineLogWithOptions(shared_ptr<GetPipelineLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPipelineLogResponse getPipelineLog(shared_ptr<GetPipelineLogRequest> request);
  GetUserByAliyunUidResponse getUserByAliyunUidWithOptions(shared_ptr<GetUserByAliyunUidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserByAliyunUidResponse getUserByAliyunUid(shared_ptr<GetUserByAliyunUidRequest> request);
  UpdatePipelineMemberResponse updatePipelineMemberWithOptions(shared_ptr<UpdatePipelineMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePipelineMemberResponse updatePipelineMember(shared_ptr<UpdatePipelineMemberRequest> request);
  ListDevopsProjectsResponse listDevopsProjectsWithOptions(shared_ptr<ListDevopsProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDevopsProjectsResponse listDevopsProjects(shared_ptr<ListDevopsProjectsRequest> request);
  CreateDevopsProjectTaskResponse createDevopsProjectTaskWithOptions(shared_ptr<CreateDevopsProjectTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDevopsProjectTaskResponse createDevopsProjectTask(shared_ptr<CreateDevopsProjectTaskRequest> request);
  GetPipelineInstanceBuildNumberStatusResponse getPipelineInstanceBuildNumberStatusWithOptions(shared_ptr<GetPipelineInstanceBuildNumberStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPipelineInstanceBuildNumberStatusResponse getPipelineInstanceBuildNumberStatus(shared_ptr<GetPipelineInstanceBuildNumberStatusRequest> request);
  ListDevopsProjectSprintsResponse listDevopsProjectSprintsWithOptions(shared_ptr<ListDevopsProjectSprintsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDevopsProjectSprintsResponse listDevopsProjectSprints(shared_ptr<ListDevopsProjectSprintsRequest> request);
  GetDevopsProjectInfoResponse getDevopsProjectInfoWithOptions(shared_ptr<GetDevopsProjectInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDevopsProjectInfoResponse getDevopsProjectInfo(shared_ptr<GetDevopsProjectInfoRequest> request);
  DeletePipelineMemberResponse deletePipelineMemberWithOptions(shared_ptr<DeletePipelineMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePipelineMemberResponse deletePipelineMember(shared_ptr<DeletePipelineMemberRequest> request);
  GetDevopsProjectSprintInfoResponse getDevopsProjectSprintInfoWithOptions(shared_ptr<GetDevopsProjectSprintInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDevopsProjectSprintInfoResponse getDevopsProjectSprintInfo(shared_ptr<GetDevopsProjectSprintInfoRequest> request);
  DeleteDevopsOrganizationMembersResponse deleteDevopsOrganizationMembersWithOptions(shared_ptr<DeleteDevopsOrganizationMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDevopsOrganizationMembersResponse deleteDevopsOrganizationMembers(shared_ptr<DeleteDevopsOrganizationMembersRequest> request);
  GetLastWorkspaceResponse getLastWorkspaceWithOptions(shared_ptr<GetLastWorkspaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLastWorkspaceResponse getLastWorkspace(shared_ptr<GetLastWorkspaceRequest> request);
  CreateCredentialResponse createCredentialWithOptions(shared_ptr<CreateCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCredentialResponse createCredential(shared_ptr<CreateCredentialRequest> request);
  ListCredentialsResponse listCredentialsWithOptions(shared_ptr<ListCredentialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCredentialsResponse listCredentials(shared_ptr<ListCredentialsRequest> request);
  CreatePipelineResponse createPipelineWithOptions(shared_ptr<CreatePipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePipelineResponse createPipeline(shared_ptr<CreatePipelineRequest> request);
  ListPipelinesResponse listPipelinesWithOptions(shared_ptr<ListPipelinesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPipelinesResponse listPipelines(shared_ptr<ListPipelinesRequest> request);
  CreatePipelineFromTemplateResponse createPipelineFromTemplateWithOptions(shared_ptr<CreatePipelineFromTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePipelineFromTemplateResponse createPipelineFromTemplate(shared_ptr<CreatePipelineFromTemplateRequest> request);
  ListSmartGroupResponse listSmartGroupWithOptions(shared_ptr<ListSmartGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSmartGroupResponse listSmartGroup(shared_ptr<ListSmartGroupRequest> request);
  TransferPipelineOwnerResponse transferPipelineOwnerWithOptions(shared_ptr<TransferPipelineOwnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TransferPipelineOwnerResponse transferPipelineOwner(shared_ptr<TransferPipelineOwnerRequest> request);
  CreateCommonGroupResponse createCommonGroupWithOptions(shared_ptr<CreateCommonGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCommonGroupResponse createCommonGroup(shared_ptr<CreateCommonGroupRequest> request);
  CreateDevopsOrganizationResponse createDevopsOrganizationWithOptions(shared_ptr<CreateDevopsOrganizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDevopsOrganizationResponse createDevopsOrganization(shared_ptr<CreateDevopsOrganizationRequest> request);
  ListDevopsScenarioFieldConfigResponse listDevopsScenarioFieldConfigWithOptions(shared_ptr<ListDevopsScenarioFieldConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDevopsScenarioFieldConfigResponse listDevopsScenarioFieldConfig(shared_ptr<ListDevopsScenarioFieldConfigRequest> request);
  ListPipelineTemplatesResponse listPipelineTemplatesWithOptions(shared_ptr<ListPipelineTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPipelineTemplatesResponse listPipelineTemplates(shared_ptr<ListPipelineTemplatesRequest> request);
  UpdateDevopsProjectTaskResponse updateDevopsProjectTaskWithOptions(shared_ptr<UpdateDevopsProjectTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDevopsProjectTaskResponse updateDevopsProjectTask(shared_ptr<UpdateDevopsProjectTaskRequest> request);
  GetDevopsProjectTaskInfoResponse getDevopsProjectTaskInfoWithOptions(shared_ptr<GetDevopsProjectTaskInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDevopsProjectTaskInfoResponse getDevopsProjectTaskInfo(shared_ptr<GetDevopsProjectTaskInfoRequest> request);
  GetPipelineInstanceGroupStatusResponse getPipelineInstanceGroupStatusWithOptions(shared_ptr<GetPipelineInstanceGroupStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPipelineInstanceGroupStatusResponse getPipelineInstanceGroupStatus(shared_ptr<GetPipelineInstanceGroupStatusRequest> request);
  UpdateTaskDetailResponse updateTaskDetailWithOptions(shared_ptr<UpdateTaskDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTaskDetailResponse updateTaskDetail(shared_ptr<UpdateTaskDetailRequest> request);
  GetTaskListFilterResponse getTaskListFilterWithOptions(shared_ptr<GetTaskListFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskListFilterResponse getTaskListFilter(shared_ptr<GetTaskListFilterRequest> request);
  GetProjectOptionResponse getProjectOptionWithOptions(shared_ptr<GetProjectOptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectOptionResponse getProjectOption(shared_ptr<GetProjectOptionRequest> request);
  UpdateCommonGroupResponse updateCommonGroupWithOptions(shared_ptr<UpdateCommonGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCommonGroupResponse updateCommonGroup(shared_ptr<UpdateCommonGroupRequest> request);
  ListCommonGroupResponse listCommonGroupWithOptions(shared_ptr<ListCommonGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCommonGroupResponse listCommonGroup(shared_ptr<ListCommonGroupRequest> request);
  DeleteDevopsProjectTaskResponse deleteDevopsProjectTaskWithOptions(shared_ptr<DeleteDevopsProjectTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDevopsProjectTaskResponse deleteDevopsProjectTask(shared_ptr<DeleteDevopsProjectTaskRequest> request);
  GetDevopsOrganizationMembersResponse getDevopsOrganizationMembersWithOptions(shared_ptr<GetDevopsOrganizationMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDevopsOrganizationMembersResponse getDevopsOrganizationMembers(shared_ptr<GetDevopsOrganizationMembersRequest> request);
  CreateDevopsProjectResponse createDevopsProjectWithOptions(shared_ptr<CreateDevopsProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDevopsProjectResponse createDevopsProject(shared_ptr<CreateDevopsProjectRequest> request);
  GetTaskDetailActivityResponse getTaskDetailActivityWithOptions(shared_ptr<GetTaskDetailActivityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskDetailActivityResponse getTaskDetailActivity(shared_ptr<GetTaskDetailActivityRequest> request);
  ExecutePipelineResponse executePipelineWithOptions(shared_ptr<ExecutePipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecutePipelineResponse executePipeline(shared_ptr<ExecutePipelineRequest> request);
  CreateServiceConnectionResponse createServiceConnectionWithOptions(shared_ptr<CreateServiceConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceConnectionResponse createServiceConnection(shared_ptr<CreateServiceConnectionRequest> request);
  GetPipelineInstHistoryResponse getPipelineInstHistoryWithOptions(shared_ptr<GetPipelineInstHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPipelineInstHistoryResponse getPipelineInstHistory(shared_ptr<GetPipelineInstHistoryRequest> request);
  GetPipelineStepLogResponse getPipelineStepLogWithOptions(shared_ptr<GetPipelineStepLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPipelineStepLogResponse getPipelineStepLog(shared_ptr<GetPipelineStepLogRequest> request);
  GetPipleineLatestInstanceStatusResponse getPipleineLatestInstanceStatusWithOptions(shared_ptr<GetPipleineLatestInstanceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPipleineLatestInstanceStatusResponse getPipleineLatestInstanceStatus(shared_ptr<GetPipleineLatestInstanceStatusRequest> request);
  ListDevopsProjectTasksResponse listDevopsProjectTasksWithOptions(shared_ptr<ListDevopsProjectTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDevopsProjectTasksResponse listDevopsProjectTasks(shared_ptr<ListDevopsProjectTasksRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Devops-rdc20200303

#endif
