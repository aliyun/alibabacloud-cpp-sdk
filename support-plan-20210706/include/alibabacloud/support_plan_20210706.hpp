// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_SUPPORT-PLAN20210706_H_
#define ALIBABACLOUD_SUPPORT-PLAN20210706_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Support-plan20210706 {
class EnterpriseDingtalkGroupMember : public Darabonba::Model {
public:
  shared_ptr<bool> isAdmin{};
  shared_ptr<string> mobile{};
  shared_ptr<string> name{};

  EnterpriseDingtalkGroupMember() {}

  explicit EnterpriseDingtalkGroupMember(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isAdmin) {
      res["IsAdmin"] = boost::any(*isAdmin);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsAdmin") != m.end() && !m["IsAdmin"].empty()) {
      isAdmin = make_shared<bool>(boost::any_cast<bool>(m["IsAdmin"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~EnterpriseDingtalkGroupMember() = default;
};
class AddEnterpriseGroupMemberToTaskGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskOrderId{};
  shared_ptr<string> userId{};

  AddEnterpriseGroupMemberToTaskGroupRequest() {}

  explicit AddEnterpriseGroupMemberToTaskGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskOrderId) {
      res["TaskOrderId"] = boost::any(*taskOrderId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskOrderId") != m.end() && !m["TaskOrderId"].empty()) {
      taskOrderId = make_shared<string>(boost::any_cast<string>(m["TaskOrderId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~AddEnterpriseGroupMemberToTaskGroupRequest() = default;
};
class AddEnterpriseGroupMemberToTaskGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddEnterpriseGroupMemberToTaskGroupResponseBody() {}

  explicit AddEnterpriseGroupMemberToTaskGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddEnterpriseGroupMemberToTaskGroupResponseBody() = default;
};
class AddEnterpriseGroupMemberToTaskGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddEnterpriseGroupMemberToTaskGroupResponseBody> body{};

  AddEnterpriseGroupMemberToTaskGroupResponse() {}

  explicit AddEnterpriseGroupMemberToTaskGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddEnterpriseGroupMemberToTaskGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddEnterpriseGroupMemberToTaskGroupResponseBody>(model1);
      }
    }
  }


  virtual ~AddEnterpriseGroupMemberToTaskGroupResponse() = default;
};
class CreateTaskOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> createUserId{};
  shared_ptr<bool> isUrgent{};
  shared_ptr<string> openGroupId{};
  shared_ptr<string> overview{};
  shared_ptr<string> productCode{};
  shared_ptr<string> urgentDescription{};

  CreateTaskOrderRequest() {}

  explicit CreateTaskOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (isUrgent) {
      res["IsUrgent"] = boost::any(*isUrgent);
    }
    if (openGroupId) {
      res["OpenGroupId"] = boost::any(*openGroupId);
    }
    if (overview) {
      res["Overview"] = boost::any(*overview);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (urgentDescription) {
      res["UrgentDescription"] = boost::any(*urgentDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("IsUrgent") != m.end() && !m["IsUrgent"].empty()) {
      isUrgent = make_shared<bool>(boost::any_cast<bool>(m["IsUrgent"]));
    }
    if (m.find("OpenGroupId") != m.end() && !m["OpenGroupId"].empty()) {
      openGroupId = make_shared<string>(boost::any_cast<string>(m["OpenGroupId"]));
    }
    if (m.find("Overview") != m.end() && !m["Overview"].empty()) {
      overview = make_shared<string>(boost::any_cast<string>(m["Overview"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("UrgentDescription") != m.end() && !m["UrgentDescription"].empty()) {
      urgentDescription = make_shared<string>(boost::any_cast<string>(m["UrgentDescription"]));
    }
  }


  virtual ~CreateTaskOrderRequest() = default;
};
class CreateTaskOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateTaskOrderResponseBody() {}

  explicit CreateTaskOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateTaskOrderResponseBody() = default;
};
class CreateTaskOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTaskOrderResponseBody> body{};

  CreateTaskOrderResponse() {}

  explicit CreateTaskOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTaskOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTaskOrderResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTaskOrderResponse() = default;
};
class ListDdTaskOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> createRealName{};
  shared_ptr<string> endTime{};
  shared_ptr<bool> isUrgent{};
  shared_ptr<string> openGroupId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> startTime{};
  shared_ptr<string> taskStatus{};

  ListDdTaskOrderRequest() {}

  explicit ListDdTaskOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createRealName) {
      res["CreateRealName"] = boost::any(*createRealName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (isUrgent) {
      res["IsUrgent"] = boost::any(*isUrgent);
    }
    if (openGroupId) {
      res["OpenGroupId"] = boost::any(*openGroupId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateRealName") != m.end() && !m["CreateRealName"].empty()) {
      createRealName = make_shared<string>(boost::any_cast<string>(m["CreateRealName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("IsUrgent") != m.end() && !m["IsUrgent"].empty()) {
      isUrgent = make_shared<bool>(boost::any_cast<bool>(m["IsUrgent"]));
    }
    if (m.find("OpenGroupId") != m.end() && !m["OpenGroupId"].empty()) {
      openGroupId = make_shared<string>(boost::any_cast<string>(m["OpenGroupId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
  }


  virtual ~ListDdTaskOrderRequest() = default;
};
class ListDdTaskOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListDdTaskOrderResponseBody() {}

  explicit ListDdTaskOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListDdTaskOrderResponseBody() = default;
};
class ListDdTaskOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDdTaskOrderResponseBody> body{};

  ListDdTaskOrderResponse() {}

  explicit ListDdTaskOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDdTaskOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDdTaskOrderResponseBody>(model1);
      }
    }
  }


  virtual ~ListDdTaskOrderResponse() = default;
};
class ListEnterpriseDingtalkGroupCustomerMembersRequest : public Darabonba::Model {
public:
  shared_ptr<string> openGroupId{};

  ListEnterpriseDingtalkGroupCustomerMembersRequest() {}

  explicit ListEnterpriseDingtalkGroupCustomerMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (openGroupId) {
      res["OpenGroupId"] = boost::any(*openGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpenGroupId") != m.end() && !m["OpenGroupId"].empty()) {
      openGroupId = make_shared<string>(boost::any_cast<string>(m["OpenGroupId"]));
    }
  }


  virtual ~ListEnterpriseDingtalkGroupCustomerMembersRequest() = default;
};
class ListEnterpriseDingtalkGroupCustomerMembersResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> isAdmin{};
  shared_ptr<string> name{};
  shared_ptr<string> userId{};

  ListEnterpriseDingtalkGroupCustomerMembersResponseBodyData() {}

  explicit ListEnterpriseDingtalkGroupCustomerMembersResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isAdmin) {
      res["IsAdmin"] = boost::any(*isAdmin);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsAdmin") != m.end() && !m["IsAdmin"].empty()) {
      isAdmin = make_shared<bool>(boost::any_cast<bool>(m["IsAdmin"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListEnterpriseDingtalkGroupCustomerMembersResponseBodyData() = default;
};
class ListEnterpriseDingtalkGroupCustomerMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListEnterpriseDingtalkGroupCustomerMembersResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListEnterpriseDingtalkGroupCustomerMembersResponseBody() {}

  explicit ListEnterpriseDingtalkGroupCustomerMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListEnterpriseDingtalkGroupCustomerMembersResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEnterpriseDingtalkGroupCustomerMembersResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListEnterpriseDingtalkGroupCustomerMembersResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListEnterpriseDingtalkGroupCustomerMembersResponseBody() = default;
};
class ListEnterpriseDingtalkGroupCustomerMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEnterpriseDingtalkGroupCustomerMembersResponseBody> body{};

  ListEnterpriseDingtalkGroupCustomerMembersResponse() {}

  explicit ListEnterpriseDingtalkGroupCustomerMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEnterpriseDingtalkGroupCustomerMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEnterpriseDingtalkGroupCustomerMembersResponseBody>(model1);
      }
    }
  }


  virtual ~ListEnterpriseDingtalkGroupCustomerMembersResponse() = default;
};
class ListEnterpriseDingtalkGroupsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<string> openGroupId{};

  ListEnterpriseDingtalkGroupsResponseBodyData() {}

  explicit ListEnterpriseDingtalkGroupsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (openGroupId) {
      res["OpenGroupId"] = boost::any(*openGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("OpenGroupId") != m.end() && !m["OpenGroupId"].empty()) {
      openGroupId = make_shared<string>(boost::any_cast<string>(m["OpenGroupId"]));
    }
  }


  virtual ~ListEnterpriseDingtalkGroupsResponseBodyData() = default;
};
class ListEnterpriseDingtalkGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListEnterpriseDingtalkGroupsResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListEnterpriseDingtalkGroupsResponseBody() {}

  explicit ListEnterpriseDingtalkGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListEnterpriseDingtalkGroupsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEnterpriseDingtalkGroupsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListEnterpriseDingtalkGroupsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListEnterpriseDingtalkGroupsResponseBody() = default;
};
class ListEnterpriseDingtalkGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEnterpriseDingtalkGroupsResponseBody> body{};

  ListEnterpriseDingtalkGroupsResponse() {}

  explicit ListEnterpriseDingtalkGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEnterpriseDingtalkGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEnterpriseDingtalkGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListEnterpriseDingtalkGroupsResponse() = default;
};
class ListProductByGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> openGroupId{};

  ListProductByGroupRequest() {}

  explicit ListProductByGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (openGroupId) {
      res["OpenGroupId"] = boost::any(*openGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpenGroupId") != m.end() && !m["OpenGroupId"].empty()) {
      openGroupId = make_shared<string>(boost::any_cast<string>(m["OpenGroupId"]));
    }
  }


  virtual ~ListProductByGroupRequest() = default;
};
class ListProductByGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListProductByGroupResponseBody() {}

  explicit ListProductByGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListProductByGroupResponseBody() = default;
};
class ListProductByGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProductByGroupResponseBody> body{};

  ListProductByGroupResponse() {}

  explicit ListProductByGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProductByGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProductByGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ListProductByGroupResponse() = default;
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
  AddEnterpriseGroupMemberToTaskGroupResponse addEnterpriseGroupMemberToTaskGroupWithOptions(shared_ptr<AddEnterpriseGroupMemberToTaskGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddEnterpriseGroupMemberToTaskGroupResponse addEnterpriseGroupMemberToTaskGroup(shared_ptr<AddEnterpriseGroupMemberToTaskGroupRequest> request);
  CreateTaskOrderResponse createTaskOrderWithOptions(shared_ptr<CreateTaskOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTaskOrderResponse createTaskOrder(shared_ptr<CreateTaskOrderRequest> request);
  ListDdTaskOrderResponse listDdTaskOrderWithOptions(shared_ptr<ListDdTaskOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDdTaskOrderResponse listDdTaskOrder(shared_ptr<ListDdTaskOrderRequest> request);
  ListEnterpriseDingtalkGroupCustomerMembersResponse listEnterpriseDingtalkGroupCustomerMembersWithOptions(shared_ptr<ListEnterpriseDingtalkGroupCustomerMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEnterpriseDingtalkGroupCustomerMembersResponse listEnterpriseDingtalkGroupCustomerMembers(shared_ptr<ListEnterpriseDingtalkGroupCustomerMembersRequest> request);
  ListEnterpriseDingtalkGroupsResponse listEnterpriseDingtalkGroupsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEnterpriseDingtalkGroupsResponse listEnterpriseDingtalkGroups();
  ListProductByGroupResponse listProductByGroupWithOptions(shared_ptr<ListProductByGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProductByGroupResponse listProductByGroup(shared_ptr<ListProductByGroupRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Support-plan20210706

#endif
