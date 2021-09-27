// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DEVOPS20210625_H_
#define ALIBABACLOUD_DEVOPS20210625_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Devops20210625 {
class RetryPipelineJobRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  RetryPipelineJobRunResponseBody() {}

  explicit RetryPipelineJobRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
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
  shared_ptr<RetryPipelineJobRunResponseBody> body{};

  RetryPipelineJobRunResponse() {}

  explicit RetryPipelineJobRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<vector<ListResourceMembersResponseBodyResourceMembers>> resourceMembers{};

  ListResourceMembersResponseBody() {}

  explicit ListResourceMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (resourceMembers) {
      vector<boost::any> temp1;
      for(auto item1:*resourceMembers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["resourceMembers"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
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
  }


  virtual ~ListResourceMembersResponseBody() = default;
};
class ListResourceMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListResourceMembersResponseBody> body{};

  ListResourceMembersResponse() {}

  explicit ListResourceMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class GetHostGroupResponseBodyHostGroupHostInfos : public Darabonba::Model {
public:
  shared_ptr<long> updateTime{};
  shared_ptr<string> creatorAccountId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> modifierAccountId{};
  shared_ptr<string> ip{};
  shared_ptr<long> createTime{};
  shared_ptr<string> objectType{};
  shared_ptr<string> aliyunRegionId{};
  shared_ptr<string> machineSn{};

  GetHostGroupResponseBodyHostGroupHostInfos() {}

  explicit GetHostGroupResponseBodyHostGroupHostInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (creatorAccountId) {
      res["creatorAccountId"] = boost::any(*creatorAccountId);
    }
    if (instanceName) {
      res["instanceName"] = boost::any(*instanceName);
    }
    if (modifierAccountId) {
      res["modifierAccountId"] = boost::any(*modifierAccountId);
    }
    if (ip) {
      res["ip"] = boost::any(*ip);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (objectType) {
      res["objectType"] = boost::any(*objectType);
    }
    if (aliyunRegionId) {
      res["aliyunRegionId"] = boost::any(*aliyunRegionId);
    }
    if (machineSn) {
      res["machineSn"] = boost::any(*machineSn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
    if (m.find("creatorAccountId") != m.end() && !m["creatorAccountId"].empty()) {
      creatorAccountId = make_shared<string>(boost::any_cast<string>(m["creatorAccountId"]));
    }
    if (m.find("instanceName") != m.end() && !m["instanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["instanceName"]));
    }
    if (m.find("modifierAccountId") != m.end() && !m["modifierAccountId"].empty()) {
      modifierAccountId = make_shared<string>(boost::any_cast<string>(m["modifierAccountId"]));
    }
    if (m.find("ip") != m.end() && !m["ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["ip"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("objectType") != m.end() && !m["objectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["objectType"]));
    }
    if (m.find("aliyunRegionId") != m.end() && !m["aliyunRegionId"].empty()) {
      aliyunRegionId = make_shared<string>(boost::any_cast<string>(m["aliyunRegionId"]));
    }
    if (m.find("machineSn") != m.end() && !m["machineSn"].empty()) {
      machineSn = make_shared<string>(boost::any_cast<string>(m["machineSn"]));
    }
  }


  virtual ~GetHostGroupResponseBodyHostGroupHostInfos() = default;
};
class GetHostGroupResponseBodyHostGroup : public Darabonba::Model {
public:
  shared_ptr<string> creatorAccountId{};
  shared_ptr<long> upateTIme{};
  shared_ptr<long> hostNum{};
  shared_ptr<string> modifierAccountId{};
  shared_ptr<string> description{};
  shared_ptr<string> type{};
  shared_ptr<long> createTime{};
  shared_ptr<string> ecsType{};
  shared_ptr<string> aliyunRegion{};
  shared_ptr<string> ecsLabelKey{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<long> serviceConnectionId{};
  shared_ptr<vector<GetHostGroupResponseBodyHostGroupHostInfos>> hostInfos{};
  shared_ptr<string> ecsLabelValue{};

  GetHostGroupResponseBodyHostGroup() {}

  explicit GetHostGroupResponseBodyHostGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creatorAccountId) {
      res["creatorAccountId"] = boost::any(*creatorAccountId);
    }
    if (upateTIme) {
      res["upateTIme"] = boost::any(*upateTIme);
    }
    if (hostNum) {
      res["hostNum"] = boost::any(*hostNum);
    }
    if (modifierAccountId) {
      res["modifierAccountId"] = boost::any(*modifierAccountId);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (ecsType) {
      res["ecsType"] = boost::any(*ecsType);
    }
    if (aliyunRegion) {
      res["aliyunRegion"] = boost::any(*aliyunRegion);
    }
    if (ecsLabelKey) {
      res["ecsLabelKey"] = boost::any(*ecsLabelKey);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (serviceConnectionId) {
      res["serviceConnectionId"] = boost::any(*serviceConnectionId);
    }
    if (hostInfos) {
      vector<boost::any> temp1;
      for(auto item1:*hostInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["hostInfos"] = boost::any(temp1);
    }
    if (ecsLabelValue) {
      res["ecsLabelValue"] = boost::any(*ecsLabelValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("creatorAccountId") != m.end() && !m["creatorAccountId"].empty()) {
      creatorAccountId = make_shared<string>(boost::any_cast<string>(m["creatorAccountId"]));
    }
    if (m.find("upateTIme") != m.end() && !m["upateTIme"].empty()) {
      upateTIme = make_shared<long>(boost::any_cast<long>(m["upateTIme"]));
    }
    if (m.find("hostNum") != m.end() && !m["hostNum"].empty()) {
      hostNum = make_shared<long>(boost::any_cast<long>(m["hostNum"]));
    }
    if (m.find("modifierAccountId") != m.end() && !m["modifierAccountId"].empty()) {
      modifierAccountId = make_shared<string>(boost::any_cast<string>(m["modifierAccountId"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("ecsType") != m.end() && !m["ecsType"].empty()) {
      ecsType = make_shared<string>(boost::any_cast<string>(m["ecsType"]));
    }
    if (m.find("aliyunRegion") != m.end() && !m["aliyunRegion"].empty()) {
      aliyunRegion = make_shared<string>(boost::any_cast<string>(m["aliyunRegion"]));
    }
    if (m.find("ecsLabelKey") != m.end() && !m["ecsLabelKey"].empty()) {
      ecsLabelKey = make_shared<string>(boost::any_cast<string>(m["ecsLabelKey"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("serviceConnectionId") != m.end() && !m["serviceConnectionId"].empty()) {
      serviceConnectionId = make_shared<long>(boost::any_cast<long>(m["serviceConnectionId"]));
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
    if (m.find("ecsLabelValue") != m.end() && !m["ecsLabelValue"].empty()) {
      ecsLabelValue = make_shared<string>(boost::any_cast<string>(m["ecsLabelValue"]));
    }
  }


  virtual ~GetHostGroupResponseBodyHostGroup() = default;
};
class GetHostGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<GetHostGroupResponseBodyHostGroup> hostGroup{};

  GetHostGroupResponseBody() {}

  explicit GetHostGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (hostGroup) {
      res["hostGroup"] = hostGroup ? boost::any(hostGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("hostGroup") != m.end() && !m["hostGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["hostGroup"].type()) {
        GetHostGroupResponseBodyHostGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["hostGroup"]));
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
  shared_ptr<string> value{};
  shared_ptr<string> name{};
  shared_ptr<bool> isEncrypted{};

  GetVariableGroupResponseBodyVariableGroupVariables() {}

  explicit GetVariableGroupResponseBodyVariableGroupVariables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["value"] = boost::any(*value);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (isEncrypted) {
      res["isEncrypted"] = boost::any(*isEncrypted);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("isEncrypted") != m.end() && !m["isEncrypted"].empty()) {
      isEncrypted = make_shared<bool>(boost::any_cast<bool>(m["isEncrypted"]));
    }
  }


  virtual ~GetVariableGroupResponseBodyVariableGroupVariables() = default;
};
class GetVariableGroupResponseBodyVariableGroup : public Darabonba::Model {
public:
  shared_ptr<string> ccreatorAccountId{};
  shared_ptr<string> description{};
  shared_ptr<long> updateTime{};
  shared_ptr<long> id{};
  shared_ptr<string> modifierAccountId{};
  shared_ptr<string> name{};
  shared_ptr<vector<GetVariableGroupResponseBodyVariableGroupRelatedPipelines>> relatedPipelines{};
  shared_ptr<vector<GetVariableGroupResponseBodyVariableGroupVariables>> variables{};
  shared_ptr<long> createTime{};

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
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
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
    if (variables) {
      vector<boost::any> temp1;
      for(auto item1:*variables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["variables"] = boost::any(temp1);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ccreatorAccountId") != m.end() && !m["ccreatorAccountId"].empty()) {
      ccreatorAccountId = make_shared<string>(boost::any_cast<string>(m["ccreatorAccountId"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
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
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
  }


  virtual ~GetVariableGroupResponseBodyVariableGroup() = default;
};
class GetVariableGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<GetVariableGroupResponseBodyVariableGroup> variableGroup{};

  GetVariableGroupResponseBody() {}

  explicit GetVariableGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
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
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
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
  shared_ptr<GetVariableGroupResponseBody> body{};

  GetVariableGroupResponse() {}

  explicit GetVariableGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class ListPipelinesRequest : public Darabonba::Model {
public:
  shared_ptr<string> pipelineName{};
  shared_ptr<string> creatorAccountIds{};
  shared_ptr<string> executeAccountIds{};
  shared_ptr<string> statusList{};
  shared_ptr<long> createStartTime{};
  shared_ptr<long> createEndTime{};
  shared_ptr<long> executeStartTime{};
  shared_ptr<long> executeEndTime{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListPipelinesRequest() {}

  explicit ListPipelinesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pipelineName) {
      res["pipelineName"] = boost::any(*pipelineName);
    }
    if (creatorAccountIds) {
      res["creatorAccountIds"] = boost::any(*creatorAccountIds);
    }
    if (executeAccountIds) {
      res["executeAccountIds"] = boost::any(*executeAccountIds);
    }
    if (statusList) {
      res["statusList"] = boost::any(*statusList);
    }
    if (createStartTime) {
      res["createStartTime"] = boost::any(*createStartTime);
    }
    if (createEndTime) {
      res["createEndTime"] = boost::any(*createEndTime);
    }
    if (executeStartTime) {
      res["executeStartTime"] = boost::any(*executeStartTime);
    }
    if (executeEndTime) {
      res["executeEndTime"] = boost::any(*executeEndTime);
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
    if (m.find("pipelineName") != m.end() && !m["pipelineName"].empty()) {
      pipelineName = make_shared<string>(boost::any_cast<string>(m["pipelineName"]));
    }
    if (m.find("creatorAccountIds") != m.end() && !m["creatorAccountIds"].empty()) {
      creatorAccountIds = make_shared<string>(boost::any_cast<string>(m["creatorAccountIds"]));
    }
    if (m.find("executeAccountIds") != m.end() && !m["executeAccountIds"].empty()) {
      executeAccountIds = make_shared<string>(boost::any_cast<string>(m["executeAccountIds"]));
    }
    if (m.find("statusList") != m.end() && !m["statusList"].empty()) {
      statusList = make_shared<string>(boost::any_cast<string>(m["statusList"]));
    }
    if (m.find("createStartTime") != m.end() && !m["createStartTime"].empty()) {
      createStartTime = make_shared<long>(boost::any_cast<long>(m["createStartTime"]));
    }
    if (m.find("createEndTime") != m.end() && !m["createEndTime"].empty()) {
      createEndTime = make_shared<long>(boost::any_cast<long>(m["createEndTime"]));
    }
    if (m.find("executeStartTime") != m.end() && !m["executeStartTime"].empty()) {
      executeStartTime = make_shared<long>(boost::any_cast<long>(m["executeStartTime"]));
    }
    if (m.find("executeEndTime") != m.end() && !m["executeEndTime"].empty()) {
      executeEndTime = make_shared<long>(boost::any_cast<long>(m["executeEndTime"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListPipelinesRequest() = default;
};
class ListPipelinesResponseBodyPipelines : public Darabonba::Model {
public:
  shared_ptr<string> pipelineName{};
  shared_ptr<long> pipelineId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorAccountId{};

  ListPipelinesResponseBodyPipelines() {}

  explicit ListPipelinesResponseBodyPipelines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pipelineName) {
      res["pipelineName"] = boost::any(*pipelineName);
    }
    if (pipelineId) {
      res["pipelineId"] = boost::any(*pipelineId);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorAccountId) {
      res["creatorAccountId"] = boost::any(*creatorAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pipelineName") != m.end() && !m["pipelineName"].empty()) {
      pipelineName = make_shared<string>(boost::any_cast<string>(m["pipelineName"]));
    }
    if (m.find("pipelineId") != m.end() && !m["pipelineId"].empty()) {
      pipelineId = make_shared<long>(boost::any_cast<long>(m["pipelineId"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorAccountId") != m.end() && !m["creatorAccountId"].empty()) {
      creatorAccountId = make_shared<string>(boost::any_cast<string>(m["creatorAccountId"]));
    }
  }


  virtual ~ListPipelinesResponseBodyPipelines() = default;
};
class ListPipelinesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListPipelinesResponseBodyPipelines>> pipelines{};

  ListPipelinesResponseBody() {}

  explicit ListPipelinesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
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
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  UpdateResourceMemberResponseBody() {}

  explicit UpdateResourceMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
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
  shared_ptr<UpdateResourceMemberResponseBody> body{};

  UpdateResourceMemberResponse() {}

  explicit UpdateResourceMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<string> name{};
  shared_ptr<string> description{};
  shared_ptr<string> variables{};

  UpdateVariableGroupRequest() {}

  explicit UpdateVariableGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (variables) {
      res["variables"] = boost::any(*variables);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      variables = make_shared<string>(boost::any_cast<string>(m["variables"]));
    }
  }


  virtual ~UpdateVariableGroupRequest() = default;
};
class UpdateVariableGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  UpdateVariableGroupResponseBody() {}

  explicit UpdateVariableGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
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
  shared_ptr<UpdateVariableGroupResponseBody> body{};

  UpdateVariableGroupResponse() {}

  explicit UpdateVariableGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DeleteResourceMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  DeleteResourceMemberResponseBody() {}

  explicit DeleteResourceMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
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
  shared_ptr<DeleteResourceMemberResponseBody> body{};

  DeleteResourceMemberResponse() {}

  explicit DeleteResourceMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class ListHostGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> ids{};
  shared_ptr<long> createStartTime{};
  shared_ptr<long> createEndTime{};
  shared_ptr<string> name{};
  shared_ptr<string> creatorAccountIds{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> pageSort{};
  shared_ptr<string> pageOrder{};

  ListHostGroupsRequest() {}

  explicit ListHostGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ids) {
      res["ids"] = boost::any(*ids);
    }
    if (createStartTime) {
      res["createStartTime"] = boost::any(*createStartTime);
    }
    if (createEndTime) {
      res["createEndTime"] = boost::any(*createEndTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (creatorAccountIds) {
      res["creatorAccountIds"] = boost::any(*creatorAccountIds);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (pageSort) {
      res["pageSort"] = boost::any(*pageSort);
    }
    if (pageOrder) {
      res["pageOrder"] = boost::any(*pageOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ids") != m.end() && !m["ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["ids"]));
    }
    if (m.find("createStartTime") != m.end() && !m["createStartTime"].empty()) {
      createStartTime = make_shared<long>(boost::any_cast<long>(m["createStartTime"]));
    }
    if (m.find("createEndTime") != m.end() && !m["createEndTime"].empty()) {
      createEndTime = make_shared<long>(boost::any_cast<long>(m["createEndTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("creatorAccountIds") != m.end() && !m["creatorAccountIds"].empty()) {
      creatorAccountIds = make_shared<string>(boost::any_cast<string>(m["creatorAccountIds"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("pageSort") != m.end() && !m["pageSort"].empty()) {
      pageSort = make_shared<string>(boost::any_cast<string>(m["pageSort"]));
    }
    if (m.find("pageOrder") != m.end() && !m["pageOrder"].empty()) {
      pageOrder = make_shared<string>(boost::any_cast<string>(m["pageOrder"]));
    }
  }


  virtual ~ListHostGroupsRequest() = default;
};
class ListHostGroupsResponseBodyHostGroups : public Darabonba::Model {
public:
  shared_ptr<string> creatorAccountId{};
  shared_ptr<long> updateTime{};
  shared_ptr<long> hostNum{};
  shared_ptr<string> modifierAccountId{};
  shared_ptr<string> description{};
  shared_ptr<string> type{};
  shared_ptr<long> createTime{};
  shared_ptr<string> ecsType{};
  shared_ptr<string> aliyunRegion{};
  shared_ptr<string> ecsLabelKey{};
  shared_ptr<string> name{};
  shared_ptr<long> id{};
  shared_ptr<long> serviceConnectionId{};
  shared_ptr<string> ecsLabelValue{};

  ListHostGroupsResponseBodyHostGroups() {}

  explicit ListHostGroupsResponseBodyHostGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creatorAccountId) {
      res["creatorAccountId"] = boost::any(*creatorAccountId);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (hostNum) {
      res["hostNum"] = boost::any(*hostNum);
    }
    if (modifierAccountId) {
      res["modifierAccountId"] = boost::any(*modifierAccountId);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (ecsType) {
      res["ecsType"] = boost::any(*ecsType);
    }
    if (aliyunRegion) {
      res["aliyunRegion"] = boost::any(*aliyunRegion);
    }
    if (ecsLabelKey) {
      res["ecsLabelKey"] = boost::any(*ecsLabelKey);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (serviceConnectionId) {
      res["serviceConnectionId"] = boost::any(*serviceConnectionId);
    }
    if (ecsLabelValue) {
      res["ecsLabelValue"] = boost::any(*ecsLabelValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("creatorAccountId") != m.end() && !m["creatorAccountId"].empty()) {
      creatorAccountId = make_shared<string>(boost::any_cast<string>(m["creatorAccountId"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
    if (m.find("hostNum") != m.end() && !m["hostNum"].empty()) {
      hostNum = make_shared<long>(boost::any_cast<long>(m["hostNum"]));
    }
    if (m.find("modifierAccountId") != m.end() && !m["modifierAccountId"].empty()) {
      modifierAccountId = make_shared<string>(boost::any_cast<string>(m["modifierAccountId"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("ecsType") != m.end() && !m["ecsType"].empty()) {
      ecsType = make_shared<string>(boost::any_cast<string>(m["ecsType"]));
    }
    if (m.find("aliyunRegion") != m.end() && !m["aliyunRegion"].empty()) {
      aliyunRegion = make_shared<string>(boost::any_cast<string>(m["aliyunRegion"]));
    }
    if (m.find("ecsLabelKey") != m.end() && !m["ecsLabelKey"].empty()) {
      ecsLabelKey = make_shared<string>(boost::any_cast<string>(m["ecsLabelKey"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("serviceConnectionId") != m.end() && !m["serviceConnectionId"].empty()) {
      serviceConnectionId = make_shared<long>(boost::any_cast<long>(m["serviceConnectionId"]));
    }
    if (m.find("ecsLabelValue") != m.end() && !m["ecsLabelValue"].empty()) {
      ecsLabelValue = make_shared<string>(boost::any_cast<string>(m["ecsLabelValue"]));
    }
  }


  virtual ~ListHostGroupsResponseBodyHostGroups() = default;
};
class ListHostGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<vector<ListHostGroupsResponseBodyHostGroups>> hostGroups{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> nextToken{};

  ListHostGroupsResponseBody() {}

  explicit ListHostGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (hostGroups) {
      vector<boost::any> temp1;
      for(auto item1:*hostGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["hostGroups"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
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
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
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
class ResetSshKeyResponseBodySshKey : public Darabonba::Model {
public:
  shared_ptr<string> publicKey{};
  shared_ptr<long> id{};

  ResetSshKeyResponseBodySshKey() {}

  explicit ResetSshKeyResponseBodySshKey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (publicKey) {
      res["publicKey"] = boost::any(*publicKey);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("publicKey") != m.end() && !m["publicKey"].empty()) {
      publicKey = make_shared<string>(boost::any_cast<string>(m["publicKey"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
  }


  virtual ~ResetSshKeyResponseBodySshKey() = default;
};
class ResetSshKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<ResetSshKeyResponseBodySshKey> sshKey{};

  ResetSshKeyResponseBody() {}

  explicit ResetSshKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (sshKey) {
      res["sshKey"] = sshKey ? boost::any(sshKey->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("sshKey") != m.end() && !m["sshKey"].empty()) {
      if (typeid(map<string, boost::any>) == m["sshKey"].type()) {
        ResetSshKeyResponseBodySshKey model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sshKey"]));
        sshKey = make_shared<ResetSshKeyResponseBodySshKey>(model1);
      }
    }
  }


  virtual ~ResetSshKeyResponseBody() = default;
};
class ResetSshKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ResetSshKeyResponseBody> body{};

  ResetSshKeyResponse() {}

  explicit ResetSshKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class CreateWorkspaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> workspaceTemplate{};
  shared_ptr<string> codeUrl{};
  shared_ptr<string> codeVersion{};
  shared_ptr<string> filePath{};
  shared_ptr<bool> reuse{};
  shared_ptr<string> resourceIdentifier{};
  shared_ptr<string> requestFrom{};

  CreateWorkspaceRequest() {}

  explicit CreateWorkspaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (workspaceTemplate) {
      res["workspaceTemplate"] = boost::any(*workspaceTemplate);
    }
    if (codeUrl) {
      res["codeUrl"] = boost::any(*codeUrl);
    }
    if (codeVersion) {
      res["codeVersion"] = boost::any(*codeVersion);
    }
    if (filePath) {
      res["filePath"] = boost::any(*filePath);
    }
    if (reuse) {
      res["reuse"] = boost::any(*reuse);
    }
    if (resourceIdentifier) {
      res["resourceIdentifier"] = boost::any(*resourceIdentifier);
    }
    if (requestFrom) {
      res["requestFrom"] = boost::any(*requestFrom);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("workspaceTemplate") != m.end() && !m["workspaceTemplate"].empty()) {
      workspaceTemplate = make_shared<string>(boost::any_cast<string>(m["workspaceTemplate"]));
    }
    if (m.find("codeUrl") != m.end() && !m["codeUrl"].empty()) {
      codeUrl = make_shared<string>(boost::any_cast<string>(m["codeUrl"]));
    }
    if (m.find("codeVersion") != m.end() && !m["codeVersion"].empty()) {
      codeVersion = make_shared<string>(boost::any_cast<string>(m["codeVersion"]));
    }
    if (m.find("filePath") != m.end() && !m["filePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["filePath"]));
    }
    if (m.find("reuse") != m.end() && !m["reuse"].empty()) {
      reuse = make_shared<bool>(boost::any_cast<bool>(m["reuse"]));
    }
    if (m.find("resourceIdentifier") != m.end() && !m["resourceIdentifier"].empty()) {
      resourceIdentifier = make_shared<string>(boost::any_cast<string>(m["resourceIdentifier"]));
    }
    if (m.find("requestFrom") != m.end() && !m["requestFrom"].empty()) {
      requestFrom = make_shared<string>(boost::any_cast<string>(m["requestFrom"]));
    }
  }


  virtual ~CreateWorkspaceRequest() = default;
};
class CreateWorkspaceResponseBodyWorkspace : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<string> template_{};
  shared_ptr<string> creator{};
  shared_ptr<string> createTime{};

  CreateWorkspaceResponseBodyWorkspace() {}

  explicit CreateWorkspaceResponseBodyWorkspace(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (template_) {
      res["template"] = boost::any(*template_);
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
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
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("template") != m.end() && !m["template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["template"]));
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
  }


  virtual ~CreateWorkspaceResponseBodyWorkspace() = default;
};
class CreateWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateWorkspaceResponseBodyWorkspace> workspace{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};

  CreateWorkspaceResponseBody() {}

  explicit CreateWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workspace) {
      res["workspace"] = workspace ? boost::any(workspace->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      if (typeid(map<string, boost::any>) == m["workspace"].type()) {
        CreateWorkspaceResponseBodyWorkspace model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["workspace"]));
        workspace = make_shared<CreateWorkspaceResponseBodyWorkspace>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
  }


  virtual ~CreateWorkspaceResponseBody() = default;
};
class CreateWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateWorkspaceResponseBody> body{};

  CreateWorkspaceResponse() {}

  explicit CreateWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<long> ownerAccountId{};
  shared_ptr<string> name{};
  shared_ptr<long> id{};
  shared_ptr<string> type{};
  shared_ptr<long> createTime{};

  ListServiceConnectionsResponseBodyServiceConnections() {}

  explicit ListServiceConnectionsResponseBodyServiceConnections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerAccountId) {
      res["ownerAccountId"] = boost::any(*ownerAccountId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ownerAccountId") != m.end() && !m["ownerAccountId"].empty()) {
      ownerAccountId = make_shared<long>(boost::any_cast<long>(m["ownerAccountId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
  }


  virtual ~ListServiceConnectionsResponseBodyServiceConnections() = default;
};
class ListServiceConnectionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<vector<ListServiceConnectionsResponseBodyServiceConnections>> serviceConnections{};

  ListServiceConnectionsResponseBody() {}

  explicit ListServiceConnectionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (serviceConnections) {
      vector<boost::any> temp1;
      for(auto item1:*serviceConnections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceConnections"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
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
class CreateHostGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> envId{};
  shared_ptr<string> name{};
  shared_ptr<long> serviceConnectionId{};
  shared_ptr<string> tagIds{};
  shared_ptr<string> ecsType{};
  shared_ptr<string> ecsLabelKey{};
  shared_ptr<string> ecsLabelValue{};
  shared_ptr<string> aliyunRegion{};
  shared_ptr<string> machineInfos{};

  CreateHostGroupRequest() {}

  explicit CreateHostGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (envId) {
      res["envId"] = boost::any(*envId);
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
    if (ecsType) {
      res["ecsType"] = boost::any(*ecsType);
    }
    if (ecsLabelKey) {
      res["ecsLabelKey"] = boost::any(*ecsLabelKey);
    }
    if (ecsLabelValue) {
      res["ecsLabelValue"] = boost::any(*ecsLabelValue);
    }
    if (aliyunRegion) {
      res["aliyunRegion"] = boost::any(*aliyunRegion);
    }
    if (machineInfos) {
      res["machineInfos"] = boost::any(*machineInfos);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("envId") != m.end() && !m["envId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["envId"]));
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
    if (m.find("ecsType") != m.end() && !m["ecsType"].empty()) {
      ecsType = make_shared<string>(boost::any_cast<string>(m["ecsType"]));
    }
    if (m.find("ecsLabelKey") != m.end() && !m["ecsLabelKey"].empty()) {
      ecsLabelKey = make_shared<string>(boost::any_cast<string>(m["ecsLabelKey"]));
    }
    if (m.find("ecsLabelValue") != m.end() && !m["ecsLabelValue"].empty()) {
      ecsLabelValue = make_shared<string>(boost::any_cast<string>(m["ecsLabelValue"]));
    }
    if (m.find("aliyunRegion") != m.end() && !m["aliyunRegion"].empty()) {
      aliyunRegion = make_shared<string>(boost::any_cast<string>(m["aliyunRegion"]));
    }
    if (m.find("machineInfos") != m.end() && !m["machineInfos"].empty()) {
      machineInfos = make_shared<string>(boost::any_cast<string>(m["machineInfos"]));
    }
  }


  virtual ~CreateHostGroupRequest() = default;
};
class CreateHostGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<long> hostGroupId{};

  CreateHostGroupResponseBody() {}

  explicit CreateHostGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (hostGroupId) {
      res["hostGroupId"] = boost::any(*hostGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("hostGroupId") != m.end() && !m["hostGroupId"].empty()) {
      hostGroupId = make_shared<long>(boost::any_cast<long>(m["hostGroupId"]));
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
class StopPipelineRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  StopPipelineRunResponseBody() {}

  explicit StopPipelineRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
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
  shared_ptr<StopPipelineRunResponseBody> body{};

  StopPipelineRunResponse() {}

  explicit StopPipelineRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class UpdateHostGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> envId{};
  shared_ptr<string> name{};
  shared_ptr<long> serviceConnectionId{};
  shared_ptr<string> tagIds{};
  shared_ptr<string> ecsType{};
  shared_ptr<string> ecsLabelKey{};
  shared_ptr<string> ecsLabelValue{};
  shared_ptr<string> aliyunRegion{};
  shared_ptr<string> machineInfos{};

  UpdateHostGroupRequest() {}

  explicit UpdateHostGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (envId) {
      res["envId"] = boost::any(*envId);
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
    if (ecsType) {
      res["ecsType"] = boost::any(*ecsType);
    }
    if (ecsLabelKey) {
      res["ecsLabelKey"] = boost::any(*ecsLabelKey);
    }
    if (ecsLabelValue) {
      res["ecsLabelValue"] = boost::any(*ecsLabelValue);
    }
    if (aliyunRegion) {
      res["aliyunRegion"] = boost::any(*aliyunRegion);
    }
    if (machineInfos) {
      res["machineInfos"] = boost::any(*machineInfos);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("envId") != m.end() && !m["envId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["envId"]));
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
    if (m.find("ecsType") != m.end() && !m["ecsType"].empty()) {
      ecsType = make_shared<string>(boost::any_cast<string>(m["ecsType"]));
    }
    if (m.find("ecsLabelKey") != m.end() && !m["ecsLabelKey"].empty()) {
      ecsLabelKey = make_shared<string>(boost::any_cast<string>(m["ecsLabelKey"]));
    }
    if (m.find("ecsLabelValue") != m.end() && !m["ecsLabelValue"].empty()) {
      ecsLabelValue = make_shared<string>(boost::any_cast<string>(m["ecsLabelValue"]));
    }
    if (m.find("aliyunRegion") != m.end() && !m["aliyunRegion"].empty()) {
      aliyunRegion = make_shared<string>(boost::any_cast<string>(m["aliyunRegion"]));
    }
    if (m.find("machineInfos") != m.end() && !m["machineInfos"].empty()) {
      machineInfos = make_shared<string>(boost::any_cast<string>(m["machineInfos"]));
    }
  }


  virtual ~UpdateHostGroupRequest() = default;
};
class UpdateHostGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  UpdateHostGroupResponseBody() {}

  explicit UpdateHostGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
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
  shared_ptr<UpdateHostGroupResponseBody> body{};

  UpdateHostGroupResponse() {}

  explicit UpdateHostGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  CreateResourceMemberResponseBody() {}

  explicit CreateResourceMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
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
  shared_ptr<CreateResourceMemberResponseBody> body{};

  CreateResourceMemberResponse() {}

  explicit CreateResourceMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class SkipPipelineJobRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  SkipPipelineJobRunResponseBody() {}

  explicit SkipPipelineJobRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
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
  shared_ptr<SkipPipelineJobRunResponseBody> body{};

  SkipPipelineJobRunResponse() {}

  explicit SkipPipelineJobRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<string> organizationRoleName{};
  shared_ptr<string> organizationRoleId{};
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
    if (organizationRoleName) {
      res["organizationRoleName"] = boost::any(*organizationRoleName);
    }
    if (organizationRoleId) {
      res["organizationRoleId"] = boost::any(*organizationRoleId);
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
    if (m.find("organizationRoleName") != m.end() && !m["organizationRoleName"].empty()) {
      organizationRoleName = make_shared<string>(boost::any_cast<string>(m["organizationRoleName"]));
    }
    if (m.find("organizationRoleId") != m.end() && !m["organizationRoleId"].empty()) {
      organizationRoleId = make_shared<string>(boost::any_cast<string>(m["organizationRoleId"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
  }


  virtual ~GetOrganizationMemberResponseBodyMember() = default;
};
class GetOrganizationMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<GetOrganizationMemberResponseBodyMember> member{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  GetOrganizationMemberResponseBody() {}

  explicit GetOrganizationMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (member) {
      res["member"] = member ? boost::any(member->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
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
  shared_ptr<GetOrganizationMemberResponseBody> body{};

  GetOrganizationMemberResponse() {}

  explicit GetOrganizationMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class StopPipelineJobRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  StopPipelineJobRunResponseBody() {}

  explicit StopPipelineJobRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
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
  shared_ptr<StopPipelineJobRunResponseBody> body{};

  StopPipelineJobRunResponse() {}

  explicit StopPipelineJobRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> pipelineRunId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};

  StartPipelineRunResponseBody() {}

  explicit StartPipelineRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (pipelineRunId) {
      res["pipelineRunId"] = boost::any(*pipelineRunId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("pipelineRunId") != m.end() && !m["pipelineRunId"].empty()) {
      pipelineRunId = make_shared<long>(boost::any_cast<long>(m["pipelineRunId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
  }


  virtual ~StartPipelineRunResponseBody() = default;
};
class StartPipelineRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartPipelineRunResponseBody> body{};

  StartPipelineRunResponse() {}

  explicit StartPipelineRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class ListWorkspacesRequest : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};
  shared_ptr<vector<string>> statusList{};
  shared_ptr<vector<string>> workspaceTemplateList{};

  ListWorkspacesRequest() {}

  explicit ListWorkspacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
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
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
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
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> statusListShrink{};
  shared_ptr<string> workspaceTemplateListShrink{};

  ListWorkspacesShrinkRequest() {}

  explicit ListWorkspacesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
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
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
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
  shared_ptr<string> codeVersion{};
  shared_ptr<string> codeUrl{};
  shared_ptr<string> name{};
  shared_ptr<string> spec{};
  shared_ptr<string> status{};
  shared_ptr<string> template_{};
  shared_ptr<string> id{};
  shared_ptr<string> userId{};
  shared_ptr<string> createTime{};

  ListWorkspacesResponseBodyWorkspaces() {}

  explicit ListWorkspacesResponseBodyWorkspaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeVersion) {
      res["codeVersion"] = boost::any(*codeVersion);
    }
    if (codeUrl) {
      res["codeUrl"] = boost::any(*codeUrl);
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
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("codeVersion") != m.end() && !m["codeVersion"].empty()) {
      codeVersion = make_shared<string>(boost::any_cast<string>(m["codeVersion"]));
    }
    if (m.find("codeUrl") != m.end() && !m["codeUrl"].empty()) {
      codeUrl = make_shared<string>(boost::any_cast<string>(m["codeUrl"]));
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
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
  }


  virtual ~ListWorkspacesResponseBodyWorkspaces() = default;
};
class ListWorkspacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};
  shared_ptr<vector<ListWorkspacesResponseBodyWorkspaces>> workspaces{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};

  ListWorkspacesResponseBody() {}

  explicit ListWorkspacesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (workspaces) {
      vector<boost::any> temp1;
      for(auto item1:*workspaces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["workspaces"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
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
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
  }


  virtual ~ListWorkspacesResponseBody() = default;
};
class ListWorkspacesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListWorkspacesResponseBody> body{};

  ListWorkspacesResponse() {}

  explicit ListWorkspacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<string> sign{};
  shared_ptr<string> type{};
  shared_ptr<GetPipelineRunResponseBodyPipelineRunSourcesData> data{};

  GetPipelineRunResponseBodyPipelineRunSources() {}

  explicit GetPipelineRunResponseBodyPipelineRunSources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sign) {
      res["sign"] = boost::any(*sign);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sign") != m.end() && !m["sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["sign"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetPipelineRunResponseBodyPipelineRunSourcesData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetPipelineRunResponseBodyPipelineRunSourcesData>(model1);
      }
    }
  }


  virtual ~GetPipelineRunResponseBodyPipelineRunSources() = default;
};
class GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<string> params{};
  shared_ptr<string> status{};
  shared_ptr<long> startTime{};

  GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs() {}

  explicit GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
  }


  virtual ~GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs() = default;
};
class GetPipelineRunResponseBodyPipelineRunStagesStageInfo : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> startTime{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<vector<GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs>> jobs{};

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
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (jobs) {
      vector<boost::any> temp1;
      for(auto item1:*jobs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["jobs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
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
  shared_ptr<string> creatorAccountId{};
  shared_ptr<long> createTime{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> modifierAccountId{};
  shared_ptr<long> pipelineId{};
  shared_ptr<long> pipelineRunId{};
  shared_ptr<string> status{};
  shared_ptr<long> triggerMode{};
  shared_ptr<vector<vector<string>>> stageGroup{};
  shared_ptr<vector<GetPipelineRunResponseBodyPipelineRunSources>> sources{};
  shared_ptr<vector<GetPipelineRunResponseBodyPipelineRunStages>> stages{};

  GetPipelineRunResponseBodyPipelineRun() {}

  explicit GetPipelineRunResponseBodyPipelineRun(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creatorAccountId) {
      res["creatorAccountId"] = boost::any(*creatorAccountId);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
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
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (triggerMode) {
      res["triggerMode"] = boost::any(*triggerMode);
    }
    if (stageGroup) {
      res["stageGroup"] = boost::any(*stageGroup);
    }
    if (sources) {
      vector<boost::any> temp1;
      for(auto item1:*sources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["sources"] = boost::any(temp1);
    }
    if (stages) {
      vector<boost::any> temp1;
      for(auto item1:*stages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["stages"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("creatorAccountId") != m.end() && !m["creatorAccountId"].empty()) {
      creatorAccountId = make_shared<string>(boost::any_cast<string>(m["creatorAccountId"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
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
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("triggerMode") != m.end() && !m["triggerMode"].empty()) {
      triggerMode = make_shared<long>(boost::any_cast<long>(m["triggerMode"]));
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
  }


  virtual ~GetPipelineRunResponseBodyPipelineRun() = default;
};
class GetPipelineRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<GetPipelineRunResponseBodyPipelineRun> pipelineRun{};
  shared_ptr<bool> success{};
  shared_ptr<bool> errorCode{};

  GetPipelineRunResponseBody() {}

  explicit GetPipelineRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (pipelineRun) {
      res["pipelineRun"] = pipelineRun ? boost::any(pipelineRun->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
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
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<bool>(boost::any_cast<bool>(m["errorCode"]));
    }
  }


  virtual ~GetPipelineRunResponseBody() = default;
};
class GetPipelineRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPipelineRunResponseBody> body{};

  GetPipelineRunResponse() {}

  explicit GetPipelineRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class GetPipelineResponseBodyPipelinePipelineConfigSourcesData : public Darabonba::Model {
public:
  shared_ptr<string> branch{};
  shared_ptr<long> serviceConnectionId{};
  shared_ptr<string> label{};
  shared_ptr<bool> isTrigger{};
  shared_ptr<string> repo{};
  shared_ptr<string> triggerFilter{};
  shared_ptr<string> webhook{};
  shared_ptr<vector<string>> events{};
  shared_ptr<bool> isBranchMode{};
  shared_ptr<bool> isSubmodule{};
  shared_ptr<bool> isCloneDepth{};
  shared_ptr<long> cloneDepth{};
  shared_ptr<long> credentialId{};
  shared_ptr<string> credentialType{};
  shared_ptr<string> credentialLabel{};
  shared_ptr<string> namespace_{};

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
    if (serviceConnectionId) {
      res["serviceConnectionId"] = boost::any(*serviceConnectionId);
    }
    if (label) {
      res["label"] = boost::any(*label);
    }
    if (isTrigger) {
      res["isTrigger"] = boost::any(*isTrigger);
    }
    if (repo) {
      res["repo"] = boost::any(*repo);
    }
    if (triggerFilter) {
      res["triggerFilter"] = boost::any(*triggerFilter);
    }
    if (webhook) {
      res["webhook"] = boost::any(*webhook);
    }
    if (events) {
      res["events"] = boost::any(*events);
    }
    if (isBranchMode) {
      res["isBranchMode"] = boost::any(*isBranchMode);
    }
    if (isSubmodule) {
      res["isSubmodule"] = boost::any(*isSubmodule);
    }
    if (isCloneDepth) {
      res["isCloneDepth"] = boost::any(*isCloneDepth);
    }
    if (cloneDepth) {
      res["cloneDepth"] = boost::any(*cloneDepth);
    }
    if (credentialId) {
      res["credentialId"] = boost::any(*credentialId);
    }
    if (credentialType) {
      res["credentialType"] = boost::any(*credentialType);
    }
    if (credentialLabel) {
      res["credentialLabel"] = boost::any(*credentialLabel);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("branch") != m.end() && !m["branch"].empty()) {
      branch = make_shared<string>(boost::any_cast<string>(m["branch"]));
    }
    if (m.find("serviceConnectionId") != m.end() && !m["serviceConnectionId"].empty()) {
      serviceConnectionId = make_shared<long>(boost::any_cast<long>(m["serviceConnectionId"]));
    }
    if (m.find("label") != m.end() && !m["label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["label"]));
    }
    if (m.find("isTrigger") != m.end() && !m["isTrigger"].empty()) {
      isTrigger = make_shared<bool>(boost::any_cast<bool>(m["isTrigger"]));
    }
    if (m.find("repo") != m.end() && !m["repo"].empty()) {
      repo = make_shared<string>(boost::any_cast<string>(m["repo"]));
    }
    if (m.find("triggerFilter") != m.end() && !m["triggerFilter"].empty()) {
      triggerFilter = make_shared<string>(boost::any_cast<string>(m["triggerFilter"]));
    }
    if (m.find("webhook") != m.end() && !m["webhook"].empty()) {
      webhook = make_shared<string>(boost::any_cast<string>(m["webhook"]));
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
    if (m.find("isSubmodule") != m.end() && !m["isSubmodule"].empty()) {
      isSubmodule = make_shared<bool>(boost::any_cast<bool>(m["isSubmodule"]));
    }
    if (m.find("isCloneDepth") != m.end() && !m["isCloneDepth"].empty()) {
      isCloneDepth = make_shared<bool>(boost::any_cast<bool>(m["isCloneDepth"]));
    }
    if (m.find("cloneDepth") != m.end() && !m["cloneDepth"].empty()) {
      cloneDepth = make_shared<long>(boost::any_cast<long>(m["cloneDepth"]));
    }
    if (m.find("credentialId") != m.end() && !m["credentialId"].empty()) {
      credentialId = make_shared<long>(boost::any_cast<long>(m["credentialId"]));
    }
    if (m.find("credentialType") != m.end() && !m["credentialType"].empty()) {
      credentialType = make_shared<string>(boost::any_cast<string>(m["credentialType"]));
    }
    if (m.find("credentialLabel") != m.end() && !m["credentialLabel"].empty()) {
      credentialLabel = make_shared<string>(boost::any_cast<string>(m["credentialLabel"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
  }


  virtual ~GetPipelineResponseBodyPipelinePipelineConfigSourcesData() = default;
};
class GetPipelineResponseBodyPipelinePipelineConfigSources : public Darabonba::Model {
public:
  shared_ptr<string> sign{};
  shared_ptr<string> type{};
  shared_ptr<GetPipelineResponseBodyPipelinePipelineConfigSourcesData> data{};

  GetPipelineResponseBodyPipelinePipelineConfigSources() {}

  explicit GetPipelineResponseBodyPipelinePipelineConfigSources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sign) {
      res["sign"] = boost::any(*sign);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sign") != m.end() && !m["sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["sign"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetPipelineResponseBodyPipelinePipelineConfigSourcesData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetPipelineResponseBodyPipelinePipelineConfigSourcesData>(model1);
      }
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
class GetPipelineResponseBodyPipeline : public Darabonba::Model {
public:
  shared_ptr<string> creatorAccountId{};
  shared_ptr<long> envId{};
  shared_ptr<string> envName{};
  shared_ptr<long> createTime{};
  shared_ptr<long> updateTime{};
  shared_ptr<long> groupId{};
  shared_ptr<string> modifierAccountId{};
  shared_ptr<string> name{};
  shared_ptr<vector<GetPipelineResponseBodyPipelineTagList>> tagList{};
  shared_ptr<GetPipelineResponseBodyPipelinePipelineConfig> pipelineConfig{};

  GetPipelineResponseBodyPipeline() {}

  explicit GetPipelineResponseBodyPipeline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creatorAccountId) {
      res["creatorAccountId"] = boost::any(*creatorAccountId);
    }
    if (envId) {
      res["envId"] = boost::any(*envId);
    }
    if (envName) {
      res["envName"] = boost::any(*envName);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
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
    if (tagList) {
      vector<boost::any> temp1;
      for(auto item1:*tagList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tagList"] = boost::any(temp1);
    }
    if (pipelineConfig) {
      res["pipelineConfig"] = pipelineConfig ? boost::any(pipelineConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("creatorAccountId") != m.end() && !m["creatorAccountId"].empty()) {
      creatorAccountId = make_shared<string>(boost::any_cast<string>(m["creatorAccountId"]));
    }
    if (m.find("envId") != m.end() && !m["envId"].empty()) {
      envId = make_shared<long>(boost::any_cast<long>(m["envId"]));
    }
    if (m.find("envName") != m.end() && !m["envName"].empty()) {
      envName = make_shared<string>(boost::any_cast<string>(m["envName"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
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
    if (m.find("pipelineConfig") != m.end() && !m["pipelineConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["pipelineConfig"].type()) {
        GetPipelineResponseBodyPipelinePipelineConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["pipelineConfig"]));
        pipelineConfig = make_shared<GetPipelineResponseBodyPipelinePipelineConfig>(model1);
      }
    }
  }


  virtual ~GetPipelineResponseBodyPipeline() = default;
};
class GetPipelineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<GetPipelineResponseBodyPipeline> pipeline{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};

  GetPipelineResponseBody() {}

  explicit GetPipelineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (pipeline) {
      res["pipeline"] = pipeline ? boost::any(pipeline->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
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
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
  }


  virtual ~GetPipelineResponseBody() = default;
};
class GetPipelineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPipelineResponseBody> body{};

  GetPipelineResponse() {}

  explicit GetPipelineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class CreateVariableGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> description{};
  shared_ptr<string> variables{};

  CreateVariableGroupRequest() {}

  explicit CreateVariableGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (variables) {
      res["variables"] = boost::any(*variables);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      variables = make_shared<string>(boost::any_cast<string>(m["variables"]));
    }
  }


  virtual ~CreateVariableGroupRequest() = default;
};
class CreateVariableGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<long> variableGroupId{};

  CreateVariableGroupResponseBody() {}

  explicit CreateVariableGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
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
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
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
  shared_ptr<CreateVariableGroupResponseBody> body{};

  CreateVariableGroupResponse() {}

  explicit CreateVariableGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DeleteVariableGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  DeleteVariableGroupResponseBody() {}

  explicit DeleteVariableGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
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
  shared_ptr<DeleteVariableGroupResponseBody> body{};

  DeleteVariableGroupResponse() {}

  explicit DeleteVariableGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class GetWorkspaceResponseBodyWorkspace : public Darabonba::Model {
public:
  shared_ptr<string> codeVersion{};
  shared_ptr<string> codeUrl{};
  shared_ptr<string> name{};
  shared_ptr<string> spec{};
  shared_ptr<string> status{};
  shared_ptr<string> template_{};
  shared_ptr<string> id{};
  shared_ptr<string> userId{};
  shared_ptr<string> createTime{};

  GetWorkspaceResponseBodyWorkspace() {}

  explicit GetWorkspaceResponseBodyWorkspace(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeVersion) {
      res["codeVersion"] = boost::any(*codeVersion);
    }
    if (codeUrl) {
      res["codeUrl"] = boost::any(*codeUrl);
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
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("codeVersion") != m.end() && !m["codeVersion"].empty()) {
      codeVersion = make_shared<string>(boost::any_cast<string>(m["codeVersion"]));
    }
    if (m.find("codeUrl") != m.end() && !m["codeUrl"].empty()) {
      codeUrl = make_shared<string>(boost::any_cast<string>(m["codeUrl"]));
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
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
  }


  virtual ~GetWorkspaceResponseBodyWorkspace() = default;
};
class GetWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetWorkspaceResponseBodyWorkspace> workspace{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  GetWorkspaceResponseBody() {}

  explicit GetWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workspace) {
      res["workspace"] = workspace ? boost::any(workspace->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["success"] = boost::any(*success);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      if (typeid(map<string, boost::any>) == m["workspace"].type()) {
        GetWorkspaceResponseBodyWorkspace model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["workspace"]));
        workspace = make_shared<GetWorkspaceResponseBodyWorkspace>(model1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
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
  }


  virtual ~GetWorkspaceResponseBody() = default;
};
class GetWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetWorkspaceResponseBody> body{};

  GetWorkspaceResponse() {}

  explicit GetWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class CreateSshKeyResponseBodySshKey : public Darabonba::Model {
public:
  shared_ptr<string> publicKey{};
  shared_ptr<long> id{};

  CreateSshKeyResponseBodySshKey() {}

  explicit CreateSshKeyResponseBodySshKey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (publicKey) {
      res["publicKey"] = boost::any(*publicKey);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("publicKey") != m.end() && !m["publicKey"].empty()) {
      publicKey = make_shared<string>(boost::any_cast<string>(m["publicKey"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
  }


  virtual ~CreateSshKeyResponseBodySshKey() = default;
};
class CreateSshKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<CreateSshKeyResponseBodySshKey> sshKey{};

  CreateSshKeyResponseBody() {}

  explicit CreateSshKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (sshKey) {
      res["sshKey"] = sshKey ? boost::any(sshKey->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("sshKey") != m.end() && !m["sshKey"].empty()) {
      if (typeid(map<string, boost::any>) == m["sshKey"].type()) {
        CreateSshKeyResponseBodySshKey model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sshKey"]));
        sshKey = make_shared<CreateSshKeyResponseBodySshKey>(model1);
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
class DeleteHostGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  DeleteHostGroupResponseBody() {}

  explicit DeleteHostGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
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
class ReleaseWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};

  ReleaseWorkspaceResponseBody() {}

  explicit ReleaseWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
  }


  virtual ~ReleaseWorkspaceResponseBody() = default;
};
class ReleaseWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ReleaseWorkspaceResponseBody> body{};

  ReleaseWorkspaceResponse() {}

  explicit ReleaseWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class ListOrganizationMembersRequest : public Darabonba::Model {
public:
  shared_ptr<string> organizationMemberName{};
  shared_ptr<string> provider{};
  shared_ptr<string> externUid{};
  shared_ptr<string> state{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};
  shared_ptr<long> joinTimeFrom{};
  shared_ptr<long> joinTimeTo{};

  ListOrganizationMembersRequest() {}

  explicit ListOrganizationMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (organizationMemberName) {
      res["organizationMemberName"] = boost::any(*organizationMemberName);
    }
    if (provider) {
      res["provider"] = boost::any(*provider);
    }
    if (externUid) {
      res["externUid"] = boost::any(*externUid);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (joinTimeFrom) {
      res["joinTimeFrom"] = boost::any(*joinTimeFrom);
    }
    if (joinTimeTo) {
      res["joinTimeTo"] = boost::any(*joinTimeTo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("organizationMemberName") != m.end() && !m["organizationMemberName"].empty()) {
      organizationMemberName = make_shared<string>(boost::any_cast<string>(m["organizationMemberName"]));
    }
    if (m.find("provider") != m.end() && !m["provider"].empty()) {
      provider = make_shared<string>(boost::any_cast<string>(m["provider"]));
    }
    if (m.find("externUid") != m.end() && !m["externUid"].empty()) {
      externUid = make_shared<string>(boost::any_cast<string>(m["externUid"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("joinTimeFrom") != m.end() && !m["joinTimeFrom"].empty()) {
      joinTimeFrom = make_shared<long>(boost::any_cast<long>(m["joinTimeFrom"]));
    }
    if (m.find("joinTimeTo") != m.end() && !m["joinTimeTo"].empty()) {
      joinTimeTo = make_shared<long>(boost::any_cast<long>(m["joinTimeTo"]));
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
  shared_ptr<string> organizationRoleName{};
  shared_ptr<string> organizationRoleId{};
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
    if (organizationRoleName) {
      res["organizationRoleName"] = boost::any(*organizationRoleName);
    }
    if (organizationRoleId) {
      res["organizationRoleId"] = boost::any(*organizationRoleId);
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
    if (m.find("organizationRoleName") != m.end() && !m["organizationRoleName"].empty()) {
      organizationRoleName = make_shared<string>(boost::any_cast<string>(m["organizationRoleName"]));
    }
    if (m.find("organizationRoleId") != m.end() && !m["organizationRoleId"].empty()) {
      organizationRoleId = make_shared<string>(boost::any_cast<string>(m["organizationRoleId"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
  }


  virtual ~ListOrganizationMembersResponseBodyMembers() = default;
};
class ListOrganizationMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListOrganizationMembersResponseBodyMembers>> members{};

  ListOrganizationMembersResponseBody() {}

  explicit ListOrganizationMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (members) {
      vector<boost::any> temp1;
      for(auto item1:*members){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["members"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
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
  }


  virtual ~ListOrganizationMembersResponseBody() = default;
};
class ListOrganizationMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListOrganizationMembersResponseBody> body{};

  ListOrganizationMembersResponse() {}

  explicit ListOrganizationMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class ListVariableGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> pageSort{};
  shared_ptr<string> pageOrder{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};

  ListVariableGroupsRequest() {}

  explicit ListVariableGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageSort) {
      res["pageSort"] = boost::any(*pageSort);
    }
    if (pageOrder) {
      res["pageOrder"] = boost::any(*pageOrder);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageSort") != m.end() && !m["pageSort"].empty()) {
      pageSort = make_shared<string>(boost::any_cast<string>(m["pageSort"]));
    }
    if (m.find("pageOrder") != m.end() && !m["pageOrder"].empty()) {
      pageOrder = make_shared<string>(boost::any_cast<string>(m["pageOrder"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
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
  shared_ptr<string> value{};
  shared_ptr<string> name{};
  shared_ptr<bool> isEncrypted{};

  ListVariableGroupsResponseBodyVariableGroupsVariables() {}

  explicit ListVariableGroupsResponseBodyVariableGroupsVariables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["value"] = boost::any(*value);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (isEncrypted) {
      res["isEncrypted"] = boost::any(*isEncrypted);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("isEncrypted") != m.end() && !m["isEncrypted"].empty()) {
      isEncrypted = make_shared<bool>(boost::any_cast<bool>(m["isEncrypted"]));
    }
  }


  virtual ~ListVariableGroupsResponseBodyVariableGroupsVariables() = default;
};
class ListVariableGroupsResponseBodyVariableGroups : public Darabonba::Model {
public:
  shared_ptr<string> creatorAccountId{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> modifierAccountId{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<long> id{};
  shared_ptr<vector<ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines>> relatedPipelines{};
  shared_ptr<vector<ListVariableGroupsResponseBodyVariableGroupsVariables>> variables{};
  shared_ptr<long> createTime{};

  ListVariableGroupsResponseBodyVariableGroups() {}

  explicit ListVariableGroupsResponseBodyVariableGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creatorAccountId) {
      res["creatorAccountId"] = boost::any(*creatorAccountId);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (modifierAccountId) {
      res["modifierAccountId"] = boost::any(*modifierAccountId);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (relatedPipelines) {
      vector<boost::any> temp1;
      for(auto item1:*relatedPipelines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["relatedPipelines"] = boost::any(temp1);
    }
    if (variables) {
      vector<boost::any> temp1;
      for(auto item1:*variables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["variables"] = boost::any(temp1);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("creatorAccountId") != m.end() && !m["creatorAccountId"].empty()) {
      creatorAccountId = make_shared<string>(boost::any_cast<string>(m["creatorAccountId"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
    if (m.find("modifierAccountId") != m.end() && !m["modifierAccountId"].empty()) {
      modifierAccountId = make_shared<string>(boost::any_cast<string>(m["modifierAccountId"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
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
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
  }


  virtual ~ListVariableGroupsResponseBodyVariableGroups() = default;
};
class ListVariableGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<vector<ListVariableGroupsResponseBodyVariableGroups>> variableGroups{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> nextToken{};

  ListVariableGroupsResponseBody() {}

  explicit ListVariableGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (variableGroups) {
      vector<boost::any> temp1;
      for(auto item1:*variableGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["variableGroups"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
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
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListVariableGroupsResponseBody() = default;
};
class ListVariableGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListVariableGroupsResponseBody> body{};

  ListVariableGroupsResponse() {}

  explicit ListVariableGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DeletePipelineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  DeletePipelineResponseBody() {}

  explicit DeletePipelineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
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
  shared_ptr<DeletePipelineResponseBody> body{};

  DeletePipelineResponse() {}

  explicit DeletePipelineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class FrozenWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};

  FrozenWorkspaceResponseBody() {}

  explicit FrozenWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
  }


  virtual ~FrozenWorkspaceResponseBody() = default;
};
class FrozenWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<FrozenWorkspaceResponseBody> body{};

  FrozenWorkspaceResponse() {}

  explicit FrozenWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class ListPipelineRunsRequest : public Darabonba::Model {
public:
  shared_ptr<long> startTime{};
  shared_ptr<long> endTime{};
  shared_ptr<string> status{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> triggerMode{};

  ListPipelineRunsRequest() {}

  explicit ListPipelineRunsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (triggerMode) {
      res["triggerMode"] = boost::any(*triggerMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("triggerMode") != m.end() && !m["triggerMode"].empty()) {
      triggerMode = make_shared<long>(boost::any_cast<long>(m["triggerMode"]));
    }
  }


  virtual ~ListPipelineRunsRequest() = default;
};
class ListPipelineRunsResponseBodyPipelineRuns : public Darabonba::Model {
public:
  shared_ptr<long> pipelineId{};
  shared_ptr<long> startTime{};
  shared_ptr<string> creatorAccountId{};
  shared_ptr<long> endTime{};
  shared_ptr<long> pipelineRunId{};
  shared_ptr<long> triggerMode{};
  shared_ptr<string> status{};

  ListPipelineRunsResponseBodyPipelineRuns() {}

  explicit ListPipelineRunsResponseBodyPipelineRuns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pipelineId) {
      res["pipelineId"] = boost::any(*pipelineId);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (creatorAccountId) {
      res["creatorAccountId"] = boost::any(*creatorAccountId);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (pipelineRunId) {
      res["pipelineRunId"] = boost::any(*pipelineRunId);
    }
    if (triggerMode) {
      res["triggerMode"] = boost::any(*triggerMode);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pipelineId") != m.end() && !m["pipelineId"].empty()) {
      pipelineId = make_shared<long>(boost::any_cast<long>(m["pipelineId"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("creatorAccountId") != m.end() && !m["creatorAccountId"].empty()) {
      creatorAccountId = make_shared<string>(boost::any_cast<string>(m["creatorAccountId"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("pipelineRunId") != m.end() && !m["pipelineRunId"].empty()) {
      pipelineRunId = make_shared<long>(boost::any_cast<long>(m["pipelineRunId"]));
    }
    if (m.find("triggerMode") != m.end() && !m["triggerMode"].empty()) {
      triggerMode = make_shared<long>(boost::any_cast<long>(m["triggerMode"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListPipelineRunsResponseBodyPipelineRuns() = default;
};
class ListPipelineRunsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListPipelineRunsResponseBodyPipelineRuns>> pipelineRuns{};

  ListPipelineRunsResponseBody() {}

  explicit ListPipelineRunsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
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
  }


  virtual ~ListPipelineRunsResponseBody() = default;
};
class ListPipelineRunsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListPipelineRunsResponseBody> body{};

  ListPipelineRunsResponse() {}

  explicit ListPipelineRunsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  ListResourceMembersResponse listResourceMembers(shared_ptr<string> organizationId, shared_ptr<string> resourceType, shared_ptr<string> resourceId);
  ListResourceMembersResponse listResourceMembersWithOptions(shared_ptr<string> organizationId,
                                                             shared_ptr<string> resourceType,
                                                             shared_ptr<string> resourceId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHostGroupResponse getHostGroup(shared_ptr<string> organizationId, shared_ptr<string> id);
  GetHostGroupResponse getHostGroupWithOptions(shared_ptr<string> organizationId,
                                               shared_ptr<string> id,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVariableGroupResponse getVariableGroup(shared_ptr<string> organizationId, shared_ptr<string> id);
  GetVariableGroupResponse getVariableGroupWithOptions(shared_ptr<string> organizationId,
                                                       shared_ptr<string> id,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPipelinesResponse listPipelines(shared_ptr<string> organizationId, shared_ptr<ListPipelinesRequest> request);
  ListPipelinesResponse listPipelinesWithOptions(shared_ptr<string> organizationId,
                                                 shared_ptr<ListPipelinesRequest> request,
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
  ListHostGroupsResponse listHostGroups(shared_ptr<string> organizationId, shared_ptr<ListHostGroupsRequest> request);
  ListHostGroupsResponse listHostGroupsWithOptions(shared_ptr<string> organizationId,
                                                   shared_ptr<ListHostGroupsRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetSshKeyResponse resetSshKey(shared_ptr<string> organizationId);
  ResetSshKeyResponse resetSshKeyWithOptions(shared_ptr<string> organizationId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateWorkspaceResponse createWorkspace(shared_ptr<CreateWorkspaceRequest> request);
  CreateWorkspaceResponse createWorkspaceWithOptions(shared_ptr<CreateWorkspaceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceConnectionsResponse listServiceConnections(shared_ptr<string> organizationId, shared_ptr<ListServiceConnectionsRequest> request);
  ListServiceConnectionsResponse listServiceConnectionsWithOptions(shared_ptr<string> organizationId,
                                                                   shared_ptr<ListServiceConnectionsRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateHostGroupResponse createHostGroup(shared_ptr<string> organizationId, shared_ptr<CreateHostGroupRequest> request);
  CreateHostGroupResponse createHostGroupWithOptions(shared_ptr<string> organizationId,
                                                     shared_ptr<CreateHostGroupRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopPipelineRunResponse stopPipelineRun(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<string> pipelineRunId);
  StopPipelineRunResponse stopPipelineRunWithOptions(shared_ptr<string> organizationId,
                                                     shared_ptr<string> pipelineId,
                                                     shared_ptr<string> pipelineRunId,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateHostGroupResponse updateHostGroup(shared_ptr<string> organizationId, shared_ptr<string> id, shared_ptr<UpdateHostGroupRequest> request);
  UpdateHostGroupResponse updateHostGroupWithOptions(shared_ptr<string> organizationId,
                                                     shared_ptr<string> id,
                                                     shared_ptr<UpdateHostGroupRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
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
  GetOrganizationMemberResponse getOrganizationMember(shared_ptr<string> organizationId, shared_ptr<string> accountId);
  GetOrganizationMemberResponse getOrganizationMemberWithOptions(shared_ptr<string> organizationId,
                                                                 shared_ptr<string> accountId,
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
  StartPipelineRunResponse startPipelineRun(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<StartPipelineRunRequest> request);
  StartPipelineRunResponse startPipelineRunWithOptions(shared_ptr<string> organizationId,
                                                       shared_ptr<string> pipelineId,
                                                       shared_ptr<StartPipelineRunRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWorkspacesResponse listWorkspaces(shared_ptr<ListWorkspacesRequest> request);
  ListWorkspacesResponse listWorkspacesWithOptions(shared_ptr<ListWorkspacesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPipelineRunResponse getPipelineRun(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<string> pipelineRunId);
  GetPipelineRunResponse getPipelineRunWithOptions(shared_ptr<string> organizationId,
                                                   shared_ptr<string> pipelineId,
                                                   shared_ptr<string> pipelineRunId,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPipelineResponse getPipeline(shared_ptr<string> organizationId, shared_ptr<string> pipelineId);
  GetPipelineResponse getPipelineWithOptions(shared_ptr<string> organizationId,
                                             shared_ptr<string> pipelineId,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVariableGroupResponse createVariableGroup(shared_ptr<string> organizationId, shared_ptr<CreateVariableGroupRequest> request);
  CreateVariableGroupResponse createVariableGroupWithOptions(shared_ptr<string> organizationId,
                                                             shared_ptr<CreateVariableGroupRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVariableGroupResponse deleteVariableGroup(shared_ptr<string> organizationId, shared_ptr<string> id);
  DeleteVariableGroupResponse deleteVariableGroupWithOptions(shared_ptr<string> organizationId,
                                                             shared_ptr<string> id,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWorkspaceResponse getWorkspace(shared_ptr<string> workspaceId);
  GetWorkspaceResponse getWorkspaceWithOptions(shared_ptr<string> workspaceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSshKeyResponse createSshKey(shared_ptr<string> organizationId);
  CreateSshKeyResponse createSshKeyWithOptions(shared_ptr<string> organizationId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteHostGroupResponse deleteHostGroup(shared_ptr<string> organizationId, shared_ptr<string> id);
  DeleteHostGroupResponse deleteHostGroupWithOptions(shared_ptr<string> organizationId,
                                                     shared_ptr<string> id,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseWorkspaceResponse releaseWorkspace(shared_ptr<string> workspaceId);
  ReleaseWorkspaceResponse releaseWorkspaceWithOptions(shared_ptr<string> workspaceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOrganizationMembersResponse listOrganizationMembers(shared_ptr<string> organizationId, shared_ptr<ListOrganizationMembersRequest> request);
  ListOrganizationMembersResponse listOrganizationMembersWithOptions(shared_ptr<string> organizationId,
                                                                     shared_ptr<ListOrganizationMembersRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVariableGroupsResponse listVariableGroups(shared_ptr<string> organizationId, shared_ptr<ListVariableGroupsRequest> request);
  ListVariableGroupsResponse listVariableGroupsWithOptions(shared_ptr<string> organizationId,
                                                           shared_ptr<ListVariableGroupsRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePipelineResponse deletePipeline(shared_ptr<string> organizationId, shared_ptr<string> pipelineId);
  DeletePipelineResponse deletePipelineWithOptions(shared_ptr<string> organizationId,
                                                   shared_ptr<string> pipelineId,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FrozenWorkspaceResponse frozenWorkspace(shared_ptr<string> workspaceId);
  FrozenWorkspaceResponse frozenWorkspaceWithOptions(shared_ptr<string> workspaceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPipelineRunsResponse listPipelineRuns(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<ListPipelineRunsRequest> request);
  ListPipelineRunsResponse listPipelineRunsWithOptions(shared_ptr<string> organizationId,
                                                       shared_ptr<string> pipelineId,
                                                       shared_ptr<ListPipelineRunsRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Devops20210625

#endif
