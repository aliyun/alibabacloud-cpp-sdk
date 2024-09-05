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
class CloseTaskOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> userName{};

  CloseTaskOrderRequest() {}

  explicit CloseTaskOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~CloseTaskOrderRequest() = default;
};
class CloseTaskOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CloseTaskOrderResponseBody() {}

  explicit CloseTaskOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CloseTaskOrderResponseBody() = default;
};
class CloseTaskOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CloseTaskOrderResponseBody> body{};

  CloseTaskOrderResponse() {}

  explicit CloseTaskOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CloseTaskOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloseTaskOrderResponseBody>(model1);
      }
    }
  }


  virtual ~CloseTaskOrderResponse() = default;
};
class CreateTaskOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> customerRealName{};
  shared_ptr<string> customerUserId{};
  shared_ptr<string> importantDescription{};
  shared_ptr<string> isImportant{};
  shared_ptr<string> openGroupId{};
  shared_ptr<string> productType{};
  shared_ptr<string> productTypeName{};
  shared_ptr<string> taskTitle{};

  CreateTaskOrderRequest() {}

  explicit CreateTaskOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customerRealName) {
      res["CustomerRealName"] = boost::any(*customerRealName);
    }
    if (customerUserId) {
      res["CustomerUserId"] = boost::any(*customerUserId);
    }
    if (importantDescription) {
      res["ImportantDescription"] = boost::any(*importantDescription);
    }
    if (isImportant) {
      res["IsImportant"] = boost::any(*isImportant);
    }
    if (openGroupId) {
      res["OpenGroupId"] = boost::any(*openGroupId);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (productTypeName) {
      res["ProductTypeName"] = boost::any(*productTypeName);
    }
    if (taskTitle) {
      res["TaskTitle"] = boost::any(*taskTitle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomerRealName") != m.end() && !m["CustomerRealName"].empty()) {
      customerRealName = make_shared<string>(boost::any_cast<string>(m["CustomerRealName"]));
    }
    if (m.find("CustomerUserId") != m.end() && !m["CustomerUserId"].empty()) {
      customerUserId = make_shared<string>(boost::any_cast<string>(m["CustomerUserId"]));
    }
    if (m.find("ImportantDescription") != m.end() && !m["ImportantDescription"].empty()) {
      importantDescription = make_shared<string>(boost::any_cast<string>(m["ImportantDescription"]));
    }
    if (m.find("IsImportant") != m.end() && !m["IsImportant"].empty()) {
      isImportant = make_shared<string>(boost::any_cast<string>(m["IsImportant"]));
    }
    if (m.find("OpenGroupId") != m.end() && !m["OpenGroupId"].empty()) {
      openGroupId = make_shared<string>(boost::any_cast<string>(m["OpenGroupId"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("ProductTypeName") != m.end() && !m["ProductTypeName"].empty()) {
      productTypeName = make_shared<string>(boost::any_cast<string>(m["ProductTypeName"]));
    }
    if (m.find("TaskTitle") != m.end() && !m["TaskTitle"].empty()) {
      taskTitle = make_shared<string>(boost::any_cast<string>(m["TaskTitle"]));
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
class CreateTaskOrderByEventReportRequestEventBodyEventLocation : public Darabonba::Model {
public:
  shared_ptr<string> domain{};

  CreateTaskOrderByEventReportRequestEventBodyEventLocation() {}

  explicit CreateTaskOrderByEventReportRequestEventBodyEventLocation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
  }


  virtual ~CreateTaskOrderByEventReportRequestEventBodyEventLocation() = default;
};
class CreateTaskOrderByEventReportRequestEventBody : public Darabonba::Model {
public:
  shared_ptr<string> eventDesc{};
  shared_ptr<string> eventId{};
  shared_ptr<string> eventLevel{};
  shared_ptr<CreateTaskOrderByEventReportRequestEventBodyEventLocation> eventLocation{};
  shared_ptr<string> eventTime{};

  CreateTaskOrderByEventReportRequestEventBody() {}

  explicit CreateTaskOrderByEventReportRequestEventBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventDesc) {
      res["EventDesc"] = boost::any(*eventDesc);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (eventLevel) {
      res["EventLevel"] = boost::any(*eventLevel);
    }
    if (eventLocation) {
      res["EventLocation"] = eventLocation ? boost::any(eventLocation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (eventTime) {
      res["EventTime"] = boost::any(*eventTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventDesc") != m.end() && !m["EventDesc"].empty()) {
      eventDesc = make_shared<string>(boost::any_cast<string>(m["EventDesc"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("EventLevel") != m.end() && !m["EventLevel"].empty()) {
      eventLevel = make_shared<string>(boost::any_cast<string>(m["EventLevel"]));
    }
    if (m.find("EventLocation") != m.end() && !m["EventLocation"].empty()) {
      if (typeid(map<string, boost::any>) == m["EventLocation"].type()) {
        CreateTaskOrderByEventReportRequestEventBodyEventLocation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EventLocation"]));
        eventLocation = make_shared<CreateTaskOrderByEventReportRequestEventBodyEventLocation>(model1);
      }
    }
    if (m.find("EventTime") != m.end() && !m["EventTime"].empty()) {
      eventTime = make_shared<string>(boost::any_cast<string>(m["EventTime"]));
    }
  }


  virtual ~CreateTaskOrderByEventReportRequestEventBody() = default;
};
class CreateTaskOrderByEventReportRequestExtinfo : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  CreateTaskOrderByEventReportRequestExtinfo() {}

  explicit CreateTaskOrderByEventReportRequestExtinfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateTaskOrderByEventReportRequestExtinfo() = default;
};
class CreateTaskOrderByEventReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> business{};
  shared_ptr<string> createRealName{};
  shared_ptr<string> createUserId{};
  shared_ptr<CreateTaskOrderByEventReportRequestEventBody> eventBody{};
  shared_ptr<vector<CreateTaskOrderByEventReportRequestExtinfo>> extinfo{};
  shared_ptr<string> importantDesc{};
  shared_ptr<string> joinChildGroupUserIds{};
  shared_ptr<string> monitorCongregation{};
  shared_ptr<string> openGroupId{};
  shared_ptr<string> productType{};

  CreateTaskOrderByEventReportRequest() {}

  explicit CreateTaskOrderByEventReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (business) {
      res["Business"] = boost::any(*business);
    }
    if (createRealName) {
      res["CreateRealName"] = boost::any(*createRealName);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (eventBody) {
      res["EventBody"] = eventBody ? boost::any(eventBody->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (extinfo) {
      vector<boost::any> temp1;
      for(auto item1:*extinfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Extinfo"] = boost::any(temp1);
    }
    if (importantDesc) {
      res["ImportantDesc"] = boost::any(*importantDesc);
    }
    if (joinChildGroupUserIds) {
      res["JoinChildGroupUserIds"] = boost::any(*joinChildGroupUserIds);
    }
    if (monitorCongregation) {
      res["MonitorCongregation"] = boost::any(*monitorCongregation);
    }
    if (openGroupId) {
      res["OpenGroupId"] = boost::any(*openGroupId);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Business") != m.end() && !m["Business"].empty()) {
      business = make_shared<string>(boost::any_cast<string>(m["Business"]));
    }
    if (m.find("CreateRealName") != m.end() && !m["CreateRealName"].empty()) {
      createRealName = make_shared<string>(boost::any_cast<string>(m["CreateRealName"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("EventBody") != m.end() && !m["EventBody"].empty()) {
      if (typeid(map<string, boost::any>) == m["EventBody"].type()) {
        CreateTaskOrderByEventReportRequestEventBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EventBody"]));
        eventBody = make_shared<CreateTaskOrderByEventReportRequestEventBody>(model1);
      }
    }
    if (m.find("Extinfo") != m.end() && !m["Extinfo"].empty()) {
      if (typeid(vector<boost::any>) == m["Extinfo"].type()) {
        vector<CreateTaskOrderByEventReportRequestExtinfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Extinfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTaskOrderByEventReportRequestExtinfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        extinfo = make_shared<vector<CreateTaskOrderByEventReportRequestExtinfo>>(expect1);
      }
    }
    if (m.find("ImportantDesc") != m.end() && !m["ImportantDesc"].empty()) {
      importantDesc = make_shared<string>(boost::any_cast<string>(m["ImportantDesc"]));
    }
    if (m.find("JoinChildGroupUserIds") != m.end() && !m["JoinChildGroupUserIds"].empty()) {
      joinChildGroupUserIds = make_shared<string>(boost::any_cast<string>(m["JoinChildGroupUserIds"]));
    }
    if (m.find("MonitorCongregation") != m.end() && !m["MonitorCongregation"].empty()) {
      monitorCongregation = make_shared<string>(boost::any_cast<string>(m["MonitorCongregation"]));
    }
    if (m.find("OpenGroupId") != m.end() && !m["OpenGroupId"].empty()) {
      openGroupId = make_shared<string>(boost::any_cast<string>(m["OpenGroupId"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
  }


  virtual ~CreateTaskOrderByEventReportRequest() = default;
};
class CreateTaskOrderByEventReportShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> business{};
  shared_ptr<string> createRealName{};
  shared_ptr<string> createUserId{};
  shared_ptr<string> eventBodyShrink{};
  shared_ptr<string> extinfoShrink{};
  shared_ptr<string> importantDesc{};
  shared_ptr<string> joinChildGroupUserIds{};
  shared_ptr<string> monitorCongregation{};
  shared_ptr<string> openGroupId{};
  shared_ptr<string> productType{};

  CreateTaskOrderByEventReportShrinkRequest() {}

  explicit CreateTaskOrderByEventReportShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (business) {
      res["Business"] = boost::any(*business);
    }
    if (createRealName) {
      res["CreateRealName"] = boost::any(*createRealName);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (eventBodyShrink) {
      res["EventBody"] = boost::any(*eventBodyShrink);
    }
    if (extinfoShrink) {
      res["Extinfo"] = boost::any(*extinfoShrink);
    }
    if (importantDesc) {
      res["ImportantDesc"] = boost::any(*importantDesc);
    }
    if (joinChildGroupUserIds) {
      res["JoinChildGroupUserIds"] = boost::any(*joinChildGroupUserIds);
    }
    if (monitorCongregation) {
      res["MonitorCongregation"] = boost::any(*monitorCongregation);
    }
    if (openGroupId) {
      res["OpenGroupId"] = boost::any(*openGroupId);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Business") != m.end() && !m["Business"].empty()) {
      business = make_shared<string>(boost::any_cast<string>(m["Business"]));
    }
    if (m.find("CreateRealName") != m.end() && !m["CreateRealName"].empty()) {
      createRealName = make_shared<string>(boost::any_cast<string>(m["CreateRealName"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("EventBody") != m.end() && !m["EventBody"].empty()) {
      eventBodyShrink = make_shared<string>(boost::any_cast<string>(m["EventBody"]));
    }
    if (m.find("Extinfo") != m.end() && !m["Extinfo"].empty()) {
      extinfoShrink = make_shared<string>(boost::any_cast<string>(m["Extinfo"]));
    }
    if (m.find("ImportantDesc") != m.end() && !m["ImportantDesc"].empty()) {
      importantDesc = make_shared<string>(boost::any_cast<string>(m["ImportantDesc"]));
    }
    if (m.find("JoinChildGroupUserIds") != m.end() && !m["JoinChildGroupUserIds"].empty()) {
      joinChildGroupUserIds = make_shared<string>(boost::any_cast<string>(m["JoinChildGroupUserIds"]));
    }
    if (m.find("MonitorCongregation") != m.end() && !m["MonitorCongregation"].empty()) {
      monitorCongregation = make_shared<string>(boost::any_cast<string>(m["MonitorCongregation"]));
    }
    if (m.find("OpenGroupId") != m.end() && !m["OpenGroupId"].empty()) {
      openGroupId = make_shared<string>(boost::any_cast<string>(m["OpenGroupId"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
  }


  virtual ~CreateTaskOrderByEventReportShrinkRequest() = default;
};
class CreateTaskOrderByEventReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateTaskOrderByEventReportResponseBody() {}

  explicit CreateTaskOrderByEventReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateTaskOrderByEventReportResponseBody() = default;
};
class CreateTaskOrderByEventReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTaskOrderByEventReportResponseBody> body{};

  CreateTaskOrderByEventReportResponse() {}

  explicit CreateTaskOrderByEventReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTaskOrderByEventReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTaskOrderByEventReportResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTaskOrderByEventReportResponse() = default;
};
class DeleteEnterpriseDingtalkGroupCustomerMemberRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> mobiles{};
  shared_ptr<string> openGroupId{};

  DeleteEnterpriseDingtalkGroupCustomerMemberRequest() {}

  explicit DeleteEnterpriseDingtalkGroupCustomerMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mobiles) {
      res["Mobiles"] = boost::any(*mobiles);
    }
    if (openGroupId) {
      res["OpenGroupId"] = boost::any(*openGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mobiles") != m.end() && !m["Mobiles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Mobiles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Mobiles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      mobiles = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OpenGroupId") != m.end() && !m["OpenGroupId"].empty()) {
      openGroupId = make_shared<string>(boost::any_cast<string>(m["OpenGroupId"]));
    }
  }


  virtual ~DeleteEnterpriseDingtalkGroupCustomerMemberRequest() = default;
};
class DeleteEnterpriseDingtalkGroupCustomerMemberShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> mobilesShrink{};
  shared_ptr<string> openGroupId{};

  DeleteEnterpriseDingtalkGroupCustomerMemberShrinkRequest() {}

  explicit DeleteEnterpriseDingtalkGroupCustomerMemberShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mobilesShrink) {
      res["Mobiles"] = boost::any(*mobilesShrink);
    }
    if (openGroupId) {
      res["OpenGroupId"] = boost::any(*openGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mobiles") != m.end() && !m["Mobiles"].empty()) {
      mobilesShrink = make_shared<string>(boost::any_cast<string>(m["Mobiles"]));
    }
    if (m.find("OpenGroupId") != m.end() && !m["OpenGroupId"].empty()) {
      openGroupId = make_shared<string>(boost::any_cast<string>(m["OpenGroupId"]));
    }
  }


  virtual ~DeleteEnterpriseDingtalkGroupCustomerMemberShrinkRequest() = default;
};
class DeleteEnterpriseDingtalkGroupCustomerMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteEnterpriseDingtalkGroupCustomerMemberResponseBody() {}

  explicit DeleteEnterpriseDingtalkGroupCustomerMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteEnterpriseDingtalkGroupCustomerMemberResponseBody() = default;
};
class DeleteEnterpriseDingtalkGroupCustomerMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteEnterpriseDingtalkGroupCustomerMemberResponseBody> body{};

  DeleteEnterpriseDingtalkGroupCustomerMemberResponse() {}

  explicit DeleteEnterpriseDingtalkGroupCustomerMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteEnterpriseDingtalkGroupCustomerMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEnterpriseDingtalkGroupCustomerMemberResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEnterpriseDingtalkGroupCustomerMemberResponse() = default;
};
class GetEnterpriseDingtalkGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> openGroupId{};

  GetEnterpriseDingtalkGroupRequest() {}

  explicit GetEnterpriseDingtalkGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetEnterpriseDingtalkGroupRequest() = default;
};
class GetEnterpriseDingtalkGroupResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<string> openGroupId{};

  GetEnterpriseDingtalkGroupResponseBodyData() {}

  explicit GetEnterpriseDingtalkGroupResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetEnterpriseDingtalkGroupResponseBodyData() = default;
};
class GetEnterpriseDingtalkGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetEnterpriseDingtalkGroupResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetEnterpriseDingtalkGroupResponseBody() {}

  explicit GetEnterpriseDingtalkGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetEnterpriseDingtalkGroupResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetEnterpriseDingtalkGroupResponseBodyData>(model1);
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


  virtual ~GetEnterpriseDingtalkGroupResponseBody() = default;
};
class GetEnterpriseDingtalkGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEnterpriseDingtalkGroupResponseBody> body{};

  GetEnterpriseDingtalkGroupResponse() {}

  explicit GetEnterpriseDingtalkGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEnterpriseDingtalkGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEnterpriseDingtalkGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetEnterpriseDingtalkGroupResponse() = default;
};
class GetEnterpriseDingtalkGroupCustomerMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> mobile{};
  shared_ptr<string> openGroupId{};

  GetEnterpriseDingtalkGroupCustomerMemberRequest() {}

  explicit GetEnterpriseDingtalkGroupCustomerMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (openGroupId) {
      res["OpenGroupId"] = boost::any(*openGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("OpenGroupId") != m.end() && !m["OpenGroupId"].empty()) {
      openGroupId = make_shared<string>(boost::any_cast<string>(m["OpenGroupId"]));
    }
  }


  virtual ~GetEnterpriseDingtalkGroupCustomerMemberRequest() = default;
};
class GetEnterpriseDingtalkGroupCustomerMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<EnterpriseDingtalkGroupMember> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetEnterpriseDingtalkGroupCustomerMemberResponseBody() {}

  explicit GetEnterpriseDingtalkGroupCustomerMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        EnterpriseDingtalkGroupMember model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<EnterpriseDingtalkGroupMember>(model1);
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


  virtual ~GetEnterpriseDingtalkGroupCustomerMemberResponseBody() = default;
};
class GetEnterpriseDingtalkGroupCustomerMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEnterpriseDingtalkGroupCustomerMemberResponseBody> body{};

  GetEnterpriseDingtalkGroupCustomerMemberResponse() {}

  explicit GetEnterpriseDingtalkGroupCustomerMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEnterpriseDingtalkGroupCustomerMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEnterpriseDingtalkGroupCustomerMemberResponseBody>(model1);
      }
    }
  }


  virtual ~GetEnterpriseDingtalkGroupCustomerMemberResponse() = default;
};
class ListDdTaskOrderRequest : public Darabonba::Model {
public:
  shared_ptr<long> callerParentId{};
  shared_ptr<string> callerType{};
  shared_ptr<long> callerUid{};
  shared_ptr<string> createRealName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> openGroupId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> pageNo{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> taskStatus{};

  ListDdTaskOrderRequest() {}

  explicit ListDdTaskOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callerParentId) {
      res["CallerParentId"] = boost::any(*callerParentId);
    }
    if (callerType) {
      res["CallerType"] = boost::any(*callerType);
    }
    if (callerUid) {
      res["CallerUid"] = boost::any(*callerUid);
    }
    if (createRealName) {
      res["CreateRealName"] = boost::any(*createRealName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (openGroupId) {
      res["OpenGroupId"] = boost::any(*openGroupId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("CallerParentId") != m.end() && !m["CallerParentId"].empty()) {
      callerParentId = make_shared<long>(boost::any_cast<long>(m["CallerParentId"]));
    }
    if (m.find("CallerType") != m.end() && !m["CallerType"].empty()) {
      callerType = make_shared<string>(boost::any_cast<string>(m["CallerType"]));
    }
    if (m.find("CallerUid") != m.end() && !m["CallerUid"].empty()) {
      callerUid = make_shared<long>(boost::any_cast<long>(m["CallerUid"]));
    }
    if (m.find("CreateRealName") != m.end() && !m["CreateRealName"].empty()) {
      createRealName = make_shared<string>(boost::any_cast<string>(m["CreateRealName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OpenGroupId") != m.end() && !m["OpenGroupId"].empty()) {
      openGroupId = make_shared<string>(boost::any_cast<string>(m["OpenGroupId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<string>(boost::any_cast<string>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class ListEnterpriseDingtalkGroupCustomerMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<EnterpriseDingtalkGroupMember>> data{};
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
        vector<EnterpriseDingtalkGroupMember> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnterpriseDingtalkGroupMember model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<EnterpriseDingtalkGroupMember>>(expect1);
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
class QueryTaskInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};

  QueryTaskInfoRequest() {}

  explicit QueryTaskInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~QueryTaskInfoRequest() = default;
};
class QueryTaskInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> taskStatus{};

  QueryTaskInfoResponseBodyData() {}

  explicit QueryTaskInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
  }


  virtual ~QueryTaskInfoResponseBodyData() = default;
};
class QueryTaskInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryTaskInfoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryTaskInfoResponseBody() {}

  explicit QueryTaskInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryTaskInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryTaskInfoResponseBodyData>(model1);
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


  virtual ~QueryTaskInfoResponseBody() = default;
};
class QueryTaskInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTaskInfoResponseBody> body{};

  QueryTaskInfoResponse() {}

  explicit QueryTaskInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryTaskInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTaskInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTaskInfoResponse() = default;
};
class ReplyMessageApiRequest : public Darabonba::Model {
public:
  shared_ptr<string> msgContent{};
  shared_ptr<string> msgType{};
  shared_ptr<string> openGroupId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  ReplyMessageApiRequest() {}

  explicit ReplyMessageApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (msgContent) {
      res["MsgContent"] = boost::any(*msgContent);
    }
    if (msgType) {
      res["MsgType"] = boost::any(*msgType);
    }
    if (openGroupId) {
      res["OpenGroupId"] = boost::any(*openGroupId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MsgContent") != m.end() && !m["MsgContent"].empty()) {
      msgContent = make_shared<string>(boost::any_cast<string>(m["MsgContent"]));
    }
    if (m.find("MsgType") != m.end() && !m["MsgType"].empty()) {
      msgType = make_shared<string>(boost::any_cast<string>(m["MsgType"]));
    }
    if (m.find("OpenGroupId") != m.end() && !m["OpenGroupId"].empty()) {
      openGroupId = make_shared<string>(boost::any_cast<string>(m["OpenGroupId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~ReplyMessageApiRequest() = default;
};
class ReplyMessageApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ReplyMessageApiResponseBody() {}

  explicit ReplyMessageApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReplyMessageApiResponseBody() = default;
};
class ReplyMessageApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReplyMessageApiResponseBody> body{};

  ReplyMessageApiResponse() {}

  explicit ReplyMessageApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReplyMessageApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReplyMessageApiResponseBody>(model1);
      }
    }
  }


  virtual ~ReplyMessageApiResponse() = default;
};
class RestOpenTaskOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> openGroupId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> resetContent{};
  shared_ptr<string> resetType{};
  shared_ptr<string> userName{};

  RestOpenTaskOrderRequest() {}

  explicit RestOpenTaskOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (openGroupId) {
      res["OpenGroupId"] = boost::any(*openGroupId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (resetContent) {
      res["ResetContent"] = boost::any(*resetContent);
    }
    if (resetType) {
      res["ResetType"] = boost::any(*resetType);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpenGroupId") != m.end() && !m["OpenGroupId"].empty()) {
      openGroupId = make_shared<string>(boost::any_cast<string>(m["OpenGroupId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("ResetContent") != m.end() && !m["ResetContent"].empty()) {
      resetContent = make_shared<string>(boost::any_cast<string>(m["ResetContent"]));
    }
    if (m.find("ResetType") != m.end() && !m["ResetType"].empty()) {
      resetType = make_shared<string>(boost::any_cast<string>(m["ResetType"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~RestOpenTaskOrderRequest() = default;
};
class RestOpenTaskOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RestOpenTaskOrderResponseBody() {}

  explicit RestOpenTaskOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RestOpenTaskOrderResponseBody() = default;
};
class RestOpenTaskOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RestOpenTaskOrderResponseBody> body{};

  RestOpenTaskOrderResponse() {}

  explicit RestOpenTaskOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RestOpenTaskOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestOpenTaskOrderResponseBody>(model1);
      }
    }
  }


  virtual ~RestOpenTaskOrderResponse() = default;
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
  CloseTaskOrderResponse closeTaskOrderWithOptions(shared_ptr<CloseTaskOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloseTaskOrderResponse closeTaskOrder(shared_ptr<CloseTaskOrderRequest> request);
  CreateTaskOrderResponse createTaskOrderWithOptions(shared_ptr<CreateTaskOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTaskOrderResponse createTaskOrder(shared_ptr<CreateTaskOrderRequest> request);
  CreateTaskOrderByEventReportResponse createTaskOrderByEventReportWithOptions(shared_ptr<CreateTaskOrderByEventReportRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTaskOrderByEventReportResponse createTaskOrderByEventReport(shared_ptr<CreateTaskOrderByEventReportRequest> request);
  DeleteEnterpriseDingtalkGroupCustomerMemberResponse deleteEnterpriseDingtalkGroupCustomerMemberWithOptions(shared_ptr<DeleteEnterpriseDingtalkGroupCustomerMemberRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEnterpriseDingtalkGroupCustomerMemberResponse deleteEnterpriseDingtalkGroupCustomerMember(shared_ptr<DeleteEnterpriseDingtalkGroupCustomerMemberRequest> request);
  GetEnterpriseDingtalkGroupResponse getEnterpriseDingtalkGroupWithOptions(shared_ptr<GetEnterpriseDingtalkGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEnterpriseDingtalkGroupResponse getEnterpriseDingtalkGroup(shared_ptr<GetEnterpriseDingtalkGroupRequest> request);
  GetEnterpriseDingtalkGroupCustomerMemberResponse getEnterpriseDingtalkGroupCustomerMemberWithOptions(shared_ptr<GetEnterpriseDingtalkGroupCustomerMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEnterpriseDingtalkGroupCustomerMemberResponse getEnterpriseDingtalkGroupCustomerMember(shared_ptr<GetEnterpriseDingtalkGroupCustomerMemberRequest> request);
  ListDdTaskOrderResponse listDdTaskOrderWithOptions(shared_ptr<ListDdTaskOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDdTaskOrderResponse listDdTaskOrder(shared_ptr<ListDdTaskOrderRequest> request);
  ListEnterpriseDingtalkGroupCustomerMembersResponse listEnterpriseDingtalkGroupCustomerMembersWithOptions(shared_ptr<ListEnterpriseDingtalkGroupCustomerMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEnterpriseDingtalkGroupCustomerMembersResponse listEnterpriseDingtalkGroupCustomerMembers(shared_ptr<ListEnterpriseDingtalkGroupCustomerMembersRequest> request);
  ListEnterpriseDingtalkGroupsResponse listEnterpriseDingtalkGroupsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEnterpriseDingtalkGroupsResponse listEnterpriseDingtalkGroups();
  ListProductByGroupResponse listProductByGroupWithOptions(shared_ptr<ListProductByGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProductByGroupResponse listProductByGroup(shared_ptr<ListProductByGroupRequest> request);
  QueryTaskInfoResponse queryTaskInfoWithOptions(shared_ptr<QueryTaskInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTaskInfoResponse queryTaskInfo(shared_ptr<QueryTaskInfoRequest> request);
  ReplyMessageApiResponse replyMessageApiWithOptions(shared_ptr<ReplyMessageApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReplyMessageApiResponse replyMessageApi(shared_ptr<ReplyMessageApiRequest> request);
  RestOpenTaskOrderResponse restOpenTaskOrderWithOptions(shared_ptr<RestOpenTaskOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestOpenTaskOrderResponse restOpenTaskOrder(shared_ptr<RestOpenTaskOrderRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Support-plan20210706

#endif
