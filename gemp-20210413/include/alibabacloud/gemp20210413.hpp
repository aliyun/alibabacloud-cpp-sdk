// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_GEMP20210413_H_
#define ALIBABACLOUD_GEMP20210413_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_GEMP20210413 {
class ListIncidentTimelinesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListIncidentTimelinesRequest() {}

  explicit ListIncidentTimelinesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListIncidentTimelinesRequest() = default;
};
class ListIncidentTimelinesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> title{};
  shared_ptr<long> description{};
  shared_ptr<string> remark{};
  shared_ptr<string> relatedServiceName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> incidentTitle{};
  shared_ptr<string> action{};
  shared_ptr<long> incidentId{};

  ListIncidentTimelinesResponseBodyData() {}

  explicit ListIncidentTimelinesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    if (relatedServiceName) {
      res["relatedServiceName"] = boost::any(*relatedServiceName);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (incidentTitle) {
      res["incidentTitle"] = boost::any(*incidentTitle);
    }
    if (action) {
      res["action"] = boost::any(*action);
    }
    if (incidentId) {
      res["incidentId"] = boost::any(*incidentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<long>(boost::any_cast<long>(m["description"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
    if (m.find("relatedServiceName") != m.end() && !m["relatedServiceName"].empty()) {
      relatedServiceName = make_shared<string>(boost::any_cast<string>(m["relatedServiceName"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("incidentTitle") != m.end() && !m["incidentTitle"].empty()) {
      incidentTitle = make_shared<string>(boost::any_cast<string>(m["incidentTitle"]));
    }
    if (m.find("action") != m.end() && !m["action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["action"]));
    }
    if (m.find("incidentId") != m.end() && !m["incidentId"].empty()) {
      incidentId = make_shared<long>(boost::any_cast<long>(m["incidentId"]));
    }
  }


  virtual ~ListIncidentTimelinesResponseBodyData() = default;
};
class ListIncidentTimelinesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListIncidentTimelinesResponseBodyData>> data{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListIncidentTimelinesResponseBody() {}

  explicit ListIncidentTimelinesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListIncidentTimelinesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIncidentTimelinesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListIncidentTimelinesResponseBodyData>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListIncidentTimelinesResponseBody() = default;
};
class ListIncidentTimelinesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListIncidentTimelinesResponseBody> body{};

  ListIncidentTimelinesResponse() {}

  explicit ListIncidentTimelinesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListIncidentTimelinesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListIncidentTimelinesResponseBody>(model1);
      }
    }
  }


  virtual ~ListIncidentTimelinesResponse() = default;
};
class ListUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> username{};
  shared_ptr<string> phone{};
  shared_ptr<string> ramId{};
  shared_ptr<long> scene{};
  shared_ptr<string> clientToken{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListUsersRequest() {}

  explicit ListUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (username) {
      res["username"] = boost::any(*username);
    }
    if (phone) {
      res["phone"] = boost::any(*phone);
    }
    if (ramId) {
      res["ramId"] = boost::any(*ramId);
    }
    if (scene) {
      res["scene"] = boost::any(*scene);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
    if (m.find("phone") != m.end() && !m["phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["phone"]));
    }
    if (m.find("ramId") != m.end() && !m["ramId"].empty()) {
      ramId = make_shared<string>(boost::any_cast<string>(m["ramId"]));
    }
    if (m.find("scene") != m.end() && !m["scene"].empty()) {
      scene = make_shared<long>(boost::any_cast<long>(m["scene"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListUsersRequest() = default;
};
class ListUsersResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> userId{};
  shared_ptr<long> ramId{};
  shared_ptr<string> username{};
  shared_ptr<string> phone{};
  shared_ptr<string> email{};
  shared_ptr<long> isEditableUser{};
  shared_ptr<long> accountType{};

  ListUsersResponseBodyData() {}

  explicit ListUsersResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    if (ramId) {
      res["ramId"] = boost::any(*ramId);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    if (phone) {
      res["phone"] = boost::any(*phone);
    }
    if (email) {
      res["email"] = boost::any(*email);
    }
    if (isEditableUser) {
      res["isEditableUser"] = boost::any(*isEditableUser);
    }
    if (accountType) {
      res["accountType"] = boost::any(*accountType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["userId"]));
    }
    if (m.find("ramId") != m.end() && !m["ramId"].empty()) {
      ramId = make_shared<long>(boost::any_cast<long>(m["ramId"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
    if (m.find("phone") != m.end() && !m["phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["phone"]));
    }
    if (m.find("email") != m.end() && !m["email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["email"]));
    }
    if (m.find("isEditableUser") != m.end() && !m["isEditableUser"].empty()) {
      isEditableUser = make_shared<long>(boost::any_cast<long>(m["isEditableUser"]));
    }
    if (m.find("accountType") != m.end() && !m["accountType"].empty()) {
      accountType = make_shared<long>(boost::any_cast<long>(m["accountType"]));
    }
  }


  virtual ~ListUsersResponseBodyData() = default;
};
class ListUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListUsersResponseBodyData>> data{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListUsersResponseBody() {}

  explicit ListUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListUsersResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUsersResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListUsersResponseBodyData>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
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
class UpdateServiceGroupSchedulingRequestFastSchedulingSchedulingUsers : public Darabonba::Model {
public:
  shared_ptr<long> schedulingUserId{};
  shared_ptr<long> schedulingOrder{};

  UpdateServiceGroupSchedulingRequestFastSchedulingSchedulingUsers() {}

  explicit UpdateServiceGroupSchedulingRequestFastSchedulingSchedulingUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schedulingUserId) {
      res["schedulingUserId"] = boost::any(*schedulingUserId);
    }
    if (schedulingOrder) {
      res["schedulingOrder"] = boost::any(*schedulingOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("schedulingUserId") != m.end() && !m["schedulingUserId"].empty()) {
      schedulingUserId = make_shared<long>(boost::any_cast<long>(m["schedulingUserId"]));
    }
    if (m.find("schedulingOrder") != m.end() && !m["schedulingOrder"].empty()) {
      schedulingOrder = make_shared<long>(boost::any_cast<long>(m["schedulingOrder"]));
    }
  }


  virtual ~UpdateServiceGroupSchedulingRequestFastSchedulingSchedulingUsers() = default;
};
class UpdateServiceGroupSchedulingRequestFastScheduling : public Darabonba::Model {
public:
  shared_ptr<long> singleDuration{};
  shared_ptr<string> dutyPlan{};
  shared_ptr<string> singleDurationUnit{};
  shared_ptr<vector<UpdateServiceGroupSchedulingRequestFastSchedulingSchedulingUsers>> schedulingUsers{};
  shared_ptr<long> id{};

  UpdateServiceGroupSchedulingRequestFastScheduling() {}

  explicit UpdateServiceGroupSchedulingRequestFastScheduling(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (singleDuration) {
      res["singleDuration"] = boost::any(*singleDuration);
    }
    if (dutyPlan) {
      res["dutyPlan"] = boost::any(*dutyPlan);
    }
    if (singleDurationUnit) {
      res["singleDurationUnit"] = boost::any(*singleDurationUnit);
    }
    if (schedulingUsers) {
      vector<boost::any> temp1;
      for(auto item1:*schedulingUsers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["schedulingUsers"] = boost::any(temp1);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("singleDuration") != m.end() && !m["singleDuration"].empty()) {
      singleDuration = make_shared<long>(boost::any_cast<long>(m["singleDuration"]));
    }
    if (m.find("dutyPlan") != m.end() && !m["dutyPlan"].empty()) {
      dutyPlan = make_shared<string>(boost::any_cast<string>(m["dutyPlan"]));
    }
    if (m.find("singleDurationUnit") != m.end() && !m["singleDurationUnit"].empty()) {
      singleDurationUnit = make_shared<string>(boost::any_cast<string>(m["singleDurationUnit"]));
    }
    if (m.find("schedulingUsers") != m.end() && !m["schedulingUsers"].empty()) {
      if (typeid(vector<boost::any>) == m["schedulingUsers"].type()) {
        vector<UpdateServiceGroupSchedulingRequestFastSchedulingSchedulingUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["schedulingUsers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateServiceGroupSchedulingRequestFastSchedulingSchedulingUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        schedulingUsers = make_shared<vector<UpdateServiceGroupSchedulingRequestFastSchedulingSchedulingUsers>>(expect1);
      }
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
  }


  virtual ~UpdateServiceGroupSchedulingRequestFastScheduling() = default;
};
class UpdateServiceGroupSchedulingRequestFineSchedulingSchedulingFineShifts : public Darabonba::Model {
public:
  shared_ptr<string> schedulingStartTime{};
  shared_ptr<string> schedulingEndTime{};
  shared_ptr<long> schedulingOrder{};
  shared_ptr<string> shiftName{};
  shared_ptr<bool> skipOneDay{};
  shared_ptr<long> schedulingUserId{};
  shared_ptr<long> cycleOrder{};

  UpdateServiceGroupSchedulingRequestFineSchedulingSchedulingFineShifts() {}

  explicit UpdateServiceGroupSchedulingRequestFineSchedulingSchedulingFineShifts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schedulingStartTime) {
      res["schedulingStartTime"] = boost::any(*schedulingStartTime);
    }
    if (schedulingEndTime) {
      res["schedulingEndTime"] = boost::any(*schedulingEndTime);
    }
    if (schedulingOrder) {
      res["schedulingOrder"] = boost::any(*schedulingOrder);
    }
    if (shiftName) {
      res["shiftName"] = boost::any(*shiftName);
    }
    if (skipOneDay) {
      res["skipOneDay"] = boost::any(*skipOneDay);
    }
    if (schedulingUserId) {
      res["schedulingUserId"] = boost::any(*schedulingUserId);
    }
    if (cycleOrder) {
      res["cycleOrder"] = boost::any(*cycleOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("schedulingStartTime") != m.end() && !m["schedulingStartTime"].empty()) {
      schedulingStartTime = make_shared<string>(boost::any_cast<string>(m["schedulingStartTime"]));
    }
    if (m.find("schedulingEndTime") != m.end() && !m["schedulingEndTime"].empty()) {
      schedulingEndTime = make_shared<string>(boost::any_cast<string>(m["schedulingEndTime"]));
    }
    if (m.find("schedulingOrder") != m.end() && !m["schedulingOrder"].empty()) {
      schedulingOrder = make_shared<long>(boost::any_cast<long>(m["schedulingOrder"]));
    }
    if (m.find("shiftName") != m.end() && !m["shiftName"].empty()) {
      shiftName = make_shared<string>(boost::any_cast<string>(m["shiftName"]));
    }
    if (m.find("skipOneDay") != m.end() && !m["skipOneDay"].empty()) {
      skipOneDay = make_shared<bool>(boost::any_cast<bool>(m["skipOneDay"]));
    }
    if (m.find("schedulingUserId") != m.end() && !m["schedulingUserId"].empty()) {
      schedulingUserId = make_shared<long>(boost::any_cast<long>(m["schedulingUserId"]));
    }
    if (m.find("cycleOrder") != m.end() && !m["cycleOrder"].empty()) {
      cycleOrder = make_shared<long>(boost::any_cast<long>(m["cycleOrder"]));
    }
  }


  virtual ~UpdateServiceGroupSchedulingRequestFineSchedulingSchedulingFineShifts() = default;
};
class UpdateServiceGroupSchedulingRequestFineSchedulingSchedulingTemplateFineShifts : public Darabonba::Model {
public:
  shared_ptr<string> schedulingStartTime{};
  shared_ptr<string> schedulingEndTime{};
  shared_ptr<long> schedulingOrder{};
  shared_ptr<long> schedulingUserId{};
  shared_ptr<string> shiftName{};
  shared_ptr<bool> skipOneDay{};

  UpdateServiceGroupSchedulingRequestFineSchedulingSchedulingTemplateFineShifts() {}

  explicit UpdateServiceGroupSchedulingRequestFineSchedulingSchedulingTemplateFineShifts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schedulingStartTime) {
      res["schedulingStartTime"] = boost::any(*schedulingStartTime);
    }
    if (schedulingEndTime) {
      res["schedulingEndTime"] = boost::any(*schedulingEndTime);
    }
    if (schedulingOrder) {
      res["schedulingOrder"] = boost::any(*schedulingOrder);
    }
    if (schedulingUserId) {
      res["schedulingUserId"] = boost::any(*schedulingUserId);
    }
    if (shiftName) {
      res["shiftName"] = boost::any(*shiftName);
    }
    if (skipOneDay) {
      res["skipOneDay"] = boost::any(*skipOneDay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("schedulingStartTime") != m.end() && !m["schedulingStartTime"].empty()) {
      schedulingStartTime = make_shared<string>(boost::any_cast<string>(m["schedulingStartTime"]));
    }
    if (m.find("schedulingEndTime") != m.end() && !m["schedulingEndTime"].empty()) {
      schedulingEndTime = make_shared<string>(boost::any_cast<string>(m["schedulingEndTime"]));
    }
    if (m.find("schedulingOrder") != m.end() && !m["schedulingOrder"].empty()) {
      schedulingOrder = make_shared<long>(boost::any_cast<long>(m["schedulingOrder"]));
    }
    if (m.find("schedulingUserId") != m.end() && !m["schedulingUserId"].empty()) {
      schedulingUserId = make_shared<long>(boost::any_cast<long>(m["schedulingUserId"]));
    }
    if (m.find("shiftName") != m.end() && !m["shiftName"].empty()) {
      shiftName = make_shared<string>(boost::any_cast<string>(m["shiftName"]));
    }
    if (m.find("skipOneDay") != m.end() && !m["skipOneDay"].empty()) {
      skipOneDay = make_shared<bool>(boost::any_cast<bool>(m["skipOneDay"]));
    }
  }


  virtual ~UpdateServiceGroupSchedulingRequestFineSchedulingSchedulingTemplateFineShifts() = default;
};
class UpdateServiceGroupSchedulingRequestFineScheduling : public Darabonba::Model {
public:
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> shiftType{};
  shared_ptr<vector<UpdateServiceGroupSchedulingRequestFineSchedulingSchedulingFineShifts>> schedulingFineShifts{};
  shared_ptr<vector<UpdateServiceGroupSchedulingRequestFineSchedulingSchedulingTemplateFineShifts>> schedulingTemplateFineShifts{};
  shared_ptr<long> id{};

  UpdateServiceGroupSchedulingRequestFineScheduling() {}

  explicit UpdateServiceGroupSchedulingRequestFineScheduling(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (period) {
      res["period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["periodUnit"] = boost::any(*periodUnit);
    }
    if (shiftType) {
      res["shiftType"] = boost::any(*shiftType);
    }
    if (schedulingFineShifts) {
      vector<boost::any> temp1;
      for(auto item1:*schedulingFineShifts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["schedulingFineShifts"] = boost::any(temp1);
    }
    if (schedulingTemplateFineShifts) {
      vector<boost::any> temp1;
      for(auto item1:*schedulingTemplateFineShifts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["schedulingTemplateFineShifts"] = boost::any(temp1);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("period") != m.end() && !m["period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["period"]));
    }
    if (m.find("periodUnit") != m.end() && !m["periodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["periodUnit"]));
    }
    if (m.find("shiftType") != m.end() && !m["shiftType"].empty()) {
      shiftType = make_shared<string>(boost::any_cast<string>(m["shiftType"]));
    }
    if (m.find("schedulingFineShifts") != m.end() && !m["schedulingFineShifts"].empty()) {
      if (typeid(vector<boost::any>) == m["schedulingFineShifts"].type()) {
        vector<UpdateServiceGroupSchedulingRequestFineSchedulingSchedulingFineShifts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["schedulingFineShifts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateServiceGroupSchedulingRequestFineSchedulingSchedulingFineShifts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        schedulingFineShifts = make_shared<vector<UpdateServiceGroupSchedulingRequestFineSchedulingSchedulingFineShifts>>(expect1);
      }
    }
    if (m.find("schedulingTemplateFineShifts") != m.end() && !m["schedulingTemplateFineShifts"].empty()) {
      if (typeid(vector<boost::any>) == m["schedulingTemplateFineShifts"].type()) {
        vector<UpdateServiceGroupSchedulingRequestFineSchedulingSchedulingTemplateFineShifts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["schedulingTemplateFineShifts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateServiceGroupSchedulingRequestFineSchedulingSchedulingTemplateFineShifts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        schedulingTemplateFineShifts = make_shared<vector<UpdateServiceGroupSchedulingRequestFineSchedulingSchedulingTemplateFineShifts>>(expect1);
      }
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
  }


  virtual ~UpdateServiceGroupSchedulingRequestFineScheduling() = default;
};
class UpdateServiceGroupSchedulingRequest : public Darabonba::Model {
public:
  shared_ptr<long> serviceGroupId{};
  shared_ptr<string> schedulingWay{};
  shared_ptr<UpdateServiceGroupSchedulingRequestFastScheduling> fastScheduling{};
  shared_ptr<UpdateServiceGroupSchedulingRequestFineScheduling> fineScheduling{};
  shared_ptr<string> clientToken{};

  UpdateServiceGroupSchedulingRequest() {}

  explicit UpdateServiceGroupSchedulingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceGroupId) {
      res["serviceGroupId"] = boost::any(*serviceGroupId);
    }
    if (schedulingWay) {
      res["schedulingWay"] = boost::any(*schedulingWay);
    }
    if (fastScheduling) {
      res["fastScheduling"] = fastScheduling ? boost::any(fastScheduling->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fineScheduling) {
      res["fineScheduling"] = fineScheduling ? boost::any(fineScheduling->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceGroupId") != m.end() && !m["serviceGroupId"].empty()) {
      serviceGroupId = make_shared<long>(boost::any_cast<long>(m["serviceGroupId"]));
    }
    if (m.find("schedulingWay") != m.end() && !m["schedulingWay"].empty()) {
      schedulingWay = make_shared<string>(boost::any_cast<string>(m["schedulingWay"]));
    }
    if (m.find("fastScheduling") != m.end() && !m["fastScheduling"].empty()) {
      if (typeid(map<string, boost::any>) == m["fastScheduling"].type()) {
        UpdateServiceGroupSchedulingRequestFastScheduling model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["fastScheduling"]));
        fastScheduling = make_shared<UpdateServiceGroupSchedulingRequestFastScheduling>(model1);
      }
    }
    if (m.find("fineScheduling") != m.end() && !m["fineScheduling"].empty()) {
      if (typeid(map<string, boost::any>) == m["fineScheduling"].type()) {
        UpdateServiceGroupSchedulingRequestFineScheduling model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["fineScheduling"]));
        fineScheduling = make_shared<UpdateServiceGroupSchedulingRequestFineScheduling>(model1);
      }
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~UpdateServiceGroupSchedulingRequest() = default;
};
class UpdateServiceGroupSchedulingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateServiceGroupSchedulingResponseBody() {}

  explicit UpdateServiceGroupSchedulingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateServiceGroupSchedulingResponseBody() = default;
};
class UpdateServiceGroupSchedulingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateServiceGroupSchedulingResponseBody> body{};

  UpdateServiceGroupSchedulingResponse() {}

  explicit UpdateServiceGroupSchedulingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateServiceGroupSchedulingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServiceGroupSchedulingResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServiceGroupSchedulingResponse() = default;
};
class ListRouteRulesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<uint8_t>> ruleName{};
  shared_ptr<vector<uint8_t>> serviceName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> clientToken{};

  ListRouteRulesRequest() {}

  explicit ListRouteRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleName) {
      res["ruleName"] = boost::any(*ruleName);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ruleName") != m.end() && !m["ruleName"].empty()) {
      ruleName = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["ruleName"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["serviceName"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~ListRouteRulesRequest() = default;
};
class ListRouteRulesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> routeRuleId{};
  shared_ptr<long> tenantRamId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> relatedServiceName{};
  shared_ptr<long> timeWindow{};
  shared_ptr<long> matchCount{};
  shared_ptr<long> timeWindowUnit{};
  shared_ptr<long> relatedServiceId{};
  shared_ptr<string> routeType{};
  shared_ptr<string> incidentLevel{};
  shared_ptr<long> assignObjectId{};
  shared_ptr<string> assignObjectType{};
  shared_ptr<string> effection{};
  shared_ptr<string> createTime{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> enableStatus{};

  ListRouteRulesResponseBodyData() {}

  explicit ListRouteRulesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (routeRuleId) {
      res["routeRuleId"] = boost::any(*routeRuleId);
    }
    if (tenantRamId) {
      res["tenantRamId"] = boost::any(*tenantRamId);
    }
    if (ruleName) {
      res["ruleName"] = boost::any(*ruleName);
    }
    if (relatedServiceName) {
      res["relatedServiceName"] = boost::any(*relatedServiceName);
    }
    if (timeWindow) {
      res["timeWindow"] = boost::any(*timeWindow);
    }
    if (matchCount) {
      res["matchCount"] = boost::any(*matchCount);
    }
    if (timeWindowUnit) {
      res["timeWindowUnit"] = boost::any(*timeWindowUnit);
    }
    if (relatedServiceId) {
      res["relatedServiceId"] = boost::any(*relatedServiceId);
    }
    if (routeType) {
      res["routeType"] = boost::any(*routeType);
    }
    if (incidentLevel) {
      res["incidentLevel"] = boost::any(*incidentLevel);
    }
    if (assignObjectId) {
      res["assignObjectId"] = boost::any(*assignObjectId);
    }
    if (assignObjectType) {
      res["assignObjectType"] = boost::any(*assignObjectType);
    }
    if (effection) {
      res["effection"] = boost::any(*effection);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (enableStatus) {
      res["enableStatus"] = boost::any(*enableStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("routeRuleId") != m.end() && !m["routeRuleId"].empty()) {
      routeRuleId = make_shared<long>(boost::any_cast<long>(m["routeRuleId"]));
    }
    if (m.find("tenantRamId") != m.end() && !m["tenantRamId"].empty()) {
      tenantRamId = make_shared<long>(boost::any_cast<long>(m["tenantRamId"]));
    }
    if (m.find("ruleName") != m.end() && !m["ruleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["ruleName"]));
    }
    if (m.find("relatedServiceName") != m.end() && !m["relatedServiceName"].empty()) {
      relatedServiceName = make_shared<string>(boost::any_cast<string>(m["relatedServiceName"]));
    }
    if (m.find("timeWindow") != m.end() && !m["timeWindow"].empty()) {
      timeWindow = make_shared<long>(boost::any_cast<long>(m["timeWindow"]));
    }
    if (m.find("matchCount") != m.end() && !m["matchCount"].empty()) {
      matchCount = make_shared<long>(boost::any_cast<long>(m["matchCount"]));
    }
    if (m.find("timeWindowUnit") != m.end() && !m["timeWindowUnit"].empty()) {
      timeWindowUnit = make_shared<long>(boost::any_cast<long>(m["timeWindowUnit"]));
    }
    if (m.find("relatedServiceId") != m.end() && !m["relatedServiceId"].empty()) {
      relatedServiceId = make_shared<long>(boost::any_cast<long>(m["relatedServiceId"]));
    }
    if (m.find("routeType") != m.end() && !m["routeType"].empty()) {
      routeType = make_shared<string>(boost::any_cast<string>(m["routeType"]));
    }
    if (m.find("incidentLevel") != m.end() && !m["incidentLevel"].empty()) {
      incidentLevel = make_shared<string>(boost::any_cast<string>(m["incidentLevel"]));
    }
    if (m.find("assignObjectId") != m.end() && !m["assignObjectId"].empty()) {
      assignObjectId = make_shared<long>(boost::any_cast<long>(m["assignObjectId"]));
    }
    if (m.find("assignObjectType") != m.end() && !m["assignObjectType"].empty()) {
      assignObjectType = make_shared<string>(boost::any_cast<string>(m["assignObjectType"]));
    }
    if (m.find("effection") != m.end() && !m["effection"].empty()) {
      effection = make_shared<string>(boost::any_cast<string>(m["effection"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
    if (m.find("enableStatus") != m.end() && !m["enableStatus"].empty()) {
      enableStatus = make_shared<string>(boost::any_cast<string>(m["enableStatus"]));
    }
  }


  virtual ~ListRouteRulesResponseBodyData() = default;
};
class ListRouteRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListRouteRulesResponseBodyData>> data{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListRouteRulesResponseBody() {}

  explicit ListRouteRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListRouteRulesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRouteRulesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListRouteRulesResponseBodyData>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListRouteRulesResponseBody() = default;
};
class ListRouteRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListRouteRulesResponseBody> body{};

  ListRouteRulesResponse() {}

  explicit ListRouteRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListRouteRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRouteRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListRouteRulesResponse() = default;
};
class DisableSubscriptionRequest : public Darabonba::Model {
public:
  shared_ptr<long> subscriptionId{};

  DisableSubscriptionRequest() {}

  explicit DisableSubscriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subscriptionId) {
      res["subscriptionId"] = boost::any(*subscriptionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("subscriptionId") != m.end() && !m["subscriptionId"].empty()) {
      subscriptionId = make_shared<long>(boost::any_cast<long>(m["subscriptionId"]));
    }
  }


  virtual ~DisableSubscriptionRequest() = default;
};
class DisableSubscriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableSubscriptionResponseBody() {}

  explicit DisableSubscriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableSubscriptionResponseBody() = default;
};
class DisableSubscriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DisableSubscriptionResponseBody> body{};

  DisableSubscriptionResponse() {}

  explicit DisableSubscriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DisableSubscriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableSubscriptionResponseBody>(model1);
      }
    }
  }


  virtual ~DisableSubscriptionResponse() = default;
};
class ListProblemSubtotalsRequest : public Darabonba::Model {
public:
  shared_ptr<long> problemId{};
  shared_ptr<string> clientToken{};

  ListProblemSubtotalsRequest() {}

  explicit ListProblemSubtotalsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~ListProblemSubtotalsRequest() = default;
};
class ListProblemSubtotalsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> createTime{};
  shared_ptr<string> createRamName{};
  shared_ptr<string> createUserPhone{};

  ListProblemSubtotalsResponseBodyData() {}

  explicit ListProblemSubtotalsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (createRamName) {
      res["createRamName"] = boost::any(*createRamName);
    }
    if (createUserPhone) {
      res["createUserPhone"] = boost::any(*createUserPhone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("createRamName") != m.end() && !m["createRamName"].empty()) {
      createRamName = make_shared<string>(boost::any_cast<string>(m["createRamName"]));
    }
    if (m.find("createUserPhone") != m.end() && !m["createUserPhone"].empty()) {
      createUserPhone = make_shared<string>(boost::any_cast<string>(m["createUserPhone"]));
    }
  }


  virtual ~ListProblemSubtotalsResponseBodyData() = default;
};
class ListProblemSubtotalsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListProblemSubtotalsResponseBodyData>> data{};

  ListProblemSubtotalsResponseBody() {}

  explicit ListProblemSubtotalsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListProblemSubtotalsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProblemSubtotalsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListProblemSubtotalsResponseBodyData>>(expect1);
      }
    }
  }


  virtual ~ListProblemSubtotalsResponseBody() = default;
};
class ListProblemSubtotalsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListProblemSubtotalsResponseBody> body{};

  ListProblemSubtotalsResponse() {}

  explicit ListProblemSubtotalsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListProblemSubtotalsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProblemSubtotalsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProblemSubtotalsResponse() = default;
};
class ListEscalationPlanServicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};

  ListEscalationPlanServicesRequest() {}

  explicit ListEscalationPlanServicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~ListEscalationPlanServicesRequest() = default;
};
class ListEscalationPlanServicesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> scope{};
  shared_ptr<long> scopeObjectId{};

  ListEscalationPlanServicesResponseBodyData() {}

  explicit ListEscalationPlanServicesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (scopeObjectId) {
      res["scopeObjectId"] = boost::any(*scopeObjectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
    if (m.find("scopeObjectId") != m.end() && !m["scopeObjectId"].empty()) {
      scopeObjectId = make_shared<long>(boost::any_cast<long>(m["scopeObjectId"]));
    }
  }


  virtual ~ListEscalationPlanServicesResponseBodyData() = default;
};
class ListEscalationPlanServicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListEscalationPlanServicesResponseBodyData>> data{};

  ListEscalationPlanServicesResponseBody() {}

  explicit ListEscalationPlanServicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListEscalationPlanServicesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEscalationPlanServicesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListEscalationPlanServicesResponseBodyData>>(expect1);
      }
    }
  }


  virtual ~ListEscalationPlanServicesResponseBody() = default;
};
class ListEscalationPlanServicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListEscalationPlanServicesResponseBody> body{};

  ListEscalationPlanServicesResponse() {}

  explicit ListEscalationPlanServicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListEscalationPlanServicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEscalationPlanServicesResponseBody>(model1);
      }
    }
  }


  virtual ~ListEscalationPlanServicesResponse() = default;
};
class GetResourceStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};

  GetResourceStatisticsRequest() {}

  explicit GetResourceStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~GetResourceStatisticsRequest() = default;
};
class GetResourceStatisticsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> incidentCount{};
  shared_ptr<long> alertCount{};
  shared_ptr<long> problemCount{};
  shared_ptr<long> integrationCount{};

  GetResourceStatisticsResponseBodyData() {}

  explicit GetResourceStatisticsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (incidentCount) {
      res["incidentCount"] = boost::any(*incidentCount);
    }
    if (alertCount) {
      res["alertCount"] = boost::any(*alertCount);
    }
    if (problemCount) {
      res["problemCount"] = boost::any(*problemCount);
    }
    if (integrationCount) {
      res["integrationCount"] = boost::any(*integrationCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("incidentCount") != m.end() && !m["incidentCount"].empty()) {
      incidentCount = make_shared<long>(boost::any_cast<long>(m["incidentCount"]));
    }
    if (m.find("alertCount") != m.end() && !m["alertCount"].empty()) {
      alertCount = make_shared<long>(boost::any_cast<long>(m["alertCount"]));
    }
    if (m.find("problemCount") != m.end() && !m["problemCount"].empty()) {
      problemCount = make_shared<long>(boost::any_cast<long>(m["problemCount"]));
    }
    if (m.find("integrationCount") != m.end() && !m["integrationCount"].empty()) {
      integrationCount = make_shared<long>(boost::any_cast<long>(m["integrationCount"]));
    }
  }


  virtual ~GetResourceStatisticsResponseBodyData() = default;
};
class GetResourceStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetResourceStatisticsResponseBodyData> data{};

  GetResourceStatisticsResponseBody() {}

  explicit GetResourceStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetResourceStatisticsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetResourceStatisticsResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetResourceStatisticsResponseBody() = default;
};
class GetResourceStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetResourceStatisticsResponseBody> body{};

  GetResourceStatisticsResponse() {}

  explicit GetResourceStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetResourceStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceStatisticsResponse() = default;
};
class CreateRouteRuleRequestRouteChildRulesConditions : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};
  shared_ptr<string> operationSymbol{};

  CreateRouteRuleRequestRouteChildRulesConditions() {}

  explicit CreateRouteRuleRequestRouteChildRulesConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    if (operationSymbol) {
      res["operationSymbol"] = boost::any(*operationSymbol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
    if (m.find("operationSymbol") != m.end() && !m["operationSymbol"].empty()) {
      operationSymbol = make_shared<string>(boost::any_cast<string>(m["operationSymbol"]));
    }
  }


  virtual ~CreateRouteRuleRequestRouteChildRulesConditions() = default;
};
class CreateRouteRuleRequestRouteChildRules : public Darabonba::Model {
public:
  shared_ptr<long> monitorSourceId{};
  shared_ptr<vector<CreateRouteRuleRequestRouteChildRulesConditions>> conditions{};

  CreateRouteRuleRequestRouteChildRules() {}

  explicit CreateRouteRuleRequestRouteChildRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (monitorSourceId) {
      res["monitorSourceId"] = boost::any(*monitorSourceId);
    }
    if (conditions) {
      vector<boost::any> temp1;
      for(auto item1:*conditions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["conditions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("monitorSourceId") != m.end() && !m["monitorSourceId"].empty()) {
      monitorSourceId = make_shared<long>(boost::any_cast<long>(m["monitorSourceId"]));
    }
    if (m.find("conditions") != m.end() && !m["conditions"].empty()) {
      if (typeid(vector<boost::any>) == m["conditions"].type()) {
        vector<CreateRouteRuleRequestRouteChildRulesConditions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["conditions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateRouteRuleRequestRouteChildRulesConditions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conditions = make_shared<vector<CreateRouteRuleRequestRouteChildRulesConditions>>(expect1);
      }
    }
  }


  virtual ~CreateRouteRuleRequestRouteChildRules() = default;
};
class CreateRouteRuleRequest : public Darabonba::Model {
public:
  shared_ptr<vector<uint8_t>> ruleName{};
  shared_ptr<string> enableStatus{};
  shared_ptr<long> relatedServiceId{};
  shared_ptr<string> routeType{};
  shared_ptr<string> incidentLevel{};
  shared_ptr<long> assignObjectId{};
  shared_ptr<string> assignObjectType{};
  shared_ptr<string> effection{};
  shared_ptr<long> timeWindow{};
  shared_ptr<long> matchCount{};
  shared_ptr<string> timeWindowUnit{};
  shared_ptr<vector<CreateRouteRuleRequestRouteChildRules>> routeChildRules{};
  shared_ptr<vector<string>> notifyChannels{};
  shared_ptr<string> clientToken{};

  CreateRouteRuleRequest() {}

  explicit CreateRouteRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleName) {
      res["ruleName"] = boost::any(*ruleName);
    }
    if (enableStatus) {
      res["enableStatus"] = boost::any(*enableStatus);
    }
    if (relatedServiceId) {
      res["relatedServiceId"] = boost::any(*relatedServiceId);
    }
    if (routeType) {
      res["routeType"] = boost::any(*routeType);
    }
    if (incidentLevel) {
      res["incidentLevel"] = boost::any(*incidentLevel);
    }
    if (assignObjectId) {
      res["assignObjectId"] = boost::any(*assignObjectId);
    }
    if (assignObjectType) {
      res["assignObjectType"] = boost::any(*assignObjectType);
    }
    if (effection) {
      res["effection"] = boost::any(*effection);
    }
    if (timeWindow) {
      res["timeWindow"] = boost::any(*timeWindow);
    }
    if (matchCount) {
      res["matchCount"] = boost::any(*matchCount);
    }
    if (timeWindowUnit) {
      res["timeWindowUnit"] = boost::any(*timeWindowUnit);
    }
    if (routeChildRules) {
      vector<boost::any> temp1;
      for(auto item1:*routeChildRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["routeChildRules"] = boost::any(temp1);
    }
    if (notifyChannels) {
      res["notifyChannels"] = boost::any(*notifyChannels);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ruleName") != m.end() && !m["ruleName"].empty()) {
      ruleName = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["ruleName"]));
    }
    if (m.find("enableStatus") != m.end() && !m["enableStatus"].empty()) {
      enableStatus = make_shared<string>(boost::any_cast<string>(m["enableStatus"]));
    }
    if (m.find("relatedServiceId") != m.end() && !m["relatedServiceId"].empty()) {
      relatedServiceId = make_shared<long>(boost::any_cast<long>(m["relatedServiceId"]));
    }
    if (m.find("routeType") != m.end() && !m["routeType"].empty()) {
      routeType = make_shared<string>(boost::any_cast<string>(m["routeType"]));
    }
    if (m.find("incidentLevel") != m.end() && !m["incidentLevel"].empty()) {
      incidentLevel = make_shared<string>(boost::any_cast<string>(m["incidentLevel"]));
    }
    if (m.find("assignObjectId") != m.end() && !m["assignObjectId"].empty()) {
      assignObjectId = make_shared<long>(boost::any_cast<long>(m["assignObjectId"]));
    }
    if (m.find("assignObjectType") != m.end() && !m["assignObjectType"].empty()) {
      assignObjectType = make_shared<string>(boost::any_cast<string>(m["assignObjectType"]));
    }
    if (m.find("effection") != m.end() && !m["effection"].empty()) {
      effection = make_shared<string>(boost::any_cast<string>(m["effection"]));
    }
    if (m.find("timeWindow") != m.end() && !m["timeWindow"].empty()) {
      timeWindow = make_shared<long>(boost::any_cast<long>(m["timeWindow"]));
    }
    if (m.find("matchCount") != m.end() && !m["matchCount"].empty()) {
      matchCount = make_shared<long>(boost::any_cast<long>(m["matchCount"]));
    }
    if (m.find("timeWindowUnit") != m.end() && !m["timeWindowUnit"].empty()) {
      timeWindowUnit = make_shared<string>(boost::any_cast<string>(m["timeWindowUnit"]));
    }
    if (m.find("routeChildRules") != m.end() && !m["routeChildRules"].empty()) {
      if (typeid(vector<boost::any>) == m["routeChildRules"].type()) {
        vector<CreateRouteRuleRequestRouteChildRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["routeChildRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateRouteRuleRequestRouteChildRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        routeChildRules = make_shared<vector<CreateRouteRuleRequestRouteChildRules>>(expect1);
      }
    }
    if (m.find("notifyChannels") != m.end() && !m["notifyChannels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["notifyChannels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["notifyChannels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      notifyChannels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~CreateRouteRuleRequest() = default;
};
class CreateRouteRuleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> routeRuleId{};

  CreateRouteRuleResponseBodyData() {}

  explicit CreateRouteRuleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (routeRuleId) {
      res["routeRuleId"] = boost::any(*routeRuleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("routeRuleId") != m.end() && !m["routeRuleId"].empty()) {
      routeRuleId = make_shared<long>(boost::any_cast<long>(m["routeRuleId"]));
    }
  }


  virtual ~CreateRouteRuleResponseBodyData() = default;
};
class CreateRouteRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateRouteRuleResponseBodyData> data{};

  CreateRouteRuleResponseBody() {}

  explicit CreateRouteRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateRouteRuleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateRouteRuleResponseBodyData>(model1);
      }
    }
  }


  virtual ~CreateRouteRuleResponseBody() = default;
};
class CreateRouteRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateRouteRuleResponseBody> body{};

  CreateRouteRuleResponse() {}

  explicit CreateRouteRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateRouteRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRouteRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRouteRuleResponse() = default;
};
class UpdateProblemTimelineRequest : public Darabonba::Model {
public:
  shared_ptr<long> problemTimelineId{};
  shared_ptr<string> keyNode{};
  shared_ptr<string> content{};
  shared_ptr<string> time{};
  shared_ptr<long> problemId{};
  shared_ptr<string> clientToken{};

  UpdateProblemTimelineRequest() {}

  explicit UpdateProblemTimelineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (problemTimelineId) {
      res["problemTimelineId"] = boost::any(*problemTimelineId);
    }
    if (keyNode) {
      res["keyNode"] = boost::any(*keyNode);
    }
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (time) {
      res["time"] = boost::any(*time);
    }
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("problemTimelineId") != m.end() && !m["problemTimelineId"].empty()) {
      problemTimelineId = make_shared<long>(boost::any_cast<long>(m["problemTimelineId"]));
    }
    if (m.find("keyNode") != m.end() && !m["keyNode"].empty()) {
      keyNode = make_shared<string>(boost::any_cast<string>(m["keyNode"]));
    }
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~UpdateProblemTimelineRequest() = default;
};
class UpdateProblemTimelineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateProblemTimelineResponseBody() {}

  explicit UpdateProblemTimelineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateProblemTimelineResponseBody() = default;
};
class UpdateProblemTimelineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateProblemTimelineResponseBody> body{};

  UpdateProblemTimelineResponse() {}

  explicit UpdateProblemTimelineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateProblemTimelineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProblemTimelineResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProblemTimelineResponse() = default;
};
class DisableRouteRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> routeRuleId{};
  shared_ptr<string> clientToken{};

  DisableRouteRuleRequest() {}

  explicit DisableRouteRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (routeRuleId) {
      res["routeRuleId"] = boost::any(*routeRuleId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("routeRuleId") != m.end() && !m["routeRuleId"].empty()) {
      routeRuleId = make_shared<long>(boost::any_cast<long>(m["routeRuleId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~DisableRouteRuleRequest() = default;
};
class DisableRouteRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> data{};

  DisableRouteRuleResponseBody() {}

  explicit DisableRouteRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["data"]));
    }
  }


  virtual ~DisableRouteRuleResponseBody() = default;
};
class DisableRouteRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DisableRouteRuleResponseBody> body{};

  DisableRouteRuleResponse() {}

  explicit DisableRouteRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DisableRouteRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableRouteRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DisableRouteRuleResponse() = default;
};
class GenerateProblemPictureUploadSignRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> fileType{};
  shared_ptr<long> fileSize{};
  shared_ptr<long> problemId{};

  GenerateProblemPictureUploadSignRequest() {}

  explicit GenerateProblemPictureUploadSignRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["fileType"] = boost::any(*fileType);
    }
    if (fileSize) {
      res["fileSize"] = boost::any(*fileSize);
    }
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileType") != m.end() && !m["fileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["fileType"]));
    }
    if (m.find("fileSize") != m.end() && !m["fileSize"].empty()) {
      fileSize = make_shared<long>(boost::any_cast<long>(m["fileSize"]));
    }
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
  }


  virtual ~GenerateProblemPictureUploadSignRequest() = default;
};
class GenerateProblemPictureUploadSignResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<string> key{};
  shared_ptr<string> policy{};
  shared_ptr<string> signature{};
  shared_ptr<string> url{};
  shared_ptr<string> accessKeyId{};

  GenerateProblemPictureUploadSignResponseBodyData() {}

  explicit GenerateProblemPictureUploadSignResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["bucketName"] = boost::any(*bucketName);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (policy) {
      res["policy"] = boost::any(*policy);
    }
    if (signature) {
      res["signature"] = boost::any(*signature);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    if (accessKeyId) {
      res["accessKeyId"] = boost::any(*accessKeyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bucketName") != m.end() && !m["bucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["bucketName"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("policy") != m.end() && !m["policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["policy"]));
    }
    if (m.find("signature") != m.end() && !m["signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["signature"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
    if (m.find("accessKeyId") != m.end() && !m["accessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["accessKeyId"]));
    }
  }


  virtual ~GenerateProblemPictureUploadSignResponseBodyData() = default;
};
class GenerateProblemPictureUploadSignResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GenerateProblemPictureUploadSignResponseBodyData> data{};

  GenerateProblemPictureUploadSignResponseBody() {}

  explicit GenerateProblemPictureUploadSignResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GenerateProblemPictureUploadSignResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GenerateProblemPictureUploadSignResponseBodyData>(model1);
      }
    }
  }


  virtual ~GenerateProblemPictureUploadSignResponseBody() = default;
};
class GenerateProblemPictureUploadSignResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GenerateProblemPictureUploadSignResponseBody> body{};

  GenerateProblemPictureUploadSignResponse() {}

  explicit GenerateProblemPictureUploadSignResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GenerateProblemPictureUploadSignResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateProblemPictureUploadSignResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateProblemPictureUploadSignResponse() = default;
};
class DeliverIncidentRequest : public Darabonba::Model {
public:
  shared_ptr<long> incidentId{};
  shared_ptr<long> assignUserId{};
  shared_ptr<string> clientToken{};

  DeliverIncidentRequest() {}

  explicit DeliverIncidentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (incidentId) {
      res["incidentId"] = boost::any(*incidentId);
    }
    if (assignUserId) {
      res["assignUserId"] = boost::any(*assignUserId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("incidentId") != m.end() && !m["incidentId"].empty()) {
      incidentId = make_shared<long>(boost::any_cast<long>(m["incidentId"]));
    }
    if (m.find("assignUserId") != m.end() && !m["assignUserId"].empty()) {
      assignUserId = make_shared<long>(boost::any_cast<long>(m["assignUserId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~DeliverIncidentRequest() = default;
};
class DeliverIncidentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeliverIncidentResponseBody() {}

  explicit DeliverIncidentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeliverIncidentResponseBody() = default;
};
class DeliverIncidentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeliverIncidentResponseBody> body{};

  DeliverIncidentResponse() {}

  explicit DeliverIncidentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeliverIncidentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeliverIncidentResponseBody>(model1);
      }
    }
  }


  virtual ~DeliverIncidentResponse() = default;
};
class GetEscalationPlanRequest : public Darabonba::Model {
public:
  shared_ptr<long> escalationPlanId{};
  shared_ptr<string> clientToken{};

  GetEscalationPlanRequest() {}

  explicit GetEscalationPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (escalationPlanId) {
      res["escalationPlanId"] = boost::any(*escalationPlanId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("escalationPlanId") != m.end() && !m["escalationPlanId"].empty()) {
      escalationPlanId = make_shared<long>(boost::any_cast<long>(m["escalationPlanId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~GetEscalationPlanRequest() = default;
};
class GetEscalationPlanResponseBodyDataEscalationPlanScopeObjects : public Darabonba::Model {
public:
  shared_ptr<long> scopeObjectId{};
  shared_ptr<string> scope{};
  shared_ptr<string> scopeObjectName{};

  GetEscalationPlanResponseBodyDataEscalationPlanScopeObjects() {}

  explicit GetEscalationPlanResponseBodyDataEscalationPlanScopeObjects(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scopeObjectId) {
      res["scopeObjectId"] = boost::any(*scopeObjectId);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (scopeObjectName) {
      res["scopeObjectName"] = boost::any(*scopeObjectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("scopeObjectId") != m.end() && !m["scopeObjectId"].empty()) {
      scopeObjectId = make_shared<long>(boost::any_cast<long>(m["scopeObjectId"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
    if (m.find("scopeObjectName") != m.end() && !m["scopeObjectName"].empty()) {
      scopeObjectName = make_shared<string>(boost::any_cast<string>(m["scopeObjectName"]));
    }
  }


  virtual ~GetEscalationPlanResponseBodyDataEscalationPlanScopeObjects() = default;
};
class GetEscalationPlanResponseBodyDataEscalationPlanRulesEscalationPlanConditions : public Darabonba::Model {
public:
  shared_ptr<string> level{};
  shared_ptr<string> effection{};

  GetEscalationPlanResponseBodyDataEscalationPlanRulesEscalationPlanConditions() {}

  explicit GetEscalationPlanResponseBodyDataEscalationPlanRulesEscalationPlanConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (level) {
      res["level"] = boost::any(*level);
    }
    if (effection) {
      res["effection"] = boost::any(*effection);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["level"]));
    }
    if (m.find("effection") != m.end() && !m["effection"].empty()) {
      effection = make_shared<string>(boost::any_cast<string>(m["effection"]));
    }
  }


  virtual ~GetEscalationPlanResponseBodyDataEscalationPlanRulesEscalationPlanConditions() = default;
};
class GetEscalationPlanResponseBodyDataEscalationPlanRulesEscalationPlanStrategiesNoticeObjectList : public Darabonba::Model {
public:
  shared_ptr<long> noticeObjectId{};
  shared_ptr<string> noticeObjectName{};

  GetEscalationPlanResponseBodyDataEscalationPlanRulesEscalationPlanStrategiesNoticeObjectList() {}

  explicit GetEscalationPlanResponseBodyDataEscalationPlanRulesEscalationPlanStrategiesNoticeObjectList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (noticeObjectId) {
      res["noticeObjectId"] = boost::any(*noticeObjectId);
    }
    if (noticeObjectName) {
      res["noticeObjectName"] = boost::any(*noticeObjectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("noticeObjectId") != m.end() && !m["noticeObjectId"].empty()) {
      noticeObjectId = make_shared<long>(boost::any_cast<long>(m["noticeObjectId"]));
    }
    if (m.find("noticeObjectName") != m.end() && !m["noticeObjectName"].empty()) {
      noticeObjectName = make_shared<string>(boost::any_cast<string>(m["noticeObjectName"]));
    }
  }


  virtual ~GetEscalationPlanResponseBodyDataEscalationPlanRulesEscalationPlanStrategiesNoticeObjectList() = default;
};
class GetEscalationPlanResponseBodyDataEscalationPlanRulesEscalationPlanStrategies : public Darabonba::Model {
public:
  shared_ptr<long> noticeTime{};
  shared_ptr<string> escalationPlanType{};
  shared_ptr<vector<GetEscalationPlanResponseBodyDataEscalationPlanRulesEscalationPlanStrategiesNoticeObjectList>> noticeObjectList{};
  shared_ptr<string> noticeChannels{};

  GetEscalationPlanResponseBodyDataEscalationPlanRulesEscalationPlanStrategies() {}

  explicit GetEscalationPlanResponseBodyDataEscalationPlanRulesEscalationPlanStrategies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (noticeTime) {
      res["noticeTime"] = boost::any(*noticeTime);
    }
    if (escalationPlanType) {
      res["escalationPlanType"] = boost::any(*escalationPlanType);
    }
    if (noticeObjectList) {
      vector<boost::any> temp1;
      for(auto item1:*noticeObjectList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["noticeObjectList"] = boost::any(temp1);
    }
    if (noticeChannels) {
      res["noticeChannels"] = boost::any(*noticeChannels);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("noticeTime") != m.end() && !m["noticeTime"].empty()) {
      noticeTime = make_shared<long>(boost::any_cast<long>(m["noticeTime"]));
    }
    if (m.find("escalationPlanType") != m.end() && !m["escalationPlanType"].empty()) {
      escalationPlanType = make_shared<string>(boost::any_cast<string>(m["escalationPlanType"]));
    }
    if (m.find("noticeObjectList") != m.end() && !m["noticeObjectList"].empty()) {
      if (typeid(vector<boost::any>) == m["noticeObjectList"].type()) {
        vector<GetEscalationPlanResponseBodyDataEscalationPlanRulesEscalationPlanStrategiesNoticeObjectList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["noticeObjectList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEscalationPlanResponseBodyDataEscalationPlanRulesEscalationPlanStrategiesNoticeObjectList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        noticeObjectList = make_shared<vector<GetEscalationPlanResponseBodyDataEscalationPlanRulesEscalationPlanStrategiesNoticeObjectList>>(expect1);
      }
    }
    if (m.find("noticeChannels") != m.end() && !m["noticeChannels"].empty()) {
      noticeChannels = make_shared<string>(boost::any_cast<string>(m["noticeChannels"]));
    }
  }


  virtual ~GetEscalationPlanResponseBodyDataEscalationPlanRulesEscalationPlanStrategies() = default;
};
class GetEscalationPlanResponseBodyDataEscalationPlanRules : public Darabonba::Model {
public:
  shared_ptr<long> escalationPlanRuleId{};
  shared_ptr<vector<GetEscalationPlanResponseBodyDataEscalationPlanRulesEscalationPlanConditions>> escalationPlanConditions{};
  shared_ptr<vector<GetEscalationPlanResponseBodyDataEscalationPlanRulesEscalationPlanStrategies>> escalationPlanStrategies{};

  GetEscalationPlanResponseBodyDataEscalationPlanRules() {}

  explicit GetEscalationPlanResponseBodyDataEscalationPlanRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (escalationPlanRuleId) {
      res["escalationPlanRuleId"] = boost::any(*escalationPlanRuleId);
    }
    if (escalationPlanConditions) {
      vector<boost::any> temp1;
      for(auto item1:*escalationPlanConditions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["escalationPlanConditions"] = boost::any(temp1);
    }
    if (escalationPlanStrategies) {
      vector<boost::any> temp1;
      for(auto item1:*escalationPlanStrategies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["escalationPlanStrategies"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("escalationPlanRuleId") != m.end() && !m["escalationPlanRuleId"].empty()) {
      escalationPlanRuleId = make_shared<long>(boost::any_cast<long>(m["escalationPlanRuleId"]));
    }
    if (m.find("escalationPlanConditions") != m.end() && !m["escalationPlanConditions"].empty()) {
      if (typeid(vector<boost::any>) == m["escalationPlanConditions"].type()) {
        vector<GetEscalationPlanResponseBodyDataEscalationPlanRulesEscalationPlanConditions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["escalationPlanConditions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEscalationPlanResponseBodyDataEscalationPlanRulesEscalationPlanConditions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        escalationPlanConditions = make_shared<vector<GetEscalationPlanResponseBodyDataEscalationPlanRulesEscalationPlanConditions>>(expect1);
      }
    }
    if (m.find("escalationPlanStrategies") != m.end() && !m["escalationPlanStrategies"].empty()) {
      if (typeid(vector<boost::any>) == m["escalationPlanStrategies"].type()) {
        vector<GetEscalationPlanResponseBodyDataEscalationPlanRulesEscalationPlanStrategies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["escalationPlanStrategies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEscalationPlanResponseBodyDataEscalationPlanRulesEscalationPlanStrategies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        escalationPlanStrategies = make_shared<vector<GetEscalationPlanResponseBodyDataEscalationPlanRulesEscalationPlanStrategies>>(expect1);
      }
    }
  }


  virtual ~GetEscalationPlanResponseBodyDataEscalationPlanRules() = default;
};
class GetEscalationPlanResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> escalationPlanId{};
  shared_ptr<string> escalationPlanName{};
  shared_ptr<string> escalationPlanDescription{};
  shared_ptr<vector<GetEscalationPlanResponseBodyDataEscalationPlanScopeObjects>> escalationPlanScopeObjects{};
  shared_ptr<vector<GetEscalationPlanResponseBodyDataEscalationPlanRules>> escalationPlanRules{};
  shared_ptr<string> createTime{};

  GetEscalationPlanResponseBodyData() {}

  explicit GetEscalationPlanResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (escalationPlanId) {
      res["escalationPlanId"] = boost::any(*escalationPlanId);
    }
    if (escalationPlanName) {
      res["escalationPlanName"] = boost::any(*escalationPlanName);
    }
    if (escalationPlanDescription) {
      res["escalationPlanDescription"] = boost::any(*escalationPlanDescription);
    }
    if (escalationPlanScopeObjects) {
      vector<boost::any> temp1;
      for(auto item1:*escalationPlanScopeObjects){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["escalationPlanScopeObjects"] = boost::any(temp1);
    }
    if (escalationPlanRules) {
      vector<boost::any> temp1;
      for(auto item1:*escalationPlanRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["escalationPlanRules"] = boost::any(temp1);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("escalationPlanId") != m.end() && !m["escalationPlanId"].empty()) {
      escalationPlanId = make_shared<long>(boost::any_cast<long>(m["escalationPlanId"]));
    }
    if (m.find("escalationPlanName") != m.end() && !m["escalationPlanName"].empty()) {
      escalationPlanName = make_shared<string>(boost::any_cast<string>(m["escalationPlanName"]));
    }
    if (m.find("escalationPlanDescription") != m.end() && !m["escalationPlanDescription"].empty()) {
      escalationPlanDescription = make_shared<string>(boost::any_cast<string>(m["escalationPlanDescription"]));
    }
    if (m.find("escalationPlanScopeObjects") != m.end() && !m["escalationPlanScopeObjects"].empty()) {
      if (typeid(vector<boost::any>) == m["escalationPlanScopeObjects"].type()) {
        vector<GetEscalationPlanResponseBodyDataEscalationPlanScopeObjects> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["escalationPlanScopeObjects"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEscalationPlanResponseBodyDataEscalationPlanScopeObjects model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        escalationPlanScopeObjects = make_shared<vector<GetEscalationPlanResponseBodyDataEscalationPlanScopeObjects>>(expect1);
      }
    }
    if (m.find("escalationPlanRules") != m.end() && !m["escalationPlanRules"].empty()) {
      if (typeid(vector<boost::any>) == m["escalationPlanRules"].type()) {
        vector<GetEscalationPlanResponseBodyDataEscalationPlanRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["escalationPlanRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEscalationPlanResponseBodyDataEscalationPlanRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        escalationPlanRules = make_shared<vector<GetEscalationPlanResponseBodyDataEscalationPlanRules>>(expect1);
      }
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
  }


  virtual ~GetEscalationPlanResponseBodyData() = default;
};
class GetEscalationPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetEscalationPlanResponseBodyData> data{};

  GetEscalationPlanResponseBody() {}

  explicit GetEscalationPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetEscalationPlanResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetEscalationPlanResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetEscalationPlanResponseBody() = default;
};
class GetEscalationPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetEscalationPlanResponseBody> body{};

  GetEscalationPlanResponse() {}

  explicit GetEscalationPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetEscalationPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEscalationPlanResponseBody>(model1);
      }
    }
  }


  virtual ~GetEscalationPlanResponse() = default;
};
class DeleteProblemEffectionServiceRequest : public Darabonba::Model {
public:
  shared_ptr<long> effectionServiceId{};
  shared_ptr<long> problemId{};
  shared_ptr<string> clientToken{};

  DeleteProblemEffectionServiceRequest() {}

  explicit DeleteProblemEffectionServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (effectionServiceId) {
      res["effectionServiceId"] = boost::any(*effectionServiceId);
    }
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("effectionServiceId") != m.end() && !m["effectionServiceId"].empty()) {
      effectionServiceId = make_shared<long>(boost::any_cast<long>(m["effectionServiceId"]));
    }
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~DeleteProblemEffectionServiceRequest() = default;
};
class DeleteProblemEffectionServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteProblemEffectionServiceResponseBody() {}

  explicit DeleteProblemEffectionServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteProblemEffectionServiceResponseBody() = default;
};
class DeleteProblemEffectionServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteProblemEffectionServiceResponseBody> body{};

  DeleteProblemEffectionServiceResponse() {}

  explicit DeleteProblemEffectionServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteProblemEffectionServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteProblemEffectionServiceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteProblemEffectionServiceResponse() = default;
};
class ListIncidentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> incidentLevel{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> effect{};
  shared_ptr<long> relationServiceId{};
  shared_ptr<string> incidentStatus{};
  shared_ptr<long> me{};
  shared_ptr<string> clientToken{};

  ListIncidentsRequest() {}

  explicit ListIncidentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (incidentLevel) {
      res["incidentLevel"] = boost::any(*incidentLevel);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (effect) {
      res["effect"] = boost::any(*effect);
    }
    if (relationServiceId) {
      res["relationServiceId"] = boost::any(*relationServiceId);
    }
    if (incidentStatus) {
      res["incidentStatus"] = boost::any(*incidentStatus);
    }
    if (me) {
      res["me"] = boost::any(*me);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("incidentLevel") != m.end() && !m["incidentLevel"].empty()) {
      incidentLevel = make_shared<string>(boost::any_cast<string>(m["incidentLevel"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("effect") != m.end() && !m["effect"].empty()) {
      effect = make_shared<string>(boost::any_cast<string>(m["effect"]));
    }
    if (m.find("relationServiceId") != m.end() && !m["relationServiceId"].empty()) {
      relationServiceId = make_shared<long>(boost::any_cast<long>(m["relationServiceId"]));
    }
    if (m.find("incidentStatus") != m.end() && !m["incidentStatus"].empty()) {
      incidentStatus = make_shared<string>(boost::any_cast<string>(m["incidentStatus"]));
    }
    if (m.find("me") != m.end() && !m["me"].empty()) {
      me = make_shared<long>(boost::any_cast<long>(m["me"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~ListIncidentsRequest() = default;
};
class ListIncidentsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> incidentId{};
  shared_ptr<long> routeRuleId{};
  shared_ptr<string> routeRuleName{};
  shared_ptr<string> incidentStatus{};
  shared_ptr<string> incidentLevel{};
  shared_ptr<long> relatedServiceId{};
  shared_ptr<string> relatedServiceName{};
  shared_ptr<string> effect{};
  shared_ptr<long> assignUserId{};
  shared_ptr<string> assignUserName{};
  shared_ptr<string> assignUserPhone{};
  shared_ptr<string> incidentTitle{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> isManual{};

  ListIncidentsResponseBodyData() {}

  explicit ListIncidentsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (incidentId) {
      res["incidentId"] = boost::any(*incidentId);
    }
    if (routeRuleId) {
      res["routeRuleId"] = boost::any(*routeRuleId);
    }
    if (routeRuleName) {
      res["routeRuleName"] = boost::any(*routeRuleName);
    }
    if (incidentStatus) {
      res["incidentStatus"] = boost::any(*incidentStatus);
    }
    if (incidentLevel) {
      res["incidentLevel"] = boost::any(*incidentLevel);
    }
    if (relatedServiceId) {
      res["relatedServiceId"] = boost::any(*relatedServiceId);
    }
    if (relatedServiceName) {
      res["relatedServiceName"] = boost::any(*relatedServiceName);
    }
    if (effect) {
      res["effect"] = boost::any(*effect);
    }
    if (assignUserId) {
      res["assignUserId"] = boost::any(*assignUserId);
    }
    if (assignUserName) {
      res["assignUserName"] = boost::any(*assignUserName);
    }
    if (assignUserPhone) {
      res["assignUserPhone"] = boost::any(*assignUserPhone);
    }
    if (incidentTitle) {
      res["incidentTitle"] = boost::any(*incidentTitle);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (isManual) {
      res["isManual"] = boost::any(*isManual);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("incidentId") != m.end() && !m["incidentId"].empty()) {
      incidentId = make_shared<long>(boost::any_cast<long>(m["incidentId"]));
    }
    if (m.find("routeRuleId") != m.end() && !m["routeRuleId"].empty()) {
      routeRuleId = make_shared<long>(boost::any_cast<long>(m["routeRuleId"]));
    }
    if (m.find("routeRuleName") != m.end() && !m["routeRuleName"].empty()) {
      routeRuleName = make_shared<string>(boost::any_cast<string>(m["routeRuleName"]));
    }
    if (m.find("incidentStatus") != m.end() && !m["incidentStatus"].empty()) {
      incidentStatus = make_shared<string>(boost::any_cast<string>(m["incidentStatus"]));
    }
    if (m.find("incidentLevel") != m.end() && !m["incidentLevel"].empty()) {
      incidentLevel = make_shared<string>(boost::any_cast<string>(m["incidentLevel"]));
    }
    if (m.find("relatedServiceId") != m.end() && !m["relatedServiceId"].empty()) {
      relatedServiceId = make_shared<long>(boost::any_cast<long>(m["relatedServiceId"]));
    }
    if (m.find("relatedServiceName") != m.end() && !m["relatedServiceName"].empty()) {
      relatedServiceName = make_shared<string>(boost::any_cast<string>(m["relatedServiceName"]));
    }
    if (m.find("effect") != m.end() && !m["effect"].empty()) {
      effect = make_shared<string>(boost::any_cast<string>(m["effect"]));
    }
    if (m.find("assignUserId") != m.end() && !m["assignUserId"].empty()) {
      assignUserId = make_shared<long>(boost::any_cast<long>(m["assignUserId"]));
    }
    if (m.find("assignUserName") != m.end() && !m["assignUserName"].empty()) {
      assignUserName = make_shared<string>(boost::any_cast<string>(m["assignUserName"]));
    }
    if (m.find("assignUserPhone") != m.end() && !m["assignUserPhone"].empty()) {
      assignUserPhone = make_shared<string>(boost::any_cast<string>(m["assignUserPhone"]));
    }
    if (m.find("incidentTitle") != m.end() && !m["incidentTitle"].empty()) {
      incidentTitle = make_shared<string>(boost::any_cast<string>(m["incidentTitle"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("isManual") != m.end() && !m["isManual"].empty()) {
      isManual = make_shared<bool>(boost::any_cast<bool>(m["isManual"]));
    }
  }


  virtual ~ListIncidentsResponseBodyData() = default;
};
class ListIncidentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListIncidentsResponseBodyData>> data{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListIncidentsResponseBody() {}

  explicit ListIncidentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListIncidentsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIncidentsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListIncidentsResponseBodyData>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListIncidentsResponseBody() = default;
};
class ListIncidentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListIncidentsResponseBody> body{};

  ListIncidentsResponse() {}

  explicit ListIncidentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListIncidentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListIncidentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListIncidentsResponse() = default;
};
class CreateServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceDescription{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> clientToken{};

  CreateServiceRequest() {}

  explicit CreateServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceDescription) {
      res["serviceDescription"] = boost::any(*serviceDescription);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceDescription") != m.end() && !m["serviceDescription"].empty()) {
      serviceDescription = make_shared<string>(boost::any_cast<string>(m["serviceDescription"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~CreateServiceRequest() = default;
};
class CreateServiceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> serviceId{};

  CreateServiceResponseBodyData() {}

  explicit CreateServiceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceId) {
      res["serviceId"] = boost::any(*serviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceId") != m.end() && !m["serviceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["serviceId"]));
    }
  }


  virtual ~CreateServiceResponseBodyData() = default;
};
class CreateServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateServiceResponseBodyData> data{};

  CreateServiceResponseBody() {}

  explicit CreateServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateServiceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateServiceResponseBodyData>(model1);
      }
    }
  }


  virtual ~CreateServiceResponseBody() = default;
};
class CreateServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateServiceResponseBody> body{};

  CreateServiceResponse() {}

  explicit CreateServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceResponse() = default;
};
class UpdateServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceDescription{};
  shared_ptr<string> serviceName{};
  shared_ptr<long> serviceId{};
  shared_ptr<string> clientToken{};

  UpdateServiceRequest() {}

  explicit UpdateServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceDescription) {
      res["serviceDescription"] = boost::any(*serviceDescription);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (serviceId) {
      res["serviceId"] = boost::any(*serviceId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceDescription") != m.end() && !m["serviceDescription"].empty()) {
      serviceDescription = make_shared<string>(boost::any_cast<string>(m["serviceDescription"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("serviceId") != m.end() && !m["serviceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["serviceId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~UpdateServiceRequest() = default;
};
class UpdateServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> data{};

  UpdateServiceResponseBody() {}

  explicit UpdateServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["data"]));
    }
  }


  virtual ~UpdateServiceResponseBody() = default;
};
class UpdateServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateServiceResponseBody> body{};

  UpdateServiceResponse() {}

  explicit UpdateServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServiceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServiceResponse() = default;
};
class CreateServiceGroupSchedulingRequestFastSchedulingSchedulingUsers : public Darabonba::Model {
public:
  shared_ptr<long> schedulingUserId{};
  shared_ptr<long> schedulingOrder{};

  CreateServiceGroupSchedulingRequestFastSchedulingSchedulingUsers() {}

  explicit CreateServiceGroupSchedulingRequestFastSchedulingSchedulingUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schedulingUserId) {
      res["schedulingUserId"] = boost::any(*schedulingUserId);
    }
    if (schedulingOrder) {
      res["schedulingOrder"] = boost::any(*schedulingOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("schedulingUserId") != m.end() && !m["schedulingUserId"].empty()) {
      schedulingUserId = make_shared<long>(boost::any_cast<long>(m["schedulingUserId"]));
    }
    if (m.find("schedulingOrder") != m.end() && !m["schedulingOrder"].empty()) {
      schedulingOrder = make_shared<long>(boost::any_cast<long>(m["schedulingOrder"]));
    }
  }


  virtual ~CreateServiceGroupSchedulingRequestFastSchedulingSchedulingUsers() = default;
};
class CreateServiceGroupSchedulingRequestFastScheduling : public Darabonba::Model {
public:
  shared_ptr<long> singleDuration{};
  shared_ptr<string> dutyPlan{};
  shared_ptr<string> singleDurationUnit{};
  shared_ptr<vector<CreateServiceGroupSchedulingRequestFastSchedulingSchedulingUsers>> schedulingUsers{};

  CreateServiceGroupSchedulingRequestFastScheduling() {}

  explicit CreateServiceGroupSchedulingRequestFastScheduling(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (singleDuration) {
      res["singleDuration"] = boost::any(*singleDuration);
    }
    if (dutyPlan) {
      res["dutyPlan"] = boost::any(*dutyPlan);
    }
    if (singleDurationUnit) {
      res["singleDurationUnit"] = boost::any(*singleDurationUnit);
    }
    if (schedulingUsers) {
      vector<boost::any> temp1;
      for(auto item1:*schedulingUsers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["schedulingUsers"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("singleDuration") != m.end() && !m["singleDuration"].empty()) {
      singleDuration = make_shared<long>(boost::any_cast<long>(m["singleDuration"]));
    }
    if (m.find("dutyPlan") != m.end() && !m["dutyPlan"].empty()) {
      dutyPlan = make_shared<string>(boost::any_cast<string>(m["dutyPlan"]));
    }
    if (m.find("singleDurationUnit") != m.end() && !m["singleDurationUnit"].empty()) {
      singleDurationUnit = make_shared<string>(boost::any_cast<string>(m["singleDurationUnit"]));
    }
    if (m.find("schedulingUsers") != m.end() && !m["schedulingUsers"].empty()) {
      if (typeid(vector<boost::any>) == m["schedulingUsers"].type()) {
        vector<CreateServiceGroupSchedulingRequestFastSchedulingSchedulingUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["schedulingUsers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateServiceGroupSchedulingRequestFastSchedulingSchedulingUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        schedulingUsers = make_shared<vector<CreateServiceGroupSchedulingRequestFastSchedulingSchedulingUsers>>(expect1);
      }
    }
  }


  virtual ~CreateServiceGroupSchedulingRequestFastScheduling() = default;
};
class CreateServiceGroupSchedulingRequestFineSchedulingSchedulingFineShifts : public Darabonba::Model {
public:
  shared_ptr<string> schedulingStartTime{};
  shared_ptr<string> schedulingEndTime{};
  shared_ptr<long> schedulingOrder{};
  shared_ptr<bool> skipOneDay{};
  shared_ptr<long> cycleOrder{};
  shared_ptr<string> shiftName{};
  shared_ptr<long> schedulingUserId{};

  CreateServiceGroupSchedulingRequestFineSchedulingSchedulingFineShifts() {}

  explicit CreateServiceGroupSchedulingRequestFineSchedulingSchedulingFineShifts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schedulingStartTime) {
      res["schedulingStartTime"] = boost::any(*schedulingStartTime);
    }
    if (schedulingEndTime) {
      res["schedulingEndTime"] = boost::any(*schedulingEndTime);
    }
    if (schedulingOrder) {
      res["schedulingOrder"] = boost::any(*schedulingOrder);
    }
    if (skipOneDay) {
      res["skipOneDay"] = boost::any(*skipOneDay);
    }
    if (cycleOrder) {
      res["cycleOrder"] = boost::any(*cycleOrder);
    }
    if (shiftName) {
      res["shiftName"] = boost::any(*shiftName);
    }
    if (schedulingUserId) {
      res["schedulingUserId"] = boost::any(*schedulingUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("schedulingStartTime") != m.end() && !m["schedulingStartTime"].empty()) {
      schedulingStartTime = make_shared<string>(boost::any_cast<string>(m["schedulingStartTime"]));
    }
    if (m.find("schedulingEndTime") != m.end() && !m["schedulingEndTime"].empty()) {
      schedulingEndTime = make_shared<string>(boost::any_cast<string>(m["schedulingEndTime"]));
    }
    if (m.find("schedulingOrder") != m.end() && !m["schedulingOrder"].empty()) {
      schedulingOrder = make_shared<long>(boost::any_cast<long>(m["schedulingOrder"]));
    }
    if (m.find("skipOneDay") != m.end() && !m["skipOneDay"].empty()) {
      skipOneDay = make_shared<bool>(boost::any_cast<bool>(m["skipOneDay"]));
    }
    if (m.find("cycleOrder") != m.end() && !m["cycleOrder"].empty()) {
      cycleOrder = make_shared<long>(boost::any_cast<long>(m["cycleOrder"]));
    }
    if (m.find("shiftName") != m.end() && !m["shiftName"].empty()) {
      shiftName = make_shared<string>(boost::any_cast<string>(m["shiftName"]));
    }
    if (m.find("schedulingUserId") != m.end() && !m["schedulingUserId"].empty()) {
      schedulingUserId = make_shared<long>(boost::any_cast<long>(m["schedulingUserId"]));
    }
  }


  virtual ~CreateServiceGroupSchedulingRequestFineSchedulingSchedulingFineShifts() = default;
};
class CreateServiceGroupSchedulingRequestFineSchedulingSchedulingTemplateFineShifts : public Darabonba::Model {
public:
  shared_ptr<string> schedulingStartTime{};
  shared_ptr<string> schedulingEndTime{};
  shared_ptr<long> schedulingOrder{};
  shared_ptr<long> schedulingUserId{};
  shared_ptr<string> schedulingUserName{};
  shared_ptr<bool> skipOneDay{};

  CreateServiceGroupSchedulingRequestFineSchedulingSchedulingTemplateFineShifts() {}

  explicit CreateServiceGroupSchedulingRequestFineSchedulingSchedulingTemplateFineShifts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schedulingStartTime) {
      res["schedulingStartTime"] = boost::any(*schedulingStartTime);
    }
    if (schedulingEndTime) {
      res["schedulingEndTime"] = boost::any(*schedulingEndTime);
    }
    if (schedulingOrder) {
      res["schedulingOrder"] = boost::any(*schedulingOrder);
    }
    if (schedulingUserId) {
      res["schedulingUserId"] = boost::any(*schedulingUserId);
    }
    if (schedulingUserName) {
      res["schedulingUserName"] = boost::any(*schedulingUserName);
    }
    if (skipOneDay) {
      res["skipOneDay"] = boost::any(*skipOneDay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("schedulingStartTime") != m.end() && !m["schedulingStartTime"].empty()) {
      schedulingStartTime = make_shared<string>(boost::any_cast<string>(m["schedulingStartTime"]));
    }
    if (m.find("schedulingEndTime") != m.end() && !m["schedulingEndTime"].empty()) {
      schedulingEndTime = make_shared<string>(boost::any_cast<string>(m["schedulingEndTime"]));
    }
    if (m.find("schedulingOrder") != m.end() && !m["schedulingOrder"].empty()) {
      schedulingOrder = make_shared<long>(boost::any_cast<long>(m["schedulingOrder"]));
    }
    if (m.find("schedulingUserId") != m.end() && !m["schedulingUserId"].empty()) {
      schedulingUserId = make_shared<long>(boost::any_cast<long>(m["schedulingUserId"]));
    }
    if (m.find("schedulingUserName") != m.end() && !m["schedulingUserName"].empty()) {
      schedulingUserName = make_shared<string>(boost::any_cast<string>(m["schedulingUserName"]));
    }
    if (m.find("skipOneDay") != m.end() && !m["skipOneDay"].empty()) {
      skipOneDay = make_shared<bool>(boost::any_cast<bool>(m["skipOneDay"]));
    }
  }


  virtual ~CreateServiceGroupSchedulingRequestFineSchedulingSchedulingTemplateFineShifts() = default;
};
class CreateServiceGroupSchedulingRequestFineScheduling : public Darabonba::Model {
public:
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> shiftType{};
  shared_ptr<vector<CreateServiceGroupSchedulingRequestFineSchedulingSchedulingFineShifts>> schedulingFineShifts{};
  shared_ptr<vector<CreateServiceGroupSchedulingRequestFineSchedulingSchedulingTemplateFineShifts>> schedulingTemplateFineShifts{};

  CreateServiceGroupSchedulingRequestFineScheduling() {}

  explicit CreateServiceGroupSchedulingRequestFineScheduling(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (period) {
      res["period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["periodUnit"] = boost::any(*periodUnit);
    }
    if (shiftType) {
      res["shiftType"] = boost::any(*shiftType);
    }
    if (schedulingFineShifts) {
      vector<boost::any> temp1;
      for(auto item1:*schedulingFineShifts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["schedulingFineShifts"] = boost::any(temp1);
    }
    if (schedulingTemplateFineShifts) {
      vector<boost::any> temp1;
      for(auto item1:*schedulingTemplateFineShifts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["schedulingTemplateFineShifts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("period") != m.end() && !m["period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["period"]));
    }
    if (m.find("periodUnit") != m.end() && !m["periodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["periodUnit"]));
    }
    if (m.find("shiftType") != m.end() && !m["shiftType"].empty()) {
      shiftType = make_shared<string>(boost::any_cast<string>(m["shiftType"]));
    }
    if (m.find("schedulingFineShifts") != m.end() && !m["schedulingFineShifts"].empty()) {
      if (typeid(vector<boost::any>) == m["schedulingFineShifts"].type()) {
        vector<CreateServiceGroupSchedulingRequestFineSchedulingSchedulingFineShifts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["schedulingFineShifts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateServiceGroupSchedulingRequestFineSchedulingSchedulingFineShifts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        schedulingFineShifts = make_shared<vector<CreateServiceGroupSchedulingRequestFineSchedulingSchedulingFineShifts>>(expect1);
      }
    }
    if (m.find("schedulingTemplateFineShifts") != m.end() && !m["schedulingTemplateFineShifts"].empty()) {
      if (typeid(vector<boost::any>) == m["schedulingTemplateFineShifts"].type()) {
        vector<CreateServiceGroupSchedulingRequestFineSchedulingSchedulingTemplateFineShifts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["schedulingTemplateFineShifts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateServiceGroupSchedulingRequestFineSchedulingSchedulingTemplateFineShifts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        schedulingTemplateFineShifts = make_shared<vector<CreateServiceGroupSchedulingRequestFineSchedulingSchedulingTemplateFineShifts>>(expect1);
      }
    }
  }


  virtual ~CreateServiceGroupSchedulingRequestFineScheduling() = default;
};
class CreateServiceGroupSchedulingRequest : public Darabonba::Model {
public:
  shared_ptr<long> serviceGroupId{};
  shared_ptr<string> schedulingWay{};
  shared_ptr<CreateServiceGroupSchedulingRequestFastScheduling> fastScheduling{};
  shared_ptr<CreateServiceGroupSchedulingRequestFineScheduling> fineScheduling{};
  shared_ptr<string> clientToken{};

  CreateServiceGroupSchedulingRequest() {}

  explicit CreateServiceGroupSchedulingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceGroupId) {
      res["serviceGroupId"] = boost::any(*serviceGroupId);
    }
    if (schedulingWay) {
      res["schedulingWay"] = boost::any(*schedulingWay);
    }
    if (fastScheduling) {
      res["fastScheduling"] = fastScheduling ? boost::any(fastScheduling->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fineScheduling) {
      res["fineScheduling"] = fineScheduling ? boost::any(fineScheduling->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceGroupId") != m.end() && !m["serviceGroupId"].empty()) {
      serviceGroupId = make_shared<long>(boost::any_cast<long>(m["serviceGroupId"]));
    }
    if (m.find("schedulingWay") != m.end() && !m["schedulingWay"].empty()) {
      schedulingWay = make_shared<string>(boost::any_cast<string>(m["schedulingWay"]));
    }
    if (m.find("fastScheduling") != m.end() && !m["fastScheduling"].empty()) {
      if (typeid(map<string, boost::any>) == m["fastScheduling"].type()) {
        CreateServiceGroupSchedulingRequestFastScheduling model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["fastScheduling"]));
        fastScheduling = make_shared<CreateServiceGroupSchedulingRequestFastScheduling>(model1);
      }
    }
    if (m.find("fineScheduling") != m.end() && !m["fineScheduling"].empty()) {
      if (typeid(map<string, boost::any>) == m["fineScheduling"].type()) {
        CreateServiceGroupSchedulingRequestFineScheduling model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["fineScheduling"]));
        fineScheduling = make_shared<CreateServiceGroupSchedulingRequestFineScheduling>(model1);
      }
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~CreateServiceGroupSchedulingRequest() = default;
};
class CreateServiceGroupSchedulingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateServiceGroupSchedulingResponseBody() {}

  explicit CreateServiceGroupSchedulingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateServiceGroupSchedulingResponseBody() = default;
};
class CreateServiceGroupSchedulingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateServiceGroupSchedulingResponseBody> body{};

  CreateServiceGroupSchedulingResponse() {}

  explicit CreateServiceGroupSchedulingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateServiceGroupSchedulingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceGroupSchedulingResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceGroupSchedulingResponse() = default;
};
class GetEventRequest : public Darabonba::Model {
public:
  shared_ptr<long> monitorSourceId{};

  GetEventRequest() {}

  explicit GetEventRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (monitorSourceId) {
      res["monitorSourceId"] = boost::any(*monitorSourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("monitorSourceId") != m.end() && !m["monitorSourceId"].empty()) {
      monitorSourceId = make_shared<long>(boost::any_cast<long>(m["monitorSourceId"]));
    }
  }


  virtual ~GetEventRequest() = default;
};
class GetEventResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> monitorSourceId{};
  shared_ptr<string> monitorSourceName{};
  shared_ptr<string> eventTime{};
  shared_ptr<string> eventJson{};

  GetEventResponseBodyData() {}

  explicit GetEventResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (monitorSourceId) {
      res["monitorSourceId"] = boost::any(*monitorSourceId);
    }
    if (monitorSourceName) {
      res["monitorSourceName"] = boost::any(*monitorSourceName);
    }
    if (eventTime) {
      res["eventTime"] = boost::any(*eventTime);
    }
    if (eventJson) {
      res["eventJson"] = boost::any(*eventJson);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("monitorSourceId") != m.end() && !m["monitorSourceId"].empty()) {
      monitorSourceId = make_shared<long>(boost::any_cast<long>(m["monitorSourceId"]));
    }
    if (m.find("monitorSourceName") != m.end() && !m["monitorSourceName"].empty()) {
      monitorSourceName = make_shared<string>(boost::any_cast<string>(m["monitorSourceName"]));
    }
    if (m.find("eventTime") != m.end() && !m["eventTime"].empty()) {
      eventTime = make_shared<string>(boost::any_cast<string>(m["eventTime"]));
    }
    if (m.find("eventJson") != m.end() && !m["eventJson"].empty()) {
      eventJson = make_shared<string>(boost::any_cast<string>(m["eventJson"]));
    }
  }


  virtual ~GetEventResponseBodyData() = default;
};
class GetEventResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetEventResponseBodyData> data{};

  GetEventResponseBody() {}

  explicit GetEventResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetEventResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetEventResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetEventResponseBody() = default;
};
class GetEventResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetEventResponseBody> body{};

  GetEventResponse() {}

  explicit GetEventResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetEventResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEventResponseBody>(model1);
      }
    }
  }


  virtual ~GetEventResponse() = default;
};
class ListProblemTimeLinesRequest : public Darabonba::Model {
public:
  shared_ptr<long> problemId{};
  shared_ptr<string> clientToken{};

  ListProblemTimeLinesRequest() {}

  explicit ListProblemTimeLinesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~ListProblemTimeLinesRequest() = default;
};
class ListProblemTimeLinesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> keyNode{};
  shared_ptr<string> content{};
  shared_ptr<bool> isKey{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> time{};
  shared_ptr<long> problemTimelineId{};

  ListProblemTimeLinesResponseBodyData() {}

  explicit ListProblemTimeLinesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (keyNode) {
      res["keyNode"] = boost::any(*keyNode);
    }
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (isKey) {
      res["isKey"] = boost::any(*isKey);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (time) {
      res["time"] = boost::any(*time);
    }
    if (problemTimelineId) {
      res["problemTimelineId"] = boost::any(*problemTimelineId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("keyNode") != m.end() && !m["keyNode"].empty()) {
      keyNode = make_shared<string>(boost::any_cast<string>(m["keyNode"]));
    }
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("isKey") != m.end() && !m["isKey"].empty()) {
      isKey = make_shared<bool>(boost::any_cast<bool>(m["isKey"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
    if (m.find("problemTimelineId") != m.end() && !m["problemTimelineId"].empty()) {
      problemTimelineId = make_shared<long>(boost::any_cast<long>(m["problemTimelineId"]));
    }
  }


  virtual ~ListProblemTimeLinesResponseBodyData() = default;
};
class ListProblemTimeLinesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListProblemTimeLinesResponseBodyData>> data{};

  ListProblemTimeLinesResponseBody() {}

  explicit ListProblemTimeLinesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListProblemTimeLinesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProblemTimeLinesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListProblemTimeLinesResponseBodyData>>(expect1);
      }
    }
  }


  virtual ~ListProblemTimeLinesResponseBody() = default;
};
class ListProblemTimeLinesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListProblemTimeLinesResponseBody> body{};

  ListProblemTimeLinesResponse() {}

  explicit ListProblemTimeLinesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListProblemTimeLinesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProblemTimeLinesResponseBody>(model1);
      }
    }
  }


  virtual ~ListProblemTimeLinesResponse() = default;
};
class CheckWebhookRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> webhook{};
  shared_ptr<string> webhookType{};

  CheckWebhookRequest() {}

  explicit CheckWebhookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (webhook) {
      res["webhook"] = boost::any(*webhook);
    }
    if (webhookType) {
      res["webhookType"] = boost::any(*webhookType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("webhook") != m.end() && !m["webhook"].empty()) {
      webhook = make_shared<string>(boost::any_cast<string>(m["webhook"]));
    }
    if (m.find("webhookType") != m.end() && !m["webhookType"].empty()) {
      webhookType = make_shared<string>(boost::any_cast<string>(m["webhookType"]));
    }
  }


  virtual ~CheckWebhookRequest() = default;
};
class CheckWebhookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CheckWebhookResponseBody() {}

  explicit CheckWebhookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CheckWebhookResponseBody() = default;
};
class CheckWebhookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CheckWebhookResponseBody> body{};

  CheckWebhookResponse() {}

  explicit CheckWebhookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckWebhookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckWebhookResponseBody>(model1);
      }
    }
  }


  virtual ~CheckWebhookResponse() = default;
};
class CreateEscalationPlanRequestEscalationPlanScopeObjects : public Darabonba::Model {
public:
  shared_ptr<long> scopeObjectId{};
  shared_ptr<string> scope{};

  CreateEscalationPlanRequestEscalationPlanScopeObjects() {}

  explicit CreateEscalationPlanRequestEscalationPlanScopeObjects(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scopeObjectId) {
      res["scopeObjectId"] = boost::any(*scopeObjectId);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("scopeObjectId") != m.end() && !m["scopeObjectId"].empty()) {
      scopeObjectId = make_shared<long>(boost::any_cast<long>(m["scopeObjectId"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
  }


  virtual ~CreateEscalationPlanRequestEscalationPlanScopeObjects() = default;
};
class CreateEscalationPlanRequestEscalationPlanRulesEscalationPlanConditions : public Darabonba::Model {
public:
  shared_ptr<string> level{};
  shared_ptr<string> effection{};

  CreateEscalationPlanRequestEscalationPlanRulesEscalationPlanConditions() {}

  explicit CreateEscalationPlanRequestEscalationPlanRulesEscalationPlanConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (level) {
      res["level"] = boost::any(*level);
    }
    if (effection) {
      res["effection"] = boost::any(*effection);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["level"]));
    }
    if (m.find("effection") != m.end() && !m["effection"].empty()) {
      effection = make_shared<string>(boost::any_cast<string>(m["effection"]));
    }
  }


  virtual ~CreateEscalationPlanRequestEscalationPlanRulesEscalationPlanConditions() = default;
};
class CreateEscalationPlanRequestEscalationPlanRulesEscalationPlanStrategies : public Darabonba::Model {
public:
  shared_ptr<string> noticeTime{};
  shared_ptr<vector<long>> noticeObjects{};
  shared_ptr<vector<string>> noticeChannels{};

  CreateEscalationPlanRequestEscalationPlanRulesEscalationPlanStrategies() {}

  explicit CreateEscalationPlanRequestEscalationPlanRulesEscalationPlanStrategies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (noticeTime) {
      res["noticeTime"] = boost::any(*noticeTime);
    }
    if (noticeObjects) {
      res["noticeObjects"] = boost::any(*noticeObjects);
    }
    if (noticeChannels) {
      res["noticeChannels"] = boost::any(*noticeChannels);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("noticeTime") != m.end() && !m["noticeTime"].empty()) {
      noticeTime = make_shared<string>(boost::any_cast<string>(m["noticeTime"]));
    }
    if (m.find("noticeObjects") != m.end() && !m["noticeObjects"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["noticeObjects"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["noticeObjects"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      noticeObjects = make_shared<vector<long>>(toVec1);
    }
    if (m.find("noticeChannels") != m.end() && !m["noticeChannels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["noticeChannels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["noticeChannels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      noticeChannels = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateEscalationPlanRequestEscalationPlanRulesEscalationPlanStrategies() = default;
};
class CreateEscalationPlanRequestEscalationPlanRules : public Darabonba::Model {
public:
  shared_ptr<string> escalationPlanType{};
  shared_ptr<vector<CreateEscalationPlanRequestEscalationPlanRulesEscalationPlanConditions>> escalationPlanConditions{};
  shared_ptr<vector<CreateEscalationPlanRequestEscalationPlanRulesEscalationPlanStrategies>> escalationPlanStrategies{};

  CreateEscalationPlanRequestEscalationPlanRules() {}

  explicit CreateEscalationPlanRequestEscalationPlanRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (escalationPlanType) {
      res["escalationPlanType"] = boost::any(*escalationPlanType);
    }
    if (escalationPlanConditions) {
      vector<boost::any> temp1;
      for(auto item1:*escalationPlanConditions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["escalationPlanConditions"] = boost::any(temp1);
    }
    if (escalationPlanStrategies) {
      vector<boost::any> temp1;
      for(auto item1:*escalationPlanStrategies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["escalationPlanStrategies"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("escalationPlanType") != m.end() && !m["escalationPlanType"].empty()) {
      escalationPlanType = make_shared<string>(boost::any_cast<string>(m["escalationPlanType"]));
    }
    if (m.find("escalationPlanConditions") != m.end() && !m["escalationPlanConditions"].empty()) {
      if (typeid(vector<boost::any>) == m["escalationPlanConditions"].type()) {
        vector<CreateEscalationPlanRequestEscalationPlanRulesEscalationPlanConditions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["escalationPlanConditions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateEscalationPlanRequestEscalationPlanRulesEscalationPlanConditions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        escalationPlanConditions = make_shared<vector<CreateEscalationPlanRequestEscalationPlanRulesEscalationPlanConditions>>(expect1);
      }
    }
    if (m.find("escalationPlanStrategies") != m.end() && !m["escalationPlanStrategies"].empty()) {
      if (typeid(vector<boost::any>) == m["escalationPlanStrategies"].type()) {
        vector<CreateEscalationPlanRequestEscalationPlanRulesEscalationPlanStrategies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["escalationPlanStrategies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateEscalationPlanRequestEscalationPlanRulesEscalationPlanStrategies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        escalationPlanStrategies = make_shared<vector<CreateEscalationPlanRequestEscalationPlanRulesEscalationPlanStrategies>>(expect1);
      }
    }
  }


  virtual ~CreateEscalationPlanRequestEscalationPlanRules() = default;
};
class CreateEscalationPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> escalationPlanName{};
  shared_ptr<string> escalationPlanDescription{};
  shared_ptr<vector<CreateEscalationPlanRequestEscalationPlanScopeObjects>> escalationPlanScopeObjects{};
  shared_ptr<vector<CreateEscalationPlanRequestEscalationPlanRules>> escalationPlanRules{};
  shared_ptr<string> clientToken{};

  CreateEscalationPlanRequest() {}

  explicit CreateEscalationPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (escalationPlanName) {
      res["escalationPlanName"] = boost::any(*escalationPlanName);
    }
    if (escalationPlanDescription) {
      res["escalationPlanDescription"] = boost::any(*escalationPlanDescription);
    }
    if (escalationPlanScopeObjects) {
      vector<boost::any> temp1;
      for(auto item1:*escalationPlanScopeObjects){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["escalationPlanScopeObjects"] = boost::any(temp1);
    }
    if (escalationPlanRules) {
      vector<boost::any> temp1;
      for(auto item1:*escalationPlanRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["escalationPlanRules"] = boost::any(temp1);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("escalationPlanName") != m.end() && !m["escalationPlanName"].empty()) {
      escalationPlanName = make_shared<string>(boost::any_cast<string>(m["escalationPlanName"]));
    }
    if (m.find("escalationPlanDescription") != m.end() && !m["escalationPlanDescription"].empty()) {
      escalationPlanDescription = make_shared<string>(boost::any_cast<string>(m["escalationPlanDescription"]));
    }
    if (m.find("escalationPlanScopeObjects") != m.end() && !m["escalationPlanScopeObjects"].empty()) {
      if (typeid(vector<boost::any>) == m["escalationPlanScopeObjects"].type()) {
        vector<CreateEscalationPlanRequestEscalationPlanScopeObjects> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["escalationPlanScopeObjects"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateEscalationPlanRequestEscalationPlanScopeObjects model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        escalationPlanScopeObjects = make_shared<vector<CreateEscalationPlanRequestEscalationPlanScopeObjects>>(expect1);
      }
    }
    if (m.find("escalationPlanRules") != m.end() && !m["escalationPlanRules"].empty()) {
      if (typeid(vector<boost::any>) == m["escalationPlanRules"].type()) {
        vector<CreateEscalationPlanRequestEscalationPlanRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["escalationPlanRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateEscalationPlanRequestEscalationPlanRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        escalationPlanRules = make_shared<vector<CreateEscalationPlanRequestEscalationPlanRules>>(expect1);
      }
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~CreateEscalationPlanRequest() = default;
};
class CreateEscalationPlanResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> escalationPlanId{};

  CreateEscalationPlanResponseBodyData() {}

  explicit CreateEscalationPlanResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (escalationPlanId) {
      res["escalationPlanId"] = boost::any(*escalationPlanId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("escalationPlanId") != m.end() && !m["escalationPlanId"].empty()) {
      escalationPlanId = make_shared<long>(boost::any_cast<long>(m["escalationPlanId"]));
    }
  }


  virtual ~CreateEscalationPlanResponseBodyData() = default;
};
class CreateEscalationPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateEscalationPlanResponseBodyData> data{};

  CreateEscalationPlanResponseBody() {}

  explicit CreateEscalationPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateEscalationPlanResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateEscalationPlanResponseBodyData>(model1);
      }
    }
  }


  virtual ~CreateEscalationPlanResponseBody() = default;
};
class CreateEscalationPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateEscalationPlanResponseBody> body{};

  CreateEscalationPlanResponse() {}

  explicit CreateEscalationPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateEscalationPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEscalationPlanResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEscalationPlanResponse() = default;
};
class ListEscalationPlansRequest : public Darabonba::Model {
public:
  shared_ptr<string> escalationPlanName{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> clientToken{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListEscalationPlansRequest() {}

  explicit ListEscalationPlansRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (escalationPlanName) {
      res["escalationPlanName"] = boost::any(*escalationPlanName);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("escalationPlanName") != m.end() && !m["escalationPlanName"].empty()) {
      escalationPlanName = make_shared<string>(boost::any_cast<string>(m["escalationPlanName"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListEscalationPlansRequest() = default;
};
class ListEscalationPlansResponseBodyDataEscalationPlanScopeObjects : public Darabonba::Model {
public:
  shared_ptr<long> scopeObjectId{};
  shared_ptr<string> scopeObjectName{};
  shared_ptr<string> scope{};

  ListEscalationPlansResponseBodyDataEscalationPlanScopeObjects() {}

  explicit ListEscalationPlansResponseBodyDataEscalationPlanScopeObjects(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scopeObjectId) {
      res["scopeObjectId"] = boost::any(*scopeObjectId);
    }
    if (scopeObjectName) {
      res["scopeObjectName"] = boost::any(*scopeObjectName);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("scopeObjectId") != m.end() && !m["scopeObjectId"].empty()) {
      scopeObjectId = make_shared<long>(boost::any_cast<long>(m["scopeObjectId"]));
    }
    if (m.find("scopeObjectName") != m.end() && !m["scopeObjectName"].empty()) {
      scopeObjectName = make_shared<string>(boost::any_cast<string>(m["scopeObjectName"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
  }


  virtual ~ListEscalationPlansResponseBodyDataEscalationPlanScopeObjects() = default;
};
class ListEscalationPlansResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> escalationPlanId{};
  shared_ptr<string> escalationPlanName{};
  shared_ptr<vector<ListEscalationPlansResponseBodyDataEscalationPlanScopeObjects>> escalationPlanScopeObjects{};
  shared_ptr<string> status{};
  shared_ptr<string> modifyTime{};

  ListEscalationPlansResponseBodyData() {}

  explicit ListEscalationPlansResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (escalationPlanId) {
      res["escalationPlanId"] = boost::any(*escalationPlanId);
    }
    if (escalationPlanName) {
      res["escalationPlanName"] = boost::any(*escalationPlanName);
    }
    if (escalationPlanScopeObjects) {
      vector<boost::any> temp1;
      for(auto item1:*escalationPlanScopeObjects){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["escalationPlanScopeObjects"] = boost::any(temp1);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (modifyTime) {
      res["modifyTime"] = boost::any(*modifyTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("escalationPlanId") != m.end() && !m["escalationPlanId"].empty()) {
      escalationPlanId = make_shared<long>(boost::any_cast<long>(m["escalationPlanId"]));
    }
    if (m.find("escalationPlanName") != m.end() && !m["escalationPlanName"].empty()) {
      escalationPlanName = make_shared<string>(boost::any_cast<string>(m["escalationPlanName"]));
    }
    if (m.find("escalationPlanScopeObjects") != m.end() && !m["escalationPlanScopeObjects"].empty()) {
      if (typeid(vector<boost::any>) == m["escalationPlanScopeObjects"].type()) {
        vector<ListEscalationPlansResponseBodyDataEscalationPlanScopeObjects> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["escalationPlanScopeObjects"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEscalationPlansResponseBodyDataEscalationPlanScopeObjects model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        escalationPlanScopeObjects = make_shared<vector<ListEscalationPlansResponseBodyDataEscalationPlanScopeObjects>>(expect1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("modifyTime") != m.end() && !m["modifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["modifyTime"]));
    }
  }


  virtual ~ListEscalationPlansResponseBodyData() = default;
};
class ListEscalationPlansResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListEscalationPlansResponseBodyData>> data{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListEscalationPlansResponseBody() {}

  explicit ListEscalationPlansResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListEscalationPlansResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEscalationPlansResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListEscalationPlansResponseBodyData>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListEscalationPlansResponseBody() = default;
};
class ListEscalationPlansResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListEscalationPlansResponseBody> body{};

  ListEscalationPlansResponse() {}

  explicit ListEscalationPlansResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListEscalationPlansResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEscalationPlansResponseBody>(model1);
      }
    }
  }


  virtual ~ListEscalationPlansResponse() = default;
};
class GetIncidentRequest : public Darabonba::Model {
public:
  shared_ptr<long> incidentId{};
  shared_ptr<string> clientToken{};

  GetIncidentRequest() {}

  explicit GetIncidentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (incidentId) {
      res["incidentId"] = boost::any(*incidentId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("incidentId") != m.end() && !m["incidentId"].empty()) {
      incidentId = make_shared<long>(boost::any_cast<long>(m["incidentId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~GetIncidentRequest() = default;
};
class GetIncidentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> incidentId{};
  shared_ptr<long> routeRuleId{};
  shared_ptr<string> routeRuleName{};
  shared_ptr<long> relatedServiceId{};
  shared_ptr<string> relatedServiceName{};
  shared_ptr<string> relatedServiceDescription{};
  shared_ptr<string> incidentStatus{};
  shared_ptr<string> incidentLevel{};
  shared_ptr<string> effect{};
  shared_ptr<long> assignUserId{};
  shared_ptr<string> assignUserName{};
  shared_ptr<string> assignUserPhone{};
  shared_ptr<string> incidentNumber{};
  shared_ptr<string> incidentTitle{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> isManual{};
  shared_ptr<bool> isUpgrade{};
  shared_ptr<string> incidentDescription{};
  shared_ptr<long> problemId{};
  shared_ptr<string> problemNumber{};

  GetIncidentResponseBodyData() {}

  explicit GetIncidentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (incidentId) {
      res["incidentId"] = boost::any(*incidentId);
    }
    if (routeRuleId) {
      res["routeRuleId"] = boost::any(*routeRuleId);
    }
    if (routeRuleName) {
      res["routeRuleName"] = boost::any(*routeRuleName);
    }
    if (relatedServiceId) {
      res["relatedServiceId"] = boost::any(*relatedServiceId);
    }
    if (relatedServiceName) {
      res["relatedServiceName"] = boost::any(*relatedServiceName);
    }
    if (relatedServiceDescription) {
      res["relatedServiceDescription"] = boost::any(*relatedServiceDescription);
    }
    if (incidentStatus) {
      res["incidentStatus"] = boost::any(*incidentStatus);
    }
    if (incidentLevel) {
      res["incidentLevel"] = boost::any(*incidentLevel);
    }
    if (effect) {
      res["effect"] = boost::any(*effect);
    }
    if (assignUserId) {
      res["assignUserId"] = boost::any(*assignUserId);
    }
    if (assignUserName) {
      res["assignUserName"] = boost::any(*assignUserName);
    }
    if (assignUserPhone) {
      res["assignUserPhone"] = boost::any(*assignUserPhone);
    }
    if (incidentNumber) {
      res["incidentNumber"] = boost::any(*incidentNumber);
    }
    if (incidentTitle) {
      res["incidentTitle"] = boost::any(*incidentTitle);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (isManual) {
      res["isManual"] = boost::any(*isManual);
    }
    if (isUpgrade) {
      res["isUpgrade"] = boost::any(*isUpgrade);
    }
    if (incidentDescription) {
      res["incidentDescription"] = boost::any(*incidentDescription);
    }
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (problemNumber) {
      res["problemNumber"] = boost::any(*problemNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("incidentId") != m.end() && !m["incidentId"].empty()) {
      incidentId = make_shared<long>(boost::any_cast<long>(m["incidentId"]));
    }
    if (m.find("routeRuleId") != m.end() && !m["routeRuleId"].empty()) {
      routeRuleId = make_shared<long>(boost::any_cast<long>(m["routeRuleId"]));
    }
    if (m.find("routeRuleName") != m.end() && !m["routeRuleName"].empty()) {
      routeRuleName = make_shared<string>(boost::any_cast<string>(m["routeRuleName"]));
    }
    if (m.find("relatedServiceId") != m.end() && !m["relatedServiceId"].empty()) {
      relatedServiceId = make_shared<long>(boost::any_cast<long>(m["relatedServiceId"]));
    }
    if (m.find("relatedServiceName") != m.end() && !m["relatedServiceName"].empty()) {
      relatedServiceName = make_shared<string>(boost::any_cast<string>(m["relatedServiceName"]));
    }
    if (m.find("relatedServiceDescription") != m.end() && !m["relatedServiceDescription"].empty()) {
      relatedServiceDescription = make_shared<string>(boost::any_cast<string>(m["relatedServiceDescription"]));
    }
    if (m.find("incidentStatus") != m.end() && !m["incidentStatus"].empty()) {
      incidentStatus = make_shared<string>(boost::any_cast<string>(m["incidentStatus"]));
    }
    if (m.find("incidentLevel") != m.end() && !m["incidentLevel"].empty()) {
      incidentLevel = make_shared<string>(boost::any_cast<string>(m["incidentLevel"]));
    }
    if (m.find("effect") != m.end() && !m["effect"].empty()) {
      effect = make_shared<string>(boost::any_cast<string>(m["effect"]));
    }
    if (m.find("assignUserId") != m.end() && !m["assignUserId"].empty()) {
      assignUserId = make_shared<long>(boost::any_cast<long>(m["assignUserId"]));
    }
    if (m.find("assignUserName") != m.end() && !m["assignUserName"].empty()) {
      assignUserName = make_shared<string>(boost::any_cast<string>(m["assignUserName"]));
    }
    if (m.find("assignUserPhone") != m.end() && !m["assignUserPhone"].empty()) {
      assignUserPhone = make_shared<string>(boost::any_cast<string>(m["assignUserPhone"]));
    }
    if (m.find("incidentNumber") != m.end() && !m["incidentNumber"].empty()) {
      incidentNumber = make_shared<string>(boost::any_cast<string>(m["incidentNumber"]));
    }
    if (m.find("incidentTitle") != m.end() && !m["incidentTitle"].empty()) {
      incidentTitle = make_shared<string>(boost::any_cast<string>(m["incidentTitle"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("isManual") != m.end() && !m["isManual"].empty()) {
      isManual = make_shared<bool>(boost::any_cast<bool>(m["isManual"]));
    }
    if (m.find("isUpgrade") != m.end() && !m["isUpgrade"].empty()) {
      isUpgrade = make_shared<bool>(boost::any_cast<bool>(m["isUpgrade"]));
    }
    if (m.find("incidentDescription") != m.end() && !m["incidentDescription"].empty()) {
      incidentDescription = make_shared<string>(boost::any_cast<string>(m["incidentDescription"]));
    }
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
    if (m.find("problemNumber") != m.end() && !m["problemNumber"].empty()) {
      problemNumber = make_shared<string>(boost::any_cast<string>(m["problemNumber"]));
    }
  }


  virtual ~GetIncidentResponseBodyData() = default;
};
class GetIncidentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetIncidentResponseBodyData> data{};

  GetIncidentResponseBody() {}

  explicit GetIncidentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetIncidentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetIncidentResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetIncidentResponseBody() = default;
};
class GetIncidentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetIncidentResponseBody> body{};

  GetIncidentResponse() {}

  explicit GetIncidentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetIncidentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetIncidentResponseBody>(model1);
      }
    }
  }


  virtual ~GetIncidentResponse() = default;
};
class UpdateUserGuideStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> guideAction{};

  UpdateUserGuideStatusRequest() {}

  explicit UpdateUserGuideStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (guideAction) {
      res["guideAction"] = boost::any(*guideAction);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("guideAction") != m.end() && !m["guideAction"].empty()) {
      guideAction = make_shared<string>(boost::any_cast<string>(m["guideAction"]));
    }
  }


  virtual ~UpdateUserGuideStatusRequest() = default;
};
class UpdateUserGuideStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateUserGuideStatusResponseBody() {}

  explicit UpdateUserGuideStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateUserGuideStatusResponseBody() = default;
};
class UpdateUserGuideStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateUserGuideStatusResponseBody> body{};

  UpdateUserGuideStatusResponse() {}

  explicit UpdateUserGuideStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateUserGuideStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateUserGuideStatusResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateUserGuideStatusResponse() = default;
};
class DeleteEscalationPlanRequest : public Darabonba::Model {
public:
  shared_ptr<long> escalationPlanId{};
  shared_ptr<string> clientToken{};

  DeleteEscalationPlanRequest() {}

  explicit DeleteEscalationPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (escalationPlanId) {
      res["escalationPlanId"] = boost::any(*escalationPlanId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("escalationPlanId") != m.end() && !m["escalationPlanId"].empty()) {
      escalationPlanId = make_shared<long>(boost::any_cast<long>(m["escalationPlanId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~DeleteEscalationPlanRequest() = default;
};
class DeleteEscalationPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteEscalationPlanResponseBody() {}

  explicit DeleteEscalationPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteEscalationPlanResponseBody() = default;
};
class DeleteEscalationPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteEscalationPlanResponseBody> body{};

  DeleteEscalationPlanResponse() {}

  explicit DeleteEscalationPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteEscalationPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEscalationPlanResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEscalationPlanResponse() = default;
};
class ListConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};

  ListConfigsRequest() {}

  explicit ListConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~ListConfigsRequest() = default;
};
class DataValue : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> description{};
  shared_ptr<string> configDescription{};
  shared_ptr<string> configCode{};
  shared_ptr<string> parentCode{};
  shared_ptr<string> configKey{};
  shared_ptr<string> configValue{};
  shared_ptr<bool> requirement{};

  DataValue() {}

  explicit DataValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (configDescription) {
      res["configDescription"] = boost::any(*configDescription);
    }
    if (configCode) {
      res["configCode"] = boost::any(*configCode);
    }
    if (parentCode) {
      res["parentCode"] = boost::any(*parentCode);
    }
    if (configKey) {
      res["configKey"] = boost::any(*configKey);
    }
    if (configValue) {
      res["configValue"] = boost::any(*configValue);
    }
    if (requirement) {
      res["requirement"] = boost::any(*requirement);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("configDescription") != m.end() && !m["configDescription"].empty()) {
      configDescription = make_shared<string>(boost::any_cast<string>(m["configDescription"]));
    }
    if (m.find("configCode") != m.end() && !m["configCode"].empty()) {
      configCode = make_shared<string>(boost::any_cast<string>(m["configCode"]));
    }
    if (m.find("parentCode") != m.end() && !m["parentCode"].empty()) {
      parentCode = make_shared<string>(boost::any_cast<string>(m["parentCode"]));
    }
    if (m.find("configKey") != m.end() && !m["configKey"].empty()) {
      configKey = make_shared<string>(boost::any_cast<string>(m["configKey"]));
    }
    if (m.find("configValue") != m.end() && !m["configValue"].empty()) {
      configValue = make_shared<string>(boost::any_cast<string>(m["configValue"]));
    }
    if (m.find("requirement") != m.end() && !m["requirement"].empty()) {
      requirement = make_shared<bool>(boost::any_cast<bool>(m["requirement"]));
    }
  }


  virtual ~DataValue() = default;
};
class ListConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, vector<DataValue>>> data{};
  shared_ptr<string> requestId{};

  ListConfigsResponseBody() {}

  explicit ListConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      map<string, boost::any> temp1;
      for(auto item1:*data){
        vector<boost::any> temp2;
        for(auto item2:item1.second){
          temp2.push_back(boost::any(item2.toMap()));
        }
        temp1[item1.first] = boost::any(temp2);
      }
      res["data"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        map<string, vector<DataValue>> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["data"])){
          if (typeid(vector<boost::any>) == item1.second.type()) {
            vector<DataValue> expect2;
            for(auto item2:boost::any_cast<vector<boost::any>>(item1.second)){
              if (typeid(map<string, boost::any>) == item2.type()) {
                DataValue model3;
                model3.fromMap(boost::any_cast<map<string, boost::any>>(item2));
                expect2.push_back(model3);
              }
            }
            expect1[item1.first] = expect2;
          }
        }
        data = make_shared<map<string, vector<DataValue>>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListConfigsResponseBody() = default;
};
class ListConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListConfigsResponseBody> body{};

  ListConfigsResponse() {}

  explicit ListConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~ListConfigsResponse() = default;
};
class CreateUserRequest : public Darabonba::Model {
public:
  shared_ptr<long> ramId{};
  shared_ptr<string> phone{};
  shared_ptr<string> username{};
  shared_ptr<string> email{};
  shared_ptr<string> clientToken{};

  CreateUserRequest() {}

  explicit CreateUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ramId) {
      res["ramId"] = boost::any(*ramId);
    }
    if (phone) {
      res["phone"] = boost::any(*phone);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    if (email) {
      res["email"] = boost::any(*email);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ramId") != m.end() && !m["ramId"].empty()) {
      ramId = make_shared<long>(boost::any_cast<long>(m["ramId"]));
    }
    if (m.find("phone") != m.end() && !m["phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["phone"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
    if (m.find("email") != m.end() && !m["email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["email"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~CreateUserRequest() = default;
};
class CreateUserResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> userId{};

  CreateUserResponseBodyData() {}

  explicit CreateUserResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["userId"]));
    }
  }


  virtual ~CreateUserResponseBodyData() = default;
};
class CreateUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateUserResponseBodyData> data{};

  CreateUserResponseBody() {}

  explicit CreateUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateUserResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateUserResponseBodyData>(model1);
      }
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
class ListUserSerivceGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<long> userId{};
  shared_ptr<string> clientToken{};

  ListUserSerivceGroupsRequest() {}

  explicit ListUserSerivceGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["userId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~ListUserSerivceGroupsRequest() = default;
};
class ListUserSerivceGroupsResponseBodyDataServiceGroups : public Darabonba::Model {
public:
  shared_ptr<long> serviceGroupId{};
  shared_ptr<string> serviceGroupName{};
  shared_ptr<string> serviceGroupDescription{};

  ListUserSerivceGroupsResponseBodyDataServiceGroups() {}

  explicit ListUserSerivceGroupsResponseBodyDataServiceGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceGroupId) {
      res["serviceGroupId"] = boost::any(*serviceGroupId);
    }
    if (serviceGroupName) {
      res["serviceGroupName"] = boost::any(*serviceGroupName);
    }
    if (serviceGroupDescription) {
      res["serviceGroupDescription"] = boost::any(*serviceGroupDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceGroupId") != m.end() && !m["serviceGroupId"].empty()) {
      serviceGroupId = make_shared<long>(boost::any_cast<long>(m["serviceGroupId"]));
    }
    if (m.find("serviceGroupName") != m.end() && !m["serviceGroupName"].empty()) {
      serviceGroupName = make_shared<string>(boost::any_cast<string>(m["serviceGroupName"]));
    }
    if (m.find("serviceGroupDescription") != m.end() && !m["serviceGroupDescription"].empty()) {
      serviceGroupDescription = make_shared<string>(boost::any_cast<string>(m["serviceGroupDescription"]));
    }
  }


  virtual ~ListUserSerivceGroupsResponseBodyDataServiceGroups() = default;
};
class ListUserSerivceGroupsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> ramId{};
  shared_ptr<long> userId{};
  shared_ptr<string> username{};
  shared_ptr<string> phone{};
  shared_ptr<string> email{};
  shared_ptr<vector<ListUserSerivceGroupsResponseBodyDataServiceGroups>> serviceGroups{};

  ListUserSerivceGroupsResponseBodyData() {}

  explicit ListUserSerivceGroupsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ramId) {
      res["ramId"] = boost::any(*ramId);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    if (phone) {
      res["phone"] = boost::any(*phone);
    }
    if (email) {
      res["email"] = boost::any(*email);
    }
    if (serviceGroups) {
      vector<boost::any> temp1;
      for(auto item1:*serviceGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceGroups"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ramId") != m.end() && !m["ramId"].empty()) {
      ramId = make_shared<long>(boost::any_cast<long>(m["ramId"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["userId"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
    if (m.find("phone") != m.end() && !m["phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["phone"]));
    }
    if (m.find("email") != m.end() && !m["email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["email"]));
    }
    if (m.find("serviceGroups") != m.end() && !m["serviceGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceGroups"].type()) {
        vector<ListUserSerivceGroupsResponseBodyDataServiceGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserSerivceGroupsResponseBodyDataServiceGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceGroups = make_shared<vector<ListUserSerivceGroupsResponseBodyDataServiceGroups>>(expect1);
      }
    }
  }


  virtual ~ListUserSerivceGroupsResponseBodyData() = default;
};
class ListUserSerivceGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListUserSerivceGroupsResponseBodyData> data{};

  ListUserSerivceGroupsResponseBody() {}

  explicit ListUserSerivceGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListUserSerivceGroupsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListUserSerivceGroupsResponseBodyData>(model1);
      }
    }
  }


  virtual ~ListUserSerivceGroupsResponseBody() = default;
};
class ListUserSerivceGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListUserSerivceGroupsResponseBody> body{};

  ListUserSerivceGroupsResponse() {}

  explicit ListUserSerivceGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListUserSerivceGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserSerivceGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserSerivceGroupsResponse() = default;
};
class RefreshIntegrationConfigKeyRequest : public Darabonba::Model {
public:
  shared_ptr<long> integrationConfigId{};
  shared_ptr<string> clientToken{};

  RefreshIntegrationConfigKeyRequest() {}

  explicit RefreshIntegrationConfigKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (integrationConfigId) {
      res["integrationConfigId"] = boost::any(*integrationConfigId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("integrationConfigId") != m.end() && !m["integrationConfigId"].empty()) {
      integrationConfigId = make_shared<long>(boost::any_cast<long>(m["integrationConfigId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~RefreshIntegrationConfigKeyRequest() = default;
};
class RefreshIntegrationConfigKeyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> key{};

  RefreshIntegrationConfigKeyResponseBodyData() {}

  explicit RefreshIntegrationConfigKeyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
  }


  virtual ~RefreshIntegrationConfigKeyResponseBodyData() = default;
};
class RefreshIntegrationConfigKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RefreshIntegrationConfigKeyResponseBodyData> data{};

  RefreshIntegrationConfigKeyResponseBody() {}

  explicit RefreshIntegrationConfigKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        RefreshIntegrationConfigKeyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<RefreshIntegrationConfigKeyResponseBodyData>(model1);
      }
    }
  }


  virtual ~RefreshIntegrationConfigKeyResponseBody() = default;
};
class RefreshIntegrationConfigKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RefreshIntegrationConfigKeyResponseBody> body{};

  RefreshIntegrationConfigKeyResponse() {}

  explicit RefreshIntegrationConfigKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RefreshIntegrationConfigKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefreshIntegrationConfigKeyResponseBody>(model1);
      }
    }
  }


  virtual ~RefreshIntegrationConfigKeyResponse() = default;
};
class CreateIncidentSubtotalRequest : public Darabonba::Model {
public:
  shared_ptr<long> incidentId{};
  shared_ptr<string> description{};
  shared_ptr<string> clientToken{};

  CreateIncidentSubtotalRequest() {}

  explicit CreateIncidentSubtotalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (incidentId) {
      res["incidentId"] = boost::any(*incidentId);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("incidentId") != m.end() && !m["incidentId"].empty()) {
      incidentId = make_shared<long>(boost::any_cast<long>(m["incidentId"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~CreateIncidentSubtotalRequest() = default;
};
class CreateIncidentSubtotalResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> subtotalId{};

  CreateIncidentSubtotalResponseBodyData() {}

  explicit CreateIncidentSubtotalResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subtotalId) {
      res["subtotalId"] = boost::any(*subtotalId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("subtotalId") != m.end() && !m["subtotalId"].empty()) {
      subtotalId = make_shared<long>(boost::any_cast<long>(m["subtotalId"]));
    }
  }


  virtual ~CreateIncidentSubtotalResponseBodyData() = default;
};
class CreateIncidentSubtotalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateIncidentSubtotalResponseBodyData> data{};

  CreateIncidentSubtotalResponseBody() {}

  explicit CreateIncidentSubtotalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateIncidentSubtotalResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateIncidentSubtotalResponseBodyData>(model1);
      }
    }
  }


  virtual ~CreateIncidentSubtotalResponseBody() = default;
};
class CreateIncidentSubtotalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateIncidentSubtotalResponseBody> body{};

  CreateIncidentSubtotalResponse() {}

  explicit CreateIncidentSubtotalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateIncidentSubtotalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateIncidentSubtotalResponseBody>(model1);
      }
    }
  }


  virtual ~CreateIncidentSubtotalResponse() = default;
};
class DisableIntegrationConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> integrationConfigId{};
  shared_ptr<string> clientToken{};

  DisableIntegrationConfigRequest() {}

  explicit DisableIntegrationConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (integrationConfigId) {
      res["integrationConfigId"] = boost::any(*integrationConfigId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("integrationConfigId") != m.end() && !m["integrationConfigId"].empty()) {
      integrationConfigId = make_shared<long>(boost::any_cast<long>(m["integrationConfigId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~DisableIntegrationConfigRequest() = default;
};
class DisableIntegrationConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableIntegrationConfigResponseBody() {}

  explicit DisableIntegrationConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableIntegrationConfigResponseBody() = default;
};
class DisableIntegrationConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DisableIntegrationConfigResponseBody> body{};

  DisableIntegrationConfigResponse() {}

  explicit DisableIntegrationConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DisableIntegrationConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableIntegrationConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DisableIntegrationConfigResponse() = default;
};
class CreateIntegrationConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> monitorSourceId{};
  shared_ptr<string> clientToken{};

  CreateIntegrationConfigRequest() {}

  explicit CreateIntegrationConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (monitorSourceId) {
      res["monitorSourceId"] = boost::any(*monitorSourceId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("monitorSourceId") != m.end() && !m["monitorSourceId"].empty()) {
      monitorSourceId = make_shared<long>(boost::any_cast<long>(m["monitorSourceId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~CreateIntegrationConfigRequest() = default;
};
class CreateIntegrationConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> integrationConfigId{};

  CreateIntegrationConfigResponseBodyData() {}

  explicit CreateIntegrationConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (integrationConfigId) {
      res["integrationConfigId"] = boost::any(*integrationConfigId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("integrationConfigId") != m.end() && !m["integrationConfigId"].empty()) {
      integrationConfigId = make_shared<long>(boost::any_cast<long>(m["integrationConfigId"]));
    }
  }


  virtual ~CreateIntegrationConfigResponseBodyData() = default;
};
class CreateIntegrationConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateIntegrationConfigResponseBodyData> data{};

  CreateIntegrationConfigResponseBody() {}

  explicit CreateIntegrationConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateIntegrationConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateIntegrationConfigResponseBodyData>(model1);
      }
    }
  }


  virtual ~CreateIntegrationConfigResponseBody() = default;
};
class CreateIntegrationConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateIntegrationConfigResponseBody> body{};

  CreateIntegrationConfigResponse() {}

  explicit CreateIntegrationConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateIntegrationConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateIntegrationConfigResponseBody>(model1);
      }
    }
  }


  virtual ~CreateIntegrationConfigResponse() = default;
};
class DeleteRouteRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> routeRuleId{};
  shared_ptr<string> clientToken{};

  DeleteRouteRuleRequest() {}

  explicit DeleteRouteRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (routeRuleId) {
      res["routeRuleId"] = boost::any(*routeRuleId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("routeRuleId") != m.end() && !m["routeRuleId"].empty()) {
      routeRuleId = make_shared<long>(boost::any_cast<long>(m["routeRuleId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~DeleteRouteRuleRequest() = default;
};
class DeleteRouteRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> requestId{};

  DeleteRouteRuleResponseBody() {}

  explicit DeleteRouteRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      requestId = make_shared<long>(boost::any_cast<long>(m["requestId"]));
    }
  }


  virtual ~DeleteRouteRuleResponseBody() = default;
};
class DeleteRouteRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteRouteRuleResponseBody> body{};

  DeleteRouteRuleResponse() {}

  explicit DeleteRouteRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteRouteRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRouteRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRouteRuleResponse() = default;
};
class UpdateProblemRequest : public Darabonba::Model {
public:
  shared_ptr<long> problemId{};
  shared_ptr<string> problemName{};
  shared_ptr<string> level{};
  shared_ptr<long> relatedServiceId{};
  shared_ptr<string> progressSummary{};
  shared_ptr<string> preliminaryReason{};
  shared_ptr<long> mainHandlerId{};
  shared_ptr<string> feedback{};
  shared_ptr<vector<long>> serviceGroupIds{};

  UpdateProblemRequest() {}

  explicit UpdateProblemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (problemName) {
      res["problemName"] = boost::any(*problemName);
    }
    if (level) {
      res["level"] = boost::any(*level);
    }
    if (relatedServiceId) {
      res["relatedServiceId"] = boost::any(*relatedServiceId);
    }
    if (progressSummary) {
      res["progressSummary"] = boost::any(*progressSummary);
    }
    if (preliminaryReason) {
      res["preliminaryReason"] = boost::any(*preliminaryReason);
    }
    if (mainHandlerId) {
      res["mainHandlerId"] = boost::any(*mainHandlerId);
    }
    if (feedback) {
      res["feedback"] = boost::any(*feedback);
    }
    if (serviceGroupIds) {
      res["serviceGroupIds"] = boost::any(*serviceGroupIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
    if (m.find("problemName") != m.end() && !m["problemName"].empty()) {
      problemName = make_shared<string>(boost::any_cast<string>(m["problemName"]));
    }
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["level"]));
    }
    if (m.find("relatedServiceId") != m.end() && !m["relatedServiceId"].empty()) {
      relatedServiceId = make_shared<long>(boost::any_cast<long>(m["relatedServiceId"]));
    }
    if (m.find("progressSummary") != m.end() && !m["progressSummary"].empty()) {
      progressSummary = make_shared<string>(boost::any_cast<string>(m["progressSummary"]));
    }
    if (m.find("preliminaryReason") != m.end() && !m["preliminaryReason"].empty()) {
      preliminaryReason = make_shared<string>(boost::any_cast<string>(m["preliminaryReason"]));
    }
    if (m.find("mainHandlerId") != m.end() && !m["mainHandlerId"].empty()) {
      mainHandlerId = make_shared<long>(boost::any_cast<long>(m["mainHandlerId"]));
    }
    if (m.find("feedback") != m.end() && !m["feedback"].empty()) {
      feedback = make_shared<string>(boost::any_cast<string>(m["feedback"]));
    }
    if (m.find("serviceGroupIds") != m.end() && !m["serviceGroupIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["serviceGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["serviceGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      serviceGroupIds = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~UpdateProblemRequest() = default;
};
class UpdateProblemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateProblemResponseBody() {}

  explicit UpdateProblemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateProblemResponseBody() = default;
};
class UpdateProblemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateProblemResponseBody> body{};

  UpdateProblemResponse() {}

  explicit UpdateProblemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateProblemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProblemResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProblemResponse() = default;
};
class GetRouteRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> routeRuleId{};
  shared_ptr<string> clientToken{};

  GetRouteRuleRequest() {}

  explicit GetRouteRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (routeRuleId) {
      res["routeRuleId"] = boost::any(*routeRuleId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("routeRuleId") != m.end() && !m["routeRuleId"].empty()) {
      routeRuleId = make_shared<long>(boost::any_cast<long>(m["routeRuleId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~GetRouteRuleRequest() = default;
};
class GetRouteRuleResponseBodyDataEventRouteChildRulesConditions : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};
  shared_ptr<string> operationSymbol{};

  GetRouteRuleResponseBodyDataEventRouteChildRulesConditions() {}

  explicit GetRouteRuleResponseBodyDataEventRouteChildRulesConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    if (operationSymbol) {
      res["operationSymbol"] = boost::any(*operationSymbol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
    if (m.find("operationSymbol") != m.end() && !m["operationSymbol"].empty()) {
      operationSymbol = make_shared<string>(boost::any_cast<string>(m["operationSymbol"]));
    }
  }


  virtual ~GetRouteRuleResponseBodyDataEventRouteChildRulesConditions() = default;
};
class GetRouteRuleResponseBodyDataEventRouteChildRules : public Darabonba::Model {
public:
  shared_ptr<long> childRouteRuleId{};
  shared_ptr<bool> isValidChildRule{};
  shared_ptr<long> parentRuleId{};
  shared_ptr<long> monitorSourceId{};
  shared_ptr<long> monitorIntegrationConfigId{};
  shared_ptr<string> monitorSourceName{};
  shared_ptr<vector<GetRouteRuleResponseBodyDataEventRouteChildRulesConditions>> conditions{};

  GetRouteRuleResponseBodyDataEventRouteChildRules() {}

  explicit GetRouteRuleResponseBodyDataEventRouteChildRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (childRouteRuleId) {
      res["childRouteRuleId"] = boost::any(*childRouteRuleId);
    }
    if (isValidChildRule) {
      res["isValidChildRule"] = boost::any(*isValidChildRule);
    }
    if (parentRuleId) {
      res["parentRuleId"] = boost::any(*parentRuleId);
    }
    if (monitorSourceId) {
      res["monitorSourceId"] = boost::any(*monitorSourceId);
    }
    if (monitorIntegrationConfigId) {
      res["monitorIntegrationConfigId"] = boost::any(*monitorIntegrationConfigId);
    }
    if (monitorSourceName) {
      res["monitorSourceName"] = boost::any(*monitorSourceName);
    }
    if (conditions) {
      vector<boost::any> temp1;
      for(auto item1:*conditions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["conditions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("childRouteRuleId") != m.end() && !m["childRouteRuleId"].empty()) {
      childRouteRuleId = make_shared<long>(boost::any_cast<long>(m["childRouteRuleId"]));
    }
    if (m.find("isValidChildRule") != m.end() && !m["isValidChildRule"].empty()) {
      isValidChildRule = make_shared<bool>(boost::any_cast<bool>(m["isValidChildRule"]));
    }
    if (m.find("parentRuleId") != m.end() && !m["parentRuleId"].empty()) {
      parentRuleId = make_shared<long>(boost::any_cast<long>(m["parentRuleId"]));
    }
    if (m.find("monitorSourceId") != m.end() && !m["monitorSourceId"].empty()) {
      monitorSourceId = make_shared<long>(boost::any_cast<long>(m["monitorSourceId"]));
    }
    if (m.find("monitorIntegrationConfigId") != m.end() && !m["monitorIntegrationConfigId"].empty()) {
      monitorIntegrationConfigId = make_shared<long>(boost::any_cast<long>(m["monitorIntegrationConfigId"]));
    }
    if (m.find("monitorSourceName") != m.end() && !m["monitorSourceName"].empty()) {
      monitorSourceName = make_shared<string>(boost::any_cast<string>(m["monitorSourceName"]));
    }
    if (m.find("conditions") != m.end() && !m["conditions"].empty()) {
      if (typeid(vector<boost::any>) == m["conditions"].type()) {
        vector<GetRouteRuleResponseBodyDataEventRouteChildRulesConditions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["conditions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRouteRuleResponseBodyDataEventRouteChildRulesConditions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conditions = make_shared<vector<GetRouteRuleResponseBodyDataEventRouteChildRulesConditions>>(expect1);
      }
    }
  }


  virtual ~GetRouteRuleResponseBodyDataEventRouteChildRules() = default;
};
class GetRouteRuleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> routeRuleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<long> timeWindow{};
  shared_ptr<string> relatedServiceName{};
  shared_ptr<string> enableStatus{};
  shared_ptr<long> relatedServiceId{};
  shared_ptr<string> routeType{};
  shared_ptr<string> incidentLevel{};
  shared_ptr<long> assignObjectId{};
  shared_ptr<string> assignObjectType{};
  shared_ptr<string> effection{};
  shared_ptr<long> matchCount{};
  shared_ptr<vector<GetRouteRuleResponseBodyDataEventRouteChildRules>> eventRouteChildRules{};
  shared_ptr<string> createTime{};
  shared_ptr<string> updateTime{};
  shared_ptr<vector<string>> notifyChannels{};
  shared_ptr<vector<string>> notifyChannelNames{};
  shared_ptr<string> assignObjectName{};

  GetRouteRuleResponseBodyData() {}

  explicit GetRouteRuleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (routeRuleId) {
      res["routeRuleId"] = boost::any(*routeRuleId);
    }
    if (ruleName) {
      res["ruleName"] = boost::any(*ruleName);
    }
    if (timeWindow) {
      res["timeWindow"] = boost::any(*timeWindow);
    }
    if (relatedServiceName) {
      res["relatedServiceName"] = boost::any(*relatedServiceName);
    }
    if (enableStatus) {
      res["enableStatus"] = boost::any(*enableStatus);
    }
    if (relatedServiceId) {
      res["relatedServiceId"] = boost::any(*relatedServiceId);
    }
    if (routeType) {
      res["routeType"] = boost::any(*routeType);
    }
    if (incidentLevel) {
      res["incidentLevel"] = boost::any(*incidentLevel);
    }
    if (assignObjectId) {
      res["assignObjectId"] = boost::any(*assignObjectId);
    }
    if (assignObjectType) {
      res["assignObjectType"] = boost::any(*assignObjectType);
    }
    if (effection) {
      res["effection"] = boost::any(*effection);
    }
    if (matchCount) {
      res["matchCount"] = boost::any(*matchCount);
    }
    if (eventRouteChildRules) {
      vector<boost::any> temp1;
      for(auto item1:*eventRouteChildRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["eventRouteChildRules"] = boost::any(temp1);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (notifyChannels) {
      res["notifyChannels"] = boost::any(*notifyChannels);
    }
    if (notifyChannelNames) {
      res["notifyChannelNames"] = boost::any(*notifyChannelNames);
    }
    if (assignObjectName) {
      res["assignObjectName"] = boost::any(*assignObjectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("routeRuleId") != m.end() && !m["routeRuleId"].empty()) {
      routeRuleId = make_shared<long>(boost::any_cast<long>(m["routeRuleId"]));
    }
    if (m.find("ruleName") != m.end() && !m["ruleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["ruleName"]));
    }
    if (m.find("timeWindow") != m.end() && !m["timeWindow"].empty()) {
      timeWindow = make_shared<long>(boost::any_cast<long>(m["timeWindow"]));
    }
    if (m.find("relatedServiceName") != m.end() && !m["relatedServiceName"].empty()) {
      relatedServiceName = make_shared<string>(boost::any_cast<string>(m["relatedServiceName"]));
    }
    if (m.find("enableStatus") != m.end() && !m["enableStatus"].empty()) {
      enableStatus = make_shared<string>(boost::any_cast<string>(m["enableStatus"]));
    }
    if (m.find("relatedServiceId") != m.end() && !m["relatedServiceId"].empty()) {
      relatedServiceId = make_shared<long>(boost::any_cast<long>(m["relatedServiceId"]));
    }
    if (m.find("routeType") != m.end() && !m["routeType"].empty()) {
      routeType = make_shared<string>(boost::any_cast<string>(m["routeType"]));
    }
    if (m.find("incidentLevel") != m.end() && !m["incidentLevel"].empty()) {
      incidentLevel = make_shared<string>(boost::any_cast<string>(m["incidentLevel"]));
    }
    if (m.find("assignObjectId") != m.end() && !m["assignObjectId"].empty()) {
      assignObjectId = make_shared<long>(boost::any_cast<long>(m["assignObjectId"]));
    }
    if (m.find("assignObjectType") != m.end() && !m["assignObjectType"].empty()) {
      assignObjectType = make_shared<string>(boost::any_cast<string>(m["assignObjectType"]));
    }
    if (m.find("effection") != m.end() && !m["effection"].empty()) {
      effection = make_shared<string>(boost::any_cast<string>(m["effection"]));
    }
    if (m.find("matchCount") != m.end() && !m["matchCount"].empty()) {
      matchCount = make_shared<long>(boost::any_cast<long>(m["matchCount"]));
    }
    if (m.find("eventRouteChildRules") != m.end() && !m["eventRouteChildRules"].empty()) {
      if (typeid(vector<boost::any>) == m["eventRouteChildRules"].type()) {
        vector<GetRouteRuleResponseBodyDataEventRouteChildRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["eventRouteChildRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRouteRuleResponseBodyDataEventRouteChildRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eventRouteChildRules = make_shared<vector<GetRouteRuleResponseBodyDataEventRouteChildRules>>(expect1);
      }
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
    if (m.find("notifyChannels") != m.end() && !m["notifyChannels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["notifyChannels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["notifyChannels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      notifyChannels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("notifyChannelNames") != m.end() && !m["notifyChannelNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["notifyChannelNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["notifyChannelNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      notifyChannelNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("assignObjectName") != m.end() && !m["assignObjectName"].empty()) {
      assignObjectName = make_shared<string>(boost::any_cast<string>(m["assignObjectName"]));
    }
  }


  virtual ~GetRouteRuleResponseBodyData() = default;
};
class GetRouteRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetRouteRuleResponseBodyData> data{};

  GetRouteRuleResponseBody() {}

  explicit GetRouteRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetRouteRuleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetRouteRuleResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetRouteRuleResponseBody() = default;
};
class GetRouteRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRouteRuleResponseBody> body{};

  GetRouteRuleResponse() {}

  explicit GetRouteRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetRouteRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRouteRuleResponseBody>(model1);
      }
    }
  }


  virtual ~GetRouteRuleResponse() = default;
};
class EnableRouteRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> routeRuleId{};
  shared_ptr<string> clientToken{};

  EnableRouteRuleRequest() {}

  explicit EnableRouteRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (routeRuleId) {
      res["routeRuleId"] = boost::any(*routeRuleId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("routeRuleId") != m.end() && !m["routeRuleId"].empty()) {
      routeRuleId = make_shared<long>(boost::any_cast<long>(m["routeRuleId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~EnableRouteRuleRequest() = default;
};
class EnableRouteRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> data{};

  EnableRouteRuleResponseBody() {}

  explicit EnableRouteRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["data"]));
    }
  }


  virtual ~EnableRouteRuleResponseBody() = default;
};
class EnableRouteRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableRouteRuleResponseBody> body{};

  EnableRouteRuleResponse() {}

  explicit EnableRouteRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EnableRouteRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableRouteRuleResponseBody>(model1);
      }
    }
  }


  virtual ~EnableRouteRuleResponse() = default;
};
class UpdateUserRequest : public Darabonba::Model {
public:
  shared_ptr<long> ramId{};
  shared_ptr<string> phone{};
  shared_ptr<string> username{};
  shared_ptr<string> email{};
  shared_ptr<long> userId{};
  shared_ptr<string> clientToken{};

  UpdateUserRequest() {}

  explicit UpdateUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ramId) {
      res["ramId"] = boost::any(*ramId);
    }
    if (phone) {
      res["phone"] = boost::any(*phone);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    if (email) {
      res["email"] = boost::any(*email);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ramId") != m.end() && !m["ramId"].empty()) {
      ramId = make_shared<long>(boost::any_cast<long>(m["ramId"]));
    }
    if (m.find("phone") != m.end() && !m["phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["phone"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
    if (m.find("email") != m.end() && !m["email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["email"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["userId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
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
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateUserResponseBody() = default;
};
class UpdateUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateUserResponseBody> body{};

  UpdateUserResponse() {}

  explicit UpdateUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class UpdateProblemImprovementRequest : public Darabonba::Model {
public:
  shared_ptr<long> problemId{};
  shared_ptr<string> problemReason{};
  shared_ptr<string> recentActivity{};
  shared_ptr<string> injectionMode{};
  shared_ptr<string> recoveryMode{};
  shared_ptr<long> discoverSource{};
  shared_ptr<long> userReport{};
  shared_ptr<string> monitorSourceName{};
  shared_ptr<string> relationChanges{};
  shared_ptr<long> dutyUserId{};
  shared_ptr<long> replayDutyUserId{};
  shared_ptr<string> dutyDepartmentName{};
  shared_ptr<long> dutyDepartmentId{};
  shared_ptr<string> remark{};
  shared_ptr<string> clientToken{};

  UpdateProblemImprovementRequest() {}

  explicit UpdateProblemImprovementRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (problemReason) {
      res["problemReason"] = boost::any(*problemReason);
    }
    if (recentActivity) {
      res["recentActivity"] = boost::any(*recentActivity);
    }
    if (injectionMode) {
      res["injectionMode"] = boost::any(*injectionMode);
    }
    if (recoveryMode) {
      res["recoveryMode"] = boost::any(*recoveryMode);
    }
    if (discoverSource) {
      res["discoverSource"] = boost::any(*discoverSource);
    }
    if (userReport) {
      res["userReport"] = boost::any(*userReport);
    }
    if (monitorSourceName) {
      res["monitorSourceName"] = boost::any(*monitorSourceName);
    }
    if (relationChanges) {
      res["relationChanges"] = boost::any(*relationChanges);
    }
    if (dutyUserId) {
      res["dutyUserId"] = boost::any(*dutyUserId);
    }
    if (replayDutyUserId) {
      res["replayDutyUserId"] = boost::any(*replayDutyUserId);
    }
    if (dutyDepartmentName) {
      res["dutyDepartmentName"] = boost::any(*dutyDepartmentName);
    }
    if (dutyDepartmentId) {
      res["dutyDepartmentId"] = boost::any(*dutyDepartmentId);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
    if (m.find("problemReason") != m.end() && !m["problemReason"].empty()) {
      problemReason = make_shared<string>(boost::any_cast<string>(m["problemReason"]));
    }
    if (m.find("recentActivity") != m.end() && !m["recentActivity"].empty()) {
      recentActivity = make_shared<string>(boost::any_cast<string>(m["recentActivity"]));
    }
    if (m.find("injectionMode") != m.end() && !m["injectionMode"].empty()) {
      injectionMode = make_shared<string>(boost::any_cast<string>(m["injectionMode"]));
    }
    if (m.find("recoveryMode") != m.end() && !m["recoveryMode"].empty()) {
      recoveryMode = make_shared<string>(boost::any_cast<string>(m["recoveryMode"]));
    }
    if (m.find("discoverSource") != m.end() && !m["discoverSource"].empty()) {
      discoverSource = make_shared<long>(boost::any_cast<long>(m["discoverSource"]));
    }
    if (m.find("userReport") != m.end() && !m["userReport"].empty()) {
      userReport = make_shared<long>(boost::any_cast<long>(m["userReport"]));
    }
    if (m.find("monitorSourceName") != m.end() && !m["monitorSourceName"].empty()) {
      monitorSourceName = make_shared<string>(boost::any_cast<string>(m["monitorSourceName"]));
    }
    if (m.find("relationChanges") != m.end() && !m["relationChanges"].empty()) {
      relationChanges = make_shared<string>(boost::any_cast<string>(m["relationChanges"]));
    }
    if (m.find("dutyUserId") != m.end() && !m["dutyUserId"].empty()) {
      dutyUserId = make_shared<long>(boost::any_cast<long>(m["dutyUserId"]));
    }
    if (m.find("replayDutyUserId") != m.end() && !m["replayDutyUserId"].empty()) {
      replayDutyUserId = make_shared<long>(boost::any_cast<long>(m["replayDutyUserId"]));
    }
    if (m.find("dutyDepartmentName") != m.end() && !m["dutyDepartmentName"].empty()) {
      dutyDepartmentName = make_shared<string>(boost::any_cast<string>(m["dutyDepartmentName"]));
    }
    if (m.find("dutyDepartmentId") != m.end() && !m["dutyDepartmentId"].empty()) {
      dutyDepartmentId = make_shared<long>(boost::any_cast<long>(m["dutyDepartmentId"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~UpdateProblemImprovementRequest() = default;
};
class UpdateProblemImprovementResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateProblemImprovementResponseBody() {}

  explicit UpdateProblemImprovementResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateProblemImprovementResponseBody() = default;
};
class UpdateProblemImprovementResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateProblemImprovementResponseBody> body{};

  UpdateProblemImprovementResponse() {}

  explicit UpdateProblemImprovementResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateProblemImprovementResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProblemImprovementResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProblemImprovementResponse() = default;
};
class GetServiceRequest : public Darabonba::Model {
public:
  shared_ptr<long> serviceId{};
  shared_ptr<string> clientToken{};

  GetServiceRequest() {}

  explicit GetServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceId) {
      res["serviceId"] = boost::any(*serviceId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceId") != m.end() && !m["serviceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["serviceId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~GetServiceRequest() = default;
};
class GetServiceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> serviceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceDescription{};
  shared_ptr<string> updateTime{};

  GetServiceResponseBodyData() {}

  explicit GetServiceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceId) {
      res["serviceId"] = boost::any(*serviceId);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (serviceDescription) {
      res["serviceDescription"] = boost::any(*serviceDescription);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceId") != m.end() && !m["serviceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["serviceId"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("serviceDescription") != m.end() && !m["serviceDescription"].empty()) {
      serviceDescription = make_shared<string>(boost::any_cast<string>(m["serviceDescription"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
  }


  virtual ~GetServiceResponseBodyData() = default;
};
class GetServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetServiceResponseBodyData> data{};

  GetServiceResponseBody() {}

  explicit GetServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetServiceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetServiceResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetServiceResponseBody() = default;
};
class GetServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetServiceResponseBody> body{};

  GetServiceResponse() {}

  explicit GetServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceResponse() = default;
};
class CreateIncidentRequest : public Darabonba::Model {
public:
  shared_ptr<string> incidentLevel{};
  shared_ptr<string> clientToken{};
  shared_ptr<long> relatedServiceId{};
  shared_ptr<string> effect{};
  shared_ptr<string> incidentTitle{};
  shared_ptr<long> assignUserId{};
  shared_ptr<string> incidentDescription{};
  shared_ptr<vector<string>> channels{};
  shared_ptr<long> serviceGroupId{};

  CreateIncidentRequest() {}

  explicit CreateIncidentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (incidentLevel) {
      res["incidentLevel"] = boost::any(*incidentLevel);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (relatedServiceId) {
      res["relatedServiceId"] = boost::any(*relatedServiceId);
    }
    if (effect) {
      res["effect"] = boost::any(*effect);
    }
    if (incidentTitle) {
      res["incidentTitle"] = boost::any(*incidentTitle);
    }
    if (assignUserId) {
      res["assignUserId"] = boost::any(*assignUserId);
    }
    if (incidentDescription) {
      res["incidentDescription"] = boost::any(*incidentDescription);
    }
    if (channels) {
      res["channels"] = boost::any(*channels);
    }
    if (serviceGroupId) {
      res["serviceGroupId"] = boost::any(*serviceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("incidentLevel") != m.end() && !m["incidentLevel"].empty()) {
      incidentLevel = make_shared<string>(boost::any_cast<string>(m["incidentLevel"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("relatedServiceId") != m.end() && !m["relatedServiceId"].empty()) {
      relatedServiceId = make_shared<long>(boost::any_cast<long>(m["relatedServiceId"]));
    }
    if (m.find("effect") != m.end() && !m["effect"].empty()) {
      effect = make_shared<string>(boost::any_cast<string>(m["effect"]));
    }
    if (m.find("incidentTitle") != m.end() && !m["incidentTitle"].empty()) {
      incidentTitle = make_shared<string>(boost::any_cast<string>(m["incidentTitle"]));
    }
    if (m.find("assignUserId") != m.end() && !m["assignUserId"].empty()) {
      assignUserId = make_shared<long>(boost::any_cast<long>(m["assignUserId"]));
    }
    if (m.find("incidentDescription") != m.end() && !m["incidentDescription"].empty()) {
      incidentDescription = make_shared<string>(boost::any_cast<string>(m["incidentDescription"]));
    }
    if (m.find("channels") != m.end() && !m["channels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["channels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["channels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      channels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("serviceGroupId") != m.end() && !m["serviceGroupId"].empty()) {
      serviceGroupId = make_shared<long>(boost::any_cast<long>(m["serviceGroupId"]));
    }
  }


  virtual ~CreateIncidentRequest() = default;
};
class CreateIncidentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> incidentId{};

  CreateIncidentResponseBodyData() {}

  explicit CreateIncidentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (incidentId) {
      res["incidentId"] = boost::any(*incidentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("incidentId") != m.end() && !m["incidentId"].empty()) {
      incidentId = make_shared<long>(boost::any_cast<long>(m["incidentId"]));
    }
  }


  virtual ~CreateIncidentResponseBodyData() = default;
};
class CreateIncidentResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateIncidentResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CreateIncidentResponseBody() {}

  explicit CreateIncidentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateIncidentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateIncidentResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateIncidentResponseBody() = default;
};
class CreateIncidentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateIncidentResponseBody> body{};

  CreateIncidentResponse() {}

  explicit CreateIncidentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateIncidentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateIncidentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateIncidentResponse() = default;
};
class FinishProblemRequest : public Darabonba::Model {
public:
  shared_ptr<long> problemId{};
  shared_ptr<string> clientToken{};

  FinishProblemRequest() {}

  explicit FinishProblemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~FinishProblemRequest() = default;
};
class FinishProblemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  FinishProblemResponseBody() {}

  explicit FinishProblemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~FinishProblemResponseBody() = default;
};
class FinishProblemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<FinishProblemResponseBody> body{};

  FinishProblemResponse() {}

  explicit FinishProblemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        FinishProblemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FinishProblemResponseBody>(model1);
      }
    }
  }


  virtual ~FinishProblemResponse() = default;
};
class ListSubscriptionServiceGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<long>> serviceIds{};
  shared_ptr<string> clientToken{};

  ListSubscriptionServiceGroupsRequest() {}

  explicit ListSubscriptionServiceGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceIds) {
      res["serviceIds"] = boost::any(*serviceIds);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceIds") != m.end() && !m["serviceIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["serviceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["serviceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      serviceIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~ListSubscriptionServiceGroupsRequest() = default;
};
class ListSubscriptionServiceGroupsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> serviceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceGroupDescription{};

  ListSubscriptionServiceGroupsResponseBodyData() {}

  explicit ListSubscriptionServiceGroupsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceId) {
      res["serviceId"] = boost::any(*serviceId);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (serviceGroupDescription) {
      res["serviceGroupDescription"] = boost::any(*serviceGroupDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceId") != m.end() && !m["serviceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["serviceId"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("serviceGroupDescription") != m.end() && !m["serviceGroupDescription"].empty()) {
      serviceGroupDescription = make_shared<string>(boost::any_cast<string>(m["serviceGroupDescription"]));
    }
  }


  virtual ~ListSubscriptionServiceGroupsResponseBodyData() = default;
};
class ListSubscriptionServiceGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSubscriptionServiceGroupsResponseBodyData>> data{};

  ListSubscriptionServiceGroupsResponseBody() {}

  explicit ListSubscriptionServiceGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListSubscriptionServiceGroupsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSubscriptionServiceGroupsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListSubscriptionServiceGroupsResponseBodyData>>(expect1);
      }
    }
  }


  virtual ~ListSubscriptionServiceGroupsResponseBody() = default;
};
class ListSubscriptionServiceGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSubscriptionServiceGroupsResponseBody> body{};

  ListSubscriptionServiceGroupsResponse() {}

  explicit ListSubscriptionServiceGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSubscriptionServiceGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSubscriptionServiceGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSubscriptionServiceGroupsResponse() = default;
};
class UpdateProblemNoticeRequest : public Darabonba::Model {
public:
  shared_ptr<string> problemNotifyType{};
  shared_ptr<long> problemId{};
  shared_ptr<string> clientToken{};

  UpdateProblemNoticeRequest() {}

  explicit UpdateProblemNoticeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (problemNotifyType) {
      res["problemNotifyType"] = boost::any(*problemNotifyType);
    }
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("problemNotifyType") != m.end() && !m["problemNotifyType"].empty()) {
      problemNotifyType = make_shared<string>(boost::any_cast<string>(m["problemNotifyType"]));
    }
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~UpdateProblemNoticeRequest() = default;
};
class UpdateProblemNoticeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateProblemNoticeResponseBody() {}

  explicit UpdateProblemNoticeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateProblemNoticeResponseBody() = default;
};
class UpdateProblemNoticeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateProblemNoticeResponseBody> body{};

  UpdateProblemNoticeResponse() {}

  explicit UpdateProblemNoticeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateProblemNoticeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProblemNoticeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProblemNoticeResponse() = default;
};
class ListIntegrationConfigTimelinesRequest : public Darabonba::Model {
public:
  shared_ptr<long> integrationConfigId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> clientToken{};

  ListIntegrationConfigTimelinesRequest() {}

  explicit ListIntegrationConfigTimelinesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (integrationConfigId) {
      res["integrationConfigId"] = boost::any(*integrationConfigId);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("integrationConfigId") != m.end() && !m["integrationConfigId"].empty()) {
      integrationConfigId = make_shared<long>(boost::any_cast<long>(m["integrationConfigId"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~ListIntegrationConfigTimelinesRequest() = default;
};
class ListIntegrationConfigTimelinesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> title{};
  shared_ptr<string> description{};
  shared_ptr<string> createTime{};

  ListIntegrationConfigTimelinesResponseBodyData() {}

  explicit ListIntegrationConfigTimelinesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
  }


  virtual ~ListIntegrationConfigTimelinesResponseBodyData() = default;
};
class ListIntegrationConfigTimelinesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListIntegrationConfigTimelinesResponseBodyData>> data{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListIntegrationConfigTimelinesResponseBody() {}

  explicit ListIntegrationConfigTimelinesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListIntegrationConfigTimelinesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIntegrationConfigTimelinesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListIntegrationConfigTimelinesResponseBodyData>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListIntegrationConfigTimelinesResponseBody() = default;
};
class ListIntegrationConfigTimelinesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListIntegrationConfigTimelinesResponseBody> body{};

  ListIntegrationConfigTimelinesResponse() {}

  explicit ListIntegrationConfigTimelinesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListIntegrationConfigTimelinesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListIntegrationConfigTimelinesResponseBody>(model1);
      }
    }
  }


  virtual ~ListIntegrationConfigTimelinesResponse() = default;
};
class UpdateIncidentRequest : public Darabonba::Model {
public:
  shared_ptr<long> incidentId{};
  shared_ptr<string> incidentLevel{};
  shared_ptr<string> effect{};
  shared_ptr<string> incidentTitle{};
  shared_ptr<string> clientToken{};

  UpdateIncidentRequest() {}

  explicit UpdateIncidentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (incidentId) {
      res["incidentId"] = boost::any(*incidentId);
    }
    if (incidentLevel) {
      res["incidentLevel"] = boost::any(*incidentLevel);
    }
    if (effect) {
      res["effect"] = boost::any(*effect);
    }
    if (incidentTitle) {
      res["incidentTitle"] = boost::any(*incidentTitle);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("incidentId") != m.end() && !m["incidentId"].empty()) {
      incidentId = make_shared<long>(boost::any_cast<long>(m["incidentId"]));
    }
    if (m.find("incidentLevel") != m.end() && !m["incidentLevel"].empty()) {
      incidentLevel = make_shared<string>(boost::any_cast<string>(m["incidentLevel"]));
    }
    if (m.find("effect") != m.end() && !m["effect"].empty()) {
      effect = make_shared<string>(boost::any_cast<string>(m["effect"]));
    }
    if (m.find("incidentTitle") != m.end() && !m["incidentTitle"].empty()) {
      incidentTitle = make_shared<string>(boost::any_cast<string>(m["incidentTitle"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~UpdateIncidentRequest() = default;
};
class UpdateIncidentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> incidentId{};

  UpdateIncidentResponseBodyData() {}

  explicit UpdateIncidentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (incidentId) {
      res["incidentId"] = boost::any(*incidentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("incidentId") != m.end() && !m["incidentId"].empty()) {
      incidentId = make_shared<long>(boost::any_cast<long>(m["incidentId"]));
    }
  }


  virtual ~UpdateIncidentResponseBodyData() = default;
};
class UpdateIncidentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdateIncidentResponseBodyData> data{};

  UpdateIncidentResponseBody() {}

  explicit UpdateIncidentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        UpdateIncidentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<UpdateIncidentResponseBodyData>(model1);
      }
    }
  }


  virtual ~UpdateIncidentResponseBody() = default;
};
class UpdateIncidentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateIncidentResponseBody> body{};

  UpdateIncidentResponse() {}

  explicit UpdateIncidentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateIncidentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateIncidentResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateIncidentResponse() = default;
};
class GetServiceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> serviceGroupId{};
  shared_ptr<string> clientToken{};

  GetServiceGroupRequest() {}

  explicit GetServiceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceGroupId) {
      res["serviceGroupId"] = boost::any(*serviceGroupId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceGroupId") != m.end() && !m["serviceGroupId"].empty()) {
      serviceGroupId = make_shared<long>(boost::any_cast<long>(m["serviceGroupId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~GetServiceGroupRequest() = default;
};
class GetServiceGroupResponseBodyDataUsers : public Darabonba::Model {
public:
  shared_ptr<long> userId{};
  shared_ptr<string> userName{};
  shared_ptr<string> phone{};
  shared_ptr<long> serviceGroupId{};

  GetServiceGroupResponseBodyDataUsers() {}

  explicit GetServiceGroupResponseBodyDataUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    if (userName) {
      res["userName"] = boost::any(*userName);
    }
    if (phone) {
      res["phone"] = boost::any(*phone);
    }
    if (serviceGroupId) {
      res["serviceGroupId"] = boost::any(*serviceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["userId"]));
    }
    if (m.find("userName") != m.end() && !m["userName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["userName"]));
    }
    if (m.find("phone") != m.end() && !m["phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["phone"]));
    }
    if (m.find("serviceGroupId") != m.end() && !m["serviceGroupId"].empty()) {
      serviceGroupId = make_shared<long>(boost::any_cast<long>(m["serviceGroupId"]));
    }
  }


  virtual ~GetServiceGroupResponseBodyDataUsers() = default;
};
class GetServiceGroupResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> updateTime{};
  shared_ptr<vector<GetServiceGroupResponseBodyDataUsers>> users{};
  shared_ptr<string> serviceGroupDescription{};
  shared_ptr<string> webhookLink{};
  shared_ptr<string> webhookType{};
  shared_ptr<string> enableWebhook{};
  shared_ptr<string> serviceGroupName{};
  shared_ptr<long> serviceGroupId{};
  shared_ptr<string> createTime{};

  GetServiceGroupResponseBodyData() {}

  explicit GetServiceGroupResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (users) {
      vector<boost::any> temp1;
      for(auto item1:*users){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["users"] = boost::any(temp1);
    }
    if (serviceGroupDescription) {
      res["serviceGroupDescription"] = boost::any(*serviceGroupDescription);
    }
    if (webhookLink) {
      res["webhookLink"] = boost::any(*webhookLink);
    }
    if (webhookType) {
      res["webhookType"] = boost::any(*webhookType);
    }
    if (enableWebhook) {
      res["enableWebhook"] = boost::any(*enableWebhook);
    }
    if (serviceGroupName) {
      res["serviceGroupName"] = boost::any(*serviceGroupName);
    }
    if (serviceGroupId) {
      res["serviceGroupId"] = boost::any(*serviceGroupId);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
    if (m.find("users") != m.end() && !m["users"].empty()) {
      if (typeid(vector<boost::any>) == m["users"].type()) {
        vector<GetServiceGroupResponseBodyDataUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceGroupResponseBodyDataUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<GetServiceGroupResponseBodyDataUsers>>(expect1);
      }
    }
    if (m.find("serviceGroupDescription") != m.end() && !m["serviceGroupDescription"].empty()) {
      serviceGroupDescription = make_shared<string>(boost::any_cast<string>(m["serviceGroupDescription"]));
    }
    if (m.find("webhookLink") != m.end() && !m["webhookLink"].empty()) {
      webhookLink = make_shared<string>(boost::any_cast<string>(m["webhookLink"]));
    }
    if (m.find("webhookType") != m.end() && !m["webhookType"].empty()) {
      webhookType = make_shared<string>(boost::any_cast<string>(m["webhookType"]));
    }
    if (m.find("enableWebhook") != m.end() && !m["enableWebhook"].empty()) {
      enableWebhook = make_shared<string>(boost::any_cast<string>(m["enableWebhook"]));
    }
    if (m.find("serviceGroupName") != m.end() && !m["serviceGroupName"].empty()) {
      serviceGroupName = make_shared<string>(boost::any_cast<string>(m["serviceGroupName"]));
    }
    if (m.find("serviceGroupId") != m.end() && !m["serviceGroupId"].empty()) {
      serviceGroupId = make_shared<long>(boost::any_cast<long>(m["serviceGroupId"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
  }


  virtual ~GetServiceGroupResponseBodyData() = default;
};
class GetServiceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetServiceGroupResponseBodyData> data{};

  GetServiceGroupResponseBody() {}

  explicit GetServiceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetServiceGroupResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetServiceGroupResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetServiceGroupResponseBody() = default;
};
class GetServiceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetServiceGroupResponseBody> body{};

  GetServiceGroupResponse() {}

  explicit GetServiceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetServiceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceGroupResponse() = default;
};
class CreateSubscriptionRequestScopeObjectList : public Darabonba::Model {
public:
  shared_ptr<long> scopeObjectId{};

  CreateSubscriptionRequestScopeObjectList() {}

  explicit CreateSubscriptionRequestScopeObjectList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scopeObjectId) {
      res["scopeObjectId"] = boost::any(*scopeObjectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("scopeObjectId") != m.end() && !m["scopeObjectId"].empty()) {
      scopeObjectId = make_shared<long>(boost::any_cast<long>(m["scopeObjectId"]));
    }
  }


  virtual ~CreateSubscriptionRequestScopeObjectList() = default;
};
class CreateSubscriptionRequestNotifyObjectList : public Darabonba::Model {
public:
  shared_ptr<long> notifyObjectId{};

  CreateSubscriptionRequestNotifyObjectList() {}

  explicit CreateSubscriptionRequestNotifyObjectList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (notifyObjectId) {
      res["notifyObjectId"] = boost::any(*notifyObjectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("notifyObjectId") != m.end() && !m["notifyObjectId"].empty()) {
      notifyObjectId = make_shared<long>(boost::any_cast<long>(m["notifyObjectId"]));
    }
  }


  virtual ~CreateSubscriptionRequestNotifyObjectList() = default;
};
class CreateSubscriptionRequestNotifyStrategyListStrategiesConditions : public Darabonba::Model {
public:
  shared_ptr<string> effection{};
  shared_ptr<string> problemNotifyType{};
  shared_ptr<string> level{};
  shared_ptr<string> action{};

  CreateSubscriptionRequestNotifyStrategyListStrategiesConditions() {}

  explicit CreateSubscriptionRequestNotifyStrategyListStrategiesConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (effection) {
      res["effection"] = boost::any(*effection);
    }
    if (problemNotifyType) {
      res["problemNotifyType"] = boost::any(*problemNotifyType);
    }
    if (level) {
      res["level"] = boost::any(*level);
    }
    if (action) {
      res["action"] = boost::any(*action);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("effection") != m.end() && !m["effection"].empty()) {
      effection = make_shared<string>(boost::any_cast<string>(m["effection"]));
    }
    if (m.find("problemNotifyType") != m.end() && !m["problemNotifyType"].empty()) {
      problemNotifyType = make_shared<string>(boost::any_cast<string>(m["problemNotifyType"]));
    }
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["level"]));
    }
    if (m.find("action") != m.end() && !m["action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["action"]));
    }
  }


  virtual ~CreateSubscriptionRequestNotifyStrategyListStrategiesConditions() = default;
};
class CreateSubscriptionRequestNotifyStrategyListStrategies : public Darabonba::Model {
public:
  shared_ptr<vector<CreateSubscriptionRequestNotifyStrategyListStrategiesConditions>> conditions{};

  CreateSubscriptionRequestNotifyStrategyListStrategies() {}

  explicit CreateSubscriptionRequestNotifyStrategyListStrategies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditions) {
      vector<boost::any> temp1;
      for(auto item1:*conditions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["conditions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("conditions") != m.end() && !m["conditions"].empty()) {
      if (typeid(vector<boost::any>) == m["conditions"].type()) {
        vector<CreateSubscriptionRequestNotifyStrategyListStrategiesConditions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["conditions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateSubscriptionRequestNotifyStrategyListStrategiesConditions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conditions = make_shared<vector<CreateSubscriptionRequestNotifyStrategyListStrategiesConditions>>(expect1);
      }
    }
  }


  virtual ~CreateSubscriptionRequestNotifyStrategyListStrategies() = default;
};
class CreateSubscriptionRequestNotifyStrategyList : public Darabonba::Model {
public:
  shared_ptr<long> instanceType{};
  shared_ptr<vector<CreateSubscriptionRequestNotifyStrategyListStrategies>> strategies{};
  shared_ptr<string> channels{};

  CreateSubscriptionRequestNotifyStrategyList() {}

  explicit CreateSubscriptionRequestNotifyStrategyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["instanceType"] = boost::any(*instanceType);
    }
    if (strategies) {
      vector<boost::any> temp1;
      for(auto item1:*strategies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["strategies"] = boost::any(temp1);
    }
    if (channels) {
      res["channels"] = boost::any(*channels);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceType") != m.end() && !m["instanceType"].empty()) {
      instanceType = make_shared<long>(boost::any_cast<long>(m["instanceType"]));
    }
    if (m.find("strategies") != m.end() && !m["strategies"].empty()) {
      if (typeid(vector<boost::any>) == m["strategies"].type()) {
        vector<CreateSubscriptionRequestNotifyStrategyListStrategies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["strategies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateSubscriptionRequestNotifyStrategyListStrategies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        strategies = make_shared<vector<CreateSubscriptionRequestNotifyStrategyListStrategies>>(expect1);
      }
    }
    if (m.find("channels") != m.end() && !m["channels"].empty()) {
      channels = make_shared<string>(boost::any_cast<string>(m["channels"]));
    }
  }


  virtual ~CreateSubscriptionRequestNotifyStrategyList() = default;
};
class CreateSubscriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> subscriptionTitle{};
  shared_ptr<long> scope{};
  shared_ptr<long> notifyObjectType{};
  shared_ptr<long> expiredType{};
  shared_ptr<vector<CreateSubscriptionRequestScopeObjectList>> scopeObjectList{};
  shared_ptr<vector<CreateSubscriptionRequestNotifyObjectList>> notifyObjectList{};
  shared_ptr<vector<CreateSubscriptionRequestNotifyStrategyList>> notifyStrategyList{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  CreateSubscriptionRequest() {}

  explicit CreateSubscriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subscriptionTitle) {
      res["subscriptionTitle"] = boost::any(*subscriptionTitle);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (notifyObjectType) {
      res["notifyObjectType"] = boost::any(*notifyObjectType);
    }
    if (expiredType) {
      res["expiredType"] = boost::any(*expiredType);
    }
    if (scopeObjectList) {
      vector<boost::any> temp1;
      for(auto item1:*scopeObjectList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["scopeObjectList"] = boost::any(temp1);
    }
    if (notifyObjectList) {
      vector<boost::any> temp1;
      for(auto item1:*notifyObjectList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["notifyObjectList"] = boost::any(temp1);
    }
    if (notifyStrategyList) {
      vector<boost::any> temp1;
      for(auto item1:*notifyStrategyList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["notifyStrategyList"] = boost::any(temp1);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("subscriptionTitle") != m.end() && !m["subscriptionTitle"].empty()) {
      subscriptionTitle = make_shared<string>(boost::any_cast<string>(m["subscriptionTitle"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<long>(boost::any_cast<long>(m["scope"]));
    }
    if (m.find("notifyObjectType") != m.end() && !m["notifyObjectType"].empty()) {
      notifyObjectType = make_shared<long>(boost::any_cast<long>(m["notifyObjectType"]));
    }
    if (m.find("expiredType") != m.end() && !m["expiredType"].empty()) {
      expiredType = make_shared<long>(boost::any_cast<long>(m["expiredType"]));
    }
    if (m.find("scopeObjectList") != m.end() && !m["scopeObjectList"].empty()) {
      if (typeid(vector<boost::any>) == m["scopeObjectList"].type()) {
        vector<CreateSubscriptionRequestScopeObjectList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["scopeObjectList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateSubscriptionRequestScopeObjectList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scopeObjectList = make_shared<vector<CreateSubscriptionRequestScopeObjectList>>(expect1);
      }
    }
    if (m.find("notifyObjectList") != m.end() && !m["notifyObjectList"].empty()) {
      if (typeid(vector<boost::any>) == m["notifyObjectList"].type()) {
        vector<CreateSubscriptionRequestNotifyObjectList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["notifyObjectList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateSubscriptionRequestNotifyObjectList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        notifyObjectList = make_shared<vector<CreateSubscriptionRequestNotifyObjectList>>(expect1);
      }
    }
    if (m.find("notifyStrategyList") != m.end() && !m["notifyStrategyList"].empty()) {
      if (typeid(vector<boost::any>) == m["notifyStrategyList"].type()) {
        vector<CreateSubscriptionRequestNotifyStrategyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["notifyStrategyList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateSubscriptionRequestNotifyStrategyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        notifyStrategyList = make_shared<vector<CreateSubscriptionRequestNotifyStrategyList>>(expect1);
      }
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
  }


  virtual ~CreateSubscriptionRequest() = default;
};
class CreateSubscriptionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> subscriptionId{};

  CreateSubscriptionResponseBodyData() {}

  explicit CreateSubscriptionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subscriptionId) {
      res["subscriptionId"] = boost::any(*subscriptionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("subscriptionId") != m.end() && !m["subscriptionId"].empty()) {
      subscriptionId = make_shared<long>(boost::any_cast<long>(m["subscriptionId"]));
    }
  }


  virtual ~CreateSubscriptionResponseBodyData() = default;
};
class CreateSubscriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateSubscriptionResponseBodyData> data{};

  CreateSubscriptionResponseBody() {}

  explicit CreateSubscriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateSubscriptionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateSubscriptionResponseBodyData>(model1);
      }
    }
  }


  virtual ~CreateSubscriptionResponseBody() = default;
};
class CreateSubscriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateSubscriptionResponseBody> body{};

  CreateSubscriptionResponse() {}

  explicit CreateSubscriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateSubscriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSubscriptionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSubscriptionResponse() = default;
};
class DeleteIntegrationConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> integrationConfigId{};
  shared_ptr<string> clientToken{};

  DeleteIntegrationConfigRequest() {}

  explicit DeleteIntegrationConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (integrationConfigId) {
      res["integrationConfigId"] = boost::any(*integrationConfigId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("integrationConfigId") != m.end() && !m["integrationConfigId"].empty()) {
      integrationConfigId = make_shared<long>(boost::any_cast<long>(m["integrationConfigId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~DeleteIntegrationConfigRequest() = default;
};
class DeleteIntegrationConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteIntegrationConfigResponseBody() {}

  explicit DeleteIntegrationConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteIntegrationConfigResponseBody() = default;
};
class DeleteIntegrationConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteIntegrationConfigResponseBody> body{};

  DeleteIntegrationConfigResponse() {}

  explicit DeleteIntegrationConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteIntegrationConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteIntegrationConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteIntegrationConfigResponse() = default;
};
class UpdateProblemMeasureRequest : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<string> content{};
  shared_ptr<string> checkStandard{};
  shared_ptr<long> checkUserId{};
  shared_ptr<long> directorId{};
  shared_ptr<long> stalkerId{};
  shared_ptr<string> planFinishTime{};
  shared_ptr<long> measureId{};
  shared_ptr<string> status{};
  shared_ptr<string> clientToken{};
  shared_ptr<long> problemId{};

  UpdateProblemMeasureRequest() {}

  explicit UpdateProblemMeasureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (checkStandard) {
      res["checkStandard"] = boost::any(*checkStandard);
    }
    if (checkUserId) {
      res["checkUserId"] = boost::any(*checkUserId);
    }
    if (directorId) {
      res["directorId"] = boost::any(*directorId);
    }
    if (stalkerId) {
      res["stalkerId"] = boost::any(*stalkerId);
    }
    if (planFinishTime) {
      res["planFinishTime"] = boost::any(*planFinishTime);
    }
    if (measureId) {
      res["measureId"] = boost::any(*measureId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("checkStandard") != m.end() && !m["checkStandard"].empty()) {
      checkStandard = make_shared<string>(boost::any_cast<string>(m["checkStandard"]));
    }
    if (m.find("checkUserId") != m.end() && !m["checkUserId"].empty()) {
      checkUserId = make_shared<long>(boost::any_cast<long>(m["checkUserId"]));
    }
    if (m.find("directorId") != m.end() && !m["directorId"].empty()) {
      directorId = make_shared<long>(boost::any_cast<long>(m["directorId"]));
    }
    if (m.find("stalkerId") != m.end() && !m["stalkerId"].empty()) {
      stalkerId = make_shared<long>(boost::any_cast<long>(m["stalkerId"]));
    }
    if (m.find("planFinishTime") != m.end() && !m["planFinishTime"].empty()) {
      planFinishTime = make_shared<string>(boost::any_cast<string>(m["planFinishTime"]));
    }
    if (m.find("measureId") != m.end() && !m["measureId"].empty()) {
      measureId = make_shared<long>(boost::any_cast<long>(m["measureId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
  }


  virtual ~UpdateProblemMeasureRequest() = default;
};
class UpdateProblemMeasureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateProblemMeasureResponseBody() {}

  explicit UpdateProblemMeasureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateProblemMeasureResponseBody() = default;
};
class UpdateProblemMeasureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateProblemMeasureResponseBody> body{};

  UpdateProblemMeasureResponse() {}

  explicit UpdateProblemMeasureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateProblemMeasureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProblemMeasureResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProblemMeasureResponse() = default;
};
class ListAlertsRequest : public Darabonba::Model {
public:
  shared_ptr<string> alertLevel{};
  shared_ptr<long> relatedServiceId{};
  shared_ptr<string> alertName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> alertSourceName{};

  ListAlertsRequest() {}

  explicit ListAlertsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertLevel) {
      res["alertLevel"] = boost::any(*alertLevel);
    }
    if (relatedServiceId) {
      res["relatedServiceId"] = boost::any(*relatedServiceId);
    }
    if (alertName) {
      res["alertName"] = boost::any(*alertName);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (alertSourceName) {
      res["alertSourceName"] = boost::any(*alertSourceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alertLevel") != m.end() && !m["alertLevel"].empty()) {
      alertLevel = make_shared<string>(boost::any_cast<string>(m["alertLevel"]));
    }
    if (m.find("relatedServiceId") != m.end() && !m["relatedServiceId"].empty()) {
      relatedServiceId = make_shared<long>(boost::any_cast<long>(m["relatedServiceId"]));
    }
    if (m.find("alertName") != m.end() && !m["alertName"].empty()) {
      alertName = make_shared<string>(boost::any_cast<string>(m["alertName"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("alertSourceName") != m.end() && !m["alertSourceName"].empty()) {
      alertSourceName = make_shared<string>(boost::any_cast<string>(m["alertSourceName"]));
    }
  }


  virtual ~ListAlertsRequest() = default;
};
class ListAlertsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> alertId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> relatedServiceName{};
  shared_ptr<string> alertLevel{};
  shared_ptr<string> title{};
  shared_ptr<long> sourceEventCount{};
  shared_ptr<string> alertSourceName{};
  shared_ptr<long> routeRuleId{};

  ListAlertsResponseBodyData() {}

  explicit ListAlertsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertId) {
      res["alertId"] = boost::any(*alertId);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (relatedServiceName) {
      res["relatedServiceName"] = boost::any(*relatedServiceName);
    }
    if (alertLevel) {
      res["alertLevel"] = boost::any(*alertLevel);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (sourceEventCount) {
      res["sourceEventCount"] = boost::any(*sourceEventCount);
    }
    if (alertSourceName) {
      res["alertSourceName"] = boost::any(*alertSourceName);
    }
    if (routeRuleId) {
      res["routeRuleId"] = boost::any(*routeRuleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alertId") != m.end() && !m["alertId"].empty()) {
      alertId = make_shared<long>(boost::any_cast<long>(m["alertId"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("relatedServiceName") != m.end() && !m["relatedServiceName"].empty()) {
      relatedServiceName = make_shared<string>(boost::any_cast<string>(m["relatedServiceName"]));
    }
    if (m.find("alertLevel") != m.end() && !m["alertLevel"].empty()) {
      alertLevel = make_shared<string>(boost::any_cast<string>(m["alertLevel"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("sourceEventCount") != m.end() && !m["sourceEventCount"].empty()) {
      sourceEventCount = make_shared<long>(boost::any_cast<long>(m["sourceEventCount"]));
    }
    if (m.find("alertSourceName") != m.end() && !m["alertSourceName"].empty()) {
      alertSourceName = make_shared<string>(boost::any_cast<string>(m["alertSourceName"]));
    }
    if (m.find("routeRuleId") != m.end() && !m["routeRuleId"].empty()) {
      routeRuleId = make_shared<long>(boost::any_cast<long>(m["routeRuleId"]));
    }
  }


  virtual ~ListAlertsResponseBodyData() = default;
};
class ListAlertsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListAlertsResponseBodyData>> data{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListAlertsResponseBody() {}

  explicit ListAlertsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListAlertsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAlertsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAlertsResponseBodyData>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListAlertsResponseBody() = default;
};
class ListAlertsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAlertsResponseBody> body{};

  ListAlertsResponse() {}

  explicit ListAlertsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAlertsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAlertsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAlertsResponse() = default;
};
class GetProblemPreviewRequest : public Darabonba::Model {
public:
  shared_ptr<long> problemId{};
  shared_ptr<string> problemNotifyType{};
  shared_ptr<string> problemLevel{};
  shared_ptr<vector<long>> effectServiceIds{};
  shared_ptr<long> relatedServiceId{};
  shared_ptr<long> incidentId{};
  shared_ptr<vector<long>> serviceGroupIds{};
  shared_ptr<string> clientToken{};

  GetProblemPreviewRequest() {}

  explicit GetProblemPreviewRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (problemNotifyType) {
      res["problemNotifyType"] = boost::any(*problemNotifyType);
    }
    if (problemLevel) {
      res["problemLevel"] = boost::any(*problemLevel);
    }
    if (effectServiceIds) {
      res["effectServiceIds"] = boost::any(*effectServiceIds);
    }
    if (relatedServiceId) {
      res["relatedServiceId"] = boost::any(*relatedServiceId);
    }
    if (incidentId) {
      res["incidentId"] = boost::any(*incidentId);
    }
    if (serviceGroupIds) {
      res["serviceGroupIds"] = boost::any(*serviceGroupIds);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
    if (m.find("problemNotifyType") != m.end() && !m["problemNotifyType"].empty()) {
      problemNotifyType = make_shared<string>(boost::any_cast<string>(m["problemNotifyType"]));
    }
    if (m.find("problemLevel") != m.end() && !m["problemLevel"].empty()) {
      problemLevel = make_shared<string>(boost::any_cast<string>(m["problemLevel"]));
    }
    if (m.find("effectServiceIds") != m.end() && !m["effectServiceIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["effectServiceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["effectServiceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      effectServiceIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("relatedServiceId") != m.end() && !m["relatedServiceId"].empty()) {
      relatedServiceId = make_shared<long>(boost::any_cast<long>(m["relatedServiceId"]));
    }
    if (m.find("incidentId") != m.end() && !m["incidentId"].empty()) {
      incidentId = make_shared<long>(boost::any_cast<long>(m["incidentId"]));
    }
    if (m.find("serviceGroupIds") != m.end() && !m["serviceGroupIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["serviceGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["serviceGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      serviceGroupIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~GetProblemPreviewRequest() = default;
};
class GetProblemPreviewResponseBodyDataProblemCoordinationGroups : public Darabonba::Model {
public:
  shared_ptr<string> serviceGroupName{};
  shared_ptr<long> serviceGroupId{};
  shared_ptr<string> serviceGroupDescription{};

  GetProblemPreviewResponseBodyDataProblemCoordinationGroups() {}

  explicit GetProblemPreviewResponseBodyDataProblemCoordinationGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceGroupName) {
      res["serviceGroupName"] = boost::any(*serviceGroupName);
    }
    if (serviceGroupId) {
      res["serviceGroupId"] = boost::any(*serviceGroupId);
    }
    if (serviceGroupDescription) {
      res["serviceGroupDescription"] = boost::any(*serviceGroupDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceGroupName") != m.end() && !m["serviceGroupName"].empty()) {
      serviceGroupName = make_shared<string>(boost::any_cast<string>(m["serviceGroupName"]));
    }
    if (m.find("serviceGroupId") != m.end() && !m["serviceGroupId"].empty()) {
      serviceGroupId = make_shared<long>(boost::any_cast<long>(m["serviceGroupId"]));
    }
    if (m.find("serviceGroupDescription") != m.end() && !m["serviceGroupDescription"].empty()) {
      serviceGroupDescription = make_shared<string>(boost::any_cast<string>(m["serviceGroupDescription"]));
    }
  }


  virtual ~GetProblemPreviewResponseBodyDataProblemCoordinationGroups() = default;
};
class GetProblemPreviewResponseBodyDataProblemEffectionServices : public Darabonba::Model {
public:
  shared_ptr<string> serviceName{};
  shared_ptr<long> serviceId{};

  GetProblemPreviewResponseBodyDataProblemEffectionServices() {}

  explicit GetProblemPreviewResponseBodyDataProblemEffectionServices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (serviceId) {
      res["serviceId"] = boost::any(*serviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("serviceId") != m.end() && !m["serviceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["serviceId"]));
    }
  }


  virtual ~GetProblemPreviewResponseBodyDataProblemEffectionServices() = default;
};
class GetProblemPreviewResponseBodyDataProblem : public Darabonba::Model {
public:
  shared_ptr<string> problemName{};
  shared_ptr<string> problemStatus{};
  shared_ptr<string> problemLevel{};
  shared_ptr<string> discoverTime{};
  shared_ptr<string> recoveryTime{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> progressSummary{};
  shared_ptr<string> preliminaryReason{};
  shared_ptr<string> mainHandlerName{};
  shared_ptr<string> mainHandlerId{};
  shared_ptr<bool> isManual{};
  shared_ptr<bool> isUpgrade{};
  shared_ptr<long> problemId{};
  shared_ptr<long> relatedServiceId{};
  shared_ptr<string> createTime{};
  shared_ptr<vector<GetProblemPreviewResponseBodyDataProblemCoordinationGroups>> coordinationGroups{};
  shared_ptr<vector<GetProblemPreviewResponseBodyDataProblemEffectionServices>> effectionServices{};

  GetProblemPreviewResponseBodyDataProblem() {}

  explicit GetProblemPreviewResponseBodyDataProblem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (problemName) {
      res["problemName"] = boost::any(*problemName);
    }
    if (problemStatus) {
      res["problemStatus"] = boost::any(*problemStatus);
    }
    if (problemLevel) {
      res["problemLevel"] = boost::any(*problemLevel);
    }
    if (discoverTime) {
      res["discoverTime"] = boost::any(*discoverTime);
    }
    if (recoveryTime) {
      res["recoveryTime"] = boost::any(*recoveryTime);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (progressSummary) {
      res["progressSummary"] = boost::any(*progressSummary);
    }
    if (preliminaryReason) {
      res["preliminaryReason"] = boost::any(*preliminaryReason);
    }
    if (mainHandlerName) {
      res["mainHandlerName"] = boost::any(*mainHandlerName);
    }
    if (mainHandlerId) {
      res["mainHandlerId"] = boost::any(*mainHandlerId);
    }
    if (isManual) {
      res["isManual"] = boost::any(*isManual);
    }
    if (isUpgrade) {
      res["isUpgrade"] = boost::any(*isUpgrade);
    }
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (relatedServiceId) {
      res["relatedServiceId"] = boost::any(*relatedServiceId);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (coordinationGroups) {
      vector<boost::any> temp1;
      for(auto item1:*coordinationGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["coordinationGroups"] = boost::any(temp1);
    }
    if (effectionServices) {
      vector<boost::any> temp1;
      for(auto item1:*effectionServices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["effectionServices"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("problemName") != m.end() && !m["problemName"].empty()) {
      problemName = make_shared<string>(boost::any_cast<string>(m["problemName"]));
    }
    if (m.find("problemStatus") != m.end() && !m["problemStatus"].empty()) {
      problemStatus = make_shared<string>(boost::any_cast<string>(m["problemStatus"]));
    }
    if (m.find("problemLevel") != m.end() && !m["problemLevel"].empty()) {
      problemLevel = make_shared<string>(boost::any_cast<string>(m["problemLevel"]));
    }
    if (m.find("discoverTime") != m.end() && !m["discoverTime"].empty()) {
      discoverTime = make_shared<string>(boost::any_cast<string>(m["discoverTime"]));
    }
    if (m.find("recoveryTime") != m.end() && !m["recoveryTime"].empty()) {
      recoveryTime = make_shared<string>(boost::any_cast<string>(m["recoveryTime"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("progressSummary") != m.end() && !m["progressSummary"].empty()) {
      progressSummary = make_shared<string>(boost::any_cast<string>(m["progressSummary"]));
    }
    if (m.find("preliminaryReason") != m.end() && !m["preliminaryReason"].empty()) {
      preliminaryReason = make_shared<string>(boost::any_cast<string>(m["preliminaryReason"]));
    }
    if (m.find("mainHandlerName") != m.end() && !m["mainHandlerName"].empty()) {
      mainHandlerName = make_shared<string>(boost::any_cast<string>(m["mainHandlerName"]));
    }
    if (m.find("mainHandlerId") != m.end() && !m["mainHandlerId"].empty()) {
      mainHandlerId = make_shared<string>(boost::any_cast<string>(m["mainHandlerId"]));
    }
    if (m.find("isManual") != m.end() && !m["isManual"].empty()) {
      isManual = make_shared<bool>(boost::any_cast<bool>(m["isManual"]));
    }
    if (m.find("isUpgrade") != m.end() && !m["isUpgrade"].empty()) {
      isUpgrade = make_shared<bool>(boost::any_cast<bool>(m["isUpgrade"]));
    }
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
    if (m.find("relatedServiceId") != m.end() && !m["relatedServiceId"].empty()) {
      relatedServiceId = make_shared<long>(boost::any_cast<long>(m["relatedServiceId"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("coordinationGroups") != m.end() && !m["coordinationGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["coordinationGroups"].type()) {
        vector<GetProblemPreviewResponseBodyDataProblemCoordinationGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["coordinationGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProblemPreviewResponseBodyDataProblemCoordinationGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        coordinationGroups = make_shared<vector<GetProblemPreviewResponseBodyDataProblemCoordinationGroups>>(expect1);
      }
    }
    if (m.find("effectionServices") != m.end() && !m["effectionServices"].empty()) {
      if (typeid(vector<boost::any>) == m["effectionServices"].type()) {
        vector<GetProblemPreviewResponseBodyDataProblemEffectionServices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["effectionServices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProblemPreviewResponseBodyDataProblemEffectionServices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        effectionServices = make_shared<vector<GetProblemPreviewResponseBodyDataProblemEffectionServices>>(expect1);
      }
    }
  }


  virtual ~GetProblemPreviewResponseBodyDataProblem() = default;
};
class GetProblemPreviewResponseBodyDataVoiceUsers : public Darabonba::Model {
public:
  shared_ptr<string> username{};

  GetProblemPreviewResponseBodyDataVoiceUsers() {}

  explicit GetProblemPreviewResponseBodyDataVoiceUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (username) {
      res["username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
  }


  virtual ~GetProblemPreviewResponseBodyDataVoiceUsers() = default;
};
class GetProblemPreviewResponseBodyDataVoice : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<GetProblemPreviewResponseBodyDataVoiceUsers>> users{};

  GetProblemPreviewResponseBodyDataVoice() {}

  explicit GetProblemPreviewResponseBodyDataVoice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (users) {
      vector<boost::any> temp1;
      for(auto item1:*users){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["users"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("users") != m.end() && !m["users"].empty()) {
      if (typeid(vector<boost::any>) == m["users"].type()) {
        vector<GetProblemPreviewResponseBodyDataVoiceUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProblemPreviewResponseBodyDataVoiceUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<GetProblemPreviewResponseBodyDataVoiceUsers>>(expect1);
      }
    }
  }


  virtual ~GetProblemPreviewResponseBodyDataVoice() = default;
};
class GetProblemPreviewResponseBodyDataMailUsers : public Darabonba::Model {
public:
  shared_ptr<string> username{};

  GetProblemPreviewResponseBodyDataMailUsers() {}

  explicit GetProblemPreviewResponseBodyDataMailUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (username) {
      res["username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
  }


  virtual ~GetProblemPreviewResponseBodyDataMailUsers() = default;
};
class GetProblemPreviewResponseBodyDataMail : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<GetProblemPreviewResponseBodyDataMailUsers>> users{};

  GetProblemPreviewResponseBodyDataMail() {}

  explicit GetProblemPreviewResponseBodyDataMail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (users) {
      vector<boost::any> temp1;
      for(auto item1:*users){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["users"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("users") != m.end() && !m["users"].empty()) {
      if (typeid(vector<boost::any>) == m["users"].type()) {
        vector<GetProblemPreviewResponseBodyDataMailUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProblemPreviewResponseBodyDataMailUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<GetProblemPreviewResponseBodyDataMailUsers>>(expect1);
      }
    }
  }


  virtual ~GetProblemPreviewResponseBodyDataMail() = default;
};
class GetProblemPreviewResponseBodyDataSmsUsers : public Darabonba::Model {
public:
  shared_ptr<string> username{};

  GetProblemPreviewResponseBodyDataSmsUsers() {}

  explicit GetProblemPreviewResponseBodyDataSmsUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (username) {
      res["username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
  }


  virtual ~GetProblemPreviewResponseBodyDataSmsUsers() = default;
};
class GetProblemPreviewResponseBodyDataSms : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<GetProblemPreviewResponseBodyDataSmsUsers>> users{};

  GetProblemPreviewResponseBodyDataSms() {}

  explicit GetProblemPreviewResponseBodyDataSms(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (users) {
      vector<boost::any> temp1;
      for(auto item1:*users){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["users"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("users") != m.end() && !m["users"].empty()) {
      if (typeid(vector<boost::any>) == m["users"].type()) {
        vector<GetProblemPreviewResponseBodyDataSmsUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProblemPreviewResponseBodyDataSmsUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<GetProblemPreviewResponseBodyDataSmsUsers>>(expect1);
      }
    }
  }


  virtual ~GetProblemPreviewResponseBodyDataSms() = default;
};
class GetProblemPreviewResponseBodyDataWebhookServiceGroups : public Darabonba::Model {
public:
  shared_ptr<string> serviceName{};

  GetProblemPreviewResponseBodyDataWebhookServiceGroups() {}

  explicit GetProblemPreviewResponseBodyDataWebhookServiceGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
  }


  virtual ~GetProblemPreviewResponseBodyDataWebhookServiceGroups() = default;
};
class GetProblemPreviewResponseBodyDataWebhook : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<GetProblemPreviewResponseBodyDataWebhookServiceGroups>> serviceGroups{};

  GetProblemPreviewResponseBodyDataWebhook() {}

  explicit GetProblemPreviewResponseBodyDataWebhook(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (serviceGroups) {
      vector<boost::any> temp1;
      for(auto item1:*serviceGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceGroups"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("serviceGroups") != m.end() && !m["serviceGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceGroups"].type()) {
        vector<GetProblemPreviewResponseBodyDataWebhookServiceGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProblemPreviewResponseBodyDataWebhookServiceGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceGroups = make_shared<vector<GetProblemPreviewResponseBodyDataWebhookServiceGroups>>(expect1);
      }
    }
  }


  virtual ~GetProblemPreviewResponseBodyDataWebhook() = default;
};
class GetProblemPreviewResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetProblemPreviewResponseBodyDataProblem> problem{};
  shared_ptr<GetProblemPreviewResponseBodyDataVoice> voice{};
  shared_ptr<GetProblemPreviewResponseBodyDataMail> mail{};
  shared_ptr<GetProblemPreviewResponseBodyDataSms> sms{};
  shared_ptr<GetProblemPreviewResponseBodyDataWebhook> webhook{};
  shared_ptr<string> upBeforeData{};
  shared_ptr<string> upAfterData{};
  shared_ptr<string> deBeforeData{};
  shared_ptr<string> deAfterData{};

  GetProblemPreviewResponseBodyData() {}

  explicit GetProblemPreviewResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (problem) {
      res["problem"] = problem ? boost::any(problem->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (voice) {
      res["voice"] = voice ? boost::any(voice->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mail) {
      res["mail"] = mail ? boost::any(mail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sms) {
      res["sms"] = sms ? boost::any(sms->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (webhook) {
      res["webhook"] = webhook ? boost::any(webhook->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (upBeforeData) {
      res["upBeforeData"] = boost::any(*upBeforeData);
    }
    if (upAfterData) {
      res["upAfterData"] = boost::any(*upAfterData);
    }
    if (deBeforeData) {
      res["deBeforeData"] = boost::any(*deBeforeData);
    }
    if (deAfterData) {
      res["deAfterData"] = boost::any(*deAfterData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("problem") != m.end() && !m["problem"].empty()) {
      if (typeid(map<string, boost::any>) == m["problem"].type()) {
        GetProblemPreviewResponseBodyDataProblem model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["problem"]));
        problem = make_shared<GetProblemPreviewResponseBodyDataProblem>(model1);
      }
    }
    if (m.find("voice") != m.end() && !m["voice"].empty()) {
      if (typeid(map<string, boost::any>) == m["voice"].type()) {
        GetProblemPreviewResponseBodyDataVoice model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["voice"]));
        voice = make_shared<GetProblemPreviewResponseBodyDataVoice>(model1);
      }
    }
    if (m.find("mail") != m.end() && !m["mail"].empty()) {
      if (typeid(map<string, boost::any>) == m["mail"].type()) {
        GetProblemPreviewResponseBodyDataMail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["mail"]));
        mail = make_shared<GetProblemPreviewResponseBodyDataMail>(model1);
      }
    }
    if (m.find("sms") != m.end() && !m["sms"].empty()) {
      if (typeid(map<string, boost::any>) == m["sms"].type()) {
        GetProblemPreviewResponseBodyDataSms model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sms"]));
        sms = make_shared<GetProblemPreviewResponseBodyDataSms>(model1);
      }
    }
    if (m.find("webhook") != m.end() && !m["webhook"].empty()) {
      if (typeid(map<string, boost::any>) == m["webhook"].type()) {
        GetProblemPreviewResponseBodyDataWebhook model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["webhook"]));
        webhook = make_shared<GetProblemPreviewResponseBodyDataWebhook>(model1);
      }
    }
    if (m.find("upBeforeData") != m.end() && !m["upBeforeData"].empty()) {
      upBeforeData = make_shared<string>(boost::any_cast<string>(m["upBeforeData"]));
    }
    if (m.find("upAfterData") != m.end() && !m["upAfterData"].empty()) {
      upAfterData = make_shared<string>(boost::any_cast<string>(m["upAfterData"]));
    }
    if (m.find("deBeforeData") != m.end() && !m["deBeforeData"].empty()) {
      deBeforeData = make_shared<string>(boost::any_cast<string>(m["deBeforeData"]));
    }
    if (m.find("deAfterData") != m.end() && !m["deAfterData"].empty()) {
      deAfterData = make_shared<string>(boost::any_cast<string>(m["deAfterData"]));
    }
  }


  virtual ~GetProblemPreviewResponseBodyData() = default;
};
class GetProblemPreviewResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetProblemPreviewResponseBodyData> data{};

  GetProblemPreviewResponseBody() {}

  explicit GetProblemPreviewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetProblemPreviewResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetProblemPreviewResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetProblemPreviewResponseBody() = default;
};
class GetProblemPreviewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetProblemPreviewResponseBody> body{};

  GetProblemPreviewResponse() {}

  explicit GetProblemPreviewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetProblemPreviewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProblemPreviewResponseBody>(model1);
      }
    }
  }


  virtual ~GetProblemPreviewResponse() = default;
};
class UpdateRouteRuleRequestRouteChildRulesConditions : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};
  shared_ptr<string> operationSymbol{};

  UpdateRouteRuleRequestRouteChildRulesConditions() {}

  explicit UpdateRouteRuleRequestRouteChildRulesConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    if (operationSymbol) {
      res["operationSymbol"] = boost::any(*operationSymbol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
    if (m.find("operationSymbol") != m.end() && !m["operationSymbol"].empty()) {
      operationSymbol = make_shared<string>(boost::any_cast<string>(m["operationSymbol"]));
    }
  }


  virtual ~UpdateRouteRuleRequestRouteChildRulesConditions() = default;
};
class UpdateRouteRuleRequestRouteChildRules : public Darabonba::Model {
public:
  shared_ptr<long> childRouteRuleId{};
  shared_ptr<vector<UpdateRouteRuleRequestRouteChildRulesConditions>> conditions{};
  shared_ptr<long> monitorSourceId{};
  shared_ptr<bool> isValidChildRule{};

  UpdateRouteRuleRequestRouteChildRules() {}

  explicit UpdateRouteRuleRequestRouteChildRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (childRouteRuleId) {
      res["childRouteRuleId"] = boost::any(*childRouteRuleId);
    }
    if (conditions) {
      vector<boost::any> temp1;
      for(auto item1:*conditions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["conditions"] = boost::any(temp1);
    }
    if (monitorSourceId) {
      res["monitorSourceId"] = boost::any(*monitorSourceId);
    }
    if (isValidChildRule) {
      res["isValidChildRule"] = boost::any(*isValidChildRule);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("childRouteRuleId") != m.end() && !m["childRouteRuleId"].empty()) {
      childRouteRuleId = make_shared<long>(boost::any_cast<long>(m["childRouteRuleId"]));
    }
    if (m.find("conditions") != m.end() && !m["conditions"].empty()) {
      if (typeid(vector<boost::any>) == m["conditions"].type()) {
        vector<UpdateRouteRuleRequestRouteChildRulesConditions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["conditions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRouteRuleRequestRouteChildRulesConditions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conditions = make_shared<vector<UpdateRouteRuleRequestRouteChildRulesConditions>>(expect1);
      }
    }
    if (m.find("monitorSourceId") != m.end() && !m["monitorSourceId"].empty()) {
      monitorSourceId = make_shared<long>(boost::any_cast<long>(m["monitorSourceId"]));
    }
    if (m.find("isValidChildRule") != m.end() && !m["isValidChildRule"].empty()) {
      isValidChildRule = make_shared<bool>(boost::any_cast<bool>(m["isValidChildRule"]));
    }
  }


  virtual ~UpdateRouteRuleRequestRouteChildRules() = default;
};
class UpdateRouteRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> ruleName{};
  shared_ptr<long> relatedServiceId{};
  shared_ptr<long> routeRuleId{};
  shared_ptr<string> routeType{};
  shared_ptr<string> incidentLevel{};
  shared_ptr<long> assignObjectId{};
  shared_ptr<string> assignObjectType{};
  shared_ptr<string> effection{};
  shared_ptr<long> timeWindow{};
  shared_ptr<string> timeWindowUnit{};
  shared_ptr<long> matchCount{};
  shared_ptr<vector<UpdateRouteRuleRequestRouteChildRules>> routeChildRules{};
  shared_ptr<vector<string>> notifyChannels{};
  shared_ptr<string> clientToken{};

  UpdateRouteRuleRequest() {}

  explicit UpdateRouteRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleName) {
      res["ruleName"] = boost::any(*ruleName);
    }
    if (relatedServiceId) {
      res["relatedServiceId"] = boost::any(*relatedServiceId);
    }
    if (routeRuleId) {
      res["routeRuleId"] = boost::any(*routeRuleId);
    }
    if (routeType) {
      res["routeType"] = boost::any(*routeType);
    }
    if (incidentLevel) {
      res["incidentLevel"] = boost::any(*incidentLevel);
    }
    if (assignObjectId) {
      res["assignObjectId"] = boost::any(*assignObjectId);
    }
    if (assignObjectType) {
      res["assignObjectType"] = boost::any(*assignObjectType);
    }
    if (effection) {
      res["effection"] = boost::any(*effection);
    }
    if (timeWindow) {
      res["timeWindow"] = boost::any(*timeWindow);
    }
    if (timeWindowUnit) {
      res["timeWindowUnit"] = boost::any(*timeWindowUnit);
    }
    if (matchCount) {
      res["matchCount"] = boost::any(*matchCount);
    }
    if (routeChildRules) {
      vector<boost::any> temp1;
      for(auto item1:*routeChildRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["routeChildRules"] = boost::any(temp1);
    }
    if (notifyChannels) {
      res["notifyChannels"] = boost::any(*notifyChannels);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ruleName") != m.end() && !m["ruleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["ruleName"]));
    }
    if (m.find("relatedServiceId") != m.end() && !m["relatedServiceId"].empty()) {
      relatedServiceId = make_shared<long>(boost::any_cast<long>(m["relatedServiceId"]));
    }
    if (m.find("routeRuleId") != m.end() && !m["routeRuleId"].empty()) {
      routeRuleId = make_shared<long>(boost::any_cast<long>(m["routeRuleId"]));
    }
    if (m.find("routeType") != m.end() && !m["routeType"].empty()) {
      routeType = make_shared<string>(boost::any_cast<string>(m["routeType"]));
    }
    if (m.find("incidentLevel") != m.end() && !m["incidentLevel"].empty()) {
      incidentLevel = make_shared<string>(boost::any_cast<string>(m["incidentLevel"]));
    }
    if (m.find("assignObjectId") != m.end() && !m["assignObjectId"].empty()) {
      assignObjectId = make_shared<long>(boost::any_cast<long>(m["assignObjectId"]));
    }
    if (m.find("assignObjectType") != m.end() && !m["assignObjectType"].empty()) {
      assignObjectType = make_shared<string>(boost::any_cast<string>(m["assignObjectType"]));
    }
    if (m.find("effection") != m.end() && !m["effection"].empty()) {
      effection = make_shared<string>(boost::any_cast<string>(m["effection"]));
    }
    if (m.find("timeWindow") != m.end() && !m["timeWindow"].empty()) {
      timeWindow = make_shared<long>(boost::any_cast<long>(m["timeWindow"]));
    }
    if (m.find("timeWindowUnit") != m.end() && !m["timeWindowUnit"].empty()) {
      timeWindowUnit = make_shared<string>(boost::any_cast<string>(m["timeWindowUnit"]));
    }
    if (m.find("matchCount") != m.end() && !m["matchCount"].empty()) {
      matchCount = make_shared<long>(boost::any_cast<long>(m["matchCount"]));
    }
    if (m.find("routeChildRules") != m.end() && !m["routeChildRules"].empty()) {
      if (typeid(vector<boost::any>) == m["routeChildRules"].type()) {
        vector<UpdateRouteRuleRequestRouteChildRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["routeChildRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRouteRuleRequestRouteChildRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        routeChildRules = make_shared<vector<UpdateRouteRuleRequestRouteChildRules>>(expect1);
      }
    }
    if (m.find("notifyChannels") != m.end() && !m["notifyChannels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["notifyChannels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["notifyChannels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      notifyChannels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~UpdateRouteRuleRequest() = default;
};
class UpdateRouteRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> data{};

  UpdateRouteRuleResponseBody() {}

  explicit UpdateRouteRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["data"]));
    }
  }


  virtual ~UpdateRouteRuleResponseBody() = default;
};
class UpdateRouteRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateRouteRuleResponseBody> body{};

  UpdateRouteRuleResponse() {}

  explicit UpdateRouteRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateRouteRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRouteRuleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRouteRuleResponse() = default;
};
class EnableSubscriptionRequest : public Darabonba::Model {
public:
  shared_ptr<long> subscriptionId{};

  EnableSubscriptionRequest() {}

  explicit EnableSubscriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subscriptionId) {
      res["subscriptionId"] = boost::any(*subscriptionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("subscriptionId") != m.end() && !m["subscriptionId"].empty()) {
      subscriptionId = make_shared<long>(boost::any_cast<long>(m["subscriptionId"]));
    }
  }


  virtual ~EnableSubscriptionRequest() = default;
};
class EnableSubscriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableSubscriptionResponseBody() {}

  explicit EnableSubscriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableSubscriptionResponseBody() = default;
};
class EnableSubscriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableSubscriptionResponseBody> body{};

  EnableSubscriptionResponse() {}

  explicit EnableSubscriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EnableSubscriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableSubscriptionResponseBody>(model1);
      }
    }
  }


  virtual ~EnableSubscriptionResponse() = default;
};
class UpdateSubscriptionRequestScopeObjectList : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<long> scopeObjectId{};

  UpdateSubscriptionRequestScopeObjectList() {}

  explicit UpdateSubscriptionRequestScopeObjectList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (scopeObjectId) {
      res["scopeObjectId"] = boost::any(*scopeObjectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("scopeObjectId") != m.end() && !m["scopeObjectId"].empty()) {
      scopeObjectId = make_shared<long>(boost::any_cast<long>(m["scopeObjectId"]));
    }
  }


  virtual ~UpdateSubscriptionRequestScopeObjectList() = default;
};
class UpdateSubscriptionRequestNotifyObjectList : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<long> notifyObjectId{};

  UpdateSubscriptionRequestNotifyObjectList() {}

  explicit UpdateSubscriptionRequestNotifyObjectList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (notifyObjectId) {
      res["notifyObjectId"] = boost::any(*notifyObjectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("notifyObjectId") != m.end() && !m["notifyObjectId"].empty()) {
      notifyObjectId = make_shared<long>(boost::any_cast<long>(m["notifyObjectId"]));
    }
  }


  virtual ~UpdateSubscriptionRequestNotifyObjectList() = default;
};
class UpdateSubscriptionRequestNotifyStrategyListStrategiesConditions : public Darabonba::Model {
public:
  shared_ptr<string> level{};
  shared_ptr<string> effection{};
  shared_ptr<string> problemNotifyType{};
  shared_ptr<string> action{};

  UpdateSubscriptionRequestNotifyStrategyListStrategiesConditions() {}

  explicit UpdateSubscriptionRequestNotifyStrategyListStrategiesConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (level) {
      res["level"] = boost::any(*level);
    }
    if (effection) {
      res["effection"] = boost::any(*effection);
    }
    if (problemNotifyType) {
      res["problemNotifyType"] = boost::any(*problemNotifyType);
    }
    if (action) {
      res["action"] = boost::any(*action);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["level"]));
    }
    if (m.find("effection") != m.end() && !m["effection"].empty()) {
      effection = make_shared<string>(boost::any_cast<string>(m["effection"]));
    }
    if (m.find("problemNotifyType") != m.end() && !m["problemNotifyType"].empty()) {
      problemNotifyType = make_shared<string>(boost::any_cast<string>(m["problemNotifyType"]));
    }
    if (m.find("action") != m.end() && !m["action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["action"]));
    }
  }


  virtual ~UpdateSubscriptionRequestNotifyStrategyListStrategiesConditions() = default;
};
class UpdateSubscriptionRequestNotifyStrategyListStrategies : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> channels{};
  shared_ptr<vector<UpdateSubscriptionRequestNotifyStrategyListStrategiesConditions>> conditions{};

  UpdateSubscriptionRequestNotifyStrategyListStrategies() {}

  explicit UpdateSubscriptionRequestNotifyStrategyListStrategies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (channels) {
      res["channels"] = boost::any(*channels);
    }
    if (conditions) {
      vector<boost::any> temp1;
      for(auto item1:*conditions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["conditions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("channels") != m.end() && !m["channels"].empty()) {
      channels = make_shared<string>(boost::any_cast<string>(m["channels"]));
    }
    if (m.find("conditions") != m.end() && !m["conditions"].empty()) {
      if (typeid(vector<boost::any>) == m["conditions"].type()) {
        vector<UpdateSubscriptionRequestNotifyStrategyListStrategiesConditions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["conditions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateSubscriptionRequestNotifyStrategyListStrategiesConditions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conditions = make_shared<vector<UpdateSubscriptionRequestNotifyStrategyListStrategiesConditions>>(expect1);
      }
    }
  }


  virtual ~UpdateSubscriptionRequestNotifyStrategyListStrategies() = default;
};
class UpdateSubscriptionRequestNotifyStrategyList : public Darabonba::Model {
public:
  shared_ptr<long> instanceType{};
  shared_ptr<vector<UpdateSubscriptionRequestNotifyStrategyListStrategies>> strategies{};

  UpdateSubscriptionRequestNotifyStrategyList() {}

  explicit UpdateSubscriptionRequestNotifyStrategyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["instanceType"] = boost::any(*instanceType);
    }
    if (strategies) {
      vector<boost::any> temp1;
      for(auto item1:*strategies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["strategies"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceType") != m.end() && !m["instanceType"].empty()) {
      instanceType = make_shared<long>(boost::any_cast<long>(m["instanceType"]));
    }
    if (m.find("strategies") != m.end() && !m["strategies"].empty()) {
      if (typeid(vector<boost::any>) == m["strategies"].type()) {
        vector<UpdateSubscriptionRequestNotifyStrategyListStrategies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["strategies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateSubscriptionRequestNotifyStrategyListStrategies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        strategies = make_shared<vector<UpdateSubscriptionRequestNotifyStrategyListStrategies>>(expect1);
      }
    }
  }


  virtual ~UpdateSubscriptionRequestNotifyStrategyList() = default;
};
class UpdateSubscriptionRequest : public Darabonba::Model {
public:
  shared_ptr<long> subscriptionId{};
  shared_ptr<string> subscriptionTitle{};
  shared_ptr<string> scope{};
  shared_ptr<string> notifyObjectType{};
  shared_ptr<string> expiredType{};
  shared_ptr<vector<UpdateSubscriptionRequestScopeObjectList>> scopeObjectList{};
  shared_ptr<vector<UpdateSubscriptionRequestNotifyObjectList>> notifyObjectList{};
  shared_ptr<vector<UpdateSubscriptionRequestNotifyStrategyList>> notifyStrategyList{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  UpdateSubscriptionRequest() {}

  explicit UpdateSubscriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subscriptionId) {
      res["subscriptionId"] = boost::any(*subscriptionId);
    }
    if (subscriptionTitle) {
      res["subscriptionTitle"] = boost::any(*subscriptionTitle);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (notifyObjectType) {
      res["notifyObjectType"] = boost::any(*notifyObjectType);
    }
    if (expiredType) {
      res["expiredType"] = boost::any(*expiredType);
    }
    if (scopeObjectList) {
      vector<boost::any> temp1;
      for(auto item1:*scopeObjectList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["scopeObjectList"] = boost::any(temp1);
    }
    if (notifyObjectList) {
      vector<boost::any> temp1;
      for(auto item1:*notifyObjectList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["notifyObjectList"] = boost::any(temp1);
    }
    if (notifyStrategyList) {
      vector<boost::any> temp1;
      for(auto item1:*notifyStrategyList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["notifyStrategyList"] = boost::any(temp1);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("subscriptionId") != m.end() && !m["subscriptionId"].empty()) {
      subscriptionId = make_shared<long>(boost::any_cast<long>(m["subscriptionId"]));
    }
    if (m.find("subscriptionTitle") != m.end() && !m["subscriptionTitle"].empty()) {
      subscriptionTitle = make_shared<string>(boost::any_cast<string>(m["subscriptionTitle"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
    if (m.find("notifyObjectType") != m.end() && !m["notifyObjectType"].empty()) {
      notifyObjectType = make_shared<string>(boost::any_cast<string>(m["notifyObjectType"]));
    }
    if (m.find("expiredType") != m.end() && !m["expiredType"].empty()) {
      expiredType = make_shared<string>(boost::any_cast<string>(m["expiredType"]));
    }
    if (m.find("scopeObjectList") != m.end() && !m["scopeObjectList"].empty()) {
      if (typeid(vector<boost::any>) == m["scopeObjectList"].type()) {
        vector<UpdateSubscriptionRequestScopeObjectList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["scopeObjectList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateSubscriptionRequestScopeObjectList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scopeObjectList = make_shared<vector<UpdateSubscriptionRequestScopeObjectList>>(expect1);
      }
    }
    if (m.find("notifyObjectList") != m.end() && !m["notifyObjectList"].empty()) {
      if (typeid(vector<boost::any>) == m["notifyObjectList"].type()) {
        vector<UpdateSubscriptionRequestNotifyObjectList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["notifyObjectList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateSubscriptionRequestNotifyObjectList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        notifyObjectList = make_shared<vector<UpdateSubscriptionRequestNotifyObjectList>>(expect1);
      }
    }
    if (m.find("notifyStrategyList") != m.end() && !m["notifyStrategyList"].empty()) {
      if (typeid(vector<boost::any>) == m["notifyStrategyList"].type()) {
        vector<UpdateSubscriptionRequestNotifyStrategyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["notifyStrategyList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateSubscriptionRequestNotifyStrategyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        notifyStrategyList = make_shared<vector<UpdateSubscriptionRequestNotifyStrategyList>>(expect1);
      }
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
  }


  virtual ~UpdateSubscriptionRequest() = default;
};
class UpdateSubscriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateSubscriptionResponseBody() {}

  explicit UpdateSubscriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateSubscriptionResponseBody() = default;
};
class UpdateSubscriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateSubscriptionResponseBody> body{};

  UpdateSubscriptionResponse() {}

  explicit UpdateSubscriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateSubscriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSubscriptionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSubscriptionResponse() = default;
};
class GetIncidentStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};

  GetIncidentStatisticsRequest() {}

  explicit GetIncidentStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~GetIncidentStatisticsRequest() = default;
};
class GetIncidentStatisticsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> myResponse{};
  shared_ptr<long> myFinish{};
  shared_ptr<long> allResponse{};
  shared_ptr<long> allFinish{};

  GetIncidentStatisticsResponseBodyData() {}

  explicit GetIncidentStatisticsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (myResponse) {
      res["myResponse"] = boost::any(*myResponse);
    }
    if (myFinish) {
      res["myFinish"] = boost::any(*myFinish);
    }
    if (allResponse) {
      res["allResponse"] = boost::any(*allResponse);
    }
    if (allFinish) {
      res["allFinish"] = boost::any(*allFinish);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("myResponse") != m.end() && !m["myResponse"].empty()) {
      myResponse = make_shared<long>(boost::any_cast<long>(m["myResponse"]));
    }
    if (m.find("myFinish") != m.end() && !m["myFinish"].empty()) {
      myFinish = make_shared<long>(boost::any_cast<long>(m["myFinish"]));
    }
    if (m.find("allResponse") != m.end() && !m["allResponse"].empty()) {
      allResponse = make_shared<long>(boost::any_cast<long>(m["allResponse"]));
    }
    if (m.find("allFinish") != m.end() && !m["allFinish"].empty()) {
      allFinish = make_shared<long>(boost::any_cast<long>(m["allFinish"]));
    }
  }


  virtual ~GetIncidentStatisticsResponseBodyData() = default;
};
class GetIncidentStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetIncidentStatisticsResponseBodyData> data{};

  GetIncidentStatisticsResponseBody() {}

  explicit GetIncidentStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetIncidentStatisticsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetIncidentStatisticsResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetIncidentStatisticsResponseBody() = default;
};
class GetIncidentStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetIncidentStatisticsResponseBody> body{};

  GetIncidentStatisticsResponse() {}

  explicit GetIncidentStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetIncidentStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetIncidentStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~GetIncidentStatisticsResponse() = default;
};
class ListProblemOperationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListProblemOperationsRequest() {}

  explicit ListProblemOperationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListProblemOperationsRequest() = default;
};
class ListProblemOperationsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> title{};
  shared_ptr<string> description{};
  shared_ptr<string> relatedServiceName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> action{};
  shared_ptr<long> problemId{};
  shared_ptr<string> problemName{};

  ListProblemOperationsResponseBodyData() {}

  explicit ListProblemOperationsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (relatedServiceName) {
      res["relatedServiceName"] = boost::any(*relatedServiceName);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (action) {
      res["action"] = boost::any(*action);
    }
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (problemName) {
      res["problemName"] = boost::any(*problemName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("relatedServiceName") != m.end() && !m["relatedServiceName"].empty()) {
      relatedServiceName = make_shared<string>(boost::any_cast<string>(m["relatedServiceName"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("action") != m.end() && !m["action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["action"]));
    }
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
    if (m.find("problemName") != m.end() && !m["problemName"].empty()) {
      problemName = make_shared<string>(boost::any_cast<string>(m["problemName"]));
    }
  }


  virtual ~ListProblemOperationsResponseBodyData() = default;
};
class ListProblemOperationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListProblemOperationsResponseBodyData>> data{};

  ListProblemOperationsResponseBody() {}

  explicit ListProblemOperationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListProblemOperationsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProblemOperationsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListProblemOperationsResponseBodyData>>(expect1);
      }
    }
  }


  virtual ~ListProblemOperationsResponseBody() = default;
};
class ListProblemOperationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListProblemOperationsResponseBody> body{};

  ListProblemOperationsResponse() {}

  explicit ListProblemOperationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListProblemOperationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProblemOperationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProblemOperationsResponse() = default;
};
class ListSourceEventsRequest : public Darabonba::Model {
public:
  shared_ptr<long> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> startRowKey{};
  shared_ptr<string> stopRowKey{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> clientToken{};
  shared_ptr<long> pageNumber{};

  ListSourceEventsRequest() {}

  explicit ListSourceEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["instanceType"] = boost::any(*instanceType);
    }
    if (startRowKey) {
      res["startRowKey"] = boost::any(*startRowKey);
    }
    if (stopRowKey) {
      res["stopRowKey"] = boost::any(*stopRowKey);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<long>(boost::any_cast<long>(m["instanceId"]));
    }
    if (m.find("instanceType") != m.end() && !m["instanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["instanceType"]));
    }
    if (m.find("startRowKey") != m.end() && !m["startRowKey"].empty()) {
      startRowKey = make_shared<string>(boost::any_cast<string>(m["startRowKey"]));
    }
    if (m.find("stopRowKey") != m.end() && !m["stopRowKey"].empty()) {
      stopRowKey = make_shared<string>(boost::any_cast<string>(m["stopRowKey"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
  }


  virtual ~ListSourceEventsRequest() = default;
};
class ListSourceEventsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> routeRuleId{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> instanceId{};
  shared_ptr<long> monitorSourceId{};
  shared_ptr<string> monitorSourceName{};
  shared_ptr<string> eventTime{};
  shared_ptr<long> tenantRamId{};
  shared_ptr<string> eventJson{};

  ListSourceEventsResponseBodyData() {}

  explicit ListSourceEventsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (routeRuleId) {
      res["routeRuleId"] = boost::any(*routeRuleId);
    }
    if (instanceType) {
      res["instanceType"] = boost::any(*instanceType);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (monitorSourceId) {
      res["monitorSourceId"] = boost::any(*monitorSourceId);
    }
    if (monitorSourceName) {
      res["monitorSourceName"] = boost::any(*monitorSourceName);
    }
    if (eventTime) {
      res["eventTime"] = boost::any(*eventTime);
    }
    if (tenantRamId) {
      res["tenantRamId"] = boost::any(*tenantRamId);
    }
    if (eventJson) {
      res["eventJson"] = boost::any(*eventJson);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("routeRuleId") != m.end() && !m["routeRuleId"].empty()) {
      routeRuleId = make_shared<long>(boost::any_cast<long>(m["routeRuleId"]));
    }
    if (m.find("instanceType") != m.end() && !m["instanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["instanceType"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<long>(boost::any_cast<long>(m["instanceId"]));
    }
    if (m.find("monitorSourceId") != m.end() && !m["monitorSourceId"].empty()) {
      monitorSourceId = make_shared<long>(boost::any_cast<long>(m["monitorSourceId"]));
    }
    if (m.find("monitorSourceName") != m.end() && !m["monitorSourceName"].empty()) {
      monitorSourceName = make_shared<string>(boost::any_cast<string>(m["monitorSourceName"]));
    }
    if (m.find("eventTime") != m.end() && !m["eventTime"].empty()) {
      eventTime = make_shared<string>(boost::any_cast<string>(m["eventTime"]));
    }
    if (m.find("tenantRamId") != m.end() && !m["tenantRamId"].empty()) {
      tenantRamId = make_shared<long>(boost::any_cast<long>(m["tenantRamId"]));
    }
    if (m.find("eventJson") != m.end() && !m["eventJson"].empty()) {
      eventJson = make_shared<string>(boost::any_cast<string>(m["eventJson"]));
    }
  }


  virtual ~ListSourceEventsResponseBodyData() = default;
};
class ListSourceEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListSourceEventsResponseBodyData>> data{};
  shared_ptr<string> lastRowKey{};
  shared_ptr<string> firstRowKey{};

  ListSourceEventsResponseBody() {}

  explicit ListSourceEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (lastRowKey) {
      res["lastRowKey"] = boost::any(*lastRowKey);
    }
    if (firstRowKey) {
      res["firstRowKey"] = boost::any(*firstRowKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListSourceEventsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSourceEventsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListSourceEventsResponseBodyData>>(expect1);
      }
    }
    if (m.find("lastRowKey") != m.end() && !m["lastRowKey"].empty()) {
      lastRowKey = make_shared<string>(boost::any_cast<string>(m["lastRowKey"]));
    }
    if (m.find("firstRowKey") != m.end() && !m["firstRowKey"].empty()) {
      firstRowKey = make_shared<string>(boost::any_cast<string>(m["firstRowKey"]));
    }
  }


  virtual ~ListSourceEventsResponseBody() = default;
};
class ListSourceEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSourceEventsResponseBody> body{};

  ListSourceEventsResponse() {}

  explicit ListSourceEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSourceEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSourceEventsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSourceEventsResponse() = default;
};
class GetServiceGroupSpecialPersonSchedulingRequest : public Darabonba::Model {
public:
  shared_ptr<long> userId{};
  shared_ptr<long> serviceGroupId{};
  shared_ptr<string> clientToken{};

  GetServiceGroupSpecialPersonSchedulingRequest() {}

  explicit GetServiceGroupSpecialPersonSchedulingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    if (serviceGroupId) {
      res["serviceGroupId"] = boost::any(*serviceGroupId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["userId"]));
    }
    if (m.find("serviceGroupId") != m.end() && !m["serviceGroupId"].empty()) {
      serviceGroupId = make_shared<long>(boost::any_cast<long>(m["serviceGroupId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~GetServiceGroupSpecialPersonSchedulingRequest() = default;
};
class GetServiceGroupSpecialPersonSchedulingResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> schedulingStartTime{};
  shared_ptr<string> schedulingEndTime{};
  shared_ptr<string> schedulingDate{};
  shared_ptr<long> serviceGroupId{};
  shared_ptr<string> serviceGroupName{};
  shared_ptr<long> schedulingUserId{};

  GetServiceGroupSpecialPersonSchedulingResponseBodyData() {}

  explicit GetServiceGroupSpecialPersonSchedulingResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schedulingStartTime) {
      res["schedulingStartTime"] = boost::any(*schedulingStartTime);
    }
    if (schedulingEndTime) {
      res["schedulingEndTime"] = boost::any(*schedulingEndTime);
    }
    if (schedulingDate) {
      res["schedulingDate"] = boost::any(*schedulingDate);
    }
    if (serviceGroupId) {
      res["serviceGroupId"] = boost::any(*serviceGroupId);
    }
    if (serviceGroupName) {
      res["serviceGroupName"] = boost::any(*serviceGroupName);
    }
    if (schedulingUserId) {
      res["schedulingUserId"] = boost::any(*schedulingUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("schedulingStartTime") != m.end() && !m["schedulingStartTime"].empty()) {
      schedulingStartTime = make_shared<string>(boost::any_cast<string>(m["schedulingStartTime"]));
    }
    if (m.find("schedulingEndTime") != m.end() && !m["schedulingEndTime"].empty()) {
      schedulingEndTime = make_shared<string>(boost::any_cast<string>(m["schedulingEndTime"]));
    }
    if (m.find("schedulingDate") != m.end() && !m["schedulingDate"].empty()) {
      schedulingDate = make_shared<string>(boost::any_cast<string>(m["schedulingDate"]));
    }
    if (m.find("serviceGroupId") != m.end() && !m["serviceGroupId"].empty()) {
      serviceGroupId = make_shared<long>(boost::any_cast<long>(m["serviceGroupId"]));
    }
    if (m.find("serviceGroupName") != m.end() && !m["serviceGroupName"].empty()) {
      serviceGroupName = make_shared<string>(boost::any_cast<string>(m["serviceGroupName"]));
    }
    if (m.find("schedulingUserId") != m.end() && !m["schedulingUserId"].empty()) {
      schedulingUserId = make_shared<long>(boost::any_cast<long>(m["schedulingUserId"]));
    }
  }


  virtual ~GetServiceGroupSpecialPersonSchedulingResponseBodyData() = default;
};
class GetServiceGroupSpecialPersonSchedulingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetServiceGroupSpecialPersonSchedulingResponseBodyData>> data{};

  GetServiceGroupSpecialPersonSchedulingResponseBody() {}

  explicit GetServiceGroupSpecialPersonSchedulingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<GetServiceGroupSpecialPersonSchedulingResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceGroupSpecialPersonSchedulingResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetServiceGroupSpecialPersonSchedulingResponseBodyData>>(expect1);
      }
    }
  }


  virtual ~GetServiceGroupSpecialPersonSchedulingResponseBody() = default;
};
class GetServiceGroupSpecialPersonSchedulingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetServiceGroupSpecialPersonSchedulingResponseBody> body{};

  GetServiceGroupSpecialPersonSchedulingResponse() {}

  explicit GetServiceGroupSpecialPersonSchedulingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetServiceGroupSpecialPersonSchedulingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceGroupSpecialPersonSchedulingResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceGroupSpecialPersonSchedulingResponse() = default;
};
class GetUserRequest : public Darabonba::Model {
public:
  shared_ptr<long> userId{};
  shared_ptr<string> clientToken{};

  GetUserRequest() {}

  explicit GetUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["userId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~GetUserRequest() = default;
};
class GetUserResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> userId{};
  shared_ptr<string> ramId{};
  shared_ptr<bool> isEditableUser{};
  shared_ptr<string> accountType{};
  shared_ptr<string> email{};
  shared_ptr<string> username{};
  shared_ptr<string> phone{};

  GetUserResponseBodyData() {}

  explicit GetUserResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    if (ramId) {
      res["ramId"] = boost::any(*ramId);
    }
    if (isEditableUser) {
      res["isEditableUser"] = boost::any(*isEditableUser);
    }
    if (accountType) {
      res["accountType"] = boost::any(*accountType);
    }
    if (email) {
      res["email"] = boost::any(*email);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    if (phone) {
      res["phone"] = boost::any(*phone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["userId"]));
    }
    if (m.find("ramId") != m.end() && !m["ramId"].empty()) {
      ramId = make_shared<string>(boost::any_cast<string>(m["ramId"]));
    }
    if (m.find("isEditableUser") != m.end() && !m["isEditableUser"].empty()) {
      isEditableUser = make_shared<bool>(boost::any_cast<bool>(m["isEditableUser"]));
    }
    if (m.find("accountType") != m.end() && !m["accountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["accountType"]));
    }
    if (m.find("email") != m.end() && !m["email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["email"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
    if (m.find("phone") != m.end() && !m["phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["phone"]));
    }
  }


  virtual ~GetUserResponseBodyData() = default;
};
class GetUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetUserResponseBodyData> data{};

  GetUserResponseBody() {}

  explicit GetUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetUserResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetUserResponseBodyData>(model1);
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
class AddProblemServiceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> problemId{};
  shared_ptr<vector<long>> serviceGroupIds{};

  AddProblemServiceGroupRequest() {}

  explicit AddProblemServiceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (serviceGroupIds) {
      res["serviceGroupIds"] = boost::any(*serviceGroupIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
    if (m.find("serviceGroupIds") != m.end() && !m["serviceGroupIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["serviceGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["serviceGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      serviceGroupIds = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~AddProblemServiceGroupRequest() = default;
};
class AddProblemServiceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddProblemServiceGroupResponseBody() {}

  explicit AddProblemServiceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddProblemServiceGroupResponseBody() = default;
};
class AddProblemServiceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddProblemServiceGroupResponseBody> body{};

  AddProblemServiceGroupResponse() {}

  explicit AddProblemServiceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddProblemServiceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddProblemServiceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~AddProblemServiceGroupResponse() = default;
};
class ReplayProblemRequest : public Darabonba::Model {
public:
  shared_ptr<long> problemId{};
  shared_ptr<long> replayDutyUserId{};
  shared_ptr<string> clientToken{};

  ReplayProblemRequest() {}

  explicit ReplayProblemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (replayDutyUserId) {
      res["replayDutyUserId"] = boost::any(*replayDutyUserId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
    if (m.find("replayDutyUserId") != m.end() && !m["replayDutyUserId"].empty()) {
      replayDutyUserId = make_shared<long>(boost::any_cast<long>(m["replayDutyUserId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~ReplayProblemRequest() = default;
};
class ReplayProblemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReplayProblemResponseBody() {}

  explicit ReplayProblemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReplayProblemResponseBody() = default;
};
class ReplayProblemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ReplayProblemResponseBody> body{};

  ReplayProblemResponse() {}

  explicit ReplayProblemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ReplayProblemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReplayProblemResponseBody>(model1);
      }
    }
  }


  virtual ~ReplayProblemResponse() = default;
};
class GetProblemRequest : public Darabonba::Model {
public:
  shared_ptr<long> problemId{};
  shared_ptr<string> clientToken{};

  GetProblemRequest() {}

  explicit GetProblemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~GetProblemRequest() = default;
};
class GetProblemResponseBodyDataHandingProblemOperateLogs : public Darabonba::Model {
public:
  shared_ptr<string> operator_{};
  shared_ptr<string> actionName{};
  shared_ptr<string> actionTime{};

  GetProblemResponseBodyDataHandingProblemOperateLogs() {}

  explicit GetProblemResponseBodyDataHandingProblemOperateLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operator_) {
      res["operator"] = boost::any(*operator_);
    }
    if (actionName) {
      res["actionName"] = boost::any(*actionName);
    }
    if (actionTime) {
      res["actionTime"] = boost::any(*actionTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("operator") != m.end() && !m["operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["operator"]));
    }
    if (m.find("actionName") != m.end() && !m["actionName"].empty()) {
      actionName = make_shared<string>(boost::any_cast<string>(m["actionName"]));
    }
    if (m.find("actionTime") != m.end() && !m["actionTime"].empty()) {
      actionTime = make_shared<string>(boost::any_cast<string>(m["actionTime"]));
    }
  }


  virtual ~GetProblemResponseBodyDataHandingProblemOperateLogs() = default;
};
class GetProblemResponseBodyDataRestoredProblemOperateLogs : public Darabonba::Model {
public:
  shared_ptr<string> operator_{};
  shared_ptr<string> actionName{};
  shared_ptr<string> actionTime{};

  GetProblemResponseBodyDataRestoredProblemOperateLogs() {}

  explicit GetProblemResponseBodyDataRestoredProblemOperateLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operator_) {
      res["operator"] = boost::any(*operator_);
    }
    if (actionName) {
      res["actionName"] = boost::any(*actionName);
    }
    if (actionTime) {
      res["actionTime"] = boost::any(*actionTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("operator") != m.end() && !m["operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["operator"]));
    }
    if (m.find("actionName") != m.end() && !m["actionName"].empty()) {
      actionName = make_shared<string>(boost::any_cast<string>(m["actionName"]));
    }
    if (m.find("actionTime") != m.end() && !m["actionTime"].empty()) {
      actionTime = make_shared<string>(boost::any_cast<string>(m["actionTime"]));
    }
  }


  virtual ~GetProblemResponseBodyDataRestoredProblemOperateLogs() = default;
};
class GetProblemResponseBodyDataReplayingProblemOperateLogs : public Darabonba::Model {
public:
  shared_ptr<string> operator_{};
  shared_ptr<string> actionName{};
  shared_ptr<string> actionTime{};

  GetProblemResponseBodyDataReplayingProblemOperateLogs() {}

  explicit GetProblemResponseBodyDataReplayingProblemOperateLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operator_) {
      res["operator"] = boost::any(*operator_);
    }
    if (actionName) {
      res["actionName"] = boost::any(*actionName);
    }
    if (actionTime) {
      res["actionTime"] = boost::any(*actionTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("operator") != m.end() && !m["operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["operator"]));
    }
    if (m.find("actionName") != m.end() && !m["actionName"].empty()) {
      actionName = make_shared<string>(boost::any_cast<string>(m["actionName"]));
    }
    if (m.find("actionTime") != m.end() && !m["actionTime"].empty()) {
      actionTime = make_shared<string>(boost::any_cast<string>(m["actionTime"]));
    }
  }


  virtual ~GetProblemResponseBodyDataReplayingProblemOperateLogs() = default;
};
class GetProblemResponseBodyDataReplayProblemOperateLogs : public Darabonba::Model {
public:
  shared_ptr<string> operator_{};
  shared_ptr<string> actionName{};
  shared_ptr<string> actionTime{};

  GetProblemResponseBodyDataReplayProblemOperateLogs() {}

  explicit GetProblemResponseBodyDataReplayProblemOperateLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operator_) {
      res["operator"] = boost::any(*operator_);
    }
    if (actionName) {
      res["actionName"] = boost::any(*actionName);
    }
    if (actionTime) {
      res["actionTime"] = boost::any(*actionTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("operator") != m.end() && !m["operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["operator"]));
    }
    if (m.find("actionName") != m.end() && !m["actionName"].empty()) {
      actionName = make_shared<string>(boost::any_cast<string>(m["actionName"]));
    }
    if (m.find("actionTime") != m.end() && !m["actionTime"].empty()) {
      actionTime = make_shared<string>(boost::any_cast<string>(m["actionTime"]));
    }
  }


  virtual ~GetProblemResponseBodyDataReplayProblemOperateLogs() = default;
};
class GetProblemResponseBodyDataEffectionServices : public Darabonba::Model {
public:
  shared_ptr<long> effectionServiceId{};
  shared_ptr<long> effectionLevel{};
  shared_ptr<long> effectionStatus{};
  shared_ptr<string> description{};
  shared_ptr<string> serviceName{};

  GetProblemResponseBodyDataEffectionServices() {}

  explicit GetProblemResponseBodyDataEffectionServices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (effectionServiceId) {
      res["effectionServiceId"] = boost::any(*effectionServiceId);
    }
    if (effectionLevel) {
      res["effectionLevel"] = boost::any(*effectionLevel);
    }
    if (effectionStatus) {
      res["effectionStatus"] = boost::any(*effectionStatus);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("effectionServiceId") != m.end() && !m["effectionServiceId"].empty()) {
      effectionServiceId = make_shared<long>(boost::any_cast<long>(m["effectionServiceId"]));
    }
    if (m.find("effectionLevel") != m.end() && !m["effectionLevel"].empty()) {
      effectionLevel = make_shared<long>(boost::any_cast<long>(m["effectionLevel"]));
    }
    if (m.find("effectionStatus") != m.end() && !m["effectionStatus"].empty()) {
      effectionStatus = make_shared<long>(boost::any_cast<long>(m["effectionStatus"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
  }


  virtual ~GetProblemResponseBodyDataEffectionServices() = default;
};
class GetProblemResponseBodyDataCoordinationGroups : public Darabonba::Model {
public:
  shared_ptr<long> serviceGroupId{};
  shared_ptr<string> serviceGroupName{};

  GetProblemResponseBodyDataCoordinationGroups() {}

  explicit GetProblemResponseBodyDataCoordinationGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceGroupId) {
      res["serviceGroupId"] = boost::any(*serviceGroupId);
    }
    if (serviceGroupName) {
      res["serviceGroupName"] = boost::any(*serviceGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceGroupId") != m.end() && !m["serviceGroupId"].empty()) {
      serviceGroupId = make_shared<long>(boost::any_cast<long>(m["serviceGroupId"]));
    }
    if (m.find("serviceGroupName") != m.end() && !m["serviceGroupName"].empty()) {
      serviceGroupName = make_shared<string>(boost::any_cast<string>(m["serviceGroupName"]));
    }
  }


  virtual ~GetProblemResponseBodyDataCoordinationGroups() = default;
};
class GetProblemResponseBodyDataTimelines : public Darabonba::Model {
public:
  shared_ptr<string> keyNode{};

  GetProblemResponseBodyDataTimelines() {}

  explicit GetProblemResponseBodyDataTimelines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyNode) {
      res["keyNode"] = boost::any(*keyNode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyNode") != m.end() && !m["keyNode"].empty()) {
      keyNode = make_shared<string>(boost::any_cast<string>(m["keyNode"]));
    }
  }


  virtual ~GetProblemResponseBodyDataTimelines() = default;
};
class GetProblemResponseBodyDataCancelProblemOperateLogs : public Darabonba::Model {
public:
  shared_ptr<string> operator_{};
  shared_ptr<string> actionName{};
  shared_ptr<string> actionTime{};

  GetProblemResponseBodyDataCancelProblemOperateLogs() {}

  explicit GetProblemResponseBodyDataCancelProblemOperateLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operator_) {
      res["operator"] = boost::any(*operator_);
    }
    if (actionName) {
      res["actionName"] = boost::any(*actionName);
    }
    if (actionTime) {
      res["actionTime"] = boost::any(*actionTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("operator") != m.end() && !m["operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["operator"]));
    }
    if (m.find("actionName") != m.end() && !m["actionName"].empty()) {
      actionName = make_shared<string>(boost::any_cast<string>(m["actionName"]));
    }
    if (m.find("actionTime") != m.end() && !m["actionTime"].empty()) {
      actionTime = make_shared<string>(boost::any_cast<string>(m["actionTime"]));
    }
  }


  virtual ~GetProblemResponseBodyDataCancelProblemOperateLogs() = default;
};
class GetProblemResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> problemId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> incidentNumber{};
  shared_ptr<long> incidentId{};
  shared_ptr<string> problemNumber{};
  shared_ptr<string> problemName{};
  shared_ptr<long> problemStatus{};
  shared_ptr<long> problemLevel{};
  shared_ptr<string> discoverTime{};
  shared_ptr<string> recoveryTime{};
  shared_ptr<long> relatedServiceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> progressSummary{};
  shared_ptr<string> preliminaryReason{};
  shared_ptr<long> mainHandler{};
  shared_ptr<long> mainHandlerId{};
  shared_ptr<string> mainHandlerPhone{};
  shared_ptr<string> feedback{};
  shared_ptr<string> cancelReasonDescription{};
  shared_ptr<long> cancelReason{};
  shared_ptr<vector<GetProblemResponseBodyDataHandingProblemOperateLogs>> handingProblemOperateLogs{};
  shared_ptr<vector<GetProblemResponseBodyDataRestoredProblemOperateLogs>> restoredProblemOperateLogs{};
  shared_ptr<vector<GetProblemResponseBodyDataReplayingProblemOperateLogs>> replayingProblemOperateLogs{};
  shared_ptr<vector<GetProblemResponseBodyDataReplayProblemOperateLogs>> replayProblemOperateLogs{};
  shared_ptr<vector<GetProblemResponseBodyDataEffectionServices>> effectionServices{};
  shared_ptr<vector<GetProblemResponseBodyDataCoordinationGroups>> coordinationGroups{};
  shared_ptr<vector<GetProblemResponseBodyDataTimelines>> timelines{};
  shared_ptr<vector<GetProblemResponseBodyDataCancelProblemOperateLogs>> cancelProblemOperateLogs{};

  GetProblemResponseBodyData() {}

  explicit GetProblemResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (incidentNumber) {
      res["incidentNumber"] = boost::any(*incidentNumber);
    }
    if (incidentId) {
      res["incidentId"] = boost::any(*incidentId);
    }
    if (problemNumber) {
      res["problemNumber"] = boost::any(*problemNumber);
    }
    if (problemName) {
      res["problemName"] = boost::any(*problemName);
    }
    if (problemStatus) {
      res["problemStatus"] = boost::any(*problemStatus);
    }
    if (problemLevel) {
      res["problemLevel"] = boost::any(*problemLevel);
    }
    if (discoverTime) {
      res["discoverTime"] = boost::any(*discoverTime);
    }
    if (recoveryTime) {
      res["recoveryTime"] = boost::any(*recoveryTime);
    }
    if (relatedServiceId) {
      res["relatedServiceId"] = boost::any(*relatedServiceId);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (progressSummary) {
      res["progressSummary"] = boost::any(*progressSummary);
    }
    if (preliminaryReason) {
      res["preliminaryReason"] = boost::any(*preliminaryReason);
    }
    if (mainHandler) {
      res["mainHandler"] = boost::any(*mainHandler);
    }
    if (mainHandlerId) {
      res["mainHandlerId"] = boost::any(*mainHandlerId);
    }
    if (mainHandlerPhone) {
      res["mainHandlerPhone"] = boost::any(*mainHandlerPhone);
    }
    if (feedback) {
      res["feedback"] = boost::any(*feedback);
    }
    if (cancelReasonDescription) {
      res["cancelReasonDescription"] = boost::any(*cancelReasonDescription);
    }
    if (cancelReason) {
      res["cancelReason"] = boost::any(*cancelReason);
    }
    if (handingProblemOperateLogs) {
      vector<boost::any> temp1;
      for(auto item1:*handingProblemOperateLogs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["handingProblemOperateLogs"] = boost::any(temp1);
    }
    if (restoredProblemOperateLogs) {
      vector<boost::any> temp1;
      for(auto item1:*restoredProblemOperateLogs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["restoredProblemOperateLogs"] = boost::any(temp1);
    }
    if (replayingProblemOperateLogs) {
      vector<boost::any> temp1;
      for(auto item1:*replayingProblemOperateLogs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["replayingProblemOperateLogs"] = boost::any(temp1);
    }
    if (replayProblemOperateLogs) {
      vector<boost::any> temp1;
      for(auto item1:*replayProblemOperateLogs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["replayProblemOperateLogs"] = boost::any(temp1);
    }
    if (effectionServices) {
      vector<boost::any> temp1;
      for(auto item1:*effectionServices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["effectionServices"] = boost::any(temp1);
    }
    if (coordinationGroups) {
      vector<boost::any> temp1;
      for(auto item1:*coordinationGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["coordinationGroups"] = boost::any(temp1);
    }
    if (timelines) {
      vector<boost::any> temp1;
      for(auto item1:*timelines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["timelines"] = boost::any(temp1);
    }
    if (cancelProblemOperateLogs) {
      vector<boost::any> temp1;
      for(auto item1:*cancelProblemOperateLogs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["cancelProblemOperateLogs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("incidentNumber") != m.end() && !m["incidentNumber"].empty()) {
      incidentNumber = make_shared<string>(boost::any_cast<string>(m["incidentNumber"]));
    }
    if (m.find("incidentId") != m.end() && !m["incidentId"].empty()) {
      incidentId = make_shared<long>(boost::any_cast<long>(m["incidentId"]));
    }
    if (m.find("problemNumber") != m.end() && !m["problemNumber"].empty()) {
      problemNumber = make_shared<string>(boost::any_cast<string>(m["problemNumber"]));
    }
    if (m.find("problemName") != m.end() && !m["problemName"].empty()) {
      problemName = make_shared<string>(boost::any_cast<string>(m["problemName"]));
    }
    if (m.find("problemStatus") != m.end() && !m["problemStatus"].empty()) {
      problemStatus = make_shared<long>(boost::any_cast<long>(m["problemStatus"]));
    }
    if (m.find("problemLevel") != m.end() && !m["problemLevel"].empty()) {
      problemLevel = make_shared<long>(boost::any_cast<long>(m["problemLevel"]));
    }
    if (m.find("discoverTime") != m.end() && !m["discoverTime"].empty()) {
      discoverTime = make_shared<string>(boost::any_cast<string>(m["discoverTime"]));
    }
    if (m.find("recoveryTime") != m.end() && !m["recoveryTime"].empty()) {
      recoveryTime = make_shared<string>(boost::any_cast<string>(m["recoveryTime"]));
    }
    if (m.find("relatedServiceId") != m.end() && !m["relatedServiceId"].empty()) {
      relatedServiceId = make_shared<long>(boost::any_cast<long>(m["relatedServiceId"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("progressSummary") != m.end() && !m["progressSummary"].empty()) {
      progressSummary = make_shared<string>(boost::any_cast<string>(m["progressSummary"]));
    }
    if (m.find("preliminaryReason") != m.end() && !m["preliminaryReason"].empty()) {
      preliminaryReason = make_shared<string>(boost::any_cast<string>(m["preliminaryReason"]));
    }
    if (m.find("mainHandler") != m.end() && !m["mainHandler"].empty()) {
      mainHandler = make_shared<long>(boost::any_cast<long>(m["mainHandler"]));
    }
    if (m.find("mainHandlerId") != m.end() && !m["mainHandlerId"].empty()) {
      mainHandlerId = make_shared<long>(boost::any_cast<long>(m["mainHandlerId"]));
    }
    if (m.find("mainHandlerPhone") != m.end() && !m["mainHandlerPhone"].empty()) {
      mainHandlerPhone = make_shared<string>(boost::any_cast<string>(m["mainHandlerPhone"]));
    }
    if (m.find("feedback") != m.end() && !m["feedback"].empty()) {
      feedback = make_shared<string>(boost::any_cast<string>(m["feedback"]));
    }
    if (m.find("cancelReasonDescription") != m.end() && !m["cancelReasonDescription"].empty()) {
      cancelReasonDescription = make_shared<string>(boost::any_cast<string>(m["cancelReasonDescription"]));
    }
    if (m.find("cancelReason") != m.end() && !m["cancelReason"].empty()) {
      cancelReason = make_shared<long>(boost::any_cast<long>(m["cancelReason"]));
    }
    if (m.find("handingProblemOperateLogs") != m.end() && !m["handingProblemOperateLogs"].empty()) {
      if (typeid(vector<boost::any>) == m["handingProblemOperateLogs"].type()) {
        vector<GetProblemResponseBodyDataHandingProblemOperateLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["handingProblemOperateLogs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProblemResponseBodyDataHandingProblemOperateLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        handingProblemOperateLogs = make_shared<vector<GetProblemResponseBodyDataHandingProblemOperateLogs>>(expect1);
      }
    }
    if (m.find("restoredProblemOperateLogs") != m.end() && !m["restoredProblemOperateLogs"].empty()) {
      if (typeid(vector<boost::any>) == m["restoredProblemOperateLogs"].type()) {
        vector<GetProblemResponseBodyDataRestoredProblemOperateLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["restoredProblemOperateLogs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProblemResponseBodyDataRestoredProblemOperateLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        restoredProblemOperateLogs = make_shared<vector<GetProblemResponseBodyDataRestoredProblemOperateLogs>>(expect1);
      }
    }
    if (m.find("replayingProblemOperateLogs") != m.end() && !m["replayingProblemOperateLogs"].empty()) {
      if (typeid(vector<boost::any>) == m["replayingProblemOperateLogs"].type()) {
        vector<GetProblemResponseBodyDataReplayingProblemOperateLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["replayingProblemOperateLogs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProblemResponseBodyDataReplayingProblemOperateLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        replayingProblemOperateLogs = make_shared<vector<GetProblemResponseBodyDataReplayingProblemOperateLogs>>(expect1);
      }
    }
    if (m.find("replayProblemOperateLogs") != m.end() && !m["replayProblemOperateLogs"].empty()) {
      if (typeid(vector<boost::any>) == m["replayProblemOperateLogs"].type()) {
        vector<GetProblemResponseBodyDataReplayProblemOperateLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["replayProblemOperateLogs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProblemResponseBodyDataReplayProblemOperateLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        replayProblemOperateLogs = make_shared<vector<GetProblemResponseBodyDataReplayProblemOperateLogs>>(expect1);
      }
    }
    if (m.find("effectionServices") != m.end() && !m["effectionServices"].empty()) {
      if (typeid(vector<boost::any>) == m["effectionServices"].type()) {
        vector<GetProblemResponseBodyDataEffectionServices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["effectionServices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProblemResponseBodyDataEffectionServices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        effectionServices = make_shared<vector<GetProblemResponseBodyDataEffectionServices>>(expect1);
      }
    }
    if (m.find("coordinationGroups") != m.end() && !m["coordinationGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["coordinationGroups"].type()) {
        vector<GetProblemResponseBodyDataCoordinationGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["coordinationGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProblemResponseBodyDataCoordinationGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        coordinationGroups = make_shared<vector<GetProblemResponseBodyDataCoordinationGroups>>(expect1);
      }
    }
    if (m.find("timelines") != m.end() && !m["timelines"].empty()) {
      if (typeid(vector<boost::any>) == m["timelines"].type()) {
        vector<GetProblemResponseBodyDataTimelines> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["timelines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProblemResponseBodyDataTimelines model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        timelines = make_shared<vector<GetProblemResponseBodyDataTimelines>>(expect1);
      }
    }
    if (m.find("cancelProblemOperateLogs") != m.end() && !m["cancelProblemOperateLogs"].empty()) {
      if (typeid(vector<boost::any>) == m["cancelProblemOperateLogs"].type()) {
        vector<GetProblemResponseBodyDataCancelProblemOperateLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["cancelProblemOperateLogs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProblemResponseBodyDataCancelProblemOperateLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cancelProblemOperateLogs = make_shared<vector<GetProblemResponseBodyDataCancelProblemOperateLogs>>(expect1);
      }
    }
  }


  virtual ~GetProblemResponseBodyData() = default;
};
class GetProblemResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetProblemResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetProblemResponseBody() {}

  explicit GetProblemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetProblemResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetProblemResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetProblemResponseBody() = default;
};
class GetProblemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetProblemResponseBody> body{};

  GetProblemResponse() {}

  explicit GetProblemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetProblemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProblemResponseBody>(model1);
      }
    }
  }


  virtual ~GetProblemResponse() = default;
};
class DeleteProblemRequest : public Darabonba::Model {
public:
  shared_ptr<long> problemId{};
  shared_ptr<string> clientToken{};

  DeleteProblemRequest() {}

  explicit DeleteProblemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~DeleteProblemRequest() = default;
};
class DeleteProblemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteProblemResponseBody() {}

  explicit DeleteProblemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteProblemResponseBody() = default;
};
class DeleteProblemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteProblemResponseBody> body{};

  DeleteProblemResponse() {}

  explicit DeleteProblemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteProblemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteProblemResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteProblemResponse() = default;
};
class CreateServiceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceGroupName{};
  shared_ptr<vector<long>> userIds{};
  shared_ptr<string> enableWebhook{};
  shared_ptr<string> webhookType{};
  shared_ptr<string> serviceGroupDescription{};
  shared_ptr<string> webhookLink{};
  shared_ptr<string> clientToken{};

  CreateServiceGroupRequest() {}

  explicit CreateServiceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceGroupName) {
      res["serviceGroupName"] = boost::any(*serviceGroupName);
    }
    if (userIds) {
      res["userIds"] = boost::any(*userIds);
    }
    if (enableWebhook) {
      res["enableWebhook"] = boost::any(*enableWebhook);
    }
    if (webhookType) {
      res["webhookType"] = boost::any(*webhookType);
    }
    if (serviceGroupDescription) {
      res["serviceGroupDescription"] = boost::any(*serviceGroupDescription);
    }
    if (webhookLink) {
      res["webhookLink"] = boost::any(*webhookLink);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceGroupName") != m.end() && !m["serviceGroupName"].empty()) {
      serviceGroupName = make_shared<string>(boost::any_cast<string>(m["serviceGroupName"]));
    }
    if (m.find("userIds") != m.end() && !m["userIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["userIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["userIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      userIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("enableWebhook") != m.end() && !m["enableWebhook"].empty()) {
      enableWebhook = make_shared<string>(boost::any_cast<string>(m["enableWebhook"]));
    }
    if (m.find("webhookType") != m.end() && !m["webhookType"].empty()) {
      webhookType = make_shared<string>(boost::any_cast<string>(m["webhookType"]));
    }
    if (m.find("serviceGroupDescription") != m.end() && !m["serviceGroupDescription"].empty()) {
      serviceGroupDescription = make_shared<string>(boost::any_cast<string>(m["serviceGroupDescription"]));
    }
    if (m.find("webhookLink") != m.end() && !m["webhookLink"].empty()) {
      webhookLink = make_shared<string>(boost::any_cast<string>(m["webhookLink"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~CreateServiceGroupRequest() = default;
};
class CreateServiceGroupResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> serviceGroupId{};

  CreateServiceGroupResponseBodyData() {}

  explicit CreateServiceGroupResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceGroupId) {
      res["serviceGroupId"] = boost::any(*serviceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceGroupId") != m.end() && !m["serviceGroupId"].empty()) {
      serviceGroupId = make_shared<long>(boost::any_cast<long>(m["serviceGroupId"]));
    }
  }


  virtual ~CreateServiceGroupResponseBodyData() = default;
};
class CreateServiceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateServiceGroupResponseBodyData> data{};

  CreateServiceGroupResponseBody() {}

  explicit CreateServiceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateServiceGroupResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateServiceGroupResponseBodyData>(model1);
      }
    }
  }


  virtual ~CreateServiceGroupResponseBody() = default;
};
class CreateServiceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateServiceGroupResponseBody> body{};

  CreateServiceGroupResponse() {}

  explicit CreateServiceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateServiceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceGroupResponse() = default;
};
class DeleteIncidentRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<long> incidentId{};

  DeleteIncidentRequest() {}

  explicit DeleteIncidentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (incidentId) {
      res["incidentId"] = boost::any(*incidentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("incidentId") != m.end() && !m["incidentId"].empty()) {
      incidentId = make_shared<long>(boost::any_cast<long>(m["incidentId"]));
    }
  }


  virtual ~DeleteIncidentRequest() = default;
};
class DeleteIncidentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteIncidentResponseBody() {}

  explicit DeleteIncidentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteIncidentResponseBody() = default;
};
class DeleteIncidentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteIncidentResponseBody> body{};

  DeleteIncidentResponse() {}

  explicit DeleteIncidentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteIncidentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteIncidentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteIncidentResponse() = default;
};
class ListServicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> clientToken{};

  ListServicesRequest() {}

  explicit ListServicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~ListServicesRequest() = default;
};
class ListServicesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> serviceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceDescription{};
  shared_ptr<string> updateTime{};

  ListServicesResponseBodyData() {}

  explicit ListServicesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceId) {
      res["serviceId"] = boost::any(*serviceId);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (serviceDescription) {
      res["serviceDescription"] = boost::any(*serviceDescription);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceId") != m.end() && !m["serviceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["serviceId"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("serviceDescription") != m.end() && !m["serviceDescription"].empty()) {
      serviceDescription = make_shared<string>(boost::any_cast<string>(m["serviceDescription"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
  }


  virtual ~ListServicesResponseBodyData() = default;
};
class ListServicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListServicesResponseBodyData>> data{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListServicesResponseBody() {}

  explicit ListServicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListServicesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServicesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListServicesResponseBodyData>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListServicesResponseBody() = default;
};
class ListServicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListServicesResponseBody> body{};

  ListServicesResponse() {}

  explicit ListServicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListServicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServicesResponseBody>(model1);
      }
    }
  }


  virtual ~ListServicesResponse() = default;
};
class GetSubscriptionRequest : public Darabonba::Model {
public:
  shared_ptr<long> subscriptionId{};

  GetSubscriptionRequest() {}

  explicit GetSubscriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subscriptionId) {
      res["subscriptionId"] = boost::any(*subscriptionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("subscriptionId") != m.end() && !m["subscriptionId"].empty()) {
      subscriptionId = make_shared<long>(boost::any_cast<long>(m["subscriptionId"]));
    }
  }


  virtual ~GetSubscriptionRequest() = default;
};
class GetSubscriptionResponseBodyDataScopeObjectList : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> scope{};
  shared_ptr<long> scopeObjectId{};
  shared_ptr<string> scopeObject{};

  GetSubscriptionResponseBodyDataScopeObjectList() {}

  explicit GetSubscriptionResponseBodyDataScopeObjectList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (scopeObjectId) {
      res["scopeObjectId"] = boost::any(*scopeObjectId);
    }
    if (scopeObject) {
      res["scopeObject"] = boost::any(*scopeObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
    if (m.find("scopeObjectId") != m.end() && !m["scopeObjectId"].empty()) {
      scopeObjectId = make_shared<long>(boost::any_cast<long>(m["scopeObjectId"]));
    }
    if (m.find("scopeObject") != m.end() && !m["scopeObject"].empty()) {
      scopeObject = make_shared<string>(boost::any_cast<string>(m["scopeObject"]));
    }
  }


  virtual ~GetSubscriptionResponseBodyDataScopeObjectList() = default;
};
class GetSubscriptionResponseBodyDataNotifyObjectList : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<long> notifyObjectType{};
  shared_ptr<long> notifyObjectId{};
  shared_ptr<string> name{};

  GetSubscriptionResponseBodyDataNotifyObjectList() {}

  explicit GetSubscriptionResponseBodyDataNotifyObjectList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (notifyObjectType) {
      res["notifyObjectType"] = boost::any(*notifyObjectType);
    }
    if (notifyObjectId) {
      res["notifyObjectId"] = boost::any(*notifyObjectId);
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
    if (m.find("notifyObjectType") != m.end() && !m["notifyObjectType"].empty()) {
      notifyObjectType = make_shared<long>(boost::any_cast<long>(m["notifyObjectType"]));
    }
    if (m.find("notifyObjectId") != m.end() && !m["notifyObjectId"].empty()) {
      notifyObjectId = make_shared<long>(boost::any_cast<long>(m["notifyObjectId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GetSubscriptionResponseBodyDataNotifyObjectList() = default;
};
class GetSubscriptionResponseBodyDataNotifyStrategyListStrategiesConditions : public Darabonba::Model {
public:
  shared_ptr<string> effection{};
  shared_ptr<string> problemNotifyType{};
  shared_ptr<string> level{};
  shared_ptr<string> action{};

  GetSubscriptionResponseBodyDataNotifyStrategyListStrategiesConditions() {}

  explicit GetSubscriptionResponseBodyDataNotifyStrategyListStrategiesConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (effection) {
      res["effection"] = boost::any(*effection);
    }
    if (problemNotifyType) {
      res["problemNotifyType"] = boost::any(*problemNotifyType);
    }
    if (level) {
      res["level"] = boost::any(*level);
    }
    if (action) {
      res["action"] = boost::any(*action);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("effection") != m.end() && !m["effection"].empty()) {
      effection = make_shared<string>(boost::any_cast<string>(m["effection"]));
    }
    if (m.find("problemNotifyType") != m.end() && !m["problemNotifyType"].empty()) {
      problemNotifyType = make_shared<string>(boost::any_cast<string>(m["problemNotifyType"]));
    }
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["level"]));
    }
    if (m.find("action") != m.end() && !m["action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["action"]));
    }
  }


  virtual ~GetSubscriptionResponseBodyDataNotifyStrategyListStrategiesConditions() = default;
};
class GetSubscriptionResponseBodyDataNotifyStrategyListStrategies : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> channels{};
  shared_ptr<vector<GetSubscriptionResponseBodyDataNotifyStrategyListStrategiesConditions>> conditions{};

  GetSubscriptionResponseBodyDataNotifyStrategyListStrategies() {}

  explicit GetSubscriptionResponseBodyDataNotifyStrategyListStrategies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (channels) {
      res["channels"] = boost::any(*channels);
    }
    if (conditions) {
      vector<boost::any> temp1;
      for(auto item1:*conditions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["conditions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("channels") != m.end() && !m["channels"].empty()) {
      channels = make_shared<string>(boost::any_cast<string>(m["channels"]));
    }
    if (m.find("conditions") != m.end() && !m["conditions"].empty()) {
      if (typeid(vector<boost::any>) == m["conditions"].type()) {
        vector<GetSubscriptionResponseBodyDataNotifyStrategyListStrategiesConditions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["conditions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSubscriptionResponseBodyDataNotifyStrategyListStrategiesConditions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conditions = make_shared<vector<GetSubscriptionResponseBodyDataNotifyStrategyListStrategiesConditions>>(expect1);
      }
    }
  }


  virtual ~GetSubscriptionResponseBodyDataNotifyStrategyListStrategies() = default;
};
class GetSubscriptionResponseBodyDataNotifyStrategyList : public Darabonba::Model {
public:
  shared_ptr<long> instanceType{};
  shared_ptr<vector<GetSubscriptionResponseBodyDataNotifyStrategyListStrategies>> strategies{};

  GetSubscriptionResponseBodyDataNotifyStrategyList() {}

  explicit GetSubscriptionResponseBodyDataNotifyStrategyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["instanceType"] = boost::any(*instanceType);
    }
    if (strategies) {
      vector<boost::any> temp1;
      for(auto item1:*strategies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["strategies"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceType") != m.end() && !m["instanceType"].empty()) {
      instanceType = make_shared<long>(boost::any_cast<long>(m["instanceType"]));
    }
    if (m.find("strategies") != m.end() && !m["strategies"].empty()) {
      if (typeid(vector<boost::any>) == m["strategies"].type()) {
        vector<GetSubscriptionResponseBodyDataNotifyStrategyListStrategies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["strategies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSubscriptionResponseBodyDataNotifyStrategyListStrategies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        strategies = make_shared<vector<GetSubscriptionResponseBodyDataNotifyStrategyListStrategies>>(expect1);
      }
    }
  }


  virtual ~GetSubscriptionResponseBodyDataNotifyStrategyList() = default;
};
class GetSubscriptionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> subscriptionId{};
  shared_ptr<string> subscriptionTitle{};
  shared_ptr<string> scope{};
  shared_ptr<string> notifyObjectType{};
  shared_ptr<string> expiredType{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> status{};
  shared_ptr<vector<GetSubscriptionResponseBodyDataScopeObjectList>> scopeObjectList{};
  shared_ptr<vector<GetSubscriptionResponseBodyDataNotifyObjectList>> notifyObjectList{};
  shared_ptr<vector<GetSubscriptionResponseBodyDataNotifyStrategyList>> notifyStrategyList{};

  GetSubscriptionResponseBodyData() {}

  explicit GetSubscriptionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subscriptionId) {
      res["subscriptionId"] = boost::any(*subscriptionId);
    }
    if (subscriptionTitle) {
      res["subscriptionTitle"] = boost::any(*subscriptionTitle);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (notifyObjectType) {
      res["notifyObjectType"] = boost::any(*notifyObjectType);
    }
    if (expiredType) {
      res["expiredType"] = boost::any(*expiredType);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (scopeObjectList) {
      vector<boost::any> temp1;
      for(auto item1:*scopeObjectList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["scopeObjectList"] = boost::any(temp1);
    }
    if (notifyObjectList) {
      vector<boost::any> temp1;
      for(auto item1:*notifyObjectList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["notifyObjectList"] = boost::any(temp1);
    }
    if (notifyStrategyList) {
      vector<boost::any> temp1;
      for(auto item1:*notifyStrategyList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["notifyStrategyList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("subscriptionId") != m.end() && !m["subscriptionId"].empty()) {
      subscriptionId = make_shared<long>(boost::any_cast<long>(m["subscriptionId"]));
    }
    if (m.find("subscriptionTitle") != m.end() && !m["subscriptionTitle"].empty()) {
      subscriptionTitle = make_shared<string>(boost::any_cast<string>(m["subscriptionTitle"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
    if (m.find("notifyObjectType") != m.end() && !m["notifyObjectType"].empty()) {
      notifyObjectType = make_shared<string>(boost::any_cast<string>(m["notifyObjectType"]));
    }
    if (m.find("expiredType") != m.end() && !m["expiredType"].empty()) {
      expiredType = make_shared<string>(boost::any_cast<string>(m["expiredType"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("scopeObjectList") != m.end() && !m["scopeObjectList"].empty()) {
      if (typeid(vector<boost::any>) == m["scopeObjectList"].type()) {
        vector<GetSubscriptionResponseBodyDataScopeObjectList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["scopeObjectList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSubscriptionResponseBodyDataScopeObjectList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scopeObjectList = make_shared<vector<GetSubscriptionResponseBodyDataScopeObjectList>>(expect1);
      }
    }
    if (m.find("notifyObjectList") != m.end() && !m["notifyObjectList"].empty()) {
      if (typeid(vector<boost::any>) == m["notifyObjectList"].type()) {
        vector<GetSubscriptionResponseBodyDataNotifyObjectList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["notifyObjectList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSubscriptionResponseBodyDataNotifyObjectList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        notifyObjectList = make_shared<vector<GetSubscriptionResponseBodyDataNotifyObjectList>>(expect1);
      }
    }
    if (m.find("notifyStrategyList") != m.end() && !m["notifyStrategyList"].empty()) {
      if (typeid(vector<boost::any>) == m["notifyStrategyList"].type()) {
        vector<GetSubscriptionResponseBodyDataNotifyStrategyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["notifyStrategyList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSubscriptionResponseBodyDataNotifyStrategyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        notifyStrategyList = make_shared<vector<GetSubscriptionResponseBodyDataNotifyStrategyList>>(expect1);
      }
    }
  }


  virtual ~GetSubscriptionResponseBodyData() = default;
};
class GetSubscriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetSubscriptionResponseBodyData> data{};

  GetSubscriptionResponseBody() {}

  explicit GetSubscriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetSubscriptionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetSubscriptionResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetSubscriptionResponseBody() = default;
};
class GetSubscriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSubscriptionResponseBody> body{};

  GetSubscriptionResponse() {}

  explicit GetSubscriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSubscriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSubscriptionResponseBody>(model1);
      }
    }
  }


  virtual ~GetSubscriptionResponse() = default;
};
class CreateProblemTimelinesRequest : public Darabonba::Model {
public:
  shared_ptr<long> problemId{};
  shared_ptr<string> timelineNodes{};
  shared_ptr<string> clientToken{};

  CreateProblemTimelinesRequest() {}

  explicit CreateProblemTimelinesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (timelineNodes) {
      res["timelineNodes"] = boost::any(*timelineNodes);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
    if (m.find("timelineNodes") != m.end() && !m["timelineNodes"].empty()) {
      timelineNodes = make_shared<string>(boost::any_cast<string>(m["timelineNodes"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~CreateProblemTimelinesRequest() = default;
};
class CreateProblemTimelinesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<long>> problemTimelineIds{};

  CreateProblemTimelinesResponseBodyData() {}

  explicit CreateProblemTimelinesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (problemTimelineIds) {
      res["problemTimelineIds"] = boost::any(*problemTimelineIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("problemTimelineIds") != m.end() && !m["problemTimelineIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["problemTimelineIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["problemTimelineIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      problemTimelineIds = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~CreateProblemTimelinesResponseBodyData() = default;
};
class CreateProblemTimelinesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateProblemTimelinesResponseBodyData> data{};

  CreateProblemTimelinesResponseBody() {}

  explicit CreateProblemTimelinesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateProblemTimelinesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateProblemTimelinesResponseBodyData>(model1);
      }
    }
  }


  virtual ~CreateProblemTimelinesResponseBody() = default;
};
class CreateProblemTimelinesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateProblemTimelinesResponseBody> body{};

  CreateProblemTimelinesResponse() {}

  explicit CreateProblemTimelinesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateProblemTimelinesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProblemTimelinesResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProblemTimelinesResponse() = default;
};
class CreateProblemTimelineRequest : public Darabonba::Model {
public:
  shared_ptr<long> problemId{};
  shared_ptr<string> keyNode{};
  shared_ptr<string> content{};
  shared_ptr<string> time{};
  shared_ptr<string> clientToken{};

  CreateProblemTimelineRequest() {}

  explicit CreateProblemTimelineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (keyNode) {
      res["keyNode"] = boost::any(*keyNode);
    }
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (time) {
      res["time"] = boost::any(*time);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
    if (m.find("keyNode") != m.end() && !m["keyNode"].empty()) {
      keyNode = make_shared<string>(boost::any_cast<string>(m["keyNode"]));
    }
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~CreateProblemTimelineRequest() = default;
};
class CreateProblemTimelineResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> problemTimelineId{};

  CreateProblemTimelineResponseBodyData() {}

  explicit CreateProblemTimelineResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (problemTimelineId) {
      res["problemTimelineId"] = boost::any(*problemTimelineId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("problemTimelineId") != m.end() && !m["problemTimelineId"].empty()) {
      problemTimelineId = make_shared<long>(boost::any_cast<long>(m["problemTimelineId"]));
    }
  }


  virtual ~CreateProblemTimelineResponseBodyData() = default;
};
class CreateProblemTimelineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateProblemTimelineResponseBodyData> data{};

  CreateProblemTimelineResponseBody() {}

  explicit CreateProblemTimelineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateProblemTimelineResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateProblemTimelineResponseBodyData>(model1);
      }
    }
  }


  virtual ~CreateProblemTimelineResponseBody() = default;
};
class CreateProblemTimelineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateProblemTimelineResponseBody> body{};

  CreateProblemTimelineResponse() {}

  explicit CreateProblemTimelineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateProblemTimelineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProblemTimelineResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProblemTimelineResponse() = default;
};
class CancelProblemRequest : public Darabonba::Model {
public:
  shared_ptr<long> problemId{};
  shared_ptr<string> cancelReasonDescription{};
  shared_ptr<long> cancelReason{};
  shared_ptr<long> problemNotifyType{};
  shared_ptr<string> clientToken{};

  CancelProblemRequest() {}

  explicit CancelProblemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (cancelReasonDescription) {
      res["cancelReasonDescription"] = boost::any(*cancelReasonDescription);
    }
    if (cancelReason) {
      res["cancelReason"] = boost::any(*cancelReason);
    }
    if (problemNotifyType) {
      res["problemNotifyType"] = boost::any(*problemNotifyType);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
    if (m.find("cancelReasonDescription") != m.end() && !m["cancelReasonDescription"].empty()) {
      cancelReasonDescription = make_shared<string>(boost::any_cast<string>(m["cancelReasonDescription"]));
    }
    if (m.find("cancelReason") != m.end() && !m["cancelReason"].empty()) {
      cancelReason = make_shared<long>(boost::any_cast<long>(m["cancelReason"]));
    }
    if (m.find("problemNotifyType") != m.end() && !m["problemNotifyType"].empty()) {
      problemNotifyType = make_shared<long>(boost::any_cast<long>(m["problemNotifyType"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~CancelProblemRequest() = default;
};
class CancelProblemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelProblemResponseBody() {}

  explicit CancelProblemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelProblemResponseBody() = default;
};
class CancelProblemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CancelProblemResponseBody> body{};

  CancelProblemResponse() {}

  explicit CancelProblemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CancelProblemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelProblemResponseBody>(model1);
      }
    }
  }


  virtual ~CancelProblemResponse() = default;
};
class UpdateServiceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> serviceGroupId{};
  shared_ptr<string> enableWebhook{};
  shared_ptr<string> webhookType{};
  shared_ptr<string> webhookLink{};
  shared_ptr<string> serviceGroupName{};
  shared_ptr<string> serviceGroupDescription{};
  shared_ptr<vector<long>> userIds{};
  shared_ptr<string> clientToken{};

  UpdateServiceGroupRequest() {}

  explicit UpdateServiceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceGroupId) {
      res["serviceGroupId"] = boost::any(*serviceGroupId);
    }
    if (enableWebhook) {
      res["enableWebhook"] = boost::any(*enableWebhook);
    }
    if (webhookType) {
      res["webhookType"] = boost::any(*webhookType);
    }
    if (webhookLink) {
      res["webhookLink"] = boost::any(*webhookLink);
    }
    if (serviceGroupName) {
      res["serviceGroupName"] = boost::any(*serviceGroupName);
    }
    if (serviceGroupDescription) {
      res["serviceGroupDescription"] = boost::any(*serviceGroupDescription);
    }
    if (userIds) {
      res["userIds"] = boost::any(*userIds);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceGroupId") != m.end() && !m["serviceGroupId"].empty()) {
      serviceGroupId = make_shared<long>(boost::any_cast<long>(m["serviceGroupId"]));
    }
    if (m.find("enableWebhook") != m.end() && !m["enableWebhook"].empty()) {
      enableWebhook = make_shared<string>(boost::any_cast<string>(m["enableWebhook"]));
    }
    if (m.find("webhookType") != m.end() && !m["webhookType"].empty()) {
      webhookType = make_shared<string>(boost::any_cast<string>(m["webhookType"]));
    }
    if (m.find("webhookLink") != m.end() && !m["webhookLink"].empty()) {
      webhookLink = make_shared<string>(boost::any_cast<string>(m["webhookLink"]));
    }
    if (m.find("serviceGroupName") != m.end() && !m["serviceGroupName"].empty()) {
      serviceGroupName = make_shared<string>(boost::any_cast<string>(m["serviceGroupName"]));
    }
    if (m.find("serviceGroupDescription") != m.end() && !m["serviceGroupDescription"].empty()) {
      serviceGroupDescription = make_shared<string>(boost::any_cast<string>(m["serviceGroupDescription"]));
    }
    if (m.find("userIds") != m.end() && !m["userIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["userIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["userIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      userIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~UpdateServiceGroupRequest() = default;
};
class UpdateServiceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateServiceGroupResponseBody() {}

  explicit UpdateServiceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateServiceGroupResponseBody() = default;
};
class UpdateServiceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateServiceGroupResponseBody> body{};

  UpdateServiceGroupResponse() {}

  explicit UpdateServiceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateServiceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServiceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServiceGroupResponse() = default;
};
class UpdateIntegrationConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> integrationConfigId{};
  shared_ptr<string> accessKey{};
  shared_ptr<string> clientToken{};

  UpdateIntegrationConfigRequest() {}

  explicit UpdateIntegrationConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (integrationConfigId) {
      res["integrationConfigId"] = boost::any(*integrationConfigId);
    }
    if (accessKey) {
      res["accessKey"] = boost::any(*accessKey);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("integrationConfigId") != m.end() && !m["integrationConfigId"].empty()) {
      integrationConfigId = make_shared<long>(boost::any_cast<long>(m["integrationConfigId"]));
    }
    if (m.find("accessKey") != m.end() && !m["accessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["accessKey"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~UpdateIntegrationConfigRequest() = default;
};
class UpdateIntegrationConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateIntegrationConfigResponseBody() {}

  explicit UpdateIntegrationConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateIntegrationConfigResponseBody() = default;
};
class UpdateIntegrationConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateIntegrationConfigResponseBody> body{};

  UpdateIntegrationConfigResponse() {}

  explicit UpdateIntegrationConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateIntegrationConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateIntegrationConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateIntegrationConfigResponse() = default;
};
class ListProblemDetailOperationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> createTimeSort{};
  shared_ptr<long> problemId{};

  ListProblemDetailOperationsRequest() {}

  explicit ListProblemDetailOperationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (createTimeSort) {
      res["createTimeSort"] = boost::any(*createTimeSort);
    }
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("createTimeSort") != m.end() && !m["createTimeSort"].empty()) {
      createTimeSort = make_shared<string>(boost::any_cast<string>(m["createTimeSort"]));
    }
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
  }


  virtual ~ListProblemDetailOperationsRequest() = default;
};
class ListProblemDetailOperationsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> title{};
  shared_ptr<string> description{};
  shared_ptr<string> relatedServiceName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> remark{};
  shared_ptr<string> action{};

  ListProblemDetailOperationsResponseBodyData() {}

  explicit ListProblemDetailOperationsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (relatedServiceName) {
      res["relatedServiceName"] = boost::any(*relatedServiceName);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    if (action) {
      res["action"] = boost::any(*action);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("relatedServiceName") != m.end() && !m["relatedServiceName"].empty()) {
      relatedServiceName = make_shared<string>(boost::any_cast<string>(m["relatedServiceName"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
    if (m.find("action") != m.end() && !m["action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["action"]));
    }
  }


  virtual ~ListProblemDetailOperationsResponseBodyData() = default;
};
class ListProblemDetailOperationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListProblemDetailOperationsResponseBodyData>> data{};

  ListProblemDetailOperationsResponseBody() {}

  explicit ListProblemDetailOperationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListProblemDetailOperationsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProblemDetailOperationsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListProblemDetailOperationsResponseBodyData>>(expect1);
      }
    }
  }


  virtual ~ListProblemDetailOperationsResponseBody() = default;
};
class ListProblemDetailOperationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListProblemDetailOperationsResponseBody> body{};

  ListProblemDetailOperationsResponse() {}

  explicit ListProblemDetailOperationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListProblemDetailOperationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProblemDetailOperationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProblemDetailOperationsResponse() = default;
};
class ListIncidentDetailEscalationPlansRequest : public Darabonba::Model {
public:
  shared_ptr<long> incidentId{};
  shared_ptr<string> clientToken{};

  ListIncidentDetailEscalationPlansRequest() {}

  explicit ListIncidentDetailEscalationPlansRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (incidentId) {
      res["incidentId"] = boost::any(*incidentId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("incidentId") != m.end() && !m["incidentId"].empty()) {
      incidentId = make_shared<long>(boost::any_cast<long>(m["incidentId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~ListIncidentDetailEscalationPlansRequest() = default;
};
class ListIncidentDetailEscalationPlansResponseBodyDataUnFinishEscalationPlanNoticeObjectList : public Darabonba::Model {
public:
  shared_ptr<long> noticeObjectId{};
  shared_ptr<string> noticeObjectName{};
  shared_ptr<string> noticeObjectPhone{};

  ListIncidentDetailEscalationPlansResponseBodyDataUnFinishEscalationPlanNoticeObjectList() {}

  explicit ListIncidentDetailEscalationPlansResponseBodyDataUnFinishEscalationPlanNoticeObjectList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (noticeObjectId) {
      res["noticeObjectId"] = boost::any(*noticeObjectId);
    }
    if (noticeObjectName) {
      res["noticeObjectName"] = boost::any(*noticeObjectName);
    }
    if (noticeObjectPhone) {
      res["noticeObjectPhone"] = boost::any(*noticeObjectPhone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("noticeObjectId") != m.end() && !m["noticeObjectId"].empty()) {
      noticeObjectId = make_shared<long>(boost::any_cast<long>(m["noticeObjectId"]));
    }
    if (m.find("noticeObjectName") != m.end() && !m["noticeObjectName"].empty()) {
      noticeObjectName = make_shared<string>(boost::any_cast<string>(m["noticeObjectName"]));
    }
    if (m.find("noticeObjectPhone") != m.end() && !m["noticeObjectPhone"].empty()) {
      noticeObjectPhone = make_shared<string>(boost::any_cast<string>(m["noticeObjectPhone"]));
    }
  }


  virtual ~ListIncidentDetailEscalationPlansResponseBodyDataUnFinishEscalationPlanNoticeObjectList() = default;
};
class ListIncidentDetailEscalationPlansResponseBodyDataUnFinishEscalationPlan : public Darabonba::Model {
public:
  shared_ptr<string> escalationPlanType{};
  shared_ptr<long> noticeTime{};
  shared_ptr<string> status{};
  shared_ptr<long> startTime{};
  shared_ptr<vector<string>> noticeChannels{};
  shared_ptr<vector<ListIncidentDetailEscalationPlansResponseBodyDataUnFinishEscalationPlanNoticeObjectList>> noticeObjectList{};

  ListIncidentDetailEscalationPlansResponseBodyDataUnFinishEscalationPlan() {}

  explicit ListIncidentDetailEscalationPlansResponseBodyDataUnFinishEscalationPlan(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (escalationPlanType) {
      res["escalationPlanType"] = boost::any(*escalationPlanType);
    }
    if (noticeTime) {
      res["noticeTime"] = boost::any(*noticeTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (noticeChannels) {
      res["noticeChannels"] = boost::any(*noticeChannels);
    }
    if (noticeObjectList) {
      vector<boost::any> temp1;
      for(auto item1:*noticeObjectList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["noticeObjectList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("escalationPlanType") != m.end() && !m["escalationPlanType"].empty()) {
      escalationPlanType = make_shared<string>(boost::any_cast<string>(m["escalationPlanType"]));
    }
    if (m.find("noticeTime") != m.end() && !m["noticeTime"].empty()) {
      noticeTime = make_shared<long>(boost::any_cast<long>(m["noticeTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("noticeChannels") != m.end() && !m["noticeChannels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["noticeChannels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["noticeChannels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      noticeChannels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("noticeObjectList") != m.end() && !m["noticeObjectList"].empty()) {
      if (typeid(vector<boost::any>) == m["noticeObjectList"].type()) {
        vector<ListIncidentDetailEscalationPlansResponseBodyDataUnFinishEscalationPlanNoticeObjectList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["noticeObjectList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIncidentDetailEscalationPlansResponseBodyDataUnFinishEscalationPlanNoticeObjectList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        noticeObjectList = make_shared<vector<ListIncidentDetailEscalationPlansResponseBodyDataUnFinishEscalationPlanNoticeObjectList>>(expect1);
      }
    }
  }


  virtual ~ListIncidentDetailEscalationPlansResponseBodyDataUnFinishEscalationPlan() = default;
};
class ListIncidentDetailEscalationPlansResponseBodyDataNuAcknowledgeEscalationPlanNoticeObjectList : public Darabonba::Model {
public:
  shared_ptr<long> noticeObjectId{};
  shared_ptr<string> noticeObjectName{};
  shared_ptr<string> noticeObjectPhone{};

  ListIncidentDetailEscalationPlansResponseBodyDataNuAcknowledgeEscalationPlanNoticeObjectList() {}

  explicit ListIncidentDetailEscalationPlansResponseBodyDataNuAcknowledgeEscalationPlanNoticeObjectList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (noticeObjectId) {
      res["noticeObjectId"] = boost::any(*noticeObjectId);
    }
    if (noticeObjectName) {
      res["noticeObjectName"] = boost::any(*noticeObjectName);
    }
    if (noticeObjectPhone) {
      res["noticeObjectPhone"] = boost::any(*noticeObjectPhone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("noticeObjectId") != m.end() && !m["noticeObjectId"].empty()) {
      noticeObjectId = make_shared<long>(boost::any_cast<long>(m["noticeObjectId"]));
    }
    if (m.find("noticeObjectName") != m.end() && !m["noticeObjectName"].empty()) {
      noticeObjectName = make_shared<string>(boost::any_cast<string>(m["noticeObjectName"]));
    }
    if (m.find("noticeObjectPhone") != m.end() && !m["noticeObjectPhone"].empty()) {
      noticeObjectPhone = make_shared<string>(boost::any_cast<string>(m["noticeObjectPhone"]));
    }
  }


  virtual ~ListIncidentDetailEscalationPlansResponseBodyDataNuAcknowledgeEscalationPlanNoticeObjectList() = default;
};
class ListIncidentDetailEscalationPlansResponseBodyDataNuAcknowledgeEscalationPlan : public Darabonba::Model {
public:
  shared_ptr<string> escalationPlanType{};
  shared_ptr<long> noticeTime{};
  shared_ptr<string> status{};
  shared_ptr<long> startTime{};
  shared_ptr<vector<string>> noticeChannels{};
  shared_ptr<vector<ListIncidentDetailEscalationPlansResponseBodyDataNuAcknowledgeEscalationPlanNoticeObjectList>> noticeObjectList{};

  ListIncidentDetailEscalationPlansResponseBodyDataNuAcknowledgeEscalationPlan() {}

  explicit ListIncidentDetailEscalationPlansResponseBodyDataNuAcknowledgeEscalationPlan(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (escalationPlanType) {
      res["escalationPlanType"] = boost::any(*escalationPlanType);
    }
    if (noticeTime) {
      res["noticeTime"] = boost::any(*noticeTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (noticeChannels) {
      res["noticeChannels"] = boost::any(*noticeChannels);
    }
    if (noticeObjectList) {
      vector<boost::any> temp1;
      for(auto item1:*noticeObjectList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["noticeObjectList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("escalationPlanType") != m.end() && !m["escalationPlanType"].empty()) {
      escalationPlanType = make_shared<string>(boost::any_cast<string>(m["escalationPlanType"]));
    }
    if (m.find("noticeTime") != m.end() && !m["noticeTime"].empty()) {
      noticeTime = make_shared<long>(boost::any_cast<long>(m["noticeTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("noticeChannels") != m.end() && !m["noticeChannels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["noticeChannels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["noticeChannels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      noticeChannels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("noticeObjectList") != m.end() && !m["noticeObjectList"].empty()) {
      if (typeid(vector<boost::any>) == m["noticeObjectList"].type()) {
        vector<ListIncidentDetailEscalationPlansResponseBodyDataNuAcknowledgeEscalationPlanNoticeObjectList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["noticeObjectList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIncidentDetailEscalationPlansResponseBodyDataNuAcknowledgeEscalationPlanNoticeObjectList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        noticeObjectList = make_shared<vector<ListIncidentDetailEscalationPlansResponseBodyDataNuAcknowledgeEscalationPlanNoticeObjectList>>(expect1);
      }
    }
  }


  virtual ~ListIncidentDetailEscalationPlansResponseBodyDataNuAcknowledgeEscalationPlan() = default;
};
class ListIncidentDetailEscalationPlansResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> escalationPlanId{};
  shared_ptr<string> escalationPlanName{};
  shared_ptr<vector<ListIncidentDetailEscalationPlansResponseBodyDataUnFinishEscalationPlan>> unFinishEscalationPlan{};
  shared_ptr<vector<ListIncidentDetailEscalationPlansResponseBodyDataNuAcknowledgeEscalationPlan>> nuAcknowledgeEscalationPlan{};

  ListIncidentDetailEscalationPlansResponseBodyData() {}

  explicit ListIncidentDetailEscalationPlansResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (escalationPlanId) {
      res["escalationPlanId"] = boost::any(*escalationPlanId);
    }
    if (escalationPlanName) {
      res["escalationPlanName"] = boost::any(*escalationPlanName);
    }
    if (unFinishEscalationPlan) {
      vector<boost::any> temp1;
      for(auto item1:*unFinishEscalationPlan){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["unFinishEscalationPlan"] = boost::any(temp1);
    }
    if (nuAcknowledgeEscalationPlan) {
      vector<boost::any> temp1;
      for(auto item1:*nuAcknowledgeEscalationPlan){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["nuAcknowledgeEscalationPlan"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("escalationPlanId") != m.end() && !m["escalationPlanId"].empty()) {
      escalationPlanId = make_shared<long>(boost::any_cast<long>(m["escalationPlanId"]));
    }
    if (m.find("escalationPlanName") != m.end() && !m["escalationPlanName"].empty()) {
      escalationPlanName = make_shared<string>(boost::any_cast<string>(m["escalationPlanName"]));
    }
    if (m.find("unFinishEscalationPlan") != m.end() && !m["unFinishEscalationPlan"].empty()) {
      if (typeid(vector<boost::any>) == m["unFinishEscalationPlan"].type()) {
        vector<ListIncidentDetailEscalationPlansResponseBodyDataUnFinishEscalationPlan> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["unFinishEscalationPlan"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIncidentDetailEscalationPlansResponseBodyDataUnFinishEscalationPlan model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        unFinishEscalationPlan = make_shared<vector<ListIncidentDetailEscalationPlansResponseBodyDataUnFinishEscalationPlan>>(expect1);
      }
    }
    if (m.find("nuAcknowledgeEscalationPlan") != m.end() && !m["nuAcknowledgeEscalationPlan"].empty()) {
      if (typeid(vector<boost::any>) == m["nuAcknowledgeEscalationPlan"].type()) {
        vector<ListIncidentDetailEscalationPlansResponseBodyDataNuAcknowledgeEscalationPlan> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["nuAcknowledgeEscalationPlan"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIncidentDetailEscalationPlansResponseBodyDataNuAcknowledgeEscalationPlan model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nuAcknowledgeEscalationPlan = make_shared<vector<ListIncidentDetailEscalationPlansResponseBodyDataNuAcknowledgeEscalationPlan>>(expect1);
      }
    }
  }


  virtual ~ListIncidentDetailEscalationPlansResponseBodyData() = default;
};
class ListIncidentDetailEscalationPlansResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListIncidentDetailEscalationPlansResponseBodyData> data{};

  ListIncidentDetailEscalationPlansResponseBody() {}

  explicit ListIncidentDetailEscalationPlansResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListIncidentDetailEscalationPlansResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListIncidentDetailEscalationPlansResponseBodyData>(model1);
      }
    }
  }


  virtual ~ListIncidentDetailEscalationPlansResponseBody() = default;
};
class ListIncidentDetailEscalationPlansResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListIncidentDetailEscalationPlansResponseBody> body{};

  ListIncidentDetailEscalationPlansResponse() {}

  explicit ListIncidentDetailEscalationPlansResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListIncidentDetailEscalationPlansResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListIncidentDetailEscalationPlansResponseBody>(model1);
      }
    }
  }


  virtual ~ListIncidentDetailEscalationPlansResponse() = default;
};
class ListIncidentSubtotalsRequest : public Darabonba::Model {
public:
  shared_ptr<long> incidentId{};
  shared_ptr<string> clientToken{};

  ListIncidentSubtotalsRequest() {}

  explicit ListIncidentSubtotalsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (incidentId) {
      res["incidentId"] = boost::any(*incidentId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("incidentId") != m.end() && !m["incidentId"].empty()) {
      incidentId = make_shared<long>(boost::any_cast<long>(m["incidentId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~ListIncidentSubtotalsRequest() = default;
};
class ListIncidentSubtotalsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> createTime{};
  shared_ptr<string> createUserName{};
  shared_ptr<string> createUserPhone{};

  ListIncidentSubtotalsResponseBodyData() {}

  explicit ListIncidentSubtotalsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (createUserName) {
      res["createUserName"] = boost::any(*createUserName);
    }
    if (createUserPhone) {
      res["createUserPhone"] = boost::any(*createUserPhone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("createUserName") != m.end() && !m["createUserName"].empty()) {
      createUserName = make_shared<string>(boost::any_cast<string>(m["createUserName"]));
    }
    if (m.find("createUserPhone") != m.end() && !m["createUserPhone"].empty()) {
      createUserPhone = make_shared<string>(boost::any_cast<string>(m["createUserPhone"]));
    }
  }


  virtual ~ListIncidentSubtotalsResponseBodyData() = default;
};
class ListIncidentSubtotalsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListIncidentSubtotalsResponseBodyData>> data{};

  ListIncidentSubtotalsResponseBody() {}

  explicit ListIncidentSubtotalsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListIncidentSubtotalsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIncidentSubtotalsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListIncidentSubtotalsResponseBodyData>>(expect1);
      }
    }
  }


  virtual ~ListIncidentSubtotalsResponseBody() = default;
};
class ListIncidentSubtotalsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListIncidentSubtotalsResponseBody> body{};

  ListIncidentSubtotalsResponse() {}

  explicit ListIncidentSubtotalsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListIncidentSubtotalsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListIncidentSubtotalsResponseBody>(model1);
      }
    }
  }


  virtual ~ListIncidentSubtotalsResponse() = default;
};
class ListDictionariesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};

  ListDictionariesRequest() {}

  explicit ListDictionariesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~ListDictionariesRequest() = default;
};
class ListDictionariesResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, vector<DataValue>>> data{};
  shared_ptr<string> requestId{};

  ListDictionariesResponseBody() {}

  explicit ListDictionariesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      map<string, boost::any> temp1;
      for(auto item1:*data){
        vector<boost::any> temp2;
        for(auto item2:item1.second){
          temp2.push_back(boost::any(item2.toMap()));
        }
        temp1[item1.first] = boost::any(temp2);
      }
      res["data"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        map<string, vector<DataValue>> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["data"])){
          if (typeid(vector<boost::any>) == item1.second.type()) {
            vector<DataValue> expect2;
            for(auto item2:boost::any_cast<vector<boost::any>>(item1.second)){
              if (typeid(map<string, boost::any>) == item2.type()) {
                DataValue model3;
                model3.fromMap(boost::any_cast<map<string, boost::any>>(item2));
                expect2.push_back(model3);
              }
            }
            expect1[item1.first] = expect2;
          }
        }
        data = make_shared<map<string, vector<DataValue>>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListDictionariesResponseBody() = default;
};
class ListDictionariesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDictionariesResponseBody> body{};

  ListDictionariesResponse() {}

  explicit ListDictionariesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDictionariesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDictionariesResponseBody>(model1);
      }
    }
  }


  virtual ~ListDictionariesResponse() = default;
};
class ConfirmIntegrationConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> integrationConfigId{};
  shared_ptr<string> clientToken{};

  ConfirmIntegrationConfigRequest() {}

  explicit ConfirmIntegrationConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (integrationConfigId) {
      res["integrationConfigId"] = boost::any(*integrationConfigId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("integrationConfigId") != m.end() && !m["integrationConfigId"].empty()) {
      integrationConfigId = make_shared<long>(boost::any_cast<long>(m["integrationConfigId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~ConfirmIntegrationConfigRequest() = default;
};
class ConfirmIntegrationConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ConfirmIntegrationConfigResponseBody() {}

  explicit ConfirmIntegrationConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ConfirmIntegrationConfigResponseBody() = default;
};
class ConfirmIntegrationConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ConfirmIntegrationConfigResponseBody> body{};

  ConfirmIntegrationConfigResponse() {}

  explicit ConfirmIntegrationConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ConfirmIntegrationConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfirmIntegrationConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ConfirmIntegrationConfigResponse() = default;
};
class ListIncidentDetailTimelinesRequest : public Darabonba::Model {
public:
  shared_ptr<long> incidentId{};
  shared_ptr<string> clientToken{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListIncidentDetailTimelinesRequest() {}

  explicit ListIncidentDetailTimelinesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (incidentId) {
      res["incidentId"] = boost::any(*incidentId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("incidentId") != m.end() && !m["incidentId"].empty()) {
      incidentId = make_shared<long>(boost::any_cast<long>(m["incidentId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListIncidentDetailTimelinesRequest() = default;
};
class ListIncidentDetailTimelinesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> title{};
  shared_ptr<string> description{};
  shared_ptr<string> remark{};
  shared_ptr<string> relatedServiceName{};
  shared_ptr<string> createTime{};
  shared_ptr<long> incidentId{};
  shared_ptr<string> action{};

  ListIncidentDetailTimelinesResponseBodyData() {}

  explicit ListIncidentDetailTimelinesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    if (relatedServiceName) {
      res["relatedServiceName"] = boost::any(*relatedServiceName);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (incidentId) {
      res["incidentId"] = boost::any(*incidentId);
    }
    if (action) {
      res["action"] = boost::any(*action);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
    if (m.find("relatedServiceName") != m.end() && !m["relatedServiceName"].empty()) {
      relatedServiceName = make_shared<string>(boost::any_cast<string>(m["relatedServiceName"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("incidentId") != m.end() && !m["incidentId"].empty()) {
      incidentId = make_shared<long>(boost::any_cast<long>(m["incidentId"]));
    }
    if (m.find("action") != m.end() && !m["action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["action"]));
    }
  }


  virtual ~ListIncidentDetailTimelinesResponseBodyData() = default;
};
class ListIncidentDetailTimelinesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListIncidentDetailTimelinesResponseBodyData>> data{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListIncidentDetailTimelinesResponseBody() {}

  explicit ListIncidentDetailTimelinesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListIncidentDetailTimelinesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIncidentDetailTimelinesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListIncidentDetailTimelinesResponseBodyData>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListIncidentDetailTimelinesResponseBody() = default;
};
class ListIncidentDetailTimelinesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListIncidentDetailTimelinesResponseBody> body{};

  ListIncidentDetailTimelinesResponse() {}

  explicit ListIncidentDetailTimelinesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListIncidentDetailTimelinesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListIncidentDetailTimelinesResponseBody>(model1);
      }
    }
  }


  virtual ~ListIncidentDetailTimelinesResponse() = default;
};
class EnableServiceGroupWebhookRequest : public Darabonba::Model {
public:
  shared_ptr<long> serviceGroupId{};
  shared_ptr<string> clientToken{};

  EnableServiceGroupWebhookRequest() {}

  explicit EnableServiceGroupWebhookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceGroupId) {
      res["serviceGroupId"] = boost::any(*serviceGroupId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceGroupId") != m.end() && !m["serviceGroupId"].empty()) {
      serviceGroupId = make_shared<long>(boost::any_cast<long>(m["serviceGroupId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~EnableServiceGroupWebhookRequest() = default;
};
class EnableServiceGroupWebhookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableServiceGroupWebhookResponseBody() {}

  explicit EnableServiceGroupWebhookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableServiceGroupWebhookResponseBody() = default;
};
class EnableServiceGroupWebhookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableServiceGroupWebhookResponseBody> body{};

  EnableServiceGroupWebhookResponse() {}

  explicit EnableServiceGroupWebhookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EnableServiceGroupWebhookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableServiceGroupWebhookResponseBody>(model1);
      }
    }
  }


  virtual ~EnableServiceGroupWebhookResponse() = default;
};
class DisableEscalationPlanRequest : public Darabonba::Model {
public:
  shared_ptr<long> escalationPlanId{};
  shared_ptr<string> clientToken{};

  DisableEscalationPlanRequest() {}

  explicit DisableEscalationPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (escalationPlanId) {
      res["escalationPlanId"] = boost::any(*escalationPlanId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("escalationPlanId") != m.end() && !m["escalationPlanId"].empty()) {
      escalationPlanId = make_shared<long>(boost::any_cast<long>(m["escalationPlanId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~DisableEscalationPlanRequest() = default;
};
class DisableEscalationPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableEscalationPlanResponseBody() {}

  explicit DisableEscalationPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableEscalationPlanResponseBody() = default;
};
class DisableEscalationPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DisableEscalationPlanResponseBody> body{};

  DisableEscalationPlanResponse() {}

  explicit DisableEscalationPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DisableEscalationPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableEscalationPlanResponseBody>(model1);
      }
    }
  }


  virtual ~DisableEscalationPlanResponse() = default;
};
class DeleteSubscriptionRequest : public Darabonba::Model {
public:
  shared_ptr<long> subscriptionId{};

  DeleteSubscriptionRequest() {}

  explicit DeleteSubscriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subscriptionId) {
      res["subscriptionId"] = boost::any(*subscriptionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("subscriptionId") != m.end() && !m["subscriptionId"].empty()) {
      subscriptionId = make_shared<long>(boost::any_cast<long>(m["subscriptionId"]));
    }
  }


  virtual ~DeleteSubscriptionRequest() = default;
};
class DeleteSubscriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteSubscriptionResponseBody() {}

  explicit DeleteSubscriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteSubscriptionResponseBody() = default;
};
class DeleteSubscriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteSubscriptionResponseBody> body{};

  DeleteSubscriptionResponse() {}

  explicit DeleteSubscriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteSubscriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSubscriptionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSubscriptionResponse() = default;
};
class UpdateServiceGroupSpecialDaySchedulingRequestSchedulingSpecialDays : public Darabonba::Model {
public:
  shared_ptr<string> schedulingStartTime{};
  shared_ptr<string> schedulingEndTime{};
  shared_ptr<long> schedulingUserId{};
  shared_ptr<long> schedulingOrder{};

  UpdateServiceGroupSpecialDaySchedulingRequestSchedulingSpecialDays() {}

  explicit UpdateServiceGroupSpecialDaySchedulingRequestSchedulingSpecialDays(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schedulingStartTime) {
      res["schedulingStartTime"] = boost::any(*schedulingStartTime);
    }
    if (schedulingEndTime) {
      res["schedulingEndTime"] = boost::any(*schedulingEndTime);
    }
    if (schedulingUserId) {
      res["schedulingUserId"] = boost::any(*schedulingUserId);
    }
    if (schedulingOrder) {
      res["schedulingOrder"] = boost::any(*schedulingOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("schedulingStartTime") != m.end() && !m["schedulingStartTime"].empty()) {
      schedulingStartTime = make_shared<string>(boost::any_cast<string>(m["schedulingStartTime"]));
    }
    if (m.find("schedulingEndTime") != m.end() && !m["schedulingEndTime"].empty()) {
      schedulingEndTime = make_shared<string>(boost::any_cast<string>(m["schedulingEndTime"]));
    }
    if (m.find("schedulingUserId") != m.end() && !m["schedulingUserId"].empty()) {
      schedulingUserId = make_shared<long>(boost::any_cast<long>(m["schedulingUserId"]));
    }
    if (m.find("schedulingOrder") != m.end() && !m["schedulingOrder"].empty()) {
      schedulingOrder = make_shared<long>(boost::any_cast<long>(m["schedulingOrder"]));
    }
  }


  virtual ~UpdateServiceGroupSpecialDaySchedulingRequestSchedulingSpecialDays() = default;
};
class UpdateServiceGroupSpecialDaySchedulingRequest : public Darabonba::Model {
public:
  shared_ptr<long> serviceGroupId{};
  shared_ptr<string> schedulingDate{};
  shared_ptr<vector<UpdateServiceGroupSpecialDaySchedulingRequestSchedulingSpecialDays>> schedulingSpecialDays{};
  shared_ptr<string> clientToken{};

  UpdateServiceGroupSpecialDaySchedulingRequest() {}

  explicit UpdateServiceGroupSpecialDaySchedulingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceGroupId) {
      res["serviceGroupId"] = boost::any(*serviceGroupId);
    }
    if (schedulingDate) {
      res["schedulingDate"] = boost::any(*schedulingDate);
    }
    if (schedulingSpecialDays) {
      vector<boost::any> temp1;
      for(auto item1:*schedulingSpecialDays){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["schedulingSpecialDays"] = boost::any(temp1);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceGroupId") != m.end() && !m["serviceGroupId"].empty()) {
      serviceGroupId = make_shared<long>(boost::any_cast<long>(m["serviceGroupId"]));
    }
    if (m.find("schedulingDate") != m.end() && !m["schedulingDate"].empty()) {
      schedulingDate = make_shared<string>(boost::any_cast<string>(m["schedulingDate"]));
    }
    if (m.find("schedulingSpecialDays") != m.end() && !m["schedulingSpecialDays"].empty()) {
      if (typeid(vector<boost::any>) == m["schedulingSpecialDays"].type()) {
        vector<UpdateServiceGroupSpecialDaySchedulingRequestSchedulingSpecialDays> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["schedulingSpecialDays"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateServiceGroupSpecialDaySchedulingRequestSchedulingSpecialDays model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        schedulingSpecialDays = make_shared<vector<UpdateServiceGroupSpecialDaySchedulingRequestSchedulingSpecialDays>>(expect1);
      }
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~UpdateServiceGroupSpecialDaySchedulingRequest() = default;
};
class UpdateServiceGroupSpecialDaySchedulingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateServiceGroupSpecialDaySchedulingResponseBody() {}

  explicit UpdateServiceGroupSpecialDaySchedulingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateServiceGroupSpecialDaySchedulingResponseBody() = default;
};
class UpdateServiceGroupSpecialDaySchedulingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateServiceGroupSpecialDaySchedulingResponseBody> body{};

  UpdateServiceGroupSpecialDaySchedulingResponse() {}

  explicit UpdateServiceGroupSpecialDaySchedulingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateServiceGroupSpecialDaySchedulingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServiceGroupSpecialDaySchedulingResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServiceGroupSpecialDaySchedulingResponse() = default;
};
class ListSubscriptionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> subscriptionTitle{};
  shared_ptr<string> scope{};
  shared_ptr<string> scopeObject{};
  shared_ptr<string> notifyObjectType{};
  shared_ptr<string> notifyObject{};
  shared_ptr<string> clientToken{};

  ListSubscriptionsRequest() {}

  explicit ListSubscriptionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (subscriptionTitle) {
      res["subscriptionTitle"] = boost::any(*subscriptionTitle);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (scopeObject) {
      res["scopeObject"] = boost::any(*scopeObject);
    }
    if (notifyObjectType) {
      res["notifyObjectType"] = boost::any(*notifyObjectType);
    }
    if (notifyObject) {
      res["notifyObject"] = boost::any(*notifyObject);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("subscriptionTitle") != m.end() && !m["subscriptionTitle"].empty()) {
      subscriptionTitle = make_shared<string>(boost::any_cast<string>(m["subscriptionTitle"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
    if (m.find("scopeObject") != m.end() && !m["scopeObject"].empty()) {
      scopeObject = make_shared<string>(boost::any_cast<string>(m["scopeObject"]));
    }
    if (m.find("notifyObjectType") != m.end() && !m["notifyObjectType"].empty()) {
      notifyObjectType = make_shared<string>(boost::any_cast<string>(m["notifyObjectType"]));
    }
    if (m.find("notifyObject") != m.end() && !m["notifyObject"].empty()) {
      notifyObject = make_shared<string>(boost::any_cast<string>(m["notifyObject"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~ListSubscriptionsRequest() = default;
};
class ListSubscriptionsResponseBodyDataScopeObjectList : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<long> scope{};
  shared_ptr<long> scopeObjectId{};
  shared_ptr<string> scopeObject{};

  ListSubscriptionsResponseBodyDataScopeObjectList() {}

  explicit ListSubscriptionsResponseBodyDataScopeObjectList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (scopeObjectId) {
      res["scopeObjectId"] = boost::any(*scopeObjectId);
    }
    if (scopeObject) {
      res["scopeObject"] = boost::any(*scopeObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<long>(boost::any_cast<long>(m["scope"]));
    }
    if (m.find("scopeObjectId") != m.end() && !m["scopeObjectId"].empty()) {
      scopeObjectId = make_shared<long>(boost::any_cast<long>(m["scopeObjectId"]));
    }
    if (m.find("scopeObject") != m.end() && !m["scopeObject"].empty()) {
      scopeObject = make_shared<string>(boost::any_cast<string>(m["scopeObject"]));
    }
  }


  virtual ~ListSubscriptionsResponseBodyDataScopeObjectList() = default;
};
class ListSubscriptionsResponseBodyDataNotifyObjectList : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<long> notifyObjectType{};
  shared_ptr<long> notifyObjectId{};
  shared_ptr<string> name{};

  ListSubscriptionsResponseBodyDataNotifyObjectList() {}

  explicit ListSubscriptionsResponseBodyDataNotifyObjectList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (notifyObjectType) {
      res["notifyObjectType"] = boost::any(*notifyObjectType);
    }
    if (notifyObjectId) {
      res["notifyObjectId"] = boost::any(*notifyObjectId);
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
    if (m.find("notifyObjectType") != m.end() && !m["notifyObjectType"].empty()) {
      notifyObjectType = make_shared<long>(boost::any_cast<long>(m["notifyObjectType"]));
    }
    if (m.find("notifyObjectId") != m.end() && !m["notifyObjectId"].empty()) {
      notifyObjectId = make_shared<long>(boost::any_cast<long>(m["notifyObjectId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ListSubscriptionsResponseBodyDataNotifyObjectList() = default;
};
class ListSubscriptionsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> subscriptionId{};
  shared_ptr<string> subscriptionTitle{};
  shared_ptr<long> scope{};
  shared_ptr<long> notifyObjectType{};
  shared_ptr<string> expiredType{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListSubscriptionsResponseBodyDataScopeObjectList>> scopeObjectList{};
  shared_ptr<vector<ListSubscriptionsResponseBodyDataNotifyObjectList>> notifyObjectList{};

  ListSubscriptionsResponseBodyData() {}

  explicit ListSubscriptionsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subscriptionId) {
      res["subscriptionId"] = boost::any(*subscriptionId);
    }
    if (subscriptionTitle) {
      res["subscriptionTitle"] = boost::any(*subscriptionTitle);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (notifyObjectType) {
      res["notifyObjectType"] = boost::any(*notifyObjectType);
    }
    if (expiredType) {
      res["expiredType"] = boost::any(*expiredType);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (scopeObjectList) {
      vector<boost::any> temp1;
      for(auto item1:*scopeObjectList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["scopeObjectList"] = boost::any(temp1);
    }
    if (notifyObjectList) {
      vector<boost::any> temp1;
      for(auto item1:*notifyObjectList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["notifyObjectList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("subscriptionId") != m.end() && !m["subscriptionId"].empty()) {
      subscriptionId = make_shared<long>(boost::any_cast<long>(m["subscriptionId"]));
    }
    if (m.find("subscriptionTitle") != m.end() && !m["subscriptionTitle"].empty()) {
      subscriptionTitle = make_shared<string>(boost::any_cast<string>(m["subscriptionTitle"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<long>(boost::any_cast<long>(m["scope"]));
    }
    if (m.find("notifyObjectType") != m.end() && !m["notifyObjectType"].empty()) {
      notifyObjectType = make_shared<long>(boost::any_cast<long>(m["notifyObjectType"]));
    }
    if (m.find("expiredType") != m.end() && !m["expiredType"].empty()) {
      expiredType = make_shared<string>(boost::any_cast<string>(m["expiredType"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("scopeObjectList") != m.end() && !m["scopeObjectList"].empty()) {
      if (typeid(vector<boost::any>) == m["scopeObjectList"].type()) {
        vector<ListSubscriptionsResponseBodyDataScopeObjectList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["scopeObjectList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSubscriptionsResponseBodyDataScopeObjectList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scopeObjectList = make_shared<vector<ListSubscriptionsResponseBodyDataScopeObjectList>>(expect1);
      }
    }
    if (m.find("notifyObjectList") != m.end() && !m["notifyObjectList"].empty()) {
      if (typeid(vector<boost::any>) == m["notifyObjectList"].type()) {
        vector<ListSubscriptionsResponseBodyDataNotifyObjectList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["notifyObjectList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSubscriptionsResponseBodyDataNotifyObjectList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        notifyObjectList = make_shared<vector<ListSubscriptionsResponseBodyDataNotifyObjectList>>(expect1);
      }
    }
  }


  virtual ~ListSubscriptionsResponseBodyData() = default;
};
class ListSubscriptionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSubscriptionsResponseBodyData>> data{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListSubscriptionsResponseBody() {}

  explicit ListSubscriptionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListSubscriptionsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSubscriptionsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListSubscriptionsResponseBodyData>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListSubscriptionsResponseBody() = default;
};
class ListSubscriptionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSubscriptionsResponseBody> body{};

  ListSubscriptionsResponse() {}

  explicit ListSubscriptionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSubscriptionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSubscriptionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSubscriptionsResponse() = default;
};
class GetServiceGroupSchedulingRequest : public Darabonba::Model {
public:
  shared_ptr<long> serviceGroupId{};
  shared_ptr<string> clientToken{};

  GetServiceGroupSchedulingRequest() {}

  explicit GetServiceGroupSchedulingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceGroupId) {
      res["serviceGroupId"] = boost::any(*serviceGroupId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceGroupId") != m.end() && !m["serviceGroupId"].empty()) {
      serviceGroupId = make_shared<long>(boost::any_cast<long>(m["serviceGroupId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~GetServiceGroupSchedulingRequest() = default;
};
class GetServiceGroupSchedulingResponseBodyDataFastSchedulingSchedulingUsers : public Darabonba::Model {
public:
  shared_ptr<long> schedulingUserId{};
  shared_ptr<long> schedulingOrder{};
  shared_ptr<string> schedulingUserName{};

  GetServiceGroupSchedulingResponseBodyDataFastSchedulingSchedulingUsers() {}

  explicit GetServiceGroupSchedulingResponseBodyDataFastSchedulingSchedulingUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schedulingUserId) {
      res["schedulingUserId"] = boost::any(*schedulingUserId);
    }
    if (schedulingOrder) {
      res["schedulingOrder"] = boost::any(*schedulingOrder);
    }
    if (schedulingUserName) {
      res["schedulingUserName"] = boost::any(*schedulingUserName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("schedulingUserId") != m.end() && !m["schedulingUserId"].empty()) {
      schedulingUserId = make_shared<long>(boost::any_cast<long>(m["schedulingUserId"]));
    }
    if (m.find("schedulingOrder") != m.end() && !m["schedulingOrder"].empty()) {
      schedulingOrder = make_shared<long>(boost::any_cast<long>(m["schedulingOrder"]));
    }
    if (m.find("schedulingUserName") != m.end() && !m["schedulingUserName"].empty()) {
      schedulingUserName = make_shared<string>(boost::any_cast<string>(m["schedulingUserName"]));
    }
  }


  virtual ~GetServiceGroupSchedulingResponseBodyDataFastSchedulingSchedulingUsers() = default;
};
class GetServiceGroupSchedulingResponseBodyDataFastScheduling : public Darabonba::Model {
public:
  shared_ptr<long> singleDuration{};
  shared_ptr<string> dutyPlan{};
  shared_ptr<string> singleDurationUnit{};
  shared_ptr<vector<GetServiceGroupSchedulingResponseBodyDataFastSchedulingSchedulingUsers>> schedulingUsers{};
  shared_ptr<long> id{};

  GetServiceGroupSchedulingResponseBodyDataFastScheduling() {}

  explicit GetServiceGroupSchedulingResponseBodyDataFastScheduling(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (singleDuration) {
      res["singleDuration"] = boost::any(*singleDuration);
    }
    if (dutyPlan) {
      res["dutyPlan"] = boost::any(*dutyPlan);
    }
    if (singleDurationUnit) {
      res["singleDurationUnit"] = boost::any(*singleDurationUnit);
    }
    if (schedulingUsers) {
      vector<boost::any> temp1;
      for(auto item1:*schedulingUsers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["schedulingUsers"] = boost::any(temp1);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("singleDuration") != m.end() && !m["singleDuration"].empty()) {
      singleDuration = make_shared<long>(boost::any_cast<long>(m["singleDuration"]));
    }
    if (m.find("dutyPlan") != m.end() && !m["dutyPlan"].empty()) {
      dutyPlan = make_shared<string>(boost::any_cast<string>(m["dutyPlan"]));
    }
    if (m.find("singleDurationUnit") != m.end() && !m["singleDurationUnit"].empty()) {
      singleDurationUnit = make_shared<string>(boost::any_cast<string>(m["singleDurationUnit"]));
    }
    if (m.find("schedulingUsers") != m.end() && !m["schedulingUsers"].empty()) {
      if (typeid(vector<boost::any>) == m["schedulingUsers"].type()) {
        vector<GetServiceGroupSchedulingResponseBodyDataFastSchedulingSchedulingUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["schedulingUsers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceGroupSchedulingResponseBodyDataFastSchedulingSchedulingUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        schedulingUsers = make_shared<vector<GetServiceGroupSchedulingResponseBodyDataFastSchedulingSchedulingUsers>>(expect1);
      }
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
  }


  virtual ~GetServiceGroupSchedulingResponseBodyDataFastScheduling() = default;
};
class GetServiceGroupSchedulingResponseBodyDataFineSchedulingSchedulingFineShifts : public Darabonba::Model {
public:
  shared_ptr<string> schedulingStartTime{};
  shared_ptr<string> schedulingEndTime{};
  shared_ptr<long> schedulingOrder{};
  shared_ptr<string> shiftName{};
  shared_ptr<long> cycleOrder{};
  shared_ptr<long> schedulingUserId{};
  shared_ptr<bool> skipOneDay{};
  shared_ptr<string> schedulingUserName{};

  GetServiceGroupSchedulingResponseBodyDataFineSchedulingSchedulingFineShifts() {}

  explicit GetServiceGroupSchedulingResponseBodyDataFineSchedulingSchedulingFineShifts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schedulingStartTime) {
      res["schedulingStartTime"] = boost::any(*schedulingStartTime);
    }
    if (schedulingEndTime) {
      res["schedulingEndTime"] = boost::any(*schedulingEndTime);
    }
    if (schedulingOrder) {
      res["schedulingOrder"] = boost::any(*schedulingOrder);
    }
    if (shiftName) {
      res["shiftName"] = boost::any(*shiftName);
    }
    if (cycleOrder) {
      res["cycleOrder"] = boost::any(*cycleOrder);
    }
    if (schedulingUserId) {
      res["schedulingUserId"] = boost::any(*schedulingUserId);
    }
    if (skipOneDay) {
      res["skipOneDay"] = boost::any(*skipOneDay);
    }
    if (schedulingUserName) {
      res["schedulingUserName"] = boost::any(*schedulingUserName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("schedulingStartTime") != m.end() && !m["schedulingStartTime"].empty()) {
      schedulingStartTime = make_shared<string>(boost::any_cast<string>(m["schedulingStartTime"]));
    }
    if (m.find("schedulingEndTime") != m.end() && !m["schedulingEndTime"].empty()) {
      schedulingEndTime = make_shared<string>(boost::any_cast<string>(m["schedulingEndTime"]));
    }
    if (m.find("schedulingOrder") != m.end() && !m["schedulingOrder"].empty()) {
      schedulingOrder = make_shared<long>(boost::any_cast<long>(m["schedulingOrder"]));
    }
    if (m.find("shiftName") != m.end() && !m["shiftName"].empty()) {
      shiftName = make_shared<string>(boost::any_cast<string>(m["shiftName"]));
    }
    if (m.find("cycleOrder") != m.end() && !m["cycleOrder"].empty()) {
      cycleOrder = make_shared<long>(boost::any_cast<long>(m["cycleOrder"]));
    }
    if (m.find("schedulingUserId") != m.end() && !m["schedulingUserId"].empty()) {
      schedulingUserId = make_shared<long>(boost::any_cast<long>(m["schedulingUserId"]));
    }
    if (m.find("skipOneDay") != m.end() && !m["skipOneDay"].empty()) {
      skipOneDay = make_shared<bool>(boost::any_cast<bool>(m["skipOneDay"]));
    }
    if (m.find("schedulingUserName") != m.end() && !m["schedulingUserName"].empty()) {
      schedulingUserName = make_shared<string>(boost::any_cast<string>(m["schedulingUserName"]));
    }
  }


  virtual ~GetServiceGroupSchedulingResponseBodyDataFineSchedulingSchedulingFineShifts() = default;
};
class GetServiceGroupSchedulingResponseBodyDataFineSchedulingSchedulingTemplateFineShifts : public Darabonba::Model {
public:
  shared_ptr<string> schedulingStartTime{};
  shared_ptr<string> schedulingEndTime{};
  shared_ptr<long> schedulingOrder{};
  shared_ptr<string> schedulingUserId{};
  shared_ptr<bool> skipOneDay{};
  shared_ptr<string> schedulingUserName{};
  shared_ptr<string> shiftName{};

  GetServiceGroupSchedulingResponseBodyDataFineSchedulingSchedulingTemplateFineShifts() {}

  explicit GetServiceGroupSchedulingResponseBodyDataFineSchedulingSchedulingTemplateFineShifts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schedulingStartTime) {
      res["schedulingStartTime"] = boost::any(*schedulingStartTime);
    }
    if (schedulingEndTime) {
      res["schedulingEndTime"] = boost::any(*schedulingEndTime);
    }
    if (schedulingOrder) {
      res["schedulingOrder"] = boost::any(*schedulingOrder);
    }
    if (schedulingUserId) {
      res["schedulingUserId"] = boost::any(*schedulingUserId);
    }
    if (skipOneDay) {
      res["skipOneDay"] = boost::any(*skipOneDay);
    }
    if (schedulingUserName) {
      res["schedulingUserName"] = boost::any(*schedulingUserName);
    }
    if (shiftName) {
      res["shiftName"] = boost::any(*shiftName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("schedulingStartTime") != m.end() && !m["schedulingStartTime"].empty()) {
      schedulingStartTime = make_shared<string>(boost::any_cast<string>(m["schedulingStartTime"]));
    }
    if (m.find("schedulingEndTime") != m.end() && !m["schedulingEndTime"].empty()) {
      schedulingEndTime = make_shared<string>(boost::any_cast<string>(m["schedulingEndTime"]));
    }
    if (m.find("schedulingOrder") != m.end() && !m["schedulingOrder"].empty()) {
      schedulingOrder = make_shared<long>(boost::any_cast<long>(m["schedulingOrder"]));
    }
    if (m.find("schedulingUserId") != m.end() && !m["schedulingUserId"].empty()) {
      schedulingUserId = make_shared<string>(boost::any_cast<string>(m["schedulingUserId"]));
    }
    if (m.find("skipOneDay") != m.end() && !m["skipOneDay"].empty()) {
      skipOneDay = make_shared<bool>(boost::any_cast<bool>(m["skipOneDay"]));
    }
    if (m.find("schedulingUserName") != m.end() && !m["schedulingUserName"].empty()) {
      schedulingUserName = make_shared<string>(boost::any_cast<string>(m["schedulingUserName"]));
    }
    if (m.find("shiftName") != m.end() && !m["shiftName"].empty()) {
      shiftName = make_shared<string>(boost::any_cast<string>(m["shiftName"]));
    }
  }


  virtual ~GetServiceGroupSchedulingResponseBodyDataFineSchedulingSchedulingTemplateFineShifts() = default;
};
class GetServiceGroupSchedulingResponseBodyDataFineScheduling : public Darabonba::Model {
public:
  shared_ptr<long> period{};
  shared_ptr<long> id{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> shiftType{};
  shared_ptr<vector<GetServiceGroupSchedulingResponseBodyDataFineSchedulingSchedulingFineShifts>> schedulingFineShifts{};
  shared_ptr<vector<GetServiceGroupSchedulingResponseBodyDataFineSchedulingSchedulingTemplateFineShifts>> schedulingTemplateFineShifts{};

  GetServiceGroupSchedulingResponseBodyDataFineScheduling() {}

  explicit GetServiceGroupSchedulingResponseBodyDataFineScheduling(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (period) {
      res["period"] = boost::any(*period);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (periodUnit) {
      res["periodUnit"] = boost::any(*periodUnit);
    }
    if (shiftType) {
      res["shiftType"] = boost::any(*shiftType);
    }
    if (schedulingFineShifts) {
      vector<boost::any> temp1;
      for(auto item1:*schedulingFineShifts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["schedulingFineShifts"] = boost::any(temp1);
    }
    if (schedulingTemplateFineShifts) {
      vector<boost::any> temp1;
      for(auto item1:*schedulingTemplateFineShifts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["schedulingTemplateFineShifts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("period") != m.end() && !m["period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["period"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("periodUnit") != m.end() && !m["periodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["periodUnit"]));
    }
    if (m.find("shiftType") != m.end() && !m["shiftType"].empty()) {
      shiftType = make_shared<string>(boost::any_cast<string>(m["shiftType"]));
    }
    if (m.find("schedulingFineShifts") != m.end() && !m["schedulingFineShifts"].empty()) {
      if (typeid(vector<boost::any>) == m["schedulingFineShifts"].type()) {
        vector<GetServiceGroupSchedulingResponseBodyDataFineSchedulingSchedulingFineShifts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["schedulingFineShifts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceGroupSchedulingResponseBodyDataFineSchedulingSchedulingFineShifts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        schedulingFineShifts = make_shared<vector<GetServiceGroupSchedulingResponseBodyDataFineSchedulingSchedulingFineShifts>>(expect1);
      }
    }
    if (m.find("schedulingTemplateFineShifts") != m.end() && !m["schedulingTemplateFineShifts"].empty()) {
      if (typeid(vector<boost::any>) == m["schedulingTemplateFineShifts"].type()) {
        vector<GetServiceGroupSchedulingResponseBodyDataFineSchedulingSchedulingTemplateFineShifts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["schedulingTemplateFineShifts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceGroupSchedulingResponseBodyDataFineSchedulingSchedulingTemplateFineShifts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        schedulingTemplateFineShifts = make_shared<vector<GetServiceGroupSchedulingResponseBodyDataFineSchedulingSchedulingTemplateFineShifts>>(expect1);
      }
    }
  }


  virtual ~GetServiceGroupSchedulingResponseBodyDataFineScheduling() = default;
};
class GetServiceGroupSchedulingResponseBodyDataUsers : public Darabonba::Model {
public:
  shared_ptr<long> userId{};
  shared_ptr<string> userName{};

  GetServiceGroupSchedulingResponseBodyDataUsers() {}

  explicit GetServiceGroupSchedulingResponseBodyDataUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    if (userName) {
      res["userName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["userId"]));
    }
    if (m.find("userName") != m.end() && !m["userName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["userName"]));
    }
  }


  virtual ~GetServiceGroupSchedulingResponseBodyDataUsers() = default;
};
class GetServiceGroupSchedulingResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> schedulingWay{};
  shared_ptr<long> serviceGroupId{};
  shared_ptr<GetServiceGroupSchedulingResponseBodyDataFastScheduling> fastScheduling{};
  shared_ptr<GetServiceGroupSchedulingResponseBodyDataFineScheduling> fineScheduling{};
  shared_ptr<vector<GetServiceGroupSchedulingResponseBodyDataUsers>> users{};

  GetServiceGroupSchedulingResponseBodyData() {}

  explicit GetServiceGroupSchedulingResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schedulingWay) {
      res["schedulingWay"] = boost::any(*schedulingWay);
    }
    if (serviceGroupId) {
      res["serviceGroupId"] = boost::any(*serviceGroupId);
    }
    if (fastScheduling) {
      res["fastScheduling"] = fastScheduling ? boost::any(fastScheduling->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fineScheduling) {
      res["fineScheduling"] = fineScheduling ? boost::any(fineScheduling->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (users) {
      vector<boost::any> temp1;
      for(auto item1:*users){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["users"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("schedulingWay") != m.end() && !m["schedulingWay"].empty()) {
      schedulingWay = make_shared<string>(boost::any_cast<string>(m["schedulingWay"]));
    }
    if (m.find("serviceGroupId") != m.end() && !m["serviceGroupId"].empty()) {
      serviceGroupId = make_shared<long>(boost::any_cast<long>(m["serviceGroupId"]));
    }
    if (m.find("fastScheduling") != m.end() && !m["fastScheduling"].empty()) {
      if (typeid(map<string, boost::any>) == m["fastScheduling"].type()) {
        GetServiceGroupSchedulingResponseBodyDataFastScheduling model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["fastScheduling"]));
        fastScheduling = make_shared<GetServiceGroupSchedulingResponseBodyDataFastScheduling>(model1);
      }
    }
    if (m.find("fineScheduling") != m.end() && !m["fineScheduling"].empty()) {
      if (typeid(map<string, boost::any>) == m["fineScheduling"].type()) {
        GetServiceGroupSchedulingResponseBodyDataFineScheduling model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["fineScheduling"]));
        fineScheduling = make_shared<GetServiceGroupSchedulingResponseBodyDataFineScheduling>(model1);
      }
    }
    if (m.find("users") != m.end() && !m["users"].empty()) {
      if (typeid(vector<boost::any>) == m["users"].type()) {
        vector<GetServiceGroupSchedulingResponseBodyDataUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceGroupSchedulingResponseBodyDataUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<GetServiceGroupSchedulingResponseBodyDataUsers>>(expect1);
      }
    }
  }


  virtual ~GetServiceGroupSchedulingResponseBodyData() = default;
};
class GetServiceGroupSchedulingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetServiceGroupSchedulingResponseBodyData> data{};

  GetServiceGroupSchedulingResponseBody() {}

  explicit GetServiceGroupSchedulingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetServiceGroupSchedulingResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetServiceGroupSchedulingResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetServiceGroupSchedulingResponseBody() = default;
};
class GetServiceGroupSchedulingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetServiceGroupSchedulingResponseBody> body{};

  GetServiceGroupSchedulingResponse() {}

  explicit GetServiceGroupSchedulingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetServiceGroupSchedulingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceGroupSchedulingResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceGroupSchedulingResponse() = default;
};
class RespondIncidentRequest : public Darabonba::Model {
public:
  shared_ptr<vector<long>> incidentIds{};
  shared_ptr<string> clientToken{};

  RespondIncidentRequest() {}

  explicit RespondIncidentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (incidentIds) {
      res["incidentIds"] = boost::any(*incidentIds);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("incidentIds") != m.end() && !m["incidentIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["incidentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["incidentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      incidentIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~RespondIncidentRequest() = default;
};
class RespondIncidentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RespondIncidentResponseBody() {}

  explicit RespondIncidentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RespondIncidentResponseBody() = default;
};
class RespondIncidentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RespondIncidentResponseBody> body{};

  RespondIncidentResponse() {}

  explicit RespondIncidentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RespondIncidentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RespondIncidentResponseBody>(model1);
      }
    }
  }


  virtual ~RespondIncidentResponse() = default;
};
class DeleteProblemMeasureRequest : public Darabonba::Model {
public:
  shared_ptr<long> measureId{};
  shared_ptr<string> problemId{};
  shared_ptr<string> clientToken{};

  DeleteProblemMeasureRequest() {}

  explicit DeleteProblemMeasureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (measureId) {
      res["measureId"] = boost::any(*measureId);
    }
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("measureId") != m.end() && !m["measureId"].empty()) {
      measureId = make_shared<long>(boost::any_cast<long>(m["measureId"]));
    }
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<string>(boost::any_cast<string>(m["problemId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~DeleteProblemMeasureRequest() = default;
};
class DeleteProblemMeasureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteProblemMeasureResponseBody() {}

  explicit DeleteProblemMeasureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteProblemMeasureResponseBody() = default;
};
class DeleteProblemMeasureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteProblemMeasureResponseBody> body{};

  DeleteProblemMeasureResponse() {}

  explicit DeleteProblemMeasureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteProblemMeasureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteProblemMeasureResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteProblemMeasureResponse() = default;
};
class DeleteServiceRequest : public Darabonba::Model {
public:
  shared_ptr<long> serviceId{};
  shared_ptr<string> clientToken{};

  DeleteServiceRequest() {}

  explicit DeleteServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceId) {
      res["serviceId"] = boost::any(*serviceId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceId") != m.end() && !m["serviceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["serviceId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~DeleteServiceRequest() = default;
};
class DeleteServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteServiceResponseBody() {}

  explicit DeleteServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteServiceResponseBody() = default;
};
class DeleteServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteServiceResponseBody> body{};

  DeleteServiceResponse() {}

  explicit DeleteServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServiceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServiceResponse() = default;
};
class GetUserGuideStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};

  GetUserGuideStatusRequest() {}

  explicit GetUserGuideStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~GetUserGuideStatusRequest() = default;
};
class GetUserGuideStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> data{};

  GetUserGuideStatusResponseBody() {}

  explicit GetUserGuideStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetUserGuideStatusResponseBody() = default;
};
class GetUserGuideStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetUserGuideStatusResponseBody> body{};

  GetUserGuideStatusResponse() {}

  explicit GetUserGuideStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetUserGuideStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserGuideStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserGuideStatusResponse() = default;
};
class RecoverProblemRequest : public Darabonba::Model {
public:
  shared_ptr<long> problemId{};
  shared_ptr<string> recoveryTime{};
  shared_ptr<string> problemNotifyType{};

  RecoverProblemRequest() {}

  explicit RecoverProblemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (recoveryTime) {
      res["recoveryTime"] = boost::any(*recoveryTime);
    }
    if (problemNotifyType) {
      res["problemNotifyType"] = boost::any(*problemNotifyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
    if (m.find("recoveryTime") != m.end() && !m["recoveryTime"].empty()) {
      recoveryTime = make_shared<string>(boost::any_cast<string>(m["recoveryTime"]));
    }
    if (m.find("problemNotifyType") != m.end() && !m["problemNotifyType"].empty()) {
      problemNotifyType = make_shared<string>(boost::any_cast<string>(m["problemNotifyType"]));
    }
  }


  virtual ~RecoverProblemRequest() = default;
};
class RecoverProblemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RecoverProblemResponseBody() {}

  explicit RecoverProblemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecoverProblemResponseBody() = default;
};
class RecoverProblemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecoverProblemResponseBody> body{};

  RecoverProblemResponse() {}

  explicit RecoverProblemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RecoverProblemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecoverProblemResponseBody>(model1);
      }
    }
  }


  virtual ~RecoverProblemResponse() = default;
};
class ListIntegrationConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> monitorSourceName{};
  shared_ptr<string> clientToken{};

  ListIntegrationConfigsRequest() {}

  explicit ListIntegrationConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (monitorSourceName) {
      res["monitorSourceName"] = boost::any(*monitorSourceName);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("monitorSourceName") != m.end() && !m["monitorSourceName"].empty()) {
      monitorSourceName = make_shared<string>(boost::any_cast<string>(m["monitorSourceName"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~ListIntegrationConfigsRequest() = default;
};
class ListIntegrationConfigsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> integrationConfigId{};
  shared_ptr<long> monitorSourceId{};
  shared_ptr<string> monitorSourceName{};
  shared_ptr<string> monitorSourceShortName{};
  shared_ptr<bool> isReceivedEvent{};
  shared_ptr<string> status{};

  ListIntegrationConfigsResponseBodyData() {}

  explicit ListIntegrationConfigsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (integrationConfigId) {
      res["integrationConfigId"] = boost::any(*integrationConfigId);
    }
    if (monitorSourceId) {
      res["monitorSourceId"] = boost::any(*monitorSourceId);
    }
    if (monitorSourceName) {
      res["monitorSourceName"] = boost::any(*monitorSourceName);
    }
    if (monitorSourceShortName) {
      res["monitorSourceShortName"] = boost::any(*monitorSourceShortName);
    }
    if (isReceivedEvent) {
      res["isReceivedEvent"] = boost::any(*isReceivedEvent);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("integrationConfigId") != m.end() && !m["integrationConfigId"].empty()) {
      integrationConfigId = make_shared<long>(boost::any_cast<long>(m["integrationConfigId"]));
    }
    if (m.find("monitorSourceId") != m.end() && !m["monitorSourceId"].empty()) {
      monitorSourceId = make_shared<long>(boost::any_cast<long>(m["monitorSourceId"]));
    }
    if (m.find("monitorSourceName") != m.end() && !m["monitorSourceName"].empty()) {
      monitorSourceName = make_shared<string>(boost::any_cast<string>(m["monitorSourceName"]));
    }
    if (m.find("monitorSourceShortName") != m.end() && !m["monitorSourceShortName"].empty()) {
      monitorSourceShortName = make_shared<string>(boost::any_cast<string>(m["monitorSourceShortName"]));
    }
    if (m.find("isReceivedEvent") != m.end() && !m["isReceivedEvent"].empty()) {
      isReceivedEvent = make_shared<bool>(boost::any_cast<bool>(m["isReceivedEvent"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListIntegrationConfigsResponseBodyData() = default;
};
class ListIntegrationConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListIntegrationConfigsResponseBodyData>> data{};

  ListIntegrationConfigsResponseBody() {}

  explicit ListIntegrationConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListIntegrationConfigsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIntegrationConfigsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListIntegrationConfigsResponseBodyData>>(expect1);
      }
    }
  }


  virtual ~ListIntegrationConfigsResponseBody() = default;
};
class ListIntegrationConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListIntegrationConfigsResponseBody> body{};

  ListIntegrationConfigsResponse() {}

  explicit ListIntegrationConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListIntegrationConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListIntegrationConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~ListIntegrationConfigsResponse() = default;
};
class DeleteUserRequest : public Darabonba::Model {
public:
  shared_ptr<long> userId{};
  shared_ptr<string> clientToken{};

  DeleteUserRequest() {}

  explicit DeleteUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["userId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
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
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
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
class UpdateProblemEffectionServiceRequest : public Darabonba::Model {
public:
  shared_ptr<long> serviceId{};
  shared_ptr<string> level{};
  shared_ptr<string> status{};
  shared_ptr<string> description{};
  shared_ptr<vector<string>> picUrl{};
  shared_ptr<long> problemId{};
  shared_ptr<long> effectionServiceId{};
  shared_ptr<string> clientToken{};

  UpdateProblemEffectionServiceRequest() {}

  explicit UpdateProblemEffectionServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceId) {
      res["serviceId"] = boost::any(*serviceId);
    }
    if (level) {
      res["level"] = boost::any(*level);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (picUrl) {
      res["picUrl"] = boost::any(*picUrl);
    }
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (effectionServiceId) {
      res["effectionServiceId"] = boost::any(*effectionServiceId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceId") != m.end() && !m["serviceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["serviceId"]));
    }
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["level"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("picUrl") != m.end() && !m["picUrl"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["picUrl"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["picUrl"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      picUrl = make_shared<vector<string>>(toVec1);
    }
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
    if (m.find("effectionServiceId") != m.end() && !m["effectionServiceId"].empty()) {
      effectionServiceId = make_shared<long>(boost::any_cast<long>(m["effectionServiceId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~UpdateProblemEffectionServiceRequest() = default;
};
class UpdateProblemEffectionServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateProblemEffectionServiceResponseBody() {}

  explicit UpdateProblemEffectionServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateProblemEffectionServiceResponseBody() = default;
};
class UpdateProblemEffectionServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateProblemEffectionServiceResponseBody> body{};

  UpdateProblemEffectionServiceResponse() {}

  explicit UpdateProblemEffectionServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateProblemEffectionServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProblemEffectionServiceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProblemEffectionServiceResponse() = default;
};
class DeleteServiceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> serviceGroupId{};
  shared_ptr<string> clientToken{};

  DeleteServiceGroupRequest() {}

  explicit DeleteServiceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceGroupId) {
      res["serviceGroupId"] = boost::any(*serviceGroupId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceGroupId") != m.end() && !m["serviceGroupId"].empty()) {
      serviceGroupId = make_shared<long>(boost::any_cast<long>(m["serviceGroupId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~DeleteServiceGroupRequest() = default;
};
class DeleteServiceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteServiceGroupResponseBody() {}

  explicit DeleteServiceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteServiceGroupResponseBody() = default;
};
class DeleteServiceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteServiceGroupResponseBody> body{};

  DeleteServiceGroupResponse() {}

  explicit DeleteServiceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteServiceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServiceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServiceGroupResponse() = default;
};
class DisableServiceGroupWebhookRequest : public Darabonba::Model {
public:
  shared_ptr<long> serviceGroupId{};
  shared_ptr<string> clientToken{};

  DisableServiceGroupWebhookRequest() {}

  explicit DisableServiceGroupWebhookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceGroupId) {
      res["serviceGroupId"] = boost::any(*serviceGroupId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceGroupId") != m.end() && !m["serviceGroupId"].empty()) {
      serviceGroupId = make_shared<long>(boost::any_cast<long>(m["serviceGroupId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~DisableServiceGroupWebhookRequest() = default;
};
class DisableServiceGroupWebhookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableServiceGroupWebhookResponseBody() {}

  explicit DisableServiceGroupWebhookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableServiceGroupWebhookResponseBody() = default;
};
class DisableServiceGroupWebhookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DisableServiceGroupWebhookResponseBody> body{};

  DisableServiceGroupWebhookResponse() {}

  explicit DisableServiceGroupWebhookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DisableServiceGroupWebhookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableServiceGroupWebhookResponseBody>(model1);
      }
    }
  }


  virtual ~DisableServiceGroupWebhookResponse() = default;
};
class RemoveProblemServiceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> problemId{};
  shared_ptr<vector<long>> serviceGroupIds{};

  RemoveProblemServiceGroupRequest() {}

  explicit RemoveProblemServiceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (serviceGroupIds) {
      res["serviceGroupIds"] = boost::any(*serviceGroupIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
    if (m.find("serviceGroupIds") != m.end() && !m["serviceGroupIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["serviceGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["serviceGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      serviceGroupIds = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~RemoveProblemServiceGroupRequest() = default;
};
class RemoveProblemServiceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveProblemServiceGroupResponseBody() {}

  explicit RemoveProblemServiceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveProblemServiceGroupResponseBody() = default;
};
class RemoveProblemServiceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveProblemServiceGroupResponseBody> body{};

  RemoveProblemServiceGroupResponse() {}

  explicit RemoveProblemServiceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveProblemServiceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveProblemServiceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveProblemServiceGroupResponse() = default;
};
class GetProblemEffectionServiceRequest : public Darabonba::Model {
public:
  shared_ptr<long> effectionServiceId{};
  shared_ptr<long> problemId{};
  shared_ptr<string> clientToken{};

  GetProblemEffectionServiceRequest() {}

  explicit GetProblemEffectionServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (effectionServiceId) {
      res["effectionServiceId"] = boost::any(*effectionServiceId);
    }
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("effectionServiceId") != m.end() && !m["effectionServiceId"].empty()) {
      effectionServiceId = make_shared<long>(boost::any_cast<long>(m["effectionServiceId"]));
    }
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~GetProblemEffectionServiceRequest() = default;
};
class GetProblemEffectionServiceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> effectionServiceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<long> serviceId{};
  shared_ptr<long> level{};
  shared_ptr<long> status{};
  shared_ptr<string> description{};
  shared_ptr<vector<string>> picUrl{};

  GetProblemEffectionServiceResponseBodyData() {}

  explicit GetProblemEffectionServiceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (effectionServiceId) {
      res["effectionServiceId"] = boost::any(*effectionServiceId);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (serviceId) {
      res["serviceId"] = boost::any(*serviceId);
    }
    if (level) {
      res["level"] = boost::any(*level);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (picUrl) {
      res["picUrl"] = boost::any(*picUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("effectionServiceId") != m.end() && !m["effectionServiceId"].empty()) {
      effectionServiceId = make_shared<long>(boost::any_cast<long>(m["effectionServiceId"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("serviceId") != m.end() && !m["serviceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["serviceId"]));
    }
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["level"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("picUrl") != m.end() && !m["picUrl"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["picUrl"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["picUrl"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      picUrl = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetProblemEffectionServiceResponseBodyData() = default;
};
class GetProblemEffectionServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetProblemEffectionServiceResponseBodyData> data{};

  GetProblemEffectionServiceResponseBody() {}

  explicit GetProblemEffectionServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetProblemEffectionServiceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetProblemEffectionServiceResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetProblemEffectionServiceResponseBody() = default;
};
class GetProblemEffectionServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetProblemEffectionServiceResponseBody> body{};

  GetProblemEffectionServiceResponse() {}

  explicit GetProblemEffectionServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetProblemEffectionServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProblemEffectionServiceResponseBody>(model1);
      }
    }
  }


  virtual ~GetProblemEffectionServiceResponse() = default;
};
class GetServiceGroupSchedulingPreviewRequestFastSchedulingSchedulingUsers : public Darabonba::Model {
public:
  shared_ptr<long> schedulingUserId{};
  shared_ptr<long> schedulingOrder{};

  GetServiceGroupSchedulingPreviewRequestFastSchedulingSchedulingUsers() {}

  explicit GetServiceGroupSchedulingPreviewRequestFastSchedulingSchedulingUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schedulingUserId) {
      res["schedulingUserId"] = boost::any(*schedulingUserId);
    }
    if (schedulingOrder) {
      res["schedulingOrder"] = boost::any(*schedulingOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("schedulingUserId") != m.end() && !m["schedulingUserId"].empty()) {
      schedulingUserId = make_shared<long>(boost::any_cast<long>(m["schedulingUserId"]));
    }
    if (m.find("schedulingOrder") != m.end() && !m["schedulingOrder"].empty()) {
      schedulingOrder = make_shared<long>(boost::any_cast<long>(m["schedulingOrder"]));
    }
  }


  virtual ~GetServiceGroupSchedulingPreviewRequestFastSchedulingSchedulingUsers() = default;
};
class GetServiceGroupSchedulingPreviewRequestFastScheduling : public Darabonba::Model {
public:
  shared_ptr<long> singleDuration{};
  shared_ptr<string> dutyPlan{};
  shared_ptr<string> singleDurationUnit{};
  shared_ptr<vector<GetServiceGroupSchedulingPreviewRequestFastSchedulingSchedulingUsers>> schedulingUsers{};

  GetServiceGroupSchedulingPreviewRequestFastScheduling() {}

  explicit GetServiceGroupSchedulingPreviewRequestFastScheduling(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (singleDuration) {
      res["singleDuration"] = boost::any(*singleDuration);
    }
    if (dutyPlan) {
      res["dutyPlan"] = boost::any(*dutyPlan);
    }
    if (singleDurationUnit) {
      res["singleDurationUnit"] = boost::any(*singleDurationUnit);
    }
    if (schedulingUsers) {
      vector<boost::any> temp1;
      for(auto item1:*schedulingUsers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["schedulingUsers"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("singleDuration") != m.end() && !m["singleDuration"].empty()) {
      singleDuration = make_shared<long>(boost::any_cast<long>(m["singleDuration"]));
    }
    if (m.find("dutyPlan") != m.end() && !m["dutyPlan"].empty()) {
      dutyPlan = make_shared<string>(boost::any_cast<string>(m["dutyPlan"]));
    }
    if (m.find("singleDurationUnit") != m.end() && !m["singleDurationUnit"].empty()) {
      singleDurationUnit = make_shared<string>(boost::any_cast<string>(m["singleDurationUnit"]));
    }
    if (m.find("schedulingUsers") != m.end() && !m["schedulingUsers"].empty()) {
      if (typeid(vector<boost::any>) == m["schedulingUsers"].type()) {
        vector<GetServiceGroupSchedulingPreviewRequestFastSchedulingSchedulingUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["schedulingUsers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceGroupSchedulingPreviewRequestFastSchedulingSchedulingUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        schedulingUsers = make_shared<vector<GetServiceGroupSchedulingPreviewRequestFastSchedulingSchedulingUsers>>(expect1);
      }
    }
  }


  virtual ~GetServiceGroupSchedulingPreviewRequestFastScheduling() = default;
};
class GetServiceGroupSchedulingPreviewRequestFineSchedulingSchedulingFineShifts : public Darabonba::Model {
public:
  shared_ptr<string> schedulingStartTime{};
  shared_ptr<string> schedulingEndTime{};
  shared_ptr<long> schedulingOrder{};
  shared_ptr<string> shiftName{};

  GetServiceGroupSchedulingPreviewRequestFineSchedulingSchedulingFineShifts() {}

  explicit GetServiceGroupSchedulingPreviewRequestFineSchedulingSchedulingFineShifts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schedulingStartTime) {
      res["schedulingStartTime"] = boost::any(*schedulingStartTime);
    }
    if (schedulingEndTime) {
      res["schedulingEndTime"] = boost::any(*schedulingEndTime);
    }
    if (schedulingOrder) {
      res["schedulingOrder"] = boost::any(*schedulingOrder);
    }
    if (shiftName) {
      res["shiftName"] = boost::any(*shiftName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("schedulingStartTime") != m.end() && !m["schedulingStartTime"].empty()) {
      schedulingStartTime = make_shared<string>(boost::any_cast<string>(m["schedulingStartTime"]));
    }
    if (m.find("schedulingEndTime") != m.end() && !m["schedulingEndTime"].empty()) {
      schedulingEndTime = make_shared<string>(boost::any_cast<string>(m["schedulingEndTime"]));
    }
    if (m.find("schedulingOrder") != m.end() && !m["schedulingOrder"].empty()) {
      schedulingOrder = make_shared<long>(boost::any_cast<long>(m["schedulingOrder"]));
    }
    if (m.find("shiftName") != m.end() && !m["shiftName"].empty()) {
      shiftName = make_shared<string>(boost::any_cast<string>(m["shiftName"]));
    }
  }


  virtual ~GetServiceGroupSchedulingPreviewRequestFineSchedulingSchedulingFineShifts() = default;
};
class GetServiceGroupSchedulingPreviewRequestFineScheduling : public Darabonba::Model {
public:
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> shiftType{};
  shared_ptr<vector<GetServiceGroupSchedulingPreviewRequestFineSchedulingSchedulingFineShifts>> schedulingFineShifts{};

  GetServiceGroupSchedulingPreviewRequestFineScheduling() {}

  explicit GetServiceGroupSchedulingPreviewRequestFineScheduling(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (period) {
      res["period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["periodUnit"] = boost::any(*periodUnit);
    }
    if (shiftType) {
      res["shiftType"] = boost::any(*shiftType);
    }
    if (schedulingFineShifts) {
      vector<boost::any> temp1;
      for(auto item1:*schedulingFineShifts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["schedulingFineShifts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("period") != m.end() && !m["period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["period"]));
    }
    if (m.find("periodUnit") != m.end() && !m["periodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["periodUnit"]));
    }
    if (m.find("shiftType") != m.end() && !m["shiftType"].empty()) {
      shiftType = make_shared<string>(boost::any_cast<string>(m["shiftType"]));
    }
    if (m.find("schedulingFineShifts") != m.end() && !m["schedulingFineShifts"].empty()) {
      if (typeid(vector<boost::any>) == m["schedulingFineShifts"].type()) {
        vector<GetServiceGroupSchedulingPreviewRequestFineSchedulingSchedulingFineShifts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["schedulingFineShifts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceGroupSchedulingPreviewRequestFineSchedulingSchedulingFineShifts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        schedulingFineShifts = make_shared<vector<GetServiceGroupSchedulingPreviewRequestFineSchedulingSchedulingFineShifts>>(expect1);
      }
    }
  }


  virtual ~GetServiceGroupSchedulingPreviewRequestFineScheduling() = default;
};
class GetServiceGroupSchedulingPreviewRequest : public Darabonba::Model {
public:
  shared_ptr<long> serviceGroupId{};
  shared_ptr<string> schedulingWay{};
  shared_ptr<GetServiceGroupSchedulingPreviewRequestFastScheduling> fastScheduling{};
  shared_ptr<GetServiceGroupSchedulingPreviewRequestFineScheduling> fineScheduling{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};

  GetServiceGroupSchedulingPreviewRequest() {}

  explicit GetServiceGroupSchedulingPreviewRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceGroupId) {
      res["serviceGroupId"] = boost::any(*serviceGroupId);
    }
    if (schedulingWay) {
      res["schedulingWay"] = boost::any(*schedulingWay);
    }
    if (fastScheduling) {
      res["fastScheduling"] = fastScheduling ? boost::any(fastScheduling->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fineScheduling) {
      res["fineScheduling"] = fineScheduling ? boost::any(fineScheduling->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceGroupId") != m.end() && !m["serviceGroupId"].empty()) {
      serviceGroupId = make_shared<long>(boost::any_cast<long>(m["serviceGroupId"]));
    }
    if (m.find("schedulingWay") != m.end() && !m["schedulingWay"].empty()) {
      schedulingWay = make_shared<string>(boost::any_cast<string>(m["schedulingWay"]));
    }
    if (m.find("fastScheduling") != m.end() && !m["fastScheduling"].empty()) {
      if (typeid(map<string, boost::any>) == m["fastScheduling"].type()) {
        GetServiceGroupSchedulingPreviewRequestFastScheduling model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["fastScheduling"]));
        fastScheduling = make_shared<GetServiceGroupSchedulingPreviewRequestFastScheduling>(model1);
      }
    }
    if (m.find("fineScheduling") != m.end() && !m["fineScheduling"].empty()) {
      if (typeid(map<string, boost::any>) == m["fineScheduling"].type()) {
        GetServiceGroupSchedulingPreviewRequestFineScheduling model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["fineScheduling"]));
        fineScheduling = make_shared<GetServiceGroupSchedulingPreviewRequestFineScheduling>(model1);
      }
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
  }


  virtual ~GetServiceGroupSchedulingPreviewRequest() = default;
};
class GetServiceGroupSchedulingPreviewResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> data{};

  GetServiceGroupSchedulingPreviewResponseBody() {}

  explicit GetServiceGroupSchedulingPreviewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetServiceGroupSchedulingPreviewResponseBody() = default;
};
class GetServiceGroupSchedulingPreviewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetServiceGroupSchedulingPreviewResponseBody> body{};

  GetServiceGroupSchedulingPreviewResponse() {}

  explicit GetServiceGroupSchedulingPreviewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetServiceGroupSchedulingPreviewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceGroupSchedulingPreviewResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceGroupSchedulingPreviewResponse() = default;
};
class ListMonitorSourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};

  ListMonitorSourcesRequest() {}

  explicit ListMonitorSourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~ListMonitorSourcesRequest() = default;
};
class ListMonitorSourcesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> monitorSourceId{};
  shared_ptr<string> monitorSourceName{};
  shared_ptr<vector<string>> fieldKeys{};

  ListMonitorSourcesResponseBodyData() {}

  explicit ListMonitorSourcesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (monitorSourceId) {
      res["monitorSourceId"] = boost::any(*monitorSourceId);
    }
    if (monitorSourceName) {
      res["monitorSourceName"] = boost::any(*monitorSourceName);
    }
    if (fieldKeys) {
      res["fieldKeys"] = boost::any(*fieldKeys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("monitorSourceId") != m.end() && !m["monitorSourceId"].empty()) {
      monitorSourceId = make_shared<long>(boost::any_cast<long>(m["monitorSourceId"]));
    }
    if (m.find("monitorSourceName") != m.end() && !m["monitorSourceName"].empty()) {
      monitorSourceName = make_shared<string>(boost::any_cast<string>(m["monitorSourceName"]));
    }
    if (m.find("fieldKeys") != m.end() && !m["fieldKeys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["fieldKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["fieldKeys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fieldKeys = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListMonitorSourcesResponseBodyData() = default;
};
class ListMonitorSourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListMonitorSourcesResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  ListMonitorSourcesResponseBody() {}

  explicit ListMonitorSourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListMonitorSourcesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMonitorSourcesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListMonitorSourcesResponseBodyData>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListMonitorSourcesResponseBody() = default;
};
class ListMonitorSourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListMonitorSourcesResponseBody> body{};

  ListMonitorSourcesResponse() {}

  explicit ListMonitorSourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListMonitorSourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMonitorSourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListMonitorSourcesResponse() = default;
};
class EnableEscalationPlanRequest : public Darabonba::Model {
public:
  shared_ptr<long> escalationPlanId{};
  shared_ptr<string> clientToken{};

  EnableEscalationPlanRequest() {}

  explicit EnableEscalationPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (escalationPlanId) {
      res["escalationPlanId"] = boost::any(*escalationPlanId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("escalationPlanId") != m.end() && !m["escalationPlanId"].empty()) {
      escalationPlanId = make_shared<long>(boost::any_cast<long>(m["escalationPlanId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~EnableEscalationPlanRequest() = default;
};
class EnableEscalationPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableEscalationPlanResponseBody() {}

  explicit EnableEscalationPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableEscalationPlanResponseBody() = default;
};
class EnableEscalationPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableEscalationPlanResponseBody> body{};

  EnableEscalationPlanResponse() {}

  explicit EnableEscalationPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EnableEscalationPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableEscalationPlanResponseBody>(model1);
      }
    }
  }


  virtual ~EnableEscalationPlanResponse() = default;
};
class UpdateEscalationPlanRequestEscalationPlanScopeObjects : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<long> scopeObjectId{};
  shared_ptr<string> scope{};

  UpdateEscalationPlanRequestEscalationPlanScopeObjects() {}

  explicit UpdateEscalationPlanRequestEscalationPlanScopeObjects(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (scopeObjectId) {
      res["scopeObjectId"] = boost::any(*scopeObjectId);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("scopeObjectId") != m.end() && !m["scopeObjectId"].empty()) {
      scopeObjectId = make_shared<long>(boost::any_cast<long>(m["scopeObjectId"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
  }


  virtual ~UpdateEscalationPlanRequestEscalationPlanScopeObjects() = default;
};
class UpdateEscalationPlanRequestEscalationPlanRulesEscalationPlanConditions : public Darabonba::Model {
public:
  shared_ptr<string> level{};
  shared_ptr<string> effection{};

  UpdateEscalationPlanRequestEscalationPlanRulesEscalationPlanConditions() {}

  explicit UpdateEscalationPlanRequestEscalationPlanRulesEscalationPlanConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (level) {
      res["level"] = boost::any(*level);
    }
    if (effection) {
      res["effection"] = boost::any(*effection);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["level"]));
    }
    if (m.find("effection") != m.end() && !m["effection"].empty()) {
      effection = make_shared<string>(boost::any_cast<string>(m["effection"]));
    }
  }


  virtual ~UpdateEscalationPlanRequestEscalationPlanRulesEscalationPlanConditions() = default;
};
class UpdateEscalationPlanRequestEscalationPlanRulesEscalationPlanStrategies : public Darabonba::Model {
public:
  shared_ptr<long> noticeTime{};
  shared_ptr<vector<long>> noticeObjects{};
  shared_ptr<vector<string>> noticeChannels{};

  UpdateEscalationPlanRequestEscalationPlanRulesEscalationPlanStrategies() {}

  explicit UpdateEscalationPlanRequestEscalationPlanRulesEscalationPlanStrategies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (noticeTime) {
      res["noticeTime"] = boost::any(*noticeTime);
    }
    if (noticeObjects) {
      res["noticeObjects"] = boost::any(*noticeObjects);
    }
    if (noticeChannels) {
      res["noticeChannels"] = boost::any(*noticeChannels);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("noticeTime") != m.end() && !m["noticeTime"].empty()) {
      noticeTime = make_shared<long>(boost::any_cast<long>(m["noticeTime"]));
    }
    if (m.find("noticeObjects") != m.end() && !m["noticeObjects"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["noticeObjects"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["noticeObjects"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      noticeObjects = make_shared<vector<long>>(toVec1);
    }
    if (m.find("noticeChannels") != m.end() && !m["noticeChannels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["noticeChannels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["noticeChannels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      noticeChannels = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateEscalationPlanRequestEscalationPlanRulesEscalationPlanStrategies() = default;
};
class UpdateEscalationPlanRequestEscalationPlanRules : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> escalationPlanType{};
  shared_ptr<vector<UpdateEscalationPlanRequestEscalationPlanRulesEscalationPlanConditions>> escalationPlanConditions{};
  shared_ptr<vector<UpdateEscalationPlanRequestEscalationPlanRulesEscalationPlanStrategies>> escalationPlanStrategies{};

  UpdateEscalationPlanRequestEscalationPlanRules() {}

  explicit UpdateEscalationPlanRequestEscalationPlanRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (escalationPlanType) {
      res["escalationPlanType"] = boost::any(*escalationPlanType);
    }
    if (escalationPlanConditions) {
      vector<boost::any> temp1;
      for(auto item1:*escalationPlanConditions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["escalationPlanConditions"] = boost::any(temp1);
    }
    if (escalationPlanStrategies) {
      vector<boost::any> temp1;
      for(auto item1:*escalationPlanStrategies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["escalationPlanStrategies"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("escalationPlanType") != m.end() && !m["escalationPlanType"].empty()) {
      escalationPlanType = make_shared<string>(boost::any_cast<string>(m["escalationPlanType"]));
    }
    if (m.find("escalationPlanConditions") != m.end() && !m["escalationPlanConditions"].empty()) {
      if (typeid(vector<boost::any>) == m["escalationPlanConditions"].type()) {
        vector<UpdateEscalationPlanRequestEscalationPlanRulesEscalationPlanConditions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["escalationPlanConditions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateEscalationPlanRequestEscalationPlanRulesEscalationPlanConditions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        escalationPlanConditions = make_shared<vector<UpdateEscalationPlanRequestEscalationPlanRulesEscalationPlanConditions>>(expect1);
      }
    }
    if (m.find("escalationPlanStrategies") != m.end() && !m["escalationPlanStrategies"].empty()) {
      if (typeid(vector<boost::any>) == m["escalationPlanStrategies"].type()) {
        vector<UpdateEscalationPlanRequestEscalationPlanRulesEscalationPlanStrategies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["escalationPlanStrategies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateEscalationPlanRequestEscalationPlanRulesEscalationPlanStrategies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        escalationPlanStrategies = make_shared<vector<UpdateEscalationPlanRequestEscalationPlanRulesEscalationPlanStrategies>>(expect1);
      }
    }
  }


  virtual ~UpdateEscalationPlanRequestEscalationPlanRules() = default;
};
class UpdateEscalationPlanRequest : public Darabonba::Model {
public:
  shared_ptr<long> escalationPlanId{};
  shared_ptr<string> escalationPlanName{};
  shared_ptr<string> escalationPlanDescription{};
  shared_ptr<vector<UpdateEscalationPlanRequestEscalationPlanScopeObjects>> escalationPlanScopeObjects{};
  shared_ptr<vector<UpdateEscalationPlanRequestEscalationPlanRules>> escalationPlanRules{};
  shared_ptr<string> clientToken{};

  UpdateEscalationPlanRequest() {}

  explicit UpdateEscalationPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (escalationPlanId) {
      res["escalationPlanId"] = boost::any(*escalationPlanId);
    }
    if (escalationPlanName) {
      res["escalationPlanName"] = boost::any(*escalationPlanName);
    }
    if (escalationPlanDescription) {
      res["escalationPlanDescription"] = boost::any(*escalationPlanDescription);
    }
    if (escalationPlanScopeObjects) {
      vector<boost::any> temp1;
      for(auto item1:*escalationPlanScopeObjects){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["escalationPlanScopeObjects"] = boost::any(temp1);
    }
    if (escalationPlanRules) {
      vector<boost::any> temp1;
      for(auto item1:*escalationPlanRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["escalationPlanRules"] = boost::any(temp1);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("escalationPlanId") != m.end() && !m["escalationPlanId"].empty()) {
      escalationPlanId = make_shared<long>(boost::any_cast<long>(m["escalationPlanId"]));
    }
    if (m.find("escalationPlanName") != m.end() && !m["escalationPlanName"].empty()) {
      escalationPlanName = make_shared<string>(boost::any_cast<string>(m["escalationPlanName"]));
    }
    if (m.find("escalationPlanDescription") != m.end() && !m["escalationPlanDescription"].empty()) {
      escalationPlanDescription = make_shared<string>(boost::any_cast<string>(m["escalationPlanDescription"]));
    }
    if (m.find("escalationPlanScopeObjects") != m.end() && !m["escalationPlanScopeObjects"].empty()) {
      if (typeid(vector<boost::any>) == m["escalationPlanScopeObjects"].type()) {
        vector<UpdateEscalationPlanRequestEscalationPlanScopeObjects> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["escalationPlanScopeObjects"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateEscalationPlanRequestEscalationPlanScopeObjects model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        escalationPlanScopeObjects = make_shared<vector<UpdateEscalationPlanRequestEscalationPlanScopeObjects>>(expect1);
      }
    }
    if (m.find("escalationPlanRules") != m.end() && !m["escalationPlanRules"].empty()) {
      if (typeid(vector<boost::any>) == m["escalationPlanRules"].type()) {
        vector<UpdateEscalationPlanRequestEscalationPlanRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["escalationPlanRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateEscalationPlanRequestEscalationPlanRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        escalationPlanRules = make_shared<vector<UpdateEscalationPlanRequestEscalationPlanRules>>(expect1);
      }
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~UpdateEscalationPlanRequest() = default;
};
class UpdateEscalationPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateEscalationPlanResponseBody() {}

  explicit UpdateEscalationPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateEscalationPlanResponseBody() = default;
};
class UpdateEscalationPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateEscalationPlanResponseBody> body{};

  UpdateEscalationPlanResponse() {}

  explicit UpdateEscalationPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateEscalationPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEscalationPlanResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEscalationPlanResponse() = default;
};
class ListProblemsRequest : public Darabonba::Model {
public:
  shared_ptr<string> queryType{};
  shared_ptr<string> problemStatus{};
  shared_ptr<string> problemLevel{};
  shared_ptr<long> affectServiceId{};
  shared_ptr<long> serviceGroupId{};
  shared_ptr<long> mainHandlerId{};
  shared_ptr<long> repeaterId{};
  shared_ptr<string> discoveryStartTime{};
  shared_ptr<string> discoveryEndTime{};
  shared_ptr<string> restoreEndTime{};
  shared_ptr<string> restoreStartTime{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> clientToken{};

  ListProblemsRequest() {}

  explicit ListProblemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queryType) {
      res["queryType"] = boost::any(*queryType);
    }
    if (problemStatus) {
      res["problemStatus"] = boost::any(*problemStatus);
    }
    if (problemLevel) {
      res["problemLevel"] = boost::any(*problemLevel);
    }
    if (affectServiceId) {
      res["affectServiceId"] = boost::any(*affectServiceId);
    }
    if (serviceGroupId) {
      res["serviceGroupId"] = boost::any(*serviceGroupId);
    }
    if (mainHandlerId) {
      res["mainHandlerId"] = boost::any(*mainHandlerId);
    }
    if (repeaterId) {
      res["repeaterId"] = boost::any(*repeaterId);
    }
    if (discoveryStartTime) {
      res["discoveryStartTime"] = boost::any(*discoveryStartTime);
    }
    if (discoveryEndTime) {
      res["discoveryEndTime"] = boost::any(*discoveryEndTime);
    }
    if (restoreEndTime) {
      res["restoreEndTime"] = boost::any(*restoreEndTime);
    }
    if (restoreStartTime) {
      res["restoreStartTime"] = boost::any(*restoreStartTime);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("queryType") != m.end() && !m["queryType"].empty()) {
      queryType = make_shared<string>(boost::any_cast<string>(m["queryType"]));
    }
    if (m.find("problemStatus") != m.end() && !m["problemStatus"].empty()) {
      problemStatus = make_shared<string>(boost::any_cast<string>(m["problemStatus"]));
    }
    if (m.find("problemLevel") != m.end() && !m["problemLevel"].empty()) {
      problemLevel = make_shared<string>(boost::any_cast<string>(m["problemLevel"]));
    }
    if (m.find("affectServiceId") != m.end() && !m["affectServiceId"].empty()) {
      affectServiceId = make_shared<long>(boost::any_cast<long>(m["affectServiceId"]));
    }
    if (m.find("serviceGroupId") != m.end() && !m["serviceGroupId"].empty()) {
      serviceGroupId = make_shared<long>(boost::any_cast<long>(m["serviceGroupId"]));
    }
    if (m.find("mainHandlerId") != m.end() && !m["mainHandlerId"].empty()) {
      mainHandlerId = make_shared<long>(boost::any_cast<long>(m["mainHandlerId"]));
    }
    if (m.find("repeaterId") != m.end() && !m["repeaterId"].empty()) {
      repeaterId = make_shared<long>(boost::any_cast<long>(m["repeaterId"]));
    }
    if (m.find("discoveryStartTime") != m.end() && !m["discoveryStartTime"].empty()) {
      discoveryStartTime = make_shared<string>(boost::any_cast<string>(m["discoveryStartTime"]));
    }
    if (m.find("discoveryEndTime") != m.end() && !m["discoveryEndTime"].empty()) {
      discoveryEndTime = make_shared<string>(boost::any_cast<string>(m["discoveryEndTime"]));
    }
    if (m.find("restoreEndTime") != m.end() && !m["restoreEndTime"].empty()) {
      restoreEndTime = make_shared<string>(boost::any_cast<string>(m["restoreEndTime"]));
    }
    if (m.find("restoreStartTime") != m.end() && !m["restoreStartTime"].empty()) {
      restoreStartTime = make_shared<string>(boost::any_cast<string>(m["restoreStartTime"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~ListProblemsRequest() = default;
};
class ListProblemsResponseBodyDataAffectServices : public Darabonba::Model {
public:
  shared_ptr<long> serviceId{};
  shared_ptr<string> serviceDescription{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> updateTime{};

  ListProblemsResponseBodyDataAffectServices() {}

  explicit ListProblemsResponseBodyDataAffectServices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceId) {
      res["serviceId"] = boost::any(*serviceId);
    }
    if (serviceDescription) {
      res["serviceDescription"] = boost::any(*serviceDescription);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceId") != m.end() && !m["serviceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["serviceId"]));
    }
    if (m.find("serviceDescription") != m.end() && !m["serviceDescription"].empty()) {
      serviceDescription = make_shared<string>(boost::any_cast<string>(m["serviceDescription"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
  }


  virtual ~ListProblemsResponseBodyDataAffectServices() = default;
};
class ListProblemsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> problemId{};
  shared_ptr<bool> isManual{};
  shared_ptr<bool> isUpgrade{};
  shared_ptr<long> incidentId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> problemNumber{};
  shared_ptr<string> problemName{};
  shared_ptr<string> problemStatus{};
  shared_ptr<string> problemLevel{};
  shared_ptr<string> discoverTime{};
  shared_ptr<string> recoveryTime{};
  shared_ptr<string> relatedServiceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<vector<ListProblemsResponseBodyDataAffectServices>> affectServices{};
  shared_ptr<long> mainHandlerId{};
  shared_ptr<string> mainHandlerName{};
  shared_ptr<string> cancelTime{};
  shared_ptr<string> finishTime{};
  shared_ptr<string> replayTime{};

  ListProblemsResponseBodyData() {}

  explicit ListProblemsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (isManual) {
      res["isManual"] = boost::any(*isManual);
    }
    if (isUpgrade) {
      res["isUpgrade"] = boost::any(*isUpgrade);
    }
    if (incidentId) {
      res["incidentId"] = boost::any(*incidentId);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (problemNumber) {
      res["problemNumber"] = boost::any(*problemNumber);
    }
    if (problemName) {
      res["problemName"] = boost::any(*problemName);
    }
    if (problemStatus) {
      res["problemStatus"] = boost::any(*problemStatus);
    }
    if (problemLevel) {
      res["problemLevel"] = boost::any(*problemLevel);
    }
    if (discoverTime) {
      res["discoverTime"] = boost::any(*discoverTime);
    }
    if (recoveryTime) {
      res["recoveryTime"] = boost::any(*recoveryTime);
    }
    if (relatedServiceId) {
      res["relatedServiceId"] = boost::any(*relatedServiceId);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (affectServices) {
      vector<boost::any> temp1;
      for(auto item1:*affectServices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["affectServices"] = boost::any(temp1);
    }
    if (mainHandlerId) {
      res["mainHandlerId"] = boost::any(*mainHandlerId);
    }
    if (mainHandlerName) {
      res["mainHandlerName"] = boost::any(*mainHandlerName);
    }
    if (cancelTime) {
      res["cancelTime"] = boost::any(*cancelTime);
    }
    if (finishTime) {
      res["finishTime"] = boost::any(*finishTime);
    }
    if (replayTime) {
      res["replayTime"] = boost::any(*replayTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
    if (m.find("isManual") != m.end() && !m["isManual"].empty()) {
      isManual = make_shared<bool>(boost::any_cast<bool>(m["isManual"]));
    }
    if (m.find("isUpgrade") != m.end() && !m["isUpgrade"].empty()) {
      isUpgrade = make_shared<bool>(boost::any_cast<bool>(m["isUpgrade"]));
    }
    if (m.find("incidentId") != m.end() && !m["incidentId"].empty()) {
      incidentId = make_shared<long>(boost::any_cast<long>(m["incidentId"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
    if (m.find("problemNumber") != m.end() && !m["problemNumber"].empty()) {
      problemNumber = make_shared<string>(boost::any_cast<string>(m["problemNumber"]));
    }
    if (m.find("problemName") != m.end() && !m["problemName"].empty()) {
      problemName = make_shared<string>(boost::any_cast<string>(m["problemName"]));
    }
    if (m.find("problemStatus") != m.end() && !m["problemStatus"].empty()) {
      problemStatus = make_shared<string>(boost::any_cast<string>(m["problemStatus"]));
    }
    if (m.find("problemLevel") != m.end() && !m["problemLevel"].empty()) {
      problemLevel = make_shared<string>(boost::any_cast<string>(m["problemLevel"]));
    }
    if (m.find("discoverTime") != m.end() && !m["discoverTime"].empty()) {
      discoverTime = make_shared<string>(boost::any_cast<string>(m["discoverTime"]));
    }
    if (m.find("recoveryTime") != m.end() && !m["recoveryTime"].empty()) {
      recoveryTime = make_shared<string>(boost::any_cast<string>(m["recoveryTime"]));
    }
    if (m.find("relatedServiceId") != m.end() && !m["relatedServiceId"].empty()) {
      relatedServiceId = make_shared<string>(boost::any_cast<string>(m["relatedServiceId"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("affectServices") != m.end() && !m["affectServices"].empty()) {
      if (typeid(vector<boost::any>) == m["affectServices"].type()) {
        vector<ListProblemsResponseBodyDataAffectServices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["affectServices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProblemsResponseBodyDataAffectServices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        affectServices = make_shared<vector<ListProblemsResponseBodyDataAffectServices>>(expect1);
      }
    }
    if (m.find("mainHandlerId") != m.end() && !m["mainHandlerId"].empty()) {
      mainHandlerId = make_shared<long>(boost::any_cast<long>(m["mainHandlerId"]));
    }
    if (m.find("mainHandlerName") != m.end() && !m["mainHandlerName"].empty()) {
      mainHandlerName = make_shared<string>(boost::any_cast<string>(m["mainHandlerName"]));
    }
    if (m.find("cancelTime") != m.end() && !m["cancelTime"].empty()) {
      cancelTime = make_shared<string>(boost::any_cast<string>(m["cancelTime"]));
    }
    if (m.find("finishTime") != m.end() && !m["finishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["finishTime"]));
    }
    if (m.find("replayTime") != m.end() && !m["replayTime"].empty()) {
      replayTime = make_shared<string>(boost::any_cast<string>(m["replayTime"]));
    }
  }


  virtual ~ListProblemsResponseBodyData() = default;
};
class ListProblemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListProblemsResponseBodyData>> data{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListProblemsResponseBody() {}

  explicit ListProblemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListProblemsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProblemsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListProblemsResponseBodyData>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListProblemsResponseBody() = default;
};
class ListProblemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListProblemsResponseBody> body{};

  ListProblemsResponse() {}

  explicit ListProblemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListProblemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProblemsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProblemsResponse() = default;
};
class GenerateProblemPictureLinkRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> keys{};
  shared_ptr<string> problemId{};

  GenerateProblemPictureLinkRequest() {}

  explicit GenerateProblemPictureLinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keys) {
      res["keys"] = boost::any(*keys);
    }
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keys") != m.end() && !m["keys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["keys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["keys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<string>(boost::any_cast<string>(m["problemId"]));
    }
  }


  virtual ~GenerateProblemPictureLinkRequest() = default;
};
class GenerateProblemPictureLinkResponseBodyDataLinks : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> link{};

  GenerateProblemPictureLinkResponseBodyDataLinks() {}

  explicit GenerateProblemPictureLinkResponseBodyDataLinks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (link) {
      res["link"] = boost::any(*link);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("link") != m.end() && !m["link"].empty()) {
      link = make_shared<string>(boost::any_cast<string>(m["link"]));
    }
  }


  virtual ~GenerateProblemPictureLinkResponseBodyDataLinks() = default;
};
class GenerateProblemPictureLinkResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GenerateProblemPictureLinkResponseBodyDataLinks>> links{};

  GenerateProblemPictureLinkResponseBodyData() {}

  explicit GenerateProblemPictureLinkResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (links) {
      vector<boost::any> temp1;
      for(auto item1:*links){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["links"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("links") != m.end() && !m["links"].empty()) {
      if (typeid(vector<boost::any>) == m["links"].type()) {
        vector<GenerateProblemPictureLinkResponseBodyDataLinks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["links"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GenerateProblemPictureLinkResponseBodyDataLinks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        links = make_shared<vector<GenerateProblemPictureLinkResponseBodyDataLinks>>(expect1);
      }
    }
  }


  virtual ~GenerateProblemPictureLinkResponseBodyData() = default;
};
class GenerateProblemPictureLinkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GenerateProblemPictureLinkResponseBodyData> data{};

  GenerateProblemPictureLinkResponseBody() {}

  explicit GenerateProblemPictureLinkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GenerateProblemPictureLinkResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GenerateProblemPictureLinkResponseBodyData>(model1);
      }
    }
  }


  virtual ~GenerateProblemPictureLinkResponseBody() = default;
};
class GenerateProblemPictureLinkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GenerateProblemPictureLinkResponseBody> body{};

  GenerateProblemPictureLinkResponse() {}

  explicit GenerateProblemPictureLinkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GenerateProblemPictureLinkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateProblemPictureLinkResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateProblemPictureLinkResponse() = default;
};
class GetIntegrationConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> integrationConfigId{};
  shared_ptr<string> clientToken{};

  GetIntegrationConfigRequest() {}

  explicit GetIntegrationConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (integrationConfigId) {
      res["integrationConfigId"] = boost::any(*integrationConfigId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("integrationConfigId") != m.end() && !m["integrationConfigId"].empty()) {
      integrationConfigId = make_shared<long>(boost::any_cast<long>(m["integrationConfigId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~GetIntegrationConfigRequest() = default;
};
class GetIntegrationConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> integrationConfigId{};
  shared_ptr<long> monitorSourceId{};
  shared_ptr<string> monitorSourceName{};
  shared_ptr<string> monitorSourceShortName{};
  shared_ptr<string> accessKey{};
  shared_ptr<bool> isReceivedEvent{};
  shared_ptr<string> status{};

  GetIntegrationConfigResponseBodyData() {}

  explicit GetIntegrationConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (integrationConfigId) {
      res["integrationConfigId"] = boost::any(*integrationConfigId);
    }
    if (monitorSourceId) {
      res["monitorSourceId"] = boost::any(*monitorSourceId);
    }
    if (monitorSourceName) {
      res["monitorSourceName"] = boost::any(*monitorSourceName);
    }
    if (monitorSourceShortName) {
      res["monitorSourceShortName"] = boost::any(*monitorSourceShortName);
    }
    if (accessKey) {
      res["accessKey"] = boost::any(*accessKey);
    }
    if (isReceivedEvent) {
      res["isReceivedEvent"] = boost::any(*isReceivedEvent);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("integrationConfigId") != m.end() && !m["integrationConfigId"].empty()) {
      integrationConfigId = make_shared<long>(boost::any_cast<long>(m["integrationConfigId"]));
    }
    if (m.find("monitorSourceId") != m.end() && !m["monitorSourceId"].empty()) {
      monitorSourceId = make_shared<long>(boost::any_cast<long>(m["monitorSourceId"]));
    }
    if (m.find("monitorSourceName") != m.end() && !m["monitorSourceName"].empty()) {
      monitorSourceName = make_shared<string>(boost::any_cast<string>(m["monitorSourceName"]));
    }
    if (m.find("monitorSourceShortName") != m.end() && !m["monitorSourceShortName"].empty()) {
      monitorSourceShortName = make_shared<string>(boost::any_cast<string>(m["monitorSourceShortName"]));
    }
    if (m.find("accessKey") != m.end() && !m["accessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["accessKey"]));
    }
    if (m.find("isReceivedEvent") != m.end() && !m["isReceivedEvent"].empty()) {
      isReceivedEvent = make_shared<bool>(boost::any_cast<bool>(m["isReceivedEvent"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~GetIntegrationConfigResponseBodyData() = default;
};
class GetIntegrationConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetIntegrationConfigResponseBodyData> data{};

  GetIntegrationConfigResponseBody() {}

  explicit GetIntegrationConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetIntegrationConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetIntegrationConfigResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetIntegrationConfigResponseBody() = default;
};
class GetIntegrationConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetIntegrationConfigResponseBody> body{};

  GetIntegrationConfigResponse() {}

  explicit GetIntegrationConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetIntegrationConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetIntegrationConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetIntegrationConfigResponse() = default;
};
class RevokeProblemRecoveryRequest : public Darabonba::Model {
public:
  shared_ptr<long> problemId{};
  shared_ptr<string> problemNotifyType{};
  shared_ptr<string> clientToken{};

  RevokeProblemRecoveryRequest() {}

  explicit RevokeProblemRecoveryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (problemNotifyType) {
      res["problemNotifyType"] = boost::any(*problemNotifyType);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
    if (m.find("problemNotifyType") != m.end() && !m["problemNotifyType"].empty()) {
      problemNotifyType = make_shared<string>(boost::any_cast<string>(m["problemNotifyType"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~RevokeProblemRecoveryRequest() = default;
};
class RevokeProblemRecoveryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RevokeProblemRecoveryResponseBody() {}

  explicit RevokeProblemRecoveryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RevokeProblemRecoveryResponseBody() = default;
};
class RevokeProblemRecoveryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RevokeProblemRecoveryResponseBody> body{};

  RevokeProblemRecoveryResponse() {}

  explicit RevokeProblemRecoveryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RevokeProblemRecoveryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RevokeProblemRecoveryResponseBody>(model1);
      }
    }
  }


  virtual ~RevokeProblemRecoveryResponse() = default;
};
class EnableIntegrationConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> integrationConfigId{};
  shared_ptr<string> clientToken{};

  EnableIntegrationConfigRequest() {}

  explicit EnableIntegrationConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (integrationConfigId) {
      res["integrationConfigId"] = boost::any(*integrationConfigId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("integrationConfigId") != m.end() && !m["integrationConfigId"].empty()) {
      integrationConfigId = make_shared<long>(boost::any_cast<long>(m["integrationConfigId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~EnableIntegrationConfigRequest() = default;
};
class EnableIntegrationConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableIntegrationConfigResponseBody() {}

  explicit EnableIntegrationConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableIntegrationConfigResponseBody() = default;
};
class EnableIntegrationConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableIntegrationConfigResponseBody> body{};

  EnableIntegrationConfigResponse() {}

  explicit EnableIntegrationConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EnableIntegrationConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableIntegrationConfigResponseBody>(model1);
      }
    }
  }


  virtual ~EnableIntegrationConfigResponse() = default;
};
class CreateProblemSubtotalRequest : public Darabonba::Model {
public:
  shared_ptr<long> problemId{};
  shared_ptr<string> description{};
  shared_ptr<string> clientToken{};

  CreateProblemSubtotalRequest() {}

  explicit CreateProblemSubtotalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~CreateProblemSubtotalRequest() = default;
};
class CreateProblemSubtotalResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> subtotalId{};

  CreateProblemSubtotalResponseBodyData() {}

  explicit CreateProblemSubtotalResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subtotalId) {
      res["subtotalId"] = boost::any(*subtotalId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("subtotalId") != m.end() && !m["subtotalId"].empty()) {
      subtotalId = make_shared<long>(boost::any_cast<long>(m["subtotalId"]));
    }
  }


  virtual ~CreateProblemSubtotalResponseBodyData() = default;
};
class CreateProblemSubtotalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateProblemSubtotalResponseBodyData> data{};

  CreateProblemSubtotalResponseBody() {}

  explicit CreateProblemSubtotalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateProblemSubtotalResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateProblemSubtotalResponseBodyData>(model1);
      }
    }
  }


  virtual ~CreateProblemSubtotalResponseBody() = default;
};
class CreateProblemSubtotalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateProblemSubtotalResponseBody> body{};

  CreateProblemSubtotalResponse() {}

  explicit CreateProblemSubtotalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateProblemSubtotalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProblemSubtotalResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProblemSubtotalResponse() = default;
};
class CreateProblemRequest : public Darabonba::Model {
public:
  shared_ptr<string> problemName{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> problemStatus{};
  shared_ptr<string> problemLevel{};
  shared_ptr<string> progressSummary{};
  shared_ptr<long> relatedServiceId{};
  shared_ptr<long> mainHandlerId{};
  shared_ptr<string> preliminaryReason{};
  shared_ptr<string> discoverTime{};
  shared_ptr<string> recoveryTime{};
  shared_ptr<vector<long>> affectServiceIds{};
  shared_ptr<vector<long>> serviceGroupIds{};
  shared_ptr<long> incidentId{};
  shared_ptr<string> problemNotifyType{};

  CreateProblemRequest() {}

  explicit CreateProblemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (problemName) {
      res["problemName"] = boost::any(*problemName);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (problemStatus) {
      res["problemStatus"] = boost::any(*problemStatus);
    }
    if (problemLevel) {
      res["problemLevel"] = boost::any(*problemLevel);
    }
    if (progressSummary) {
      res["progressSummary"] = boost::any(*progressSummary);
    }
    if (relatedServiceId) {
      res["relatedServiceId"] = boost::any(*relatedServiceId);
    }
    if (mainHandlerId) {
      res["mainHandlerId"] = boost::any(*mainHandlerId);
    }
    if (preliminaryReason) {
      res["preliminaryReason"] = boost::any(*preliminaryReason);
    }
    if (discoverTime) {
      res["discoverTime"] = boost::any(*discoverTime);
    }
    if (recoveryTime) {
      res["recoveryTime"] = boost::any(*recoveryTime);
    }
    if (affectServiceIds) {
      res["affectServiceIds"] = boost::any(*affectServiceIds);
    }
    if (serviceGroupIds) {
      res["serviceGroupIds"] = boost::any(*serviceGroupIds);
    }
    if (incidentId) {
      res["incidentId"] = boost::any(*incidentId);
    }
    if (problemNotifyType) {
      res["problemNotifyType"] = boost::any(*problemNotifyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("problemName") != m.end() && !m["problemName"].empty()) {
      problemName = make_shared<string>(boost::any_cast<string>(m["problemName"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("problemStatus") != m.end() && !m["problemStatus"].empty()) {
      problemStatus = make_shared<string>(boost::any_cast<string>(m["problemStatus"]));
    }
    if (m.find("problemLevel") != m.end() && !m["problemLevel"].empty()) {
      problemLevel = make_shared<string>(boost::any_cast<string>(m["problemLevel"]));
    }
    if (m.find("progressSummary") != m.end() && !m["progressSummary"].empty()) {
      progressSummary = make_shared<string>(boost::any_cast<string>(m["progressSummary"]));
    }
    if (m.find("relatedServiceId") != m.end() && !m["relatedServiceId"].empty()) {
      relatedServiceId = make_shared<long>(boost::any_cast<long>(m["relatedServiceId"]));
    }
    if (m.find("mainHandlerId") != m.end() && !m["mainHandlerId"].empty()) {
      mainHandlerId = make_shared<long>(boost::any_cast<long>(m["mainHandlerId"]));
    }
    if (m.find("preliminaryReason") != m.end() && !m["preliminaryReason"].empty()) {
      preliminaryReason = make_shared<string>(boost::any_cast<string>(m["preliminaryReason"]));
    }
    if (m.find("discoverTime") != m.end() && !m["discoverTime"].empty()) {
      discoverTime = make_shared<string>(boost::any_cast<string>(m["discoverTime"]));
    }
    if (m.find("recoveryTime") != m.end() && !m["recoveryTime"].empty()) {
      recoveryTime = make_shared<string>(boost::any_cast<string>(m["recoveryTime"]));
    }
    if (m.find("affectServiceIds") != m.end() && !m["affectServiceIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["affectServiceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["affectServiceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      affectServiceIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("serviceGroupIds") != m.end() && !m["serviceGroupIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["serviceGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["serviceGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      serviceGroupIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("incidentId") != m.end() && !m["incidentId"].empty()) {
      incidentId = make_shared<long>(boost::any_cast<long>(m["incidentId"]));
    }
    if (m.find("problemNotifyType") != m.end() && !m["problemNotifyType"].empty()) {
      problemNotifyType = make_shared<string>(boost::any_cast<string>(m["problemNotifyType"]));
    }
  }


  virtual ~CreateProblemRequest() = default;
};
class CreateProblemResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> problemId{};

  CreateProblemResponseBodyData() {}

  explicit CreateProblemResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
  }


  virtual ~CreateProblemResponseBodyData() = default;
};
class CreateProblemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateProblemResponseBodyData> data{};

  CreateProblemResponseBody() {}

  explicit CreateProblemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateProblemResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateProblemResponseBodyData>(model1);
      }
    }
  }


  virtual ~CreateProblemResponseBody() = default;
};
class CreateProblemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateProblemResponseBody> body{};

  CreateProblemResponse() {}

  explicit CreateProblemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateProblemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProblemResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProblemResponse() = default;
};
class GetProblemImprovementRequest : public Darabonba::Model {
public:
  shared_ptr<string> problemId{};
  shared_ptr<string> clientToken{};

  GetProblemImprovementRequest() {}

  explicit GetProblemImprovementRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<string>(boost::any_cast<string>(m["problemId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~GetProblemImprovementRequest() = default;
};
class GetProblemImprovementResponseBodyDataMeasureList : public Darabonba::Model {
public:
  shared_ptr<long> measureId{};
  shared_ptr<long> type{};
  shared_ptr<string> content{};
  shared_ptr<string> checkStandard{};
  shared_ptr<long> checkUserId{};
  shared_ptr<string> checkUserName{};
  shared_ptr<string> directorName{};
  shared_ptr<string> stalkerName{};
  shared_ptr<string> planFinishTime{};
  shared_ptr<long> directorId{};
  shared_ptr<long> stalkerId{};
  shared_ptr<string> status{};

  GetProblemImprovementResponseBodyDataMeasureList() {}

  explicit GetProblemImprovementResponseBodyDataMeasureList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (measureId) {
      res["measureId"] = boost::any(*measureId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (checkStandard) {
      res["checkStandard"] = boost::any(*checkStandard);
    }
    if (checkUserId) {
      res["checkUserId"] = boost::any(*checkUserId);
    }
    if (checkUserName) {
      res["checkUserName"] = boost::any(*checkUserName);
    }
    if (directorName) {
      res["directorName"] = boost::any(*directorName);
    }
    if (stalkerName) {
      res["stalkerName"] = boost::any(*stalkerName);
    }
    if (planFinishTime) {
      res["planFinishTime"] = boost::any(*planFinishTime);
    }
    if (directorId) {
      res["directorId"] = boost::any(*directorId);
    }
    if (stalkerId) {
      res["stalkerId"] = boost::any(*stalkerId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("measureId") != m.end() && !m["measureId"].empty()) {
      measureId = make_shared<long>(boost::any_cast<long>(m["measureId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("checkStandard") != m.end() && !m["checkStandard"].empty()) {
      checkStandard = make_shared<string>(boost::any_cast<string>(m["checkStandard"]));
    }
    if (m.find("checkUserId") != m.end() && !m["checkUserId"].empty()) {
      checkUserId = make_shared<long>(boost::any_cast<long>(m["checkUserId"]));
    }
    if (m.find("checkUserName") != m.end() && !m["checkUserName"].empty()) {
      checkUserName = make_shared<string>(boost::any_cast<string>(m["checkUserName"]));
    }
    if (m.find("directorName") != m.end() && !m["directorName"].empty()) {
      directorName = make_shared<string>(boost::any_cast<string>(m["directorName"]));
    }
    if (m.find("stalkerName") != m.end() && !m["stalkerName"].empty()) {
      stalkerName = make_shared<string>(boost::any_cast<string>(m["stalkerName"]));
    }
    if (m.find("planFinishTime") != m.end() && !m["planFinishTime"].empty()) {
      planFinishTime = make_shared<string>(boost::any_cast<string>(m["planFinishTime"]));
    }
    if (m.find("directorId") != m.end() && !m["directorId"].empty()) {
      directorId = make_shared<long>(boost::any_cast<long>(m["directorId"]));
    }
    if (m.find("stalkerId") != m.end() && !m["stalkerId"].empty()) {
      stalkerId = make_shared<long>(boost::any_cast<long>(m["stalkerId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~GetProblemImprovementResponseBodyDataMeasureList() = default;
};
class GetProblemImprovementResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> problemId{};
  shared_ptr<string> problemReason{};
  shared_ptr<string> recentActivity{};
  shared_ptr<string> injectionMode{};
  shared_ptr<string> recoveryMode{};
  shared_ptr<string> discoverSource{};
  shared_ptr<long> userReport{};
  shared_ptr<string> monitorSourceName{};
  shared_ptr<string> relationChanges{};
  shared_ptr<long> dutyUserId{};
  shared_ptr<long> replayDutyUserId{};
  shared_ptr<string> replayDutyUserPhone{};
  shared_ptr<string> dutyDepartmentId{};
  shared_ptr<string> dutyUserName{};
  shared_ptr<string> dutyUserPhone{};
  shared_ptr<string> replayDutyUserName{};
  shared_ptr<string> remark{};
  shared_ptr<bool> isManual{};
  shared_ptr<string> dutyDepartmentName{};
  shared_ptr<vector<GetProblemImprovementResponseBodyDataMeasureList>> measureList{};

  GetProblemImprovementResponseBodyData() {}

  explicit GetProblemImprovementResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (problemReason) {
      res["problemReason"] = boost::any(*problemReason);
    }
    if (recentActivity) {
      res["recentActivity"] = boost::any(*recentActivity);
    }
    if (injectionMode) {
      res["injectionMode"] = boost::any(*injectionMode);
    }
    if (recoveryMode) {
      res["recoveryMode"] = boost::any(*recoveryMode);
    }
    if (discoverSource) {
      res["discoverSource"] = boost::any(*discoverSource);
    }
    if (userReport) {
      res["userReport"] = boost::any(*userReport);
    }
    if (monitorSourceName) {
      res["monitorSourceName"] = boost::any(*monitorSourceName);
    }
    if (relationChanges) {
      res["relationChanges"] = boost::any(*relationChanges);
    }
    if (dutyUserId) {
      res["dutyUserId"] = boost::any(*dutyUserId);
    }
    if (replayDutyUserId) {
      res["replayDutyUserId"] = boost::any(*replayDutyUserId);
    }
    if (replayDutyUserPhone) {
      res["replayDutyUserPhone"] = boost::any(*replayDutyUserPhone);
    }
    if (dutyDepartmentId) {
      res["dutyDepartmentId"] = boost::any(*dutyDepartmentId);
    }
    if (dutyUserName) {
      res["dutyUserName"] = boost::any(*dutyUserName);
    }
    if (dutyUserPhone) {
      res["dutyUserPhone"] = boost::any(*dutyUserPhone);
    }
    if (replayDutyUserName) {
      res["replayDutyUserName"] = boost::any(*replayDutyUserName);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    if (isManual) {
      res["isManual"] = boost::any(*isManual);
    }
    if (dutyDepartmentName) {
      res["dutyDepartmentName"] = boost::any(*dutyDepartmentName);
    }
    if (measureList) {
      vector<boost::any> temp1;
      for(auto item1:*measureList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["measureList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<string>(boost::any_cast<string>(m["problemId"]));
    }
    if (m.find("problemReason") != m.end() && !m["problemReason"].empty()) {
      problemReason = make_shared<string>(boost::any_cast<string>(m["problemReason"]));
    }
    if (m.find("recentActivity") != m.end() && !m["recentActivity"].empty()) {
      recentActivity = make_shared<string>(boost::any_cast<string>(m["recentActivity"]));
    }
    if (m.find("injectionMode") != m.end() && !m["injectionMode"].empty()) {
      injectionMode = make_shared<string>(boost::any_cast<string>(m["injectionMode"]));
    }
    if (m.find("recoveryMode") != m.end() && !m["recoveryMode"].empty()) {
      recoveryMode = make_shared<string>(boost::any_cast<string>(m["recoveryMode"]));
    }
    if (m.find("discoverSource") != m.end() && !m["discoverSource"].empty()) {
      discoverSource = make_shared<string>(boost::any_cast<string>(m["discoverSource"]));
    }
    if (m.find("userReport") != m.end() && !m["userReport"].empty()) {
      userReport = make_shared<long>(boost::any_cast<long>(m["userReport"]));
    }
    if (m.find("monitorSourceName") != m.end() && !m["monitorSourceName"].empty()) {
      monitorSourceName = make_shared<string>(boost::any_cast<string>(m["monitorSourceName"]));
    }
    if (m.find("relationChanges") != m.end() && !m["relationChanges"].empty()) {
      relationChanges = make_shared<string>(boost::any_cast<string>(m["relationChanges"]));
    }
    if (m.find("dutyUserId") != m.end() && !m["dutyUserId"].empty()) {
      dutyUserId = make_shared<long>(boost::any_cast<long>(m["dutyUserId"]));
    }
    if (m.find("replayDutyUserId") != m.end() && !m["replayDutyUserId"].empty()) {
      replayDutyUserId = make_shared<long>(boost::any_cast<long>(m["replayDutyUserId"]));
    }
    if (m.find("replayDutyUserPhone") != m.end() && !m["replayDutyUserPhone"].empty()) {
      replayDutyUserPhone = make_shared<string>(boost::any_cast<string>(m["replayDutyUserPhone"]));
    }
    if (m.find("dutyDepartmentId") != m.end() && !m["dutyDepartmentId"].empty()) {
      dutyDepartmentId = make_shared<string>(boost::any_cast<string>(m["dutyDepartmentId"]));
    }
    if (m.find("dutyUserName") != m.end() && !m["dutyUserName"].empty()) {
      dutyUserName = make_shared<string>(boost::any_cast<string>(m["dutyUserName"]));
    }
    if (m.find("dutyUserPhone") != m.end() && !m["dutyUserPhone"].empty()) {
      dutyUserPhone = make_shared<string>(boost::any_cast<string>(m["dutyUserPhone"]));
    }
    if (m.find("replayDutyUserName") != m.end() && !m["replayDutyUserName"].empty()) {
      replayDutyUserName = make_shared<string>(boost::any_cast<string>(m["replayDutyUserName"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
    if (m.find("isManual") != m.end() && !m["isManual"].empty()) {
      isManual = make_shared<bool>(boost::any_cast<bool>(m["isManual"]));
    }
    if (m.find("dutyDepartmentName") != m.end() && !m["dutyDepartmentName"].empty()) {
      dutyDepartmentName = make_shared<string>(boost::any_cast<string>(m["dutyDepartmentName"]));
    }
    if (m.find("measureList") != m.end() && !m["measureList"].empty()) {
      if (typeid(vector<boost::any>) == m["measureList"].type()) {
        vector<GetProblemImprovementResponseBodyDataMeasureList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["measureList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProblemImprovementResponseBodyDataMeasureList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        measureList = make_shared<vector<GetProblemImprovementResponseBodyDataMeasureList>>(expect1);
      }
    }
  }


  virtual ~GetProblemImprovementResponseBodyData() = default;
};
class GetProblemImprovementResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetProblemImprovementResponseBodyData> data{};

  GetProblemImprovementResponseBody() {}

  explicit GetProblemImprovementResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetProblemImprovementResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetProblemImprovementResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetProblemImprovementResponseBody() = default;
};
class GetProblemImprovementResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetProblemImprovementResponseBody> body{};

  GetProblemImprovementResponse() {}

  explicit GetProblemImprovementResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetProblemImprovementResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProblemImprovementResponseBody>(model1);
      }
    }
  }


  virtual ~GetProblemImprovementResponse() = default;
};
class CreateProblemEffectionServiceRequest : public Darabonba::Model {
public:
  shared_ptr<long> serviceId{};
  shared_ptr<string> level{};
  shared_ptr<string> status{};
  shared_ptr<string> description{};
  shared_ptr<vector<string>> pictureUrl{};
  shared_ptr<long> problemId{};
  shared_ptr<string> clientToken{};

  CreateProblemEffectionServiceRequest() {}

  explicit CreateProblemEffectionServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceId) {
      res["serviceId"] = boost::any(*serviceId);
    }
    if (level) {
      res["level"] = boost::any(*level);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (pictureUrl) {
      res["pictureUrl"] = boost::any(*pictureUrl);
    }
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceId") != m.end() && !m["serviceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["serviceId"]));
    }
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["level"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("pictureUrl") != m.end() && !m["pictureUrl"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["pictureUrl"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["pictureUrl"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      pictureUrl = make_shared<vector<string>>(toVec1);
    }
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~CreateProblemEffectionServiceRequest() = default;
};
class CreateProblemEffectionServiceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> effectionServiceId{};

  CreateProblemEffectionServiceResponseBodyData() {}

  explicit CreateProblemEffectionServiceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (effectionServiceId) {
      res["effectionServiceId"] = boost::any(*effectionServiceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("effectionServiceId") != m.end() && !m["effectionServiceId"].empty()) {
      effectionServiceId = make_shared<long>(boost::any_cast<long>(m["effectionServiceId"]));
    }
  }


  virtual ~CreateProblemEffectionServiceResponseBodyData() = default;
};
class CreateProblemEffectionServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateProblemEffectionServiceResponseBodyData> data{};

  CreateProblemEffectionServiceResponseBody() {}

  explicit CreateProblemEffectionServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateProblemEffectionServiceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateProblemEffectionServiceResponseBodyData>(model1);
      }
    }
  }


  virtual ~CreateProblemEffectionServiceResponseBody() = default;
};
class CreateProblemEffectionServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateProblemEffectionServiceResponseBody> body{};

  CreateProblemEffectionServiceResponse() {}

  explicit CreateProblemEffectionServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateProblemEffectionServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProblemEffectionServiceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProblemEffectionServiceResponse() = default;
};
class DeleteProblemTimelineRequest : public Darabonba::Model {
public:
  shared_ptr<long> problemTimelineId{};
  shared_ptr<long> problemId{};
  shared_ptr<string> clientToken{};

  DeleteProblemTimelineRequest() {}

  explicit DeleteProblemTimelineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (problemTimelineId) {
      res["problemTimelineId"] = boost::any(*problemTimelineId);
    }
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("problemTimelineId") != m.end() && !m["problemTimelineId"].empty()) {
      problemTimelineId = make_shared<long>(boost::any_cast<long>(m["problemTimelineId"]));
    }
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~DeleteProblemTimelineRequest() = default;
};
class DeleteProblemTimelineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteProblemTimelineResponseBody() {}

  explicit DeleteProblemTimelineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteProblemTimelineResponseBody() = default;
};
class DeleteProblemTimelineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteProblemTimelineResponseBody> body{};

  DeleteProblemTimelineResponse() {}

  explicit DeleteProblemTimelineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteProblemTimelineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteProblemTimelineResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteProblemTimelineResponse() = default;
};
class CreateProblemMeasureRequest : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<long> problemId{};
  shared_ptr<string> content{};
  shared_ptr<string> checkStandard{};
  shared_ptr<long> checkUserId{};
  shared_ptr<string> planFinishTime{};
  shared_ptr<long> directorId{};
  shared_ptr<long> stalkerId{};
  shared_ptr<string> status{};
  shared_ptr<string> clientToken{};

  CreateProblemMeasureRequest() {}

  explicit CreateProblemMeasureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (problemId) {
      res["problemId"] = boost::any(*problemId);
    }
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (checkStandard) {
      res["checkStandard"] = boost::any(*checkStandard);
    }
    if (checkUserId) {
      res["checkUserId"] = boost::any(*checkUserId);
    }
    if (planFinishTime) {
      res["planFinishTime"] = boost::any(*planFinishTime);
    }
    if (directorId) {
      res["directorId"] = boost::any(*directorId);
    }
    if (stalkerId) {
      res["stalkerId"] = boost::any(*stalkerId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
    if (m.find("problemId") != m.end() && !m["problemId"].empty()) {
      problemId = make_shared<long>(boost::any_cast<long>(m["problemId"]));
    }
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("checkStandard") != m.end() && !m["checkStandard"].empty()) {
      checkStandard = make_shared<string>(boost::any_cast<string>(m["checkStandard"]));
    }
    if (m.find("checkUserId") != m.end() && !m["checkUserId"].empty()) {
      checkUserId = make_shared<long>(boost::any_cast<long>(m["checkUserId"]));
    }
    if (m.find("planFinishTime") != m.end() && !m["planFinishTime"].empty()) {
      planFinishTime = make_shared<string>(boost::any_cast<string>(m["planFinishTime"]));
    }
    if (m.find("directorId") != m.end() && !m["directorId"].empty()) {
      directorId = make_shared<long>(boost::any_cast<long>(m["directorId"]));
    }
    if (m.find("stalkerId") != m.end() && !m["stalkerId"].empty()) {
      stalkerId = make_shared<long>(boost::any_cast<long>(m["stalkerId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~CreateProblemMeasureRequest() = default;
};
class CreateProblemMeasureResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> measureId{};

  CreateProblemMeasureResponseBodyData() {}

  explicit CreateProblemMeasureResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (measureId) {
      res["measureId"] = boost::any(*measureId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("measureId") != m.end() && !m["measureId"].empty()) {
      measureId = make_shared<long>(boost::any_cast<long>(m["measureId"]));
    }
  }


  virtual ~CreateProblemMeasureResponseBodyData() = default;
};
class CreateProblemMeasureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateProblemMeasureResponseBodyData> data{};

  CreateProblemMeasureResponseBody() {}

  explicit CreateProblemMeasureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateProblemMeasureResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateProblemMeasureResponseBodyData>(model1);
      }
    }
  }


  virtual ~CreateProblemMeasureResponseBody() = default;
};
class CreateProblemMeasureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateProblemMeasureResponseBody> body{};

  CreateProblemMeasureResponse() {}

  explicit CreateProblemMeasureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateProblemMeasureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProblemMeasureResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProblemMeasureResponse() = default;
};
class ListServiceGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> queryName{};
  shared_ptr<string> queryType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> isScheduled{};

  ListServiceGroupsRequest() {}

  explicit ListServiceGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queryName) {
      res["queryName"] = boost::any(*queryName);
    }
    if (queryType) {
      res["queryType"] = boost::any(*queryType);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (isScheduled) {
      res["isScheduled"] = boost::any(*isScheduled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("queryName") != m.end() && !m["queryName"].empty()) {
      queryName = make_shared<string>(boost::any_cast<string>(m["queryName"]));
    }
    if (m.find("queryType") != m.end() && !m["queryType"].empty()) {
      queryType = make_shared<string>(boost::any_cast<string>(m["queryType"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("isScheduled") != m.end() && !m["isScheduled"].empty()) {
      isScheduled = make_shared<bool>(boost::any_cast<bool>(m["isScheduled"]));
    }
  }


  virtual ~ListServiceGroupsRequest() = default;
};
class ListServiceGroupsResponseBodyDataUsers : public Darabonba::Model {
public:
  shared_ptr<long> userId{};
  shared_ptr<string> userName{};
  shared_ptr<long> serviceGroupId{};
  shared_ptr<string> phone{};
  shared_ptr<string> email{};

  ListServiceGroupsResponseBodyDataUsers() {}

  explicit ListServiceGroupsResponseBodyDataUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    if (userName) {
      res["userName"] = boost::any(*userName);
    }
    if (serviceGroupId) {
      res["serviceGroupId"] = boost::any(*serviceGroupId);
    }
    if (phone) {
      res["phone"] = boost::any(*phone);
    }
    if (email) {
      res["email"] = boost::any(*email);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["userId"]));
    }
    if (m.find("userName") != m.end() && !m["userName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["userName"]));
    }
    if (m.find("serviceGroupId") != m.end() && !m["serviceGroupId"].empty()) {
      serviceGroupId = make_shared<long>(boost::any_cast<long>(m["serviceGroupId"]));
    }
    if (m.find("phone") != m.end() && !m["phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["phone"]));
    }
    if (m.find("email") != m.end() && !m["email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["email"]));
    }
  }


  virtual ~ListServiceGroupsResponseBodyDataUsers() = default;
};
class ListServiceGroupsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> serviceGroupId{};
  shared_ptr<bool> isScheduled{};
  shared_ptr<string> serviceGroupName{};
  shared_ptr<string> serviceGroupDescription{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> enableWebhook{};
  shared_ptr<string> webhookType{};
  shared_ptr<string> webhookLink{};
  shared_ptr<vector<ListServiceGroupsResponseBodyDataUsers>> users{};

  ListServiceGroupsResponseBodyData() {}

  explicit ListServiceGroupsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceGroupId) {
      res["serviceGroupId"] = boost::any(*serviceGroupId);
    }
    if (isScheduled) {
      res["isScheduled"] = boost::any(*isScheduled);
    }
    if (serviceGroupName) {
      res["serviceGroupName"] = boost::any(*serviceGroupName);
    }
    if (serviceGroupDescription) {
      res["serviceGroupDescription"] = boost::any(*serviceGroupDescription);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (enableWebhook) {
      res["enableWebhook"] = boost::any(*enableWebhook);
    }
    if (webhookType) {
      res["webhookType"] = boost::any(*webhookType);
    }
    if (webhookLink) {
      res["webhookLink"] = boost::any(*webhookLink);
    }
    if (users) {
      vector<boost::any> temp1;
      for(auto item1:*users){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["users"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceGroupId") != m.end() && !m["serviceGroupId"].empty()) {
      serviceGroupId = make_shared<long>(boost::any_cast<long>(m["serviceGroupId"]));
    }
    if (m.find("isScheduled") != m.end() && !m["isScheduled"].empty()) {
      isScheduled = make_shared<bool>(boost::any_cast<bool>(m["isScheduled"]));
    }
    if (m.find("serviceGroupName") != m.end() && !m["serviceGroupName"].empty()) {
      serviceGroupName = make_shared<string>(boost::any_cast<string>(m["serviceGroupName"]));
    }
    if (m.find("serviceGroupDescription") != m.end() && !m["serviceGroupDescription"].empty()) {
      serviceGroupDescription = make_shared<string>(boost::any_cast<string>(m["serviceGroupDescription"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
    if (m.find("enableWebhook") != m.end() && !m["enableWebhook"].empty()) {
      enableWebhook = make_shared<string>(boost::any_cast<string>(m["enableWebhook"]));
    }
    if (m.find("webhookType") != m.end() && !m["webhookType"].empty()) {
      webhookType = make_shared<string>(boost::any_cast<string>(m["webhookType"]));
    }
    if (m.find("webhookLink") != m.end() && !m["webhookLink"].empty()) {
      webhookLink = make_shared<string>(boost::any_cast<string>(m["webhookLink"]));
    }
    if (m.find("users") != m.end() && !m["users"].empty()) {
      if (typeid(vector<boost::any>) == m["users"].type()) {
        vector<ListServiceGroupsResponseBodyDataUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceGroupsResponseBodyDataUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<ListServiceGroupsResponseBodyDataUsers>>(expect1);
      }
    }
  }


  virtual ~ListServiceGroupsResponseBodyData() = default;
};
class ListServiceGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListServiceGroupsResponseBodyData>> data{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListServiceGroupsResponseBody() {}

  explicit ListServiceGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListServiceGroupsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceGroupsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListServiceGroupsResponseBodyData>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListServiceGroupsResponseBody() = default;
};
class ListServiceGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListServiceGroupsResponseBody> body{};

  ListServiceGroupsResponse() {}

  explicit ListServiceGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListServiceGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServiceGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListServiceGroupsResponse() = default;
};
class FinishIncidentRequest : public Darabonba::Model {
public:
  shared_ptr<vector<long>> incidentIds{};
  shared_ptr<long> incidentFinishReason{};
  shared_ptr<string> incidentFinishReasonDescription{};
  shared_ptr<long> incidentFinishSolution{};
  shared_ptr<string> incidentFinishSolutionDescription{};
  shared_ptr<string> clientToken{};

  FinishIncidentRequest() {}

  explicit FinishIncidentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (incidentIds) {
      res["incidentIds"] = boost::any(*incidentIds);
    }
    if (incidentFinishReason) {
      res["incidentFinishReason"] = boost::any(*incidentFinishReason);
    }
    if (incidentFinishReasonDescription) {
      res["incidentFinishReasonDescription"] = boost::any(*incidentFinishReasonDescription);
    }
    if (incidentFinishSolution) {
      res["incidentFinishSolution"] = boost::any(*incidentFinishSolution);
    }
    if (incidentFinishSolutionDescription) {
      res["incidentFinishSolutionDescription"] = boost::any(*incidentFinishSolutionDescription);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("incidentIds") != m.end() && !m["incidentIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["incidentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["incidentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      incidentIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("incidentFinishReason") != m.end() && !m["incidentFinishReason"].empty()) {
      incidentFinishReason = make_shared<long>(boost::any_cast<long>(m["incidentFinishReason"]));
    }
    if (m.find("incidentFinishReasonDescription") != m.end() && !m["incidentFinishReasonDescription"].empty()) {
      incidentFinishReasonDescription = make_shared<string>(boost::any_cast<string>(m["incidentFinishReasonDescription"]));
    }
    if (m.find("incidentFinishSolution") != m.end() && !m["incidentFinishSolution"].empty()) {
      incidentFinishSolution = make_shared<long>(boost::any_cast<long>(m["incidentFinishSolution"]));
    }
    if (m.find("incidentFinishSolutionDescription") != m.end() && !m["incidentFinishSolutionDescription"].empty()) {
      incidentFinishSolutionDescription = make_shared<string>(boost::any_cast<string>(m["incidentFinishSolutionDescription"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~FinishIncidentRequest() = default;
};
class FinishIncidentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  FinishIncidentResponseBody() {}

  explicit FinishIncidentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~FinishIncidentResponseBody() = default;
};
class FinishIncidentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<FinishIncidentResponseBody> body{};

  FinishIncidentResponse() {}

  explicit FinishIncidentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        FinishIncidentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FinishIncidentResponseBody>(model1);
      }
    }
  }


  virtual ~FinishIncidentResponse() = default;
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
  ListIncidentTimelinesResponse listIncidentTimelines(shared_ptr<ListIncidentTimelinesRequest> request);
  ListIncidentTimelinesResponse listIncidentTimelinesWithOptions(shared_ptr<ListIncidentTimelinesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUsersResponse listUsers(shared_ptr<ListUsersRequest> request);
  ListUsersResponse listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServiceGroupSchedulingResponse updateServiceGroupScheduling(shared_ptr<UpdateServiceGroupSchedulingRequest> request);
  UpdateServiceGroupSchedulingResponse updateServiceGroupSchedulingWithOptions(shared_ptr<UpdateServiceGroupSchedulingRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRouteRulesResponse listRouteRules(shared_ptr<ListRouteRulesRequest> request);
  ListRouteRulesResponse listRouteRulesWithOptions(shared_ptr<ListRouteRulesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableSubscriptionResponse disableSubscription(shared_ptr<DisableSubscriptionRequest> request);
  DisableSubscriptionResponse disableSubscriptionWithOptions(shared_ptr<DisableSubscriptionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProblemSubtotalsResponse listProblemSubtotals(shared_ptr<ListProblemSubtotalsRequest> request);
  ListProblemSubtotalsResponse listProblemSubtotalsWithOptions(shared_ptr<ListProblemSubtotalsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEscalationPlanServicesResponse listEscalationPlanServices(shared_ptr<ListEscalationPlanServicesRequest> request);
  ListEscalationPlanServicesResponse listEscalationPlanServicesWithOptions(shared_ptr<ListEscalationPlanServicesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceStatisticsResponse getResourceStatistics(shared_ptr<GetResourceStatisticsRequest> request);
  GetResourceStatisticsResponse getResourceStatisticsWithOptions(shared_ptr<GetResourceStatisticsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRouteRuleResponse createRouteRule(shared_ptr<CreateRouteRuleRequest> request);
  CreateRouteRuleResponse createRouteRuleWithOptions(shared_ptr<CreateRouteRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProblemTimelineResponse updateProblemTimeline(shared_ptr<UpdateProblemTimelineRequest> request);
  UpdateProblemTimelineResponse updateProblemTimelineWithOptions(shared_ptr<UpdateProblemTimelineRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableRouteRuleResponse disableRouteRule(shared_ptr<DisableRouteRuleRequest> request);
  DisableRouteRuleResponse disableRouteRuleWithOptions(shared_ptr<DisableRouteRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateProblemPictureUploadSignResponse generateProblemPictureUploadSign(shared_ptr<GenerateProblemPictureUploadSignRequest> request);
  GenerateProblemPictureUploadSignResponse generateProblemPictureUploadSignWithOptions(shared_ptr<GenerateProblemPictureUploadSignRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeliverIncidentResponse deliverIncident(shared_ptr<DeliverIncidentRequest> request);
  DeliverIncidentResponse deliverIncidentWithOptions(shared_ptr<DeliverIncidentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEscalationPlanResponse getEscalationPlan(shared_ptr<GetEscalationPlanRequest> request);
  GetEscalationPlanResponse getEscalationPlanWithOptions(shared_ptr<GetEscalationPlanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProblemEffectionServiceResponse deleteProblemEffectionService(shared_ptr<DeleteProblemEffectionServiceRequest> request);
  DeleteProblemEffectionServiceResponse deleteProblemEffectionServiceWithOptions(shared_ptr<DeleteProblemEffectionServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListIncidentsResponse listIncidents(shared_ptr<ListIncidentsRequest> request);
  ListIncidentsResponse listIncidentsWithOptions(shared_ptr<ListIncidentsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceResponse createService(shared_ptr<CreateServiceRequest> request);
  CreateServiceResponse createServiceWithOptions(shared_ptr<CreateServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServiceResponse updateService(shared_ptr<UpdateServiceRequest> request);
  UpdateServiceResponse updateServiceWithOptions(shared_ptr<UpdateServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceGroupSchedulingResponse createServiceGroupScheduling(shared_ptr<CreateServiceGroupSchedulingRequest> request);
  CreateServiceGroupSchedulingResponse createServiceGroupSchedulingWithOptions(shared_ptr<CreateServiceGroupSchedulingRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEventResponse getEvent(shared_ptr<GetEventRequest> request);
  GetEventResponse getEventWithOptions(shared_ptr<GetEventRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProblemTimeLinesResponse listProblemTimeLines(shared_ptr<ListProblemTimeLinesRequest> request);
  ListProblemTimeLinesResponse listProblemTimeLinesWithOptions(shared_ptr<ListProblemTimeLinesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckWebhookResponse checkWebhook(shared_ptr<CheckWebhookRequest> request);
  CheckWebhookResponse checkWebhookWithOptions(shared_ptr<CheckWebhookRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEscalationPlanResponse createEscalationPlan(shared_ptr<CreateEscalationPlanRequest> request);
  CreateEscalationPlanResponse createEscalationPlanWithOptions(shared_ptr<CreateEscalationPlanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEscalationPlansResponse listEscalationPlans(shared_ptr<ListEscalationPlansRequest> request);
  ListEscalationPlansResponse listEscalationPlansWithOptions(shared_ptr<ListEscalationPlansRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetIncidentResponse getIncident(shared_ptr<GetIncidentRequest> request);
  GetIncidentResponse getIncidentWithOptions(shared_ptr<GetIncidentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserGuideStatusResponse updateUserGuideStatus(shared_ptr<UpdateUserGuideStatusRequest> request);
  UpdateUserGuideStatusResponse updateUserGuideStatusWithOptions(shared_ptr<UpdateUserGuideStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEscalationPlanResponse deleteEscalationPlan(shared_ptr<DeleteEscalationPlanRequest> request);
  DeleteEscalationPlanResponse deleteEscalationPlanWithOptions(shared_ptr<DeleteEscalationPlanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConfigsResponse listConfigs(shared_ptr<ListConfigsRequest> request);
  ListConfigsResponse listConfigsWithOptions(shared_ptr<ListConfigsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUserResponse createUser(shared_ptr<CreateUserRequest> request);
  CreateUserResponse createUserWithOptions(shared_ptr<CreateUserRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserSerivceGroupsResponse listUserSerivceGroups(shared_ptr<ListUserSerivceGroupsRequest> request);
  ListUserSerivceGroupsResponse listUserSerivceGroupsWithOptions(shared_ptr<ListUserSerivceGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefreshIntegrationConfigKeyResponse refreshIntegrationConfigKey(shared_ptr<RefreshIntegrationConfigKeyRequest> request);
  RefreshIntegrationConfigKeyResponse refreshIntegrationConfigKeyWithOptions(shared_ptr<RefreshIntegrationConfigKeyRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateIncidentSubtotalResponse createIncidentSubtotal(shared_ptr<CreateIncidentSubtotalRequest> request);
  CreateIncidentSubtotalResponse createIncidentSubtotalWithOptions(shared_ptr<CreateIncidentSubtotalRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableIntegrationConfigResponse disableIntegrationConfig(shared_ptr<DisableIntegrationConfigRequest> request);
  DisableIntegrationConfigResponse disableIntegrationConfigWithOptions(shared_ptr<DisableIntegrationConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateIntegrationConfigResponse createIntegrationConfig(shared_ptr<CreateIntegrationConfigRequest> request);
  CreateIntegrationConfigResponse createIntegrationConfigWithOptions(shared_ptr<CreateIntegrationConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRouteRuleResponse deleteRouteRule(shared_ptr<DeleteRouteRuleRequest> request);
  DeleteRouteRuleResponse deleteRouteRuleWithOptions(shared_ptr<DeleteRouteRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProblemResponse updateProblem(shared_ptr<UpdateProblemRequest> request);
  UpdateProblemResponse updateProblemWithOptions(shared_ptr<UpdateProblemRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRouteRuleResponse getRouteRule(shared_ptr<GetRouteRuleRequest> request);
  GetRouteRuleResponse getRouteRuleWithOptions(shared_ptr<GetRouteRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableRouteRuleResponse enableRouteRule(shared_ptr<EnableRouteRuleRequest> request);
  EnableRouteRuleResponse enableRouteRuleWithOptions(shared_ptr<EnableRouteRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserResponse updateUser(shared_ptr<UpdateUserRequest> request);
  UpdateUserResponse updateUserWithOptions(shared_ptr<UpdateUserRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProblemImprovementResponse updateProblemImprovement(shared_ptr<UpdateProblemImprovementRequest> request);
  UpdateProblemImprovementResponse updateProblemImprovementWithOptions(shared_ptr<UpdateProblemImprovementRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceResponse getService(shared_ptr<GetServiceRequest> request);
  GetServiceResponse getServiceWithOptions(shared_ptr<GetServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateIncidentResponse createIncident(shared_ptr<CreateIncidentRequest> request);
  CreateIncidentResponse createIncidentWithOptions(shared_ptr<CreateIncidentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FinishProblemResponse finishProblem(shared_ptr<FinishProblemRequest> request);
  FinishProblemResponse finishProblemWithOptions(shared_ptr<FinishProblemRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSubscriptionServiceGroupsResponse listSubscriptionServiceGroups(shared_ptr<ListSubscriptionServiceGroupsRequest> request);
  ListSubscriptionServiceGroupsResponse listSubscriptionServiceGroupsWithOptions(shared_ptr<ListSubscriptionServiceGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProblemNoticeResponse updateProblemNotice(shared_ptr<UpdateProblemNoticeRequest> request);
  UpdateProblemNoticeResponse updateProblemNoticeWithOptions(shared_ptr<UpdateProblemNoticeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListIntegrationConfigTimelinesResponse listIntegrationConfigTimelines(shared_ptr<ListIntegrationConfigTimelinesRequest> request);
  ListIntegrationConfigTimelinesResponse listIntegrationConfigTimelinesWithOptions(shared_ptr<ListIntegrationConfigTimelinesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateIncidentResponse updateIncident(shared_ptr<UpdateIncidentRequest> request);
  UpdateIncidentResponse updateIncidentWithOptions(shared_ptr<UpdateIncidentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceGroupResponse getServiceGroup(shared_ptr<GetServiceGroupRequest> request);
  GetServiceGroupResponse getServiceGroupWithOptions(shared_ptr<GetServiceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSubscriptionResponse createSubscription(shared_ptr<CreateSubscriptionRequest> request);
  CreateSubscriptionResponse createSubscriptionWithOptions(shared_ptr<CreateSubscriptionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteIntegrationConfigResponse deleteIntegrationConfig(shared_ptr<DeleteIntegrationConfigRequest> request);
  DeleteIntegrationConfigResponse deleteIntegrationConfigWithOptions(shared_ptr<DeleteIntegrationConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProblemMeasureResponse updateProblemMeasure(shared_ptr<UpdateProblemMeasureRequest> request);
  UpdateProblemMeasureResponse updateProblemMeasureWithOptions(shared_ptr<UpdateProblemMeasureRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAlertsResponse listAlerts(shared_ptr<ListAlertsRequest> request);
  ListAlertsResponse listAlertsWithOptions(shared_ptr<ListAlertsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProblemPreviewResponse getProblemPreview(shared_ptr<GetProblemPreviewRequest> request);
  GetProblemPreviewResponse getProblemPreviewWithOptions(shared_ptr<GetProblemPreviewRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRouteRuleResponse updateRouteRule(shared_ptr<UpdateRouteRuleRequest> request);
  UpdateRouteRuleResponse updateRouteRuleWithOptions(shared_ptr<UpdateRouteRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableSubscriptionResponse enableSubscription(shared_ptr<EnableSubscriptionRequest> request);
  EnableSubscriptionResponse enableSubscriptionWithOptions(shared_ptr<EnableSubscriptionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSubscriptionResponse updateSubscription(shared_ptr<UpdateSubscriptionRequest> request);
  UpdateSubscriptionResponse updateSubscriptionWithOptions(shared_ptr<UpdateSubscriptionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetIncidentStatisticsResponse getIncidentStatistics(shared_ptr<GetIncidentStatisticsRequest> request);
  GetIncidentStatisticsResponse getIncidentStatisticsWithOptions(shared_ptr<GetIncidentStatisticsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProblemOperationsResponse listProblemOperations(shared_ptr<ListProblemOperationsRequest> request);
  ListProblemOperationsResponse listProblemOperationsWithOptions(shared_ptr<ListProblemOperationsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSourceEventsResponse listSourceEvents(shared_ptr<ListSourceEventsRequest> request);
  ListSourceEventsResponse listSourceEventsWithOptions(shared_ptr<ListSourceEventsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceGroupSpecialPersonSchedulingResponse getServiceGroupSpecialPersonScheduling(shared_ptr<GetServiceGroupSpecialPersonSchedulingRequest> request);
  GetServiceGroupSpecialPersonSchedulingResponse getServiceGroupSpecialPersonSchedulingWithOptions(shared_ptr<GetServiceGroupSpecialPersonSchedulingRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserResponse getUser(shared_ptr<GetUserRequest> request);
  GetUserResponse getUserWithOptions(shared_ptr<GetUserRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddProblemServiceGroupResponse addProblemServiceGroup(shared_ptr<AddProblemServiceGroupRequest> request);
  AddProblemServiceGroupResponse addProblemServiceGroupWithOptions(shared_ptr<AddProblemServiceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReplayProblemResponse replayProblem(shared_ptr<ReplayProblemRequest> request);
  ReplayProblemResponse replayProblemWithOptions(shared_ptr<ReplayProblemRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProblemResponse getProblem(shared_ptr<GetProblemRequest> request);
  GetProblemResponse getProblemWithOptions(shared_ptr<GetProblemRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProblemResponse deleteProblem(shared_ptr<DeleteProblemRequest> request);
  DeleteProblemResponse deleteProblemWithOptions(shared_ptr<DeleteProblemRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceGroupResponse createServiceGroup(shared_ptr<CreateServiceGroupRequest> request);
  CreateServiceGroupResponse createServiceGroupWithOptions(shared_ptr<CreateServiceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteIncidentResponse deleteIncident(shared_ptr<DeleteIncidentRequest> request);
  DeleteIncidentResponse deleteIncidentWithOptions(shared_ptr<DeleteIncidentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServicesResponse listServices(shared_ptr<ListServicesRequest> request);
  ListServicesResponse listServicesWithOptions(shared_ptr<ListServicesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSubscriptionResponse getSubscription(shared_ptr<GetSubscriptionRequest> request);
  GetSubscriptionResponse getSubscriptionWithOptions(shared_ptr<GetSubscriptionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProblemTimelinesResponse createProblemTimelines(shared_ptr<CreateProblemTimelinesRequest> request);
  CreateProblemTimelinesResponse createProblemTimelinesWithOptions(shared_ptr<CreateProblemTimelinesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProblemTimelineResponse createProblemTimeline(shared_ptr<CreateProblemTimelineRequest> request);
  CreateProblemTimelineResponse createProblemTimelineWithOptions(shared_ptr<CreateProblemTimelineRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelProblemResponse cancelProblem(shared_ptr<CancelProblemRequest> request);
  CancelProblemResponse cancelProblemWithOptions(shared_ptr<CancelProblemRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServiceGroupResponse updateServiceGroup(shared_ptr<UpdateServiceGroupRequest> request);
  UpdateServiceGroupResponse updateServiceGroupWithOptions(shared_ptr<UpdateServiceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateIntegrationConfigResponse updateIntegrationConfig(shared_ptr<UpdateIntegrationConfigRequest> request);
  UpdateIntegrationConfigResponse updateIntegrationConfigWithOptions(shared_ptr<UpdateIntegrationConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProblemDetailOperationsResponse listProblemDetailOperations(shared_ptr<ListProblemDetailOperationsRequest> request);
  ListProblemDetailOperationsResponse listProblemDetailOperationsWithOptions(shared_ptr<ListProblemDetailOperationsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListIncidentDetailEscalationPlansResponse listIncidentDetailEscalationPlans(shared_ptr<ListIncidentDetailEscalationPlansRequest> request);
  ListIncidentDetailEscalationPlansResponse listIncidentDetailEscalationPlansWithOptions(shared_ptr<ListIncidentDetailEscalationPlansRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListIncidentSubtotalsResponse listIncidentSubtotals(shared_ptr<ListIncidentSubtotalsRequest> request);
  ListIncidentSubtotalsResponse listIncidentSubtotalsWithOptions(shared_ptr<ListIncidentSubtotalsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDictionariesResponse listDictionaries(shared_ptr<ListDictionariesRequest> request);
  ListDictionariesResponse listDictionariesWithOptions(shared_ptr<ListDictionariesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfirmIntegrationConfigResponse confirmIntegrationConfig(shared_ptr<ConfirmIntegrationConfigRequest> request);
  ConfirmIntegrationConfigResponse confirmIntegrationConfigWithOptions(shared_ptr<ConfirmIntegrationConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListIncidentDetailTimelinesResponse listIncidentDetailTimelines(shared_ptr<ListIncidentDetailTimelinesRequest> request);
  ListIncidentDetailTimelinesResponse listIncidentDetailTimelinesWithOptions(shared_ptr<ListIncidentDetailTimelinesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableServiceGroupWebhookResponse enableServiceGroupWebhook(shared_ptr<EnableServiceGroupWebhookRequest> request);
  EnableServiceGroupWebhookResponse enableServiceGroupWebhookWithOptions(shared_ptr<EnableServiceGroupWebhookRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableEscalationPlanResponse disableEscalationPlan(shared_ptr<DisableEscalationPlanRequest> request);
  DisableEscalationPlanResponse disableEscalationPlanWithOptions(shared_ptr<DisableEscalationPlanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSubscriptionResponse deleteSubscription(shared_ptr<DeleteSubscriptionRequest> request);
  DeleteSubscriptionResponse deleteSubscriptionWithOptions(shared_ptr<DeleteSubscriptionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServiceGroupSpecialDaySchedulingResponse updateServiceGroupSpecialDayScheduling(shared_ptr<UpdateServiceGroupSpecialDaySchedulingRequest> request);
  UpdateServiceGroupSpecialDaySchedulingResponse updateServiceGroupSpecialDaySchedulingWithOptions(shared_ptr<UpdateServiceGroupSpecialDaySchedulingRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSubscriptionsResponse listSubscriptions(shared_ptr<ListSubscriptionsRequest> request);
  ListSubscriptionsResponse listSubscriptionsWithOptions(shared_ptr<ListSubscriptionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceGroupSchedulingResponse getServiceGroupScheduling(shared_ptr<GetServiceGroupSchedulingRequest> request);
  GetServiceGroupSchedulingResponse getServiceGroupSchedulingWithOptions(shared_ptr<GetServiceGroupSchedulingRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RespondIncidentResponse respondIncident(shared_ptr<RespondIncidentRequest> request);
  RespondIncidentResponse respondIncidentWithOptions(shared_ptr<RespondIncidentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProblemMeasureResponse deleteProblemMeasure(shared_ptr<DeleteProblemMeasureRequest> request);
  DeleteProblemMeasureResponse deleteProblemMeasureWithOptions(shared_ptr<DeleteProblemMeasureRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServiceResponse deleteService(shared_ptr<DeleteServiceRequest> request);
  DeleteServiceResponse deleteServiceWithOptions(shared_ptr<DeleteServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserGuideStatusResponse getUserGuideStatus(shared_ptr<GetUserGuideStatusRequest> request);
  GetUserGuideStatusResponse getUserGuideStatusWithOptions(shared_ptr<GetUserGuideStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecoverProblemResponse recoverProblem(shared_ptr<RecoverProblemRequest> request);
  RecoverProblemResponse recoverProblemWithOptions(shared_ptr<RecoverProblemRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListIntegrationConfigsResponse listIntegrationConfigs(shared_ptr<ListIntegrationConfigsRequest> request);
  ListIntegrationConfigsResponse listIntegrationConfigsWithOptions(shared_ptr<ListIntegrationConfigsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserResponse deleteUser(shared_ptr<DeleteUserRequest> request);
  DeleteUserResponse deleteUserWithOptions(shared_ptr<DeleteUserRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProblemEffectionServiceResponse updateProblemEffectionService(shared_ptr<UpdateProblemEffectionServiceRequest> request);
  UpdateProblemEffectionServiceResponse updateProblemEffectionServiceWithOptions(shared_ptr<UpdateProblemEffectionServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServiceGroupResponse deleteServiceGroup(shared_ptr<DeleteServiceGroupRequest> request);
  DeleteServiceGroupResponse deleteServiceGroupWithOptions(shared_ptr<DeleteServiceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableServiceGroupWebhookResponse disableServiceGroupWebhook(shared_ptr<DisableServiceGroupWebhookRequest> request);
  DisableServiceGroupWebhookResponse disableServiceGroupWebhookWithOptions(shared_ptr<DisableServiceGroupWebhookRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveProblemServiceGroupResponse removeProblemServiceGroup(shared_ptr<RemoveProblemServiceGroupRequest> request);
  RemoveProblemServiceGroupResponse removeProblemServiceGroupWithOptions(shared_ptr<RemoveProblemServiceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProblemEffectionServiceResponse getProblemEffectionService(shared_ptr<GetProblemEffectionServiceRequest> request);
  GetProblemEffectionServiceResponse getProblemEffectionServiceWithOptions(shared_ptr<GetProblemEffectionServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceGroupSchedulingPreviewResponse getServiceGroupSchedulingPreview(shared_ptr<GetServiceGroupSchedulingPreviewRequest> request);
  GetServiceGroupSchedulingPreviewResponse getServiceGroupSchedulingPreviewWithOptions(shared_ptr<GetServiceGroupSchedulingPreviewRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMonitorSourcesResponse listMonitorSources(shared_ptr<ListMonitorSourcesRequest> request);
  ListMonitorSourcesResponse listMonitorSourcesWithOptions(shared_ptr<ListMonitorSourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableEscalationPlanResponse enableEscalationPlan(shared_ptr<EnableEscalationPlanRequest> request);
  EnableEscalationPlanResponse enableEscalationPlanWithOptions(shared_ptr<EnableEscalationPlanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEscalationPlanResponse updateEscalationPlan(shared_ptr<UpdateEscalationPlanRequest> request);
  UpdateEscalationPlanResponse updateEscalationPlanWithOptions(shared_ptr<UpdateEscalationPlanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProblemsResponse listProblems(shared_ptr<ListProblemsRequest> request);
  ListProblemsResponse listProblemsWithOptions(shared_ptr<ListProblemsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateProblemPictureLinkResponse generateProblemPictureLink(shared_ptr<GenerateProblemPictureLinkRequest> request);
  GenerateProblemPictureLinkResponse generateProblemPictureLinkWithOptions(shared_ptr<GenerateProblemPictureLinkRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetIntegrationConfigResponse getIntegrationConfig(shared_ptr<GetIntegrationConfigRequest> request);
  GetIntegrationConfigResponse getIntegrationConfigWithOptions(shared_ptr<GetIntegrationConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RevokeProblemRecoveryResponse revokeProblemRecovery(shared_ptr<RevokeProblemRecoveryRequest> request);
  RevokeProblemRecoveryResponse revokeProblemRecoveryWithOptions(shared_ptr<RevokeProblemRecoveryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableIntegrationConfigResponse enableIntegrationConfig(shared_ptr<EnableIntegrationConfigRequest> request);
  EnableIntegrationConfigResponse enableIntegrationConfigWithOptions(shared_ptr<EnableIntegrationConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProblemSubtotalResponse createProblemSubtotal(shared_ptr<CreateProblemSubtotalRequest> request);
  CreateProblemSubtotalResponse createProblemSubtotalWithOptions(shared_ptr<CreateProblemSubtotalRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProblemResponse createProblem(shared_ptr<CreateProblemRequest> request);
  CreateProblemResponse createProblemWithOptions(shared_ptr<CreateProblemRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProblemImprovementResponse getProblemImprovement(shared_ptr<GetProblemImprovementRequest> request);
  GetProblemImprovementResponse getProblemImprovementWithOptions(shared_ptr<GetProblemImprovementRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProblemEffectionServiceResponse createProblemEffectionService(shared_ptr<CreateProblemEffectionServiceRequest> request);
  CreateProblemEffectionServiceResponse createProblemEffectionServiceWithOptions(shared_ptr<CreateProblemEffectionServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProblemTimelineResponse deleteProblemTimeline(shared_ptr<DeleteProblemTimelineRequest> request);
  DeleteProblemTimelineResponse deleteProblemTimelineWithOptions(shared_ptr<DeleteProblemTimelineRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProblemMeasureResponse createProblemMeasure(shared_ptr<CreateProblemMeasureRequest> request);
  CreateProblemMeasureResponse createProblemMeasureWithOptions(shared_ptr<CreateProblemMeasureRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceGroupsResponse listServiceGroups(shared_ptr<ListServiceGroupsRequest> request);
  ListServiceGroupsResponse listServiceGroupsWithOptions(shared_ptr<ListServiceGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FinishIncidentResponse finishIncident(shared_ptr<FinishIncidentRequest> request);
  FinishIncidentResponse finishIncidentWithOptions(shared_ptr<FinishIncidentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_GEMP20210413

#endif
