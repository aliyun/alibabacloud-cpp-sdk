// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_SCSP20200702_H_
#define ALIBABACLOUD_SCSP20200702_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Scsp20200702 {
class GetUserTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> userId{};
  shared_ptr<string> nick{};
  shared_ptr<string> appKey{};

  GetUserTokenRequest() {}

  explicit GetUserTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (nick) {
      res["Nick"] = boost::any(*nick);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
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
    if (m.find("Nick") != m.end() && !m["Nick"].empty()) {
      nick = make_shared<string>(boost::any_cast<string>(m["Nick"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
  }


  virtual ~GetUserTokenRequest() = default;
};
class GetUserTokenResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> expires{};
  shared_ptr<string> token{};

  GetUserTokenResponseBodyData() {}

  explicit GetUserTokenResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expires) {
      res["Expires"] = boost::any(*expires);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Expires") != m.end() && !m["Expires"].empty()) {
      expires = make_shared<long>(boost::any_cast<long>(m["Expires"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~GetUserTokenResponseBodyData() = default;
};
class GetUserTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetUserTokenResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetUserTokenResponseBody() {}

  explicit GetUserTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetUserTokenResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetUserTokenResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetUserTokenResponseBody() = default;
};
class GetUserTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetUserTokenResponseBody> body{};

  GetUserTokenResponse() {}

  explicit GetUserTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetUserTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserTokenResponse() = default;
};
class SearchTicketListRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> operatorId{};
  shared_ptr<string> ticketStatus{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> startTime{};
  shared_ptr<long> endTime{};

  SearchTicketListRequest() {}

  explicit SearchTicketListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (operatorId) {
      res["OperatorId"] = boost::any(*operatorId);
    }
    if (ticketStatus) {
      res["TicketStatus"] = boost::any(*ticketStatus);
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
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
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
    if (m.find("OperatorId") != m.end() && !m["OperatorId"].empty()) {
      operatorId = make_shared<long>(boost::any_cast<long>(m["OperatorId"]));
    }
    if (m.find("TicketStatus") != m.end() && !m["TicketStatus"].empty()) {
      ticketStatus = make_shared<string>(boost::any_cast<string>(m["TicketStatus"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
  }


  virtual ~SearchTicketListRequest() = default;
};
class SearchTicketListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> memberName{};
  shared_ptr<string> carbonCopy{};
  shared_ptr<long> createTime{};
  shared_ptr<long> serviceId{};
  shared_ptr<long> ticketId{};
  shared_ptr<long> priority{};
  shared_ptr<long> creatorId{};
  shared_ptr<string> formData{};
  shared_ptr<string> fromInfo{};
  shared_ptr<long> modifiedTime{};
  shared_ptr<string> taskStatus{};
  shared_ptr<string> creatorName{};
  shared_ptr<long> categoryId{};
  shared_ptr<long> creatorType{};
  shared_ptr<long> memberId{};
  shared_ptr<long> caseStatus{};
  shared_ptr<long> templateId{};

  SearchTicketListResponseBodyData() {}

  explicit SearchTicketListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (carbonCopy) {
      res["CarbonCopy"] = boost::any(*carbonCopy);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (ticketId) {
      res["TicketId"] = boost::any(*ticketId);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (formData) {
      res["FormData"] = boost::any(*formData);
    }
    if (fromInfo) {
      res["FromInfo"] = boost::any(*fromInfo);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (creatorName) {
      res["CreatorName"] = boost::any(*creatorName);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (creatorType) {
      res["CreatorType"] = boost::any(*creatorType);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (caseStatus) {
      res["CaseStatus"] = boost::any(*caseStatus);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("CarbonCopy") != m.end() && !m["CarbonCopy"].empty()) {
      carbonCopy = make_shared<string>(boost::any_cast<string>(m["CarbonCopy"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["ServiceId"]));
    }
    if (m.find("TicketId") != m.end() && !m["TicketId"].empty()) {
      ticketId = make_shared<long>(boost::any_cast<long>(m["TicketId"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<long>(boost::any_cast<long>(m["CreatorId"]));
    }
    if (m.find("FormData") != m.end() && !m["FormData"].empty()) {
      formData = make_shared<string>(boost::any_cast<string>(m["FormData"]));
    }
    if (m.find("FromInfo") != m.end() && !m["FromInfo"].empty()) {
      fromInfo = make_shared<string>(boost::any_cast<string>(m["FromInfo"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<long>(boost::any_cast<long>(m["ModifiedTime"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("CreatorName") != m.end() && !m["CreatorName"].empty()) {
      creatorName = make_shared<string>(boost::any_cast<string>(m["CreatorName"]));
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("CreatorType") != m.end() && !m["CreatorType"].empty()) {
      creatorType = make_shared<long>(boost::any_cast<long>(m["CreatorType"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<long>(boost::any_cast<long>(m["MemberId"]));
    }
    if (m.find("CaseStatus") != m.end() && !m["CaseStatus"].empty()) {
      caseStatus = make_shared<long>(boost::any_cast<long>(m["CaseStatus"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~SearchTicketListResponseBodyData() = default;
};
class SearchTicketListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> onePageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> totalPage{};
  shared_ptr<long> totalResults{};
  shared_ptr<long> pageNo{};
  shared_ptr<vector<SearchTicketListResponseBodyData>> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  SearchTicketListResponseBody() {}

  explicit SearchTicketListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (onePageSize) {
      res["OnePageSize"] = boost::any(*onePageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    if (totalResults) {
      res["TotalResults"] = boost::any(*totalResults);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OnePageSize") != m.end() && !m["OnePageSize"].empty()) {
      onePageSize = make_shared<long>(boost::any_cast<long>(m["OnePageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
    if (m.find("TotalResults") != m.end() && !m["TotalResults"].empty()) {
      totalResults = make_shared<long>(boost::any_cast<long>(m["TotalResults"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<SearchTicketListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchTicketListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<SearchTicketListResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SearchTicketListResponseBody() = default;
};
class SearchTicketListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SearchTicketListResponseBody> body{};

  SearchTicketListResponse() {}

  explicit SearchTicketListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SearchTicketListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchTicketListResponseBody>(model1);
      }
    }
  }


  virtual ~SearchTicketListResponse() = default;
};
class SendHotlineHeartBeatRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> token{};

  SendHotlineHeartBeatRequest() {}

  explicit SendHotlineHeartBeatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (token) {
      res["Token"] = boost::any(*token);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~SendHotlineHeartBeatRequest() = default;
};
class SendHotlineHeartBeatResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  SendHotlineHeartBeatResponseBody() {}

  explicit SendHotlineHeartBeatResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SendHotlineHeartBeatResponseBody() = default;
};
class SendHotlineHeartBeatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SendHotlineHeartBeatResponseBody> body{};

  SendHotlineHeartBeatResponse() {}

  explicit SendHotlineHeartBeatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SendHotlineHeartBeatResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendHotlineHeartBeatResponseBody>(model1);
      }
    }
  }


  virtual ~SendHotlineHeartBeatResponse() = default;
};
class TransferCallToSkillGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<long> skillGroupId{};
  shared_ptr<string> callId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> connectionId{};
  shared_ptr<string> holdConnectionId{};
  shared_ptr<long> type{};
  shared_ptr<bool> isSingleTransfer{};

  TransferCallToSkillGroupRequest() {}

  explicit TransferCallToSkillGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (skillGroupId) {
      res["SkillGroupId"] = boost::any(*skillGroupId);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (connectionId) {
      res["ConnectionId"] = boost::any(*connectionId);
    }
    if (holdConnectionId) {
      res["HoldConnectionId"] = boost::any(*holdConnectionId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (isSingleTransfer) {
      res["IsSingleTransfer"] = boost::any(*isSingleTransfer);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("SkillGroupId") != m.end() && !m["SkillGroupId"].empty()) {
      skillGroupId = make_shared<long>(boost::any_cast<long>(m["SkillGroupId"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("ConnectionId") != m.end() && !m["ConnectionId"].empty()) {
      connectionId = make_shared<string>(boost::any_cast<string>(m["ConnectionId"]));
    }
    if (m.find("HoldConnectionId") != m.end() && !m["HoldConnectionId"].empty()) {
      holdConnectionId = make_shared<string>(boost::any_cast<string>(m["HoldConnectionId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("IsSingleTransfer") != m.end() && !m["IsSingleTransfer"].empty()) {
      isSingleTransfer = make_shared<bool>(boost::any_cast<bool>(m["IsSingleTransfer"]));
    }
  }


  virtual ~TransferCallToSkillGroupRequest() = default;
};
class TransferCallToSkillGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  TransferCallToSkillGroupResponseBody() {}

  explicit TransferCallToSkillGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~TransferCallToSkillGroupResponseBody() = default;
};
class TransferCallToSkillGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TransferCallToSkillGroupResponseBody> body{};

  TransferCallToSkillGroupResponse() {}

  explicit TransferCallToSkillGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TransferCallToSkillGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TransferCallToSkillGroupResponseBody>(model1);
      }
    }
  }


  virtual ~TransferCallToSkillGroupResponse() = default;
};
class EditEntityRouteRequest : public Darabonba::Model {
public:
  shared_ptr<string> entityId{};
  shared_ptr<string> entityName{};
  shared_ptr<string> entityBizCode{};
  shared_ptr<string> entityBizCodeType{};
  shared_ptr<string> entityRelationNumber{};
  shared_ptr<string> departmentId{};
  shared_ptr<long> groupId{};
  shared_ptr<long> serviceId{};
  shared_ptr<string> extInfo{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> uniqueId{};

  EditEntityRouteRequest() {}

  explicit EditEntityRouteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    if (entityBizCode) {
      res["EntityBizCode"] = boost::any(*entityBizCode);
    }
    if (entityBizCodeType) {
      res["EntityBizCodeType"] = boost::any(*entityBizCodeType);
    }
    if (entityRelationNumber) {
      res["EntityRelationNumber"] = boost::any(*entityRelationNumber);
    }
    if (departmentId) {
      res["DepartmentId"] = boost::any(*departmentId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (extInfo) {
      res["ExtInfo"] = boost::any(*extInfo);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (uniqueId) {
      res["UniqueId"] = boost::any(*uniqueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
    if (m.find("EntityBizCode") != m.end() && !m["EntityBizCode"].empty()) {
      entityBizCode = make_shared<string>(boost::any_cast<string>(m["EntityBizCode"]));
    }
    if (m.find("EntityBizCodeType") != m.end() && !m["EntityBizCodeType"].empty()) {
      entityBizCodeType = make_shared<string>(boost::any_cast<string>(m["EntityBizCodeType"]));
    }
    if (m.find("EntityRelationNumber") != m.end() && !m["EntityRelationNumber"].empty()) {
      entityRelationNumber = make_shared<string>(boost::any_cast<string>(m["EntityRelationNumber"]));
    }
    if (m.find("DepartmentId") != m.end() && !m["DepartmentId"].empty()) {
      departmentId = make_shared<string>(boost::any_cast<string>(m["DepartmentId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<long>(boost::any_cast<long>(m["GroupId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["ServiceId"]));
    }
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      extInfo = make_shared<string>(boost::any_cast<string>(m["ExtInfo"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("UniqueId") != m.end() && !m["UniqueId"].empty()) {
      uniqueId = make_shared<long>(boost::any_cast<long>(m["UniqueId"]));
    }
  }


  virtual ~EditEntityRouteRequest() = default;
};
class EditEntityRouteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  EditEntityRouteResponseBody() {}

  explicit EditEntityRouteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~EditEntityRouteResponseBody() = default;
};
class EditEntityRouteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EditEntityRouteResponseBody> body{};

  EditEntityRouteResponse() {}

  explicit EditEntityRouteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EditEntityRouteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EditEntityRouteResponseBody>(model1);
      }
    }
  }


  virtual ~EditEntityRouteResponse() = default;
};
class GetTagListRequest : public Darabonba::Model {
public:
  shared_ptr<string> entityId{};
  shared_ptr<string> entityType{};
  shared_ptr<string> instanceId{};

  GetTagListRequest() {}

  explicit GetTagListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetTagListRequest() = default;
};
class GetTagListResponseBodyDataTagValues : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> description{};
  shared_ptr<string> tagName{};
  shared_ptr<string> tagGroupCode{};
  shared_ptr<string> tagCode{};
  shared_ptr<string> tagGroupName{};
  shared_ptr<string> entityRelationNumber{};

  GetTagListResponseBodyDataTagValues() {}

  explicit GetTagListResponseBodyDataTagValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    if (tagGroupCode) {
      res["TagGroupCode"] = boost::any(*tagGroupCode);
    }
    if (tagCode) {
      res["TagCode"] = boost::any(*tagCode);
    }
    if (tagGroupName) {
      res["TagGroupName"] = boost::any(*tagGroupName);
    }
    if (entityRelationNumber) {
      res["EntityRelationNumber"] = boost::any(*entityRelationNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
    if (m.find("TagGroupCode") != m.end() && !m["TagGroupCode"].empty()) {
      tagGroupCode = make_shared<string>(boost::any_cast<string>(m["TagGroupCode"]));
    }
    if (m.find("TagCode") != m.end() && !m["TagCode"].empty()) {
      tagCode = make_shared<string>(boost::any_cast<string>(m["TagCode"]));
    }
    if (m.find("TagGroupName") != m.end() && !m["TagGroupName"].empty()) {
      tagGroupName = make_shared<string>(boost::any_cast<string>(m["TagGroupName"]));
    }
    if (m.find("EntityRelationNumber") != m.end() && !m["EntityRelationNumber"].empty()) {
      entityRelationNumber = make_shared<string>(boost::any_cast<string>(m["EntityRelationNumber"]));
    }
  }


  virtual ~GetTagListResponseBodyDataTagValues() = default;
};
class GetTagListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> scenarioCode{};
  shared_ptr<string> tagGroupCode{};
  shared_ptr<vector<GetTagListResponseBodyDataTagValues>> tagValues{};
  shared_ptr<string> tagGroupName{};

  GetTagListResponseBodyData() {}

  explicit GetTagListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scenarioCode) {
      res["ScenarioCode"] = boost::any(*scenarioCode);
    }
    if (tagGroupCode) {
      res["TagGroupCode"] = boost::any(*tagGroupCode);
    }
    if (tagValues) {
      vector<boost::any> temp1;
      for(auto item1:*tagValues){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagValues"] = boost::any(temp1);
    }
    if (tagGroupName) {
      res["TagGroupName"] = boost::any(*tagGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScenarioCode") != m.end() && !m["ScenarioCode"].empty()) {
      scenarioCode = make_shared<string>(boost::any_cast<string>(m["ScenarioCode"]));
    }
    if (m.find("TagGroupCode") != m.end() && !m["TagGroupCode"].empty()) {
      tagGroupCode = make_shared<string>(boost::any_cast<string>(m["TagGroupCode"]));
    }
    if (m.find("TagValues") != m.end() && !m["TagValues"].empty()) {
      if (typeid(vector<boost::any>) == m["TagValues"].type()) {
        vector<GetTagListResponseBodyDataTagValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagValues"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTagListResponseBodyDataTagValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagValues = make_shared<vector<GetTagListResponseBodyDataTagValues>>(expect1);
      }
    }
    if (m.find("TagGroupName") != m.end() && !m["TagGroupName"].empty()) {
      tagGroupName = make_shared<string>(boost::any_cast<string>(m["TagGroupName"]));
    }
  }


  virtual ~GetTagListResponseBodyData() = default;
};
class GetTagListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetTagListResponseBodyData>> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetTagListResponseBody() {}

  explicit GetTagListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetTagListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTagListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetTagListResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetTagListResponseBody() = default;
};
class GetTagListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetTagListResponseBody> body{};

  GetTagListResponse() {}

  explicit GetTagListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetTagListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTagListResponseBody>(model1);
      }
    }
  }


  virtual ~GetTagListResponse() = default;
};
class UpdateTicketRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> ticketId{};
  shared_ptr<long> operatorId{};
  shared_ptr<string> formData{};

  UpdateTicketRequest() {}

  explicit UpdateTicketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ticketId) {
      res["TicketId"] = boost::any(*ticketId);
    }
    if (operatorId) {
      res["OperatorId"] = boost::any(*operatorId);
    }
    if (formData) {
      res["FormData"] = boost::any(*formData);
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
    if (m.find("TicketId") != m.end() && !m["TicketId"].empty()) {
      ticketId = make_shared<long>(boost::any_cast<long>(m["TicketId"]));
    }
    if (m.find("OperatorId") != m.end() && !m["OperatorId"].empty()) {
      operatorId = make_shared<long>(boost::any_cast<long>(m["OperatorId"]));
    }
    if (m.find("FormData") != m.end() && !m["FormData"].empty()) {
      formData = make_shared<string>(boost::any_cast<string>(m["FormData"]));
    }
  }


  virtual ~UpdateTicketRequest() = default;
};
class UpdateTicketResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  UpdateTicketResponseBody() {}

  explicit UpdateTicketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~UpdateTicketResponseBody() = default;
};
class UpdateTicketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateTicketResponseBody> body{};

  UpdateTicketResponse() {}

  explicit UpdateTicketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateTicketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTicketResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTicketResponse() = default;
};
class ListOutboundPhoneNumberRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};

  ListOutboundPhoneNumberRequest() {}

  explicit ListOutboundPhoneNumberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~ListOutboundPhoneNumberRequest() = default;
};
class ListOutboundPhoneNumberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  ListOutboundPhoneNumberResponseBody() {}

  explicit ListOutboundPhoneNumberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      data = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~ListOutboundPhoneNumberResponseBody() = default;
};
class ListOutboundPhoneNumberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListOutboundPhoneNumberResponseBody> body{};

  ListOutboundPhoneNumberResponse() {}

  explicit ListOutboundPhoneNumberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListOutboundPhoneNumberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOutboundPhoneNumberResponseBody>(model1);
      }
    }
  }


  virtual ~ListOutboundPhoneNumberResponse() = default;
};
class RemoveSkillGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> skillGroupId{};
  shared_ptr<string> clientToken{};

  RemoveSkillGroupRequest() {}

  explicit RemoveSkillGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (skillGroupId) {
      res["SkillGroupId"] = boost::any(*skillGroupId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SkillGroupId") != m.end() && !m["SkillGroupId"].empty()) {
      skillGroupId = make_shared<string>(boost::any_cast<string>(m["SkillGroupId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~RemoveSkillGroupRequest() = default;
};
class RemoveSkillGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  RemoveSkillGroupResponseBody() {}

  explicit RemoveSkillGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RemoveSkillGroupResponseBody() = default;
};
class RemoveSkillGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveSkillGroupResponseBody> body{};

  RemoveSkillGroupResponse() {}

  explicit RemoveSkillGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveSkillGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveSkillGroupResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveSkillGroupResponse() = default;
};
class ListAgentBySkillGroupIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> skillGroupId{};

  ListAgentBySkillGroupIdRequest() {}

  explicit ListAgentBySkillGroupIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (skillGroupId) {
      res["SkillGroupId"] = boost::any(*skillGroupId);
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
    if (m.find("SkillGroupId") != m.end() && !m["SkillGroupId"].empty()) {
      skillGroupId = make_shared<long>(boost::any_cast<long>(m["SkillGroupId"]));
    }
  }


  virtual ~ListAgentBySkillGroupIdRequest() = default;
};
class ListAgentBySkillGroupIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> displayName{};
  shared_ptr<long> agentId{};
  shared_ptr<string> accountName{};
  shared_ptr<long> tenantId{};

  ListAgentBySkillGroupIdResponseBodyData() {}

  explicit ListAgentBySkillGroupIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<long>(boost::any_cast<long>(m["AgentId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~ListAgentBySkillGroupIdResponseBodyData() = default;
};
class ListAgentBySkillGroupIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListAgentBySkillGroupIdResponseBodyData>> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  ListAgentBySkillGroupIdResponseBody() {}

  explicit ListAgentBySkillGroupIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListAgentBySkillGroupIdResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAgentBySkillGroupIdResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAgentBySkillGroupIdResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListAgentBySkillGroupIdResponseBody() = default;
};
class ListAgentBySkillGroupIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAgentBySkillGroupIdResponseBody> body{};

  ListAgentBySkillGroupIdResponse() {}

  explicit ListAgentBySkillGroupIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAgentBySkillGroupIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAgentBySkillGroupIdResponseBody>(model1);
      }
    }
  }


  virtual ~ListAgentBySkillGroupIdResponse() = default;
};
class QueryHotlineSessionRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> acid{};
  shared_ptr<long> callType{};
  shared_ptr<string> calledNumber{};
  shared_ptr<string> callingNumber{};
  shared_ptr<long> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> memberId{};
  shared_ptr<string> memberName{};
  shared_ptr<long> queryEndTime{};
  shared_ptr<long> queryStartTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> servicerName{};
  shared_ptr<string> servicerId{};
  shared_ptr<string> params{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNo{};
  shared_ptr<string> callResult{};

  QueryHotlineSessionRequest() {}

  explicit QueryHotlineSessionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (acid) {
      res["Acid"] = boost::any(*acid);
    }
    if (callType) {
      res["CallType"] = boost::any(*callType);
    }
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (callingNumber) {
      res["CallingNumber"] = boost::any(*callingNumber);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (queryEndTime) {
      res["QueryEndTime"] = boost::any(*queryEndTime);
    }
    if (queryStartTime) {
      res["QueryStartTime"] = boost::any(*queryStartTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (servicerName) {
      res["ServicerName"] = boost::any(*servicerName);
    }
    if (servicerId) {
      res["ServicerId"] = boost::any(*servicerId);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (callResult) {
      res["CallResult"] = boost::any(*callResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Acid") != m.end() && !m["Acid"].empty()) {
      acid = make_shared<string>(boost::any_cast<string>(m["Acid"]));
    }
    if (m.find("CallType") != m.end() && !m["CallType"].empty()) {
      callType = make_shared<long>(boost::any_cast<long>(m["CallType"]));
    }
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("CallingNumber") != m.end() && !m["CallingNumber"].empty()) {
      callingNumber = make_shared<string>(boost::any_cast<string>(m["CallingNumber"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<long>(boost::any_cast<long>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("QueryEndTime") != m.end() && !m["QueryEndTime"].empty()) {
      queryEndTime = make_shared<long>(boost::any_cast<long>(m["QueryEndTime"]));
    }
    if (m.find("QueryStartTime") != m.end() && !m["QueryStartTime"].empty()) {
      queryStartTime = make_shared<long>(boost::any_cast<long>(m["QueryStartTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServicerName") != m.end() && !m["ServicerName"].empty()) {
      servicerName = make_shared<string>(boost::any_cast<string>(m["ServicerName"]));
    }
    if (m.find("ServicerId") != m.end() && !m["ServicerId"].empty()) {
      servicerId = make_shared<string>(boost::any_cast<string>(m["ServicerId"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("CallResult") != m.end() && !m["CallResult"].empty()) {
      callResult = make_shared<string>(boost::any_cast<string>(m["CallResult"]));
    }
  }


  virtual ~QueryHotlineSessionRequest() = default;
};
class QueryHotlineSessionResponseBodyDataCallDetailRecord : public Darabonba::Model {
public:
  shared_ptr<string> callResult{};
  shared_ptr<string> servicerName{};
  shared_ptr<string> outQueueTime{};
  shared_ptr<long> callContinueTime{};
  shared_ptr<string> createTime{};
  shared_ptr<string> pickUpTime{};
  shared_ptr<long> ringContinueTime{};
  shared_ptr<string> calledNumber{};
  shared_ptr<string> servicerId{};
  shared_ptr<string> hangUpTime{};
  shared_ptr<long> evaluationLevel{};
  shared_ptr<string> hangUpRole{};
  shared_ptr<string> memberName{};
  shared_ptr<long> evaluationScore{};
  shared_ptr<string> acid{};
  shared_ptr<string> ringStartTime{};
  shared_ptr<long> callType{};
  shared_ptr<string> groupName{};
  shared_ptr<long> groupId{};
  shared_ptr<string> ringEndTime{};
  shared_ptr<string> inQueueTime{};
  shared_ptr<string> callingNumber{};
  shared_ptr<string> memberId{};
  shared_ptr<long> queueUpContinueTime{};

  QueryHotlineSessionResponseBodyDataCallDetailRecord() {}

  explicit QueryHotlineSessionResponseBodyDataCallDetailRecord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callResult) {
      res["CallResult"] = boost::any(*callResult);
    }
    if (servicerName) {
      res["ServicerName"] = boost::any(*servicerName);
    }
    if (outQueueTime) {
      res["OutQueueTime"] = boost::any(*outQueueTime);
    }
    if (callContinueTime) {
      res["CallContinueTime"] = boost::any(*callContinueTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (pickUpTime) {
      res["PickUpTime"] = boost::any(*pickUpTime);
    }
    if (ringContinueTime) {
      res["RingContinueTime"] = boost::any(*ringContinueTime);
    }
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (servicerId) {
      res["ServicerId"] = boost::any(*servicerId);
    }
    if (hangUpTime) {
      res["HangUpTime"] = boost::any(*hangUpTime);
    }
    if (evaluationLevel) {
      res["EvaluationLevel"] = boost::any(*evaluationLevel);
    }
    if (hangUpRole) {
      res["HangUpRole"] = boost::any(*hangUpRole);
    }
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (evaluationScore) {
      res["EvaluationScore"] = boost::any(*evaluationScore);
    }
    if (acid) {
      res["Acid"] = boost::any(*acid);
    }
    if (ringStartTime) {
      res["RingStartTime"] = boost::any(*ringStartTime);
    }
    if (callType) {
      res["CallType"] = boost::any(*callType);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (ringEndTime) {
      res["RingEndTime"] = boost::any(*ringEndTime);
    }
    if (inQueueTime) {
      res["InQueueTime"] = boost::any(*inQueueTime);
    }
    if (callingNumber) {
      res["CallingNumber"] = boost::any(*callingNumber);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (queueUpContinueTime) {
      res["QueueUpContinueTime"] = boost::any(*queueUpContinueTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallResult") != m.end() && !m["CallResult"].empty()) {
      callResult = make_shared<string>(boost::any_cast<string>(m["CallResult"]));
    }
    if (m.find("ServicerName") != m.end() && !m["ServicerName"].empty()) {
      servicerName = make_shared<string>(boost::any_cast<string>(m["ServicerName"]));
    }
    if (m.find("OutQueueTime") != m.end() && !m["OutQueueTime"].empty()) {
      outQueueTime = make_shared<string>(boost::any_cast<string>(m["OutQueueTime"]));
    }
    if (m.find("CallContinueTime") != m.end() && !m["CallContinueTime"].empty()) {
      callContinueTime = make_shared<long>(boost::any_cast<long>(m["CallContinueTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("PickUpTime") != m.end() && !m["PickUpTime"].empty()) {
      pickUpTime = make_shared<string>(boost::any_cast<string>(m["PickUpTime"]));
    }
    if (m.find("RingContinueTime") != m.end() && !m["RingContinueTime"].empty()) {
      ringContinueTime = make_shared<long>(boost::any_cast<long>(m["RingContinueTime"]));
    }
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("ServicerId") != m.end() && !m["ServicerId"].empty()) {
      servicerId = make_shared<string>(boost::any_cast<string>(m["ServicerId"]));
    }
    if (m.find("HangUpTime") != m.end() && !m["HangUpTime"].empty()) {
      hangUpTime = make_shared<string>(boost::any_cast<string>(m["HangUpTime"]));
    }
    if (m.find("EvaluationLevel") != m.end() && !m["EvaluationLevel"].empty()) {
      evaluationLevel = make_shared<long>(boost::any_cast<long>(m["EvaluationLevel"]));
    }
    if (m.find("HangUpRole") != m.end() && !m["HangUpRole"].empty()) {
      hangUpRole = make_shared<string>(boost::any_cast<string>(m["HangUpRole"]));
    }
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("EvaluationScore") != m.end() && !m["EvaluationScore"].empty()) {
      evaluationScore = make_shared<long>(boost::any_cast<long>(m["EvaluationScore"]));
    }
    if (m.find("Acid") != m.end() && !m["Acid"].empty()) {
      acid = make_shared<string>(boost::any_cast<string>(m["Acid"]));
    }
    if (m.find("RingStartTime") != m.end() && !m["RingStartTime"].empty()) {
      ringStartTime = make_shared<string>(boost::any_cast<string>(m["RingStartTime"]));
    }
    if (m.find("CallType") != m.end() && !m["CallType"].empty()) {
      callType = make_shared<long>(boost::any_cast<long>(m["CallType"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<long>(boost::any_cast<long>(m["GroupId"]));
    }
    if (m.find("RingEndTime") != m.end() && !m["RingEndTime"].empty()) {
      ringEndTime = make_shared<string>(boost::any_cast<string>(m["RingEndTime"]));
    }
    if (m.find("InQueueTime") != m.end() && !m["InQueueTime"].empty()) {
      inQueueTime = make_shared<string>(boost::any_cast<string>(m["InQueueTime"]));
    }
    if (m.find("CallingNumber") != m.end() && !m["CallingNumber"].empty()) {
      callingNumber = make_shared<string>(boost::any_cast<string>(m["CallingNumber"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("QueueUpContinueTime") != m.end() && !m["QueueUpContinueTime"].empty()) {
      queueUpContinueTime = make_shared<long>(boost::any_cast<long>(m["QueueUpContinueTime"]));
    }
  }


  virtual ~QueryHotlineSessionResponseBodyDataCallDetailRecord() = default;
};
class QueryHotlineSessionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryHotlineSessionResponseBodyDataCallDetailRecord>> callDetailRecord{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> totalCount{};

  QueryHotlineSessionResponseBodyData() {}

  explicit QueryHotlineSessionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callDetailRecord) {
      vector<boost::any> temp1;
      for(auto item1:*callDetailRecord){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CallDetailRecord"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallDetailRecord") != m.end() && !m["CallDetailRecord"].empty()) {
      if (typeid(vector<boost::any>) == m["CallDetailRecord"].type()) {
        vector<QueryHotlineSessionResponseBodyDataCallDetailRecord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CallDetailRecord"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryHotlineSessionResponseBodyDataCallDetailRecord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        callDetailRecord = make_shared<vector<QueryHotlineSessionResponseBodyDataCallDetailRecord>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QueryHotlineSessionResponseBodyData() = default;
};
class QueryHotlineSessionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<QueryHotlineSessionResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  QueryHotlineSessionResponseBody() {}

  explicit QueryHotlineSessionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryHotlineSessionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryHotlineSessionResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryHotlineSessionResponseBody() = default;
};
class QueryHotlineSessionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryHotlineSessionResponseBody> body{};

  QueryHotlineSessionResponse() {}

  explicit QueryHotlineSessionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryHotlineSessionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryHotlineSessionResponseBody>(model1);
      }
    }
  }


  virtual ~QueryHotlineSessionResponse() = default;
};
class StartChatWorkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};

  StartChatWorkRequest() {}

  explicit StartChatWorkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~StartChatWorkRequest() = default;
};
class StartChatWorkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  StartChatWorkResponseBody() {}

  explicit StartChatWorkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~StartChatWorkResponseBody() = default;
};
class StartChatWorkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartChatWorkResponseBody> body{};

  StartChatWorkResponse() {}

  explicit StartChatWorkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartChatWorkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartChatWorkResponseBody>(model1);
      }
    }
  }


  virtual ~StartChatWorkResponse() = default;
};
class HangupThirdCallRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> callId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> connectionId{};

  HangupThirdCallRequest() {}

  explicit HangupThirdCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (connectionId) {
      res["ConnectionId"] = boost::any(*connectionId);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("ConnectionId") != m.end() && !m["ConnectionId"].empty()) {
      connectionId = make_shared<string>(boost::any_cast<string>(m["ConnectionId"]));
    }
  }


  virtual ~HangupThirdCallRequest() = default;
};
class HangupThirdCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  HangupThirdCallResponseBody() {}

  explicit HangupThirdCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~HangupThirdCallResponseBody() = default;
};
class HangupThirdCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<HangupThirdCallResponseBody> body{};

  HangupThirdCallResponse() {}

  explicit HangupThirdCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        HangupThirdCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HangupThirdCallResponseBody>(model1);
      }
    }
  }


  virtual ~HangupThirdCallResponse() = default;
};
class StartHotlineServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};

  StartHotlineServiceRequest() {}

  explicit StartHotlineServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~StartHotlineServiceRequest() = default;
};
class StartHotlineServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  StartHotlineServiceResponseBody() {}

  explicit StartHotlineServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~StartHotlineServiceResponseBody() = default;
};
class StartHotlineServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartHotlineServiceResponseBody> body{};

  StartHotlineServiceResponse() {}

  explicit StartHotlineServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartHotlineServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartHotlineServiceResponseBody>(model1);
      }
    }
  }


  virtual ~StartHotlineServiceResponse() = default;
};
class StartCallV2Request : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> caller{};
  shared_ptr<string> callee{};
  shared_ptr<string> jsonMsg{};

  StartCallV2Request() {}

  explicit StartCallV2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (caller) {
      res["Caller"] = boost::any(*caller);
    }
    if (callee) {
      res["Callee"] = boost::any(*callee);
    }
    if (jsonMsg) {
      res["JsonMsg"] = boost::any(*jsonMsg);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("Caller") != m.end() && !m["Caller"].empty()) {
      caller = make_shared<string>(boost::any_cast<string>(m["Caller"]));
    }
    if (m.find("Callee") != m.end() && !m["Callee"].empty()) {
      callee = make_shared<string>(boost::any_cast<string>(m["Callee"]));
    }
    if (m.find("JsonMsg") != m.end() && !m["JsonMsg"].empty()) {
      jsonMsg = make_shared<string>(boost::any_cast<string>(m["JsonMsg"]));
    }
  }


  virtual ~StartCallV2Request() = default;
};
class StartCallV2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  StartCallV2ResponseBody() {}

  explicit StartCallV2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~StartCallV2ResponseBody() = default;
};
class StartCallV2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartCallV2ResponseBody> body{};

  StartCallV2Response() {}

  explicit StartCallV2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartCallV2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartCallV2ResponseBody>(model1);
      }
    }
  }


  virtual ~StartCallV2Response() = default;
};
class EnableRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> roleId{};

  EnableRoleRequest() {}

  explicit EnableRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
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
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<long>(boost::any_cast<long>(m["RoleId"]));
    }
  }


  virtual ~EnableRoleRequest() = default;
};
class EnableRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  EnableRoleResponseBody() {}

  explicit EnableRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~EnableRoleResponseBody() = default;
};
class EnableRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableRoleResponseBody> body{};

  EnableRoleResponse() {}

  explicit EnableRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EnableRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableRoleResponseBody>(model1);
      }
    }
  }


  virtual ~EnableRoleResponse() = default;
};
class GetAgentRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};

  GetAgentRequest() {}

  explicit GetAgentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~GetAgentRequest() = default;
};
class GetAgentResponseBodyDataGroupList : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> description{};
  shared_ptr<long> channelType{};
  shared_ptr<long> skillGroupId{};
  shared_ptr<string> name{};

  GetAgentResponseBodyDataGroupList() {}

  explicit GetAgentResponseBodyDataGroupList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (skillGroupId) {
      res["SkillGroupId"] = boost::any(*skillGroupId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<long>(boost::any_cast<long>(m["ChannelType"]));
    }
    if (m.find("SkillGroupId") != m.end() && !m["SkillGroupId"].empty()) {
      skillGroupId = make_shared<long>(boost::any_cast<long>(m["SkillGroupId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetAgentResponseBodyDataGroupList() = default;
};
class GetAgentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> displayName{};
  shared_ptr<long> agentId{};
  shared_ptr<vector<GetAgentResponseBodyDataGroupList>> groupList{};
  shared_ptr<string> accountName{};
  shared_ptr<long> tenantId{};

  GetAgentResponseBodyData() {}

  explicit GetAgentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    if (groupList) {
      vector<boost::any> temp1;
      for(auto item1:*groupList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GroupList"] = boost::any(temp1);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<long>(boost::any_cast<long>(m["AgentId"]));
    }
    if (m.find("GroupList") != m.end() && !m["GroupList"].empty()) {
      if (typeid(vector<boost::any>) == m["GroupList"].type()) {
        vector<GetAgentResponseBodyDataGroupList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GroupList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAgentResponseBodyDataGroupList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groupList = make_shared<vector<GetAgentResponseBodyDataGroupList>>(expect1);
      }
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~GetAgentResponseBodyData() = default;
};
class GetAgentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetAgentResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};

  GetAgentResponseBody() {}

  explicit GetAgentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetAgentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAgentResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~GetAgentResponseBody() = default;
};
class GetAgentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAgentResponseBody> body{};

  GetAgentResponse() {}

  explicit GetAgentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetAgentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAgentResponseBody>(model1);
      }
    }
  }


  virtual ~GetAgentResponse() = default;
};
class GetCMSIdByForeignIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> nick{};
  shared_ptr<string> foreignId{};
  shared_ptr<long> sourceId{};

  GetCMSIdByForeignIdRequest() {}

  explicit GetCMSIdByForeignIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nick) {
      res["Nick"] = boost::any(*nick);
    }
    if (foreignId) {
      res["ForeignId"] = boost::any(*foreignId);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Nick") != m.end() && !m["Nick"].empty()) {
      nick = make_shared<string>(boost::any_cast<string>(m["Nick"]));
    }
    if (m.find("ForeignId") != m.end() && !m["ForeignId"].empty()) {
      foreignId = make_shared<string>(boost::any_cast<string>(m["ForeignId"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<long>(boost::any_cast<long>(m["SourceId"]));
    }
  }


  virtual ~GetCMSIdByForeignIdRequest() = default;
};
class GetCMSIdByForeignIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<long> customerTypeId{};
  shared_ptr<string> avatar{};
  shared_ptr<string> gender{};
  shared_ptr<string> foreignId{};
  shared_ptr<string> userId{};
  shared_ptr<string> nick{};
  shared_ptr<bool> anonymity{};
  shared_ptr<string> phone{};

  GetCMSIdByForeignIdResponseBodyData() {}

  explicit GetCMSIdByForeignIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (customerTypeId) {
      res["CustomerTypeId"] = boost::any(*customerTypeId);
    }
    if (avatar) {
      res["Avatar"] = boost::any(*avatar);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (foreignId) {
      res["ForeignId"] = boost::any(*foreignId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (nick) {
      res["Nick"] = boost::any(*nick);
    }
    if (anonymity) {
      res["Anonymity"] = boost::any(*anonymity);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("CustomerTypeId") != m.end() && !m["CustomerTypeId"].empty()) {
      customerTypeId = make_shared<long>(boost::any_cast<long>(m["CustomerTypeId"]));
    }
    if (m.find("Avatar") != m.end() && !m["Avatar"].empty()) {
      avatar = make_shared<string>(boost::any_cast<string>(m["Avatar"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("ForeignId") != m.end() && !m["ForeignId"].empty()) {
      foreignId = make_shared<string>(boost::any_cast<string>(m["ForeignId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("Nick") != m.end() && !m["Nick"].empty()) {
      nick = make_shared<string>(boost::any_cast<string>(m["Nick"]));
    }
    if (m.find("Anonymity") != m.end() && !m["Anonymity"].empty()) {
      anonymity = make_shared<bool>(boost::any_cast<bool>(m["Anonymity"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
  }


  virtual ~GetCMSIdByForeignIdResponseBodyData() = default;
};
class GetCMSIdByForeignIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetCMSIdByForeignIdResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetCMSIdByForeignIdResponseBody() {}

  explicit GetCMSIdByForeignIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetCMSIdByForeignIdResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCMSIdByForeignIdResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetCMSIdByForeignIdResponseBody() = default;
};
class GetCMSIdByForeignIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetCMSIdByForeignIdResponseBody> body{};

  GetCMSIdByForeignIdResponse() {}

  explicit GetCMSIdByForeignIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetCMSIdByForeignIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCMSIdByForeignIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetCMSIdByForeignIdResponse() = default;
};
class TransferToThirdCallRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> callId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> connectionId{};
  shared_ptr<string> holdConnectionId{};

  TransferToThirdCallRequest() {}

  explicit TransferToThirdCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (connectionId) {
      res["ConnectionId"] = boost::any(*connectionId);
    }
    if (holdConnectionId) {
      res["HoldConnectionId"] = boost::any(*holdConnectionId);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("ConnectionId") != m.end() && !m["ConnectionId"].empty()) {
      connectionId = make_shared<string>(boost::any_cast<string>(m["ConnectionId"]));
    }
    if (m.find("HoldConnectionId") != m.end() && !m["HoldConnectionId"].empty()) {
      holdConnectionId = make_shared<string>(boost::any_cast<string>(m["HoldConnectionId"]));
    }
  }


  virtual ~TransferToThirdCallRequest() = default;
};
class TransferToThirdCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  TransferToThirdCallResponseBody() {}

  explicit TransferToThirdCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~TransferToThirdCallResponseBody() = default;
};
class TransferToThirdCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TransferToThirdCallResponseBody> body{};

  TransferToThirdCallResponse() {}

  explicit TransferToThirdCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TransferToThirdCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TransferToThirdCallResponseBody>(model1);
      }
    }
  }


  virtual ~TransferToThirdCallResponse() = default;
};
class UpdateAgentRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> displayName{};
  shared_ptr<vector<long>> skillGroupId{};
  shared_ptr<vector<long>> skillGroupIdList{};

  UpdateAgentRequest() {}

  explicit UpdateAgentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (skillGroupId) {
      res["SkillGroupId"] = boost::any(*skillGroupId);
    }
    if (skillGroupIdList) {
      res["SkillGroupIdList"] = boost::any(*skillGroupIdList);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("SkillGroupId") != m.end() && !m["SkillGroupId"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["SkillGroupId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SkillGroupId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      skillGroupId = make_shared<vector<long>>(toVec1);
    }
    if (m.find("SkillGroupIdList") != m.end() && !m["SkillGroupIdList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["SkillGroupIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SkillGroupIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      skillGroupIdList = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~UpdateAgentRequest() = default;
};
class UpdateAgentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  UpdateAgentResponseBody() {}

  explicit UpdateAgentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~UpdateAgentResponseBody() = default;
};
class UpdateAgentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateAgentResponseBody> body{};

  UpdateAgentResponse() {}

  explicit UpdateAgentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateAgentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAgentResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAgentResponse() = default;
};
class ChangeChatAgentStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> method{};

  ChangeChatAgentStatusRequest() {}

  explicit ChangeChatAgentStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (method) {
      res["Method"] = boost::any(*method);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("Method") != m.end() && !m["Method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["Method"]));
    }
  }


  virtual ~ChangeChatAgentStatusRequest() = default;
};
class ChangeChatAgentStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  ChangeChatAgentStatusResponseBody() {}

  explicit ChangeChatAgentStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ChangeChatAgentStatusResponseBody() = default;
};
class ChangeChatAgentStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ChangeChatAgentStatusResponseBody> body{};

  ChangeChatAgentStatusResponse() {}

  explicit ChangeChatAgentStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ChangeChatAgentStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeChatAgentStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeChatAgentStatusResponse() = default;
};
class GenerateWebSocketSignRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};

  GenerateWebSocketSignRequest() {}

  explicit GenerateWebSocketSignRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~GenerateWebSocketSignRequest() = default;
};
class GenerateWebSocketSignResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  GenerateWebSocketSignResponseBody() {}

  explicit GenerateWebSocketSignResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~GenerateWebSocketSignResponseBody() = default;
};
class GenerateWebSocketSignResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GenerateWebSocketSignResponseBody> body{};

  GenerateWebSocketSignResponse() {}

  explicit GenerateWebSocketSignResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GenerateWebSocketSignResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateWebSocketSignResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateWebSocketSignResponse() = default;
};
class UpdateRingStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> uniqueBizId{};
  shared_ptr<string> callOutStatus{};
  shared_ptr<string> extra{};
  shared_ptr<string> instanceId{};

  UpdateRingStatusRequest() {}

  explicit UpdateRingStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uniqueBizId) {
      res["UniqueBizId"] = boost::any(*uniqueBizId);
    }
    if (callOutStatus) {
      res["CallOutStatus"] = boost::any(*callOutStatus);
    }
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UniqueBizId") != m.end() && !m["UniqueBizId"].empty()) {
      uniqueBizId = make_shared<string>(boost::any_cast<string>(m["UniqueBizId"]));
    }
    if (m.find("CallOutStatus") != m.end() && !m["CallOutStatus"].empty()) {
      callOutStatus = make_shared<string>(boost::any_cast<string>(m["CallOutStatus"]));
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["Extra"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~UpdateRingStatusRequest() = default;
};
class UpdateRingStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  UpdateRingStatusResponseBody() {}

  explicit UpdateRingStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~UpdateRingStatusResponseBody() = default;
};
class UpdateRingStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateRingStatusResponseBody> body{};

  UpdateRingStatusResponse() {}

  explicit UpdateRingStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateRingStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRingStatusResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRingStatusResponse() = default;
};
class CreateAgentRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> displayName{};
  shared_ptr<vector<long>> skillGroupId{};
  shared_ptr<vector<long>> skillGroupIdList{};

  CreateAgentRequest() {}

  explicit CreateAgentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (skillGroupId) {
      res["SkillGroupId"] = boost::any(*skillGroupId);
    }
    if (skillGroupIdList) {
      res["SkillGroupIdList"] = boost::any(*skillGroupIdList);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("SkillGroupId") != m.end() && !m["SkillGroupId"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["SkillGroupId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SkillGroupId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      skillGroupId = make_shared<vector<long>>(toVec1);
    }
    if (m.find("SkillGroupIdList") != m.end() && !m["SkillGroupIdList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["SkillGroupIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SkillGroupIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      skillGroupIdList = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~CreateAgentRequest() = default;
};
class CreateAgentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  CreateAgentResponseBody() {}

  explicit CreateAgentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~CreateAgentResponseBody() = default;
};
class CreateAgentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateAgentResponseBody> body{};

  CreateAgentResponse() {}

  explicit CreateAgentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateAgentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAgentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAgentResponse() = default;
};
class DeleteEntityRouteRequest : public Darabonba::Model {
public:
  shared_ptr<long> uniqueId{};
  shared_ptr<string> instanceId{};

  DeleteEntityRouteRequest() {}

  explicit DeleteEntityRouteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uniqueId) {
      res["UniqueId"] = boost::any(*uniqueId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UniqueId") != m.end() && !m["UniqueId"].empty()) {
      uniqueId = make_shared<long>(boost::any_cast<long>(m["UniqueId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DeleteEntityRouteRequest() = default;
};
class DeleteEntityRouteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  DeleteEntityRouteResponseBody() {}

  explicit DeleteEntityRouteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteEntityRouteResponseBody() = default;
};
class DeleteEntityRouteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteEntityRouteResponseBody> body{};

  DeleteEntityRouteResponse() {}

  explicit DeleteEntityRouteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteEntityRouteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEntityRouteResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEntityRouteResponse() = default;
};
class GetHotlineGroupDetailReportRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<int>> depIds{};
  shared_ptr<vector<int>> groupIds{};

  GetHotlineGroupDetailReportRequest() {}

  explicit GetHotlineGroupDetailReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (depIds) {
      res["DepIds"] = boost::any(*depIds);
    }
    if (groupIds) {
      res["GroupIds"] = boost::any(*groupIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["DepIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DepIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      depIds = make_shared<vector<int>>(toVec1);
    }
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["GroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      groupIds = make_shared<vector<int>>(toVec1);
    }
  }


  virtual ~GetHotlineGroupDetailReportRequest() = default;
};
class GetHotlineGroupDetailReportResponseBodyDataColumns : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> title{};

  GetHotlineGroupDetailReportResponseBodyDataColumns() {}

  explicit GetHotlineGroupDetailReportResponseBodyDataColumns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~GetHotlineGroupDetailReportResponseBodyDataColumns() = default;
};
class GetHotlineGroupDetailReportResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> rows{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};
  shared_ptr<vector<GetHotlineGroupDetailReportResponseBodyDataColumns>> columns{};
  shared_ptr<long> page{};

  GetHotlineGroupDetailReportResponseBodyData() {}

  explicit GetHotlineGroupDetailReportResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rows) {
      res["Rows"] = boost::any(*rows);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (columns) {
      vector<boost::any> temp1;
      for(auto item1:*columns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Columns"] = boost::any(temp1);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Rows"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Rows"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      rows = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("Columns") != m.end() && !m["Columns"].empty()) {
      if (typeid(vector<boost::any>) == m["Columns"].type()) {
        vector<GetHotlineGroupDetailReportResponseBodyDataColumns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Columns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetHotlineGroupDetailReportResponseBodyDataColumns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        columns = make_shared<vector<GetHotlineGroupDetailReportResponseBodyDataColumns>>(expect1);
      }
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
  }


  virtual ~GetHotlineGroupDetailReportResponseBodyData() = default;
};
class GetHotlineGroupDetailReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetHotlineGroupDetailReportResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<string> success{};

  GetHotlineGroupDetailReportResponseBody() {}

  explicit GetHotlineGroupDetailReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetHotlineGroupDetailReportResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetHotlineGroupDetailReportResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~GetHotlineGroupDetailReportResponseBody() = default;
};
class GetHotlineGroupDetailReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetHotlineGroupDetailReportResponseBody> body{};

  GetHotlineGroupDetailReportResponse() {}

  explicit GetHotlineGroupDetailReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetHotlineGroupDetailReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHotlineGroupDetailReportResponseBody>(model1);
      }
    }
  }


  virtual ~GetHotlineGroupDetailReportResponse() = default;
};
class CreateTicketRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> templateId{};
  shared_ptr<long> categoryId{};
  shared_ptr<long> creatorId{};
  shared_ptr<long> creatorType{};
  shared_ptr<string> creatorName{};
  shared_ptr<long> memberId{};
  shared_ptr<string> memberName{};
  shared_ptr<string> fromInfo{};
  shared_ptr<long> priority{};
  shared_ptr<string> carbonCopy{};
  shared_ptr<string> formData{};

  CreateTicketRequest() {}

  explicit CreateTicketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (creatorType) {
      res["CreatorType"] = boost::any(*creatorType);
    }
    if (creatorName) {
      res["CreatorName"] = boost::any(*creatorName);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (fromInfo) {
      res["FromInfo"] = boost::any(*fromInfo);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (carbonCopy) {
      res["CarbonCopy"] = boost::any(*carbonCopy);
    }
    if (formData) {
      res["FormData"] = boost::any(*formData);
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
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<long>(boost::any_cast<long>(m["CreatorId"]));
    }
    if (m.find("CreatorType") != m.end() && !m["CreatorType"].empty()) {
      creatorType = make_shared<long>(boost::any_cast<long>(m["CreatorType"]));
    }
    if (m.find("CreatorName") != m.end() && !m["CreatorName"].empty()) {
      creatorName = make_shared<string>(boost::any_cast<string>(m["CreatorName"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<long>(boost::any_cast<long>(m["MemberId"]));
    }
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("FromInfo") != m.end() && !m["FromInfo"].empty()) {
      fromInfo = make_shared<string>(boost::any_cast<string>(m["FromInfo"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("CarbonCopy") != m.end() && !m["CarbonCopy"].empty()) {
      carbonCopy = make_shared<string>(boost::any_cast<string>(m["CarbonCopy"]));
    }
    if (m.find("FormData") != m.end() && !m["FormData"].empty()) {
      formData = make_shared<string>(boost::any_cast<string>(m["FormData"]));
    }
  }


  virtual ~CreateTicketRequest() = default;
};
class CreateTicketResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  CreateTicketResponseBody() {}

  explicit CreateTicketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateTicketResponseBody() = default;
};
class CreateTicketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateTicketResponseBody> body{};

  CreateTicketResponse() {}

  explicit CreateTicketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateTicketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTicketResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTicketResponse() = default;
};
class UpdateCustomerRequest : public Darabonba::Model {
public:
  shared_ptr<long> prodLineId{};
  shared_ptr<string> bizType{};
  shared_ptr<string> name{};
  shared_ptr<string> typeCode{};
  shared_ptr<string> phone{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> managerName{};
  shared_ptr<string> contacter{};
  shared_ptr<string> industry{};
  shared_ptr<string> position{};
  shared_ptr<string> email{};
  shared_ptr<string> dingding{};
  shared_ptr<string> outerId{};
  shared_ptr<long> outerIdType{};
  shared_ptr<long> customerId{};

  UpdateCustomerRequest() {}

  explicit UpdateCustomerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (prodLineId) {
      res["ProdLineId"] = boost::any(*prodLineId);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (typeCode) {
      res["TypeCode"] = boost::any(*typeCode);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (managerName) {
      res["ManagerName"] = boost::any(*managerName);
    }
    if (contacter) {
      res["Contacter"] = boost::any(*contacter);
    }
    if (industry) {
      res["Industry"] = boost::any(*industry);
    }
    if (position) {
      res["Position"] = boost::any(*position);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (dingding) {
      res["Dingding"] = boost::any(*dingding);
    }
    if (outerId) {
      res["OuterId"] = boost::any(*outerId);
    }
    if (outerIdType) {
      res["OuterIdType"] = boost::any(*outerIdType);
    }
    if (customerId) {
      res["CustomerId"] = boost::any(*customerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProdLineId") != m.end() && !m["ProdLineId"].empty()) {
      prodLineId = make_shared<long>(boost::any_cast<long>(m["ProdLineId"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TypeCode") != m.end() && !m["TypeCode"].empty()) {
      typeCode = make_shared<string>(boost::any_cast<string>(m["TypeCode"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ManagerName") != m.end() && !m["ManagerName"].empty()) {
      managerName = make_shared<string>(boost::any_cast<string>(m["ManagerName"]));
    }
    if (m.find("Contacter") != m.end() && !m["Contacter"].empty()) {
      contacter = make_shared<string>(boost::any_cast<string>(m["Contacter"]));
    }
    if (m.find("Industry") != m.end() && !m["Industry"].empty()) {
      industry = make_shared<string>(boost::any_cast<string>(m["Industry"]));
    }
    if (m.find("Position") != m.end() && !m["Position"].empty()) {
      position = make_shared<string>(boost::any_cast<string>(m["Position"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Dingding") != m.end() && !m["Dingding"].empty()) {
      dingding = make_shared<string>(boost::any_cast<string>(m["Dingding"]));
    }
    if (m.find("OuterId") != m.end() && !m["OuterId"].empty()) {
      outerId = make_shared<string>(boost::any_cast<string>(m["OuterId"]));
    }
    if (m.find("OuterIdType") != m.end() && !m["OuterIdType"].empty()) {
      outerIdType = make_shared<long>(boost::any_cast<long>(m["OuterIdType"]));
    }
    if (m.find("CustomerId") != m.end() && !m["CustomerId"].empty()) {
      customerId = make_shared<long>(boost::any_cast<long>(m["CustomerId"]));
    }
  }


  virtual ~UpdateCustomerRequest() = default;
};
class UpdateCustomerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  UpdateCustomerResponseBody() {}

  explicit UpdateCustomerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateCustomerResponseBody() = default;
};
class UpdateCustomerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateCustomerResponseBody> body{};

  UpdateCustomerResponse() {}

  explicit UpdateCustomerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateCustomerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateCustomerResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateCustomerResponse() = default;
};
class AnswerCallRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> callId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> connectionId{};

  AnswerCallRequest() {}

  explicit AnswerCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (connectionId) {
      res["ConnectionId"] = boost::any(*connectionId);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("ConnectionId") != m.end() && !m["ConnectionId"].empty()) {
      connectionId = make_shared<string>(boost::any_cast<string>(m["ConnectionId"]));
    }
  }


  virtual ~AnswerCallRequest() = default;
};
class AnswerCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  AnswerCallResponseBody() {}

  explicit AnswerCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AnswerCallResponseBody() = default;
};
class AnswerCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AnswerCallResponseBody> body{};

  AnswerCallResponse() {}

  explicit AnswerCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AnswerCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AnswerCallResponseBody>(model1);
      }
    }
  }


  virtual ~AnswerCallResponse() = default;
};
class DeleteAgentRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};

  DeleteAgentRequest() {}

  explicit DeleteAgentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~DeleteAgentRequest() = default;
};
class DeleteAgentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  DeleteAgentResponseBody() {}

  explicit DeleteAgentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~DeleteAgentResponseBody() = default;
};
class DeleteAgentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteAgentResponseBody> body{};

  DeleteAgentResponse() {}

  explicit DeleteAgentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteAgentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAgentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAgentResponse() = default;
};
class GetEntityTagRelationRequest : public Darabonba::Model {
public:
  shared_ptr<string> entityId{};
  shared_ptr<string> entityType{};
  shared_ptr<string> instanceId{};

  GetEntityTagRelationRequest() {}

  explicit GetEntityTagRelationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetEntityTagRelationRequest() = default;
};
class GetEntityTagRelationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> tagName{};
  shared_ptr<string> tagGroupCode{};
  shared_ptr<string> entityId{};
  shared_ptr<string> tagCode{};
  shared_ptr<string> entityType{};
  shared_ptr<string> tagGroupName{};

  GetEntityTagRelationResponseBodyData() {}

  explicit GetEntityTagRelationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    if (tagGroupCode) {
      res["TagGroupCode"] = boost::any(*tagGroupCode);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (tagCode) {
      res["TagCode"] = boost::any(*tagCode);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (tagGroupName) {
      res["TagGroupName"] = boost::any(*tagGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
    if (m.find("TagGroupCode") != m.end() && !m["TagGroupCode"].empty()) {
      tagGroupCode = make_shared<string>(boost::any_cast<string>(m["TagGroupCode"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("TagCode") != m.end() && !m["TagCode"].empty()) {
      tagCode = make_shared<string>(boost::any_cast<string>(m["TagCode"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("TagGroupName") != m.end() && !m["TagGroupName"].empty()) {
      tagGroupName = make_shared<string>(boost::any_cast<string>(m["TagGroupName"]));
    }
  }


  virtual ~GetEntityTagRelationResponseBodyData() = default;
};
class GetEntityTagRelationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetEntityTagRelationResponseBodyData>> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetEntityTagRelationResponseBody() {}

  explicit GetEntityTagRelationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetEntityTagRelationResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEntityTagRelationResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetEntityTagRelationResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetEntityTagRelationResponseBody() = default;
};
class GetEntityTagRelationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetEntityTagRelationResponseBody> body{};

  GetEntityTagRelationResponse() {}

  explicit GetEntityTagRelationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetEntityTagRelationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEntityTagRelationResponseBody>(model1);
      }
    }
  }


  virtual ~GetEntityTagRelationResponse() = default;
};
class GetHotlineAgentDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};

  GetHotlineAgentDetailRequest() {}

  explicit GetHotlineAgentDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~GetHotlineAgentDetailRequest() = default;
};
class GetHotlineAgentDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> agentStatusCode{};
  shared_ptr<string> token{};
  shared_ptr<long> agentId{};
  shared_ptr<bool> assigned{};
  shared_ptr<long> restType{};
  shared_ptr<long> agentStatus{};
  shared_ptr<long> tenantId{};

  GetHotlineAgentDetailResponseBodyData() {}

  explicit GetHotlineAgentDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentStatusCode) {
      res["AgentStatusCode"] = boost::any(*agentStatusCode);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    if (assigned) {
      res["Assigned"] = boost::any(*assigned);
    }
    if (restType) {
      res["RestType"] = boost::any(*restType);
    }
    if (agentStatus) {
      res["AgentStatus"] = boost::any(*agentStatus);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentStatusCode") != m.end() && !m["AgentStatusCode"].empty()) {
      agentStatusCode = make_shared<string>(boost::any_cast<string>(m["AgentStatusCode"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<long>(boost::any_cast<long>(m["AgentId"]));
    }
    if (m.find("Assigned") != m.end() && !m["Assigned"].empty()) {
      assigned = make_shared<bool>(boost::any_cast<bool>(m["Assigned"]));
    }
    if (m.find("RestType") != m.end() && !m["RestType"].empty()) {
      restType = make_shared<long>(boost::any_cast<long>(m["RestType"]));
    }
    if (m.find("AgentStatus") != m.end() && !m["AgentStatus"].empty()) {
      agentStatus = make_shared<long>(boost::any_cast<long>(m["AgentStatus"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~GetHotlineAgentDetailResponseBodyData() = default;
};
class GetHotlineAgentDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetHotlineAgentDetailResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  GetHotlineAgentDetailResponseBody() {}

  explicit GetHotlineAgentDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetHotlineAgentDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetHotlineAgentDetailResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~GetHotlineAgentDetailResponseBody() = default;
};
class GetHotlineAgentDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetHotlineAgentDetailResponseBody> body{};

  GetHotlineAgentDetailResponse() {}

  explicit GetHotlineAgentDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetHotlineAgentDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHotlineAgentDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetHotlineAgentDetailResponse() = default;
};
class SuspendHotlineServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<long> type{};

  SuspendHotlineServiceRequest() {}

  explicit SuspendHotlineServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~SuspendHotlineServiceRequest() = default;
};
class SuspendHotlineServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  SuspendHotlineServiceResponseBody() {}

  explicit SuspendHotlineServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SuspendHotlineServiceResponseBody() = default;
};
class SuspendHotlineServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SuspendHotlineServiceResponseBody> body{};

  SuspendHotlineServiceResponse() {}

  explicit SuspendHotlineServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SuspendHotlineServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SuspendHotlineServiceResponseBody>(model1);
      }
    }
  }


  virtual ~SuspendHotlineServiceResponse() = default;
};
class GetCallsPerDayRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> dataIdStart{};
  shared_ptr<string> dataIdEnd{};
  shared_ptr<string> dataId{};
  shared_ptr<string> hourId{};
  shared_ptr<string> minuteId{};
  shared_ptr<string> phoneNumbers{};
  shared_ptr<string> havePhoneNumbers{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};

  GetCallsPerDayRequest() {}

  explicit GetCallsPerDayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dataIdStart) {
      res["DataIdStart"] = boost::any(*dataIdStart);
    }
    if (dataIdEnd) {
      res["DataIdEnd"] = boost::any(*dataIdEnd);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (hourId) {
      res["HourId"] = boost::any(*hourId);
    }
    if (minuteId) {
      res["MinuteId"] = boost::any(*minuteId);
    }
    if (phoneNumbers) {
      res["PhoneNumbers"] = boost::any(*phoneNumbers);
    }
    if (havePhoneNumbers) {
      res["HavePhoneNumbers"] = boost::any(*havePhoneNumbers);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DataIdStart") != m.end() && !m["DataIdStart"].empty()) {
      dataIdStart = make_shared<string>(boost::any_cast<string>(m["DataIdStart"]));
    }
    if (m.find("DataIdEnd") != m.end() && !m["DataIdEnd"].empty()) {
      dataIdEnd = make_shared<string>(boost::any_cast<string>(m["DataIdEnd"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("HourId") != m.end() && !m["HourId"].empty()) {
      hourId = make_shared<string>(boost::any_cast<string>(m["HourId"]));
    }
    if (m.find("MinuteId") != m.end() && !m["MinuteId"].empty()) {
      minuteId = make_shared<string>(boost::any_cast<string>(m["MinuteId"]));
    }
    if (m.find("PhoneNumbers") != m.end() && !m["PhoneNumbers"].empty()) {
      phoneNumbers = make_shared<string>(boost::any_cast<string>(m["PhoneNumbers"]));
    }
    if (m.find("HavePhoneNumbers") != m.end() && !m["HavePhoneNumbers"].empty()) {
      havePhoneNumbers = make_shared<string>(boost::any_cast<string>(m["HavePhoneNumbers"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~GetCallsPerDayRequest() = default;
};
class GetCallsPerDayResponseBodyDataCallsPerdayResponseList : public Darabonba::Model {
public:
  shared_ptr<string> dataId{};
  shared_ptr<string> hourId{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> tenantName{};
  shared_ptr<string> phoneNum{};
  shared_ptr<string> callOutCnt{};
  shared_ptr<string> callInCnt{};
  shared_ptr<string> minuteId{};

  GetCallsPerDayResponseBodyDataCallsPerdayResponseList() {}

  explicit GetCallsPerDayResponseBodyDataCallsPerdayResponseList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (hourId) {
      res["HourId"] = boost::any(*hourId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (tenantName) {
      res["TenantName"] = boost::any(*tenantName);
    }
    if (phoneNum) {
      res["PhoneNum"] = boost::any(*phoneNum);
    }
    if (callOutCnt) {
      res["CallOutCnt"] = boost::any(*callOutCnt);
    }
    if (callInCnt) {
      res["CallInCnt"] = boost::any(*callInCnt);
    }
    if (minuteId) {
      res["MinuteId"] = boost::any(*minuteId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("HourId") != m.end() && !m["HourId"].empty()) {
      hourId = make_shared<string>(boost::any_cast<string>(m["HourId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("TenantName") != m.end() && !m["TenantName"].empty()) {
      tenantName = make_shared<string>(boost::any_cast<string>(m["TenantName"]));
    }
    if (m.find("PhoneNum") != m.end() && !m["PhoneNum"].empty()) {
      phoneNum = make_shared<string>(boost::any_cast<string>(m["PhoneNum"]));
    }
    if (m.find("CallOutCnt") != m.end() && !m["CallOutCnt"].empty()) {
      callOutCnt = make_shared<string>(boost::any_cast<string>(m["CallOutCnt"]));
    }
    if (m.find("CallInCnt") != m.end() && !m["CallInCnt"].empty()) {
      callInCnt = make_shared<string>(boost::any_cast<string>(m["CallInCnt"]));
    }
    if (m.find("MinuteId") != m.end() && !m["MinuteId"].empty()) {
      minuteId = make_shared<string>(boost::any_cast<string>(m["MinuteId"]));
    }
  }


  virtual ~GetCallsPerDayResponseBodyDataCallsPerdayResponseList() = default;
};
class GetCallsPerDayResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> totalNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> pageNo{};
  shared_ptr<vector<GetCallsPerDayResponseBodyDataCallsPerdayResponseList>> callsPerdayResponseList{};

  GetCallsPerDayResponseBodyData() {}

  explicit GetCallsPerDayResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (callsPerdayResponseList) {
      vector<boost::any> temp1;
      for(auto item1:*callsPerdayResponseList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CallsPerdayResponseList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<string>(boost::any_cast<string>(m["PageNo"]));
    }
    if (m.find("CallsPerdayResponseList") != m.end() && !m["CallsPerdayResponseList"].empty()) {
      if (typeid(vector<boost::any>) == m["CallsPerdayResponseList"].type()) {
        vector<GetCallsPerDayResponseBodyDataCallsPerdayResponseList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CallsPerdayResponseList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCallsPerDayResponseBodyDataCallsPerdayResponseList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        callsPerdayResponseList = make_shared<vector<GetCallsPerDayResponseBodyDataCallsPerdayResponseList>>(expect1);
      }
    }
  }


  virtual ~GetCallsPerDayResponseBodyData() = default;
};
class GetCallsPerDayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> success{};
  shared_ptr<GetCallsPerDayResponseBodyData> data{};

  GetCallsPerDayResponseBody() {}

  explicit GetCallsPerDayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetCallsPerDayResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCallsPerDayResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetCallsPerDayResponseBody() = default;
};
class GetCallsPerDayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetCallsPerDayResponseBody> body{};

  GetCallsPerDayResponse() {}

  explicit GetCallsPerDayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetCallsPerDayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCallsPerDayResponseBody>(model1);
      }
    }
  }


  virtual ~GetCallsPerDayResponse() = default;
};
class FetchCallRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> callId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> connectionId{};
  shared_ptr<string> holdConnectionId{};

  FetchCallRequest() {}

  explicit FetchCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (connectionId) {
      res["ConnectionId"] = boost::any(*connectionId);
    }
    if (holdConnectionId) {
      res["HoldConnectionId"] = boost::any(*holdConnectionId);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("ConnectionId") != m.end() && !m["ConnectionId"].empty()) {
      connectionId = make_shared<string>(boost::any_cast<string>(m["ConnectionId"]));
    }
    if (m.find("HoldConnectionId") != m.end() && !m["HoldConnectionId"].empty()) {
      holdConnectionId = make_shared<string>(boost::any_cast<string>(m["HoldConnectionId"]));
    }
  }


  virtual ~FetchCallRequest() = default;
};
class FetchCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  FetchCallResponseBody() {}

  explicit FetchCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~FetchCallResponseBody() = default;
};
class FetchCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<FetchCallResponseBody> body{};

  FetchCallResponse() {}

  explicit FetchCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        FetchCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FetchCallResponseBody>(model1);
      }
    }
  }


  virtual ~FetchCallResponse() = default;
};
class GetHotlineAgentDetailReportRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<int>> depIds{};
  shared_ptr<vector<int>> groupIds{};

  GetHotlineAgentDetailReportRequest() {}

  explicit GetHotlineAgentDetailReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (depIds) {
      res["DepIds"] = boost::any(*depIds);
    }
    if (groupIds) {
      res["GroupIds"] = boost::any(*groupIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DepIds") != m.end() && !m["DepIds"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["DepIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DepIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      depIds = make_shared<vector<int>>(toVec1);
    }
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["GroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      groupIds = make_shared<vector<int>>(toVec1);
    }
  }


  virtual ~GetHotlineAgentDetailReportRequest() = default;
};
class GetHotlineAgentDetailReportResponseBodyDataColumns : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> title{};

  GetHotlineAgentDetailReportResponseBodyDataColumns() {}

  explicit GetHotlineAgentDetailReportResponseBodyDataColumns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~GetHotlineAgentDetailReportResponseBodyDataColumns() = default;
};
class GetHotlineAgentDetailReportResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> rows{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};
  shared_ptr<vector<GetHotlineAgentDetailReportResponseBodyDataColumns>> columns{};
  shared_ptr<long> page{};

  GetHotlineAgentDetailReportResponseBodyData() {}

  explicit GetHotlineAgentDetailReportResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rows) {
      res["Rows"] = boost::any(*rows);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (columns) {
      vector<boost::any> temp1;
      for(auto item1:*columns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Columns"] = boost::any(temp1);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Rows"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Rows"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      rows = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("Columns") != m.end() && !m["Columns"].empty()) {
      if (typeid(vector<boost::any>) == m["Columns"].type()) {
        vector<GetHotlineAgentDetailReportResponseBodyDataColumns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Columns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetHotlineAgentDetailReportResponseBodyDataColumns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        columns = make_shared<vector<GetHotlineAgentDetailReportResponseBodyDataColumns>>(expect1);
      }
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
  }


  virtual ~GetHotlineAgentDetailReportResponseBodyData() = default;
};
class GetHotlineAgentDetailReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetHotlineAgentDetailReportResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<string> success{};

  GetHotlineAgentDetailReportResponseBody() {}

  explicit GetHotlineAgentDetailReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetHotlineAgentDetailReportResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetHotlineAgentDetailReportResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~GetHotlineAgentDetailReportResponseBody() = default;
};
class GetHotlineAgentDetailReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetHotlineAgentDetailReportResponseBody> body{};

  GetHotlineAgentDetailReportResponse() {}

  explicit GetHotlineAgentDetailReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetHotlineAgentDetailReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHotlineAgentDetailReportResponseBody>(model1);
      }
    }
  }


  virtual ~GetHotlineAgentDetailReportResponse() = default;
};
class QueryTicketCountRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> operatorId{};

  QueryTicketCountRequest() {}

  explicit QueryTicketCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (operatorId) {
      res["OperatorId"] = boost::any(*operatorId);
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
    if (m.find("OperatorId") != m.end() && !m["OperatorId"].empty()) {
      operatorId = make_shared<long>(boost::any_cast<long>(m["OperatorId"]));
    }
  }


  virtual ~QueryTicketCountRequest() = default;
};
class QueryTicketCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  QueryTicketCountResponseBody() {}

  explicit QueryTicketCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryTicketCountResponseBody() = default;
};
class QueryTicketCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryTicketCountResponseBody> body{};

  QueryTicketCountResponse() {}

  explicit QueryTicketCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryTicketCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTicketCountResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTicketCountResponse() = default;
};
class AppMessagePushRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> userId{};
  shared_ptr<long> status{};
  shared_ptr<long> expirationTime{};

  AppMessagePushRequest() {}

  explicit AppMessagePushRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (expirationTime) {
      res["ExpirationTime"] = boost::any(*expirationTime);
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("ExpirationTime") != m.end() && !m["ExpirationTime"].empty()) {
      expirationTime = make_shared<long>(boost::any_cast<long>(m["ExpirationTime"]));
    }
  }


  virtual ~AppMessagePushRequest() = default;
};
class AppMessagePushResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  AppMessagePushResponseBody() {}

  explicit AppMessagePushResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AppMessagePushResponseBody() = default;
};
class AppMessagePushResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AppMessagePushResponseBody> body{};

  AppMessagePushResponse() {}

  explicit AppMessagePushResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AppMessagePushResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AppMessagePushResponseBody>(model1);
      }
    }
  }


  virtual ~AppMessagePushResponse() = default;
};
class GetHotlineAgentStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};

  GetHotlineAgentStatusRequest() {}

  explicit GetHotlineAgentStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~GetHotlineAgentStatusRequest() = default;
};
class GetHotlineAgentStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  GetHotlineAgentStatusResponseBody() {}

  explicit GetHotlineAgentStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~GetHotlineAgentStatusResponseBody() = default;
};
class GetHotlineAgentStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetHotlineAgentStatusResponseBody> body{};

  GetHotlineAgentStatusResponse() {}

  explicit GetHotlineAgentStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetHotlineAgentStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHotlineAgentStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetHotlineAgentStatusResponse() = default;
};
class GetHotlineWaitingNumberRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};

  GetHotlineWaitingNumberRequest() {}

  explicit GetHotlineWaitingNumberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~GetHotlineWaitingNumberRequest() = default;
};
class GetHotlineWaitingNumberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  GetHotlineWaitingNumberResponseBody() {}

  explicit GetHotlineWaitingNumberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~GetHotlineWaitingNumberResponseBody() = default;
};
class GetHotlineWaitingNumberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetHotlineWaitingNumberResponseBody> body{};

  GetHotlineWaitingNumberResponse() {}

  explicit GetHotlineWaitingNumberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetHotlineWaitingNumberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHotlineWaitingNumberResponseBody>(model1);
      }
    }
  }


  virtual ~GetHotlineWaitingNumberResponse() = default;
};
class StartCallRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> caller{};
  shared_ptr<string> callee{};

  StartCallRequest() {}

  explicit StartCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (caller) {
      res["Caller"] = boost::any(*caller);
    }
    if (callee) {
      res["Callee"] = boost::any(*callee);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("Caller") != m.end() && !m["Caller"].empty()) {
      caller = make_shared<string>(boost::any_cast<string>(m["Caller"]));
    }
    if (m.find("Callee") != m.end() && !m["Callee"].empty()) {
      callee = make_shared<string>(boost::any_cast<string>(m["Callee"]));
    }
  }


  virtual ~StartCallRequest() = default;
};
class StartCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  StartCallResponseBody() {}

  explicit StartCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~StartCallResponseBody() = default;
};
class StartCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartCallResponseBody> body{};

  StartCallResponse() {}

  explicit StartCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartCallResponseBody>(model1);
      }
    }
  }


  virtual ~StartCallResponse() = default;
};
class AssignTicketRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> ticketId{};
  shared_ptr<long> operatorId{};
  shared_ptr<long> acceptorId{};

  AssignTicketRequest() {}

  explicit AssignTicketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ticketId) {
      res["TicketId"] = boost::any(*ticketId);
    }
    if (operatorId) {
      res["OperatorId"] = boost::any(*operatorId);
    }
    if (acceptorId) {
      res["AcceptorId"] = boost::any(*acceptorId);
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
    if (m.find("TicketId") != m.end() && !m["TicketId"].empty()) {
      ticketId = make_shared<long>(boost::any_cast<long>(m["TicketId"]));
    }
    if (m.find("OperatorId") != m.end() && !m["OperatorId"].empty()) {
      operatorId = make_shared<long>(boost::any_cast<long>(m["OperatorId"]));
    }
    if (m.find("AcceptorId") != m.end() && !m["AcceptorId"].empty()) {
      acceptorId = make_shared<long>(boost::any_cast<long>(m["AcceptorId"]));
    }
  }


  virtual ~AssignTicketRequest() = default;
};
class AssignTicketResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  AssignTicketResponseBody() {}

  explicit AssignTicketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AssignTicketResponseBody() = default;
};
class AssignTicketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AssignTicketResponseBody> body{};

  AssignTicketResponse() {}

  explicit AssignTicketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AssignTicketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssignTicketResponseBody>(model1);
      }
    }
  }


  virtual ~AssignTicketResponse() = default;
};
class HangupCallRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> callId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> connectionId{};

  HangupCallRequest() {}

  explicit HangupCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (connectionId) {
      res["ConnectionId"] = boost::any(*connectionId);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("ConnectionId") != m.end() && !m["ConnectionId"].empty()) {
      connectionId = make_shared<string>(boost::any_cast<string>(m["ConnectionId"]));
    }
  }


  virtual ~HangupCallRequest() = default;
};
class HangupCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  HangupCallResponseBody() {}

  explicit HangupCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~HangupCallResponseBody() = default;
};
class HangupCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<HangupCallResponseBody> body{};

  HangupCallResponse() {}

  explicit HangupCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        HangupCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HangupCallResponseBody>(model1);
      }
    }
  }


  virtual ~HangupCallResponse() = default;
};
class GetOutbounNumListRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};

  GetOutbounNumListRequest() {}

  explicit GetOutbounNumListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~GetOutbounNumListRequest() = default;
};
class GetOutbounNumListResponseBodyDataNumGroup : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<string> value{};
  shared_ptr<string> description{};

  GetOutbounNumListResponseBodyDataNumGroup() {}

  explicit GetOutbounNumListResponseBodyDataNumGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~GetOutbounNumListResponseBodyDataNumGroup() = default;
};
class GetOutbounNumListResponseBodyDataNum : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<string> value{};
  shared_ptr<string> description{};

  GetOutbounNumListResponseBodyDataNum() {}

  explicit GetOutbounNumListResponseBodyDataNum(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~GetOutbounNumListResponseBodyDataNum() = default;
};
class GetOutbounNumListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetOutbounNumListResponseBodyDataNumGroup>> numGroup{};
  shared_ptr<vector<GetOutbounNumListResponseBodyDataNum>> num{};

  GetOutbounNumListResponseBodyData() {}

  explicit GetOutbounNumListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (numGroup) {
      vector<boost::any> temp1;
      for(auto item1:*numGroup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NumGroup"] = boost::any(temp1);
    }
    if (num) {
      vector<boost::any> temp1;
      for(auto item1:*num){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Num"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NumGroup") != m.end() && !m["NumGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["NumGroup"].type()) {
        vector<GetOutbounNumListResponseBodyDataNumGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NumGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOutbounNumListResponseBodyDataNumGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        numGroup = make_shared<vector<GetOutbounNumListResponseBodyDataNumGroup>>(expect1);
      }
    }
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      if (typeid(vector<boost::any>) == m["Num"].type()) {
        vector<GetOutbounNumListResponseBodyDataNum> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Num"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOutbounNumListResponseBodyDataNum model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        num = make_shared<vector<GetOutbounNumListResponseBodyDataNum>>(expect1);
      }
    }
  }


  virtual ~GetOutbounNumListResponseBodyData() = default;
};
class GetOutbounNumListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetOutbounNumListResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  GetOutbounNumListResponseBody() {}

  explicit GetOutbounNumListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetOutbounNumListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetOutbounNumListResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~GetOutbounNumListResponseBody() = default;
};
class GetOutbounNumListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetOutbounNumListResponseBody> body{};

  GetOutbounNumListResponse() {}

  explicit GetOutbounNumListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetOutbounNumListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOutbounNumListResponseBody>(model1);
      }
    }
  }


  virtual ~GetOutbounNumListResponse() = default;
};
class CreateTicketWithBizDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> templateId{};
  shared_ptr<long> categoryId{};
  shared_ptr<long> creatorId{};
  shared_ptr<long> creatorType{};
  shared_ptr<string> creatorName{};
  shared_ptr<long> memberId{};
  shared_ptr<string> memberName{};
  shared_ptr<string> fromInfo{};
  shared_ptr<long> priority{};
  shared_ptr<string> carbonCopy{};
  shared_ptr<string> formData{};
  shared_ptr<string> bizData{};

  CreateTicketWithBizDataRequest() {}

  explicit CreateTicketWithBizDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (creatorType) {
      res["CreatorType"] = boost::any(*creatorType);
    }
    if (creatorName) {
      res["CreatorName"] = boost::any(*creatorName);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (fromInfo) {
      res["FromInfo"] = boost::any(*fromInfo);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (carbonCopy) {
      res["CarbonCopy"] = boost::any(*carbonCopy);
    }
    if (formData) {
      res["FormData"] = boost::any(*formData);
    }
    if (bizData) {
      res["BizData"] = boost::any(*bizData);
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
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<long>(boost::any_cast<long>(m["CreatorId"]));
    }
    if (m.find("CreatorType") != m.end() && !m["CreatorType"].empty()) {
      creatorType = make_shared<long>(boost::any_cast<long>(m["CreatorType"]));
    }
    if (m.find("CreatorName") != m.end() && !m["CreatorName"].empty()) {
      creatorName = make_shared<string>(boost::any_cast<string>(m["CreatorName"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<long>(boost::any_cast<long>(m["MemberId"]));
    }
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("FromInfo") != m.end() && !m["FromInfo"].empty()) {
      fromInfo = make_shared<string>(boost::any_cast<string>(m["FromInfo"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("CarbonCopy") != m.end() && !m["CarbonCopy"].empty()) {
      carbonCopy = make_shared<string>(boost::any_cast<string>(m["CarbonCopy"]));
    }
    if (m.find("FormData") != m.end() && !m["FormData"].empty()) {
      formData = make_shared<string>(boost::any_cast<string>(m["FormData"]));
    }
    if (m.find("BizData") != m.end() && !m["BizData"].empty()) {
      bizData = make_shared<string>(boost::any_cast<string>(m["BizData"]));
    }
  }


  virtual ~CreateTicketWithBizDataRequest() = default;
};
class CreateTicketWithBizDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  CreateTicketWithBizDataResponseBody() {}

  explicit CreateTicketWithBizDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateTicketWithBizDataResponseBody() = default;
};
class CreateTicketWithBizDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateTicketWithBizDataResponseBody> body{};

  CreateTicketWithBizDataResponse() {}

  explicit CreateTicketWithBizDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateTicketWithBizDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTicketWithBizDataResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTicketWithBizDataResponse() = default;
};
class SearchTicketByPhoneRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> phone{};
  shared_ptr<long> templateId{};
  shared_ptr<string> ticketStatus{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> startTime{};
  shared_ptr<long> endTime{};

  SearchTicketByPhoneRequest() {}

  explicit SearchTicketByPhoneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (ticketStatus) {
      res["TicketStatus"] = boost::any(*ticketStatus);
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
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
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
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("TicketStatus") != m.end() && !m["TicketStatus"].empty()) {
      ticketStatus = make_shared<string>(boost::any_cast<string>(m["TicketStatus"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
  }


  virtual ~SearchTicketByPhoneRequest() = default;
};
class SearchTicketByPhoneResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> memberName{};
  shared_ptr<string> carbonCopy{};
  shared_ptr<long> createTime{};
  shared_ptr<long> serviceId{};
  shared_ptr<long> ticketId{};
  shared_ptr<long> priority{};
  shared_ptr<long> creatorId{};
  shared_ptr<string> formData{};
  shared_ptr<string> fromInfo{};
  shared_ptr<long> modifiedTime{};
  shared_ptr<string> taskStatus{};
  shared_ptr<string> creatorName{};
  shared_ptr<long> categoryId{};
  shared_ptr<long> creatorType{};
  shared_ptr<long> memberId{};
  shared_ptr<long> caseStatus{};
  shared_ptr<long> templateId{};

  SearchTicketByPhoneResponseBodyData() {}

  explicit SearchTicketByPhoneResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (carbonCopy) {
      res["CarbonCopy"] = boost::any(*carbonCopy);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (ticketId) {
      res["TicketId"] = boost::any(*ticketId);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (formData) {
      res["FormData"] = boost::any(*formData);
    }
    if (fromInfo) {
      res["FromInfo"] = boost::any(*fromInfo);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (creatorName) {
      res["CreatorName"] = boost::any(*creatorName);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (creatorType) {
      res["CreatorType"] = boost::any(*creatorType);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (caseStatus) {
      res["CaseStatus"] = boost::any(*caseStatus);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("CarbonCopy") != m.end() && !m["CarbonCopy"].empty()) {
      carbonCopy = make_shared<string>(boost::any_cast<string>(m["CarbonCopy"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["ServiceId"]));
    }
    if (m.find("TicketId") != m.end() && !m["TicketId"].empty()) {
      ticketId = make_shared<long>(boost::any_cast<long>(m["TicketId"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<long>(boost::any_cast<long>(m["CreatorId"]));
    }
    if (m.find("FormData") != m.end() && !m["FormData"].empty()) {
      formData = make_shared<string>(boost::any_cast<string>(m["FormData"]));
    }
    if (m.find("FromInfo") != m.end() && !m["FromInfo"].empty()) {
      fromInfo = make_shared<string>(boost::any_cast<string>(m["FromInfo"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<long>(boost::any_cast<long>(m["ModifiedTime"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("CreatorName") != m.end() && !m["CreatorName"].empty()) {
      creatorName = make_shared<string>(boost::any_cast<string>(m["CreatorName"]));
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("CreatorType") != m.end() && !m["CreatorType"].empty()) {
      creatorType = make_shared<long>(boost::any_cast<long>(m["CreatorType"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<long>(boost::any_cast<long>(m["MemberId"]));
    }
    if (m.find("CaseStatus") != m.end() && !m["CaseStatus"].empty()) {
      caseStatus = make_shared<long>(boost::any_cast<long>(m["CaseStatus"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~SearchTicketByPhoneResponseBodyData() = default;
};
class SearchTicketByPhoneResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> onePageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> totalPage{};
  shared_ptr<long> totalResults{};
  shared_ptr<long> pageNo{};
  shared_ptr<vector<SearchTicketByPhoneResponseBodyData>> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  SearchTicketByPhoneResponseBody() {}

  explicit SearchTicketByPhoneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (onePageSize) {
      res["OnePageSize"] = boost::any(*onePageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    if (totalResults) {
      res["TotalResults"] = boost::any(*totalResults);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OnePageSize") != m.end() && !m["OnePageSize"].empty()) {
      onePageSize = make_shared<long>(boost::any_cast<long>(m["OnePageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
    if (m.find("TotalResults") != m.end() && !m["TotalResults"].empty()) {
      totalResults = make_shared<long>(boost::any_cast<long>(m["TotalResults"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<SearchTicketByPhoneResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchTicketByPhoneResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<SearchTicketByPhoneResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SearchTicketByPhoneResponseBody() = default;
};
class SearchTicketByPhoneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SearchTicketByPhoneResponseBody> body{};

  SearchTicketByPhoneResponse() {}

  explicit SearchTicketByPhoneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SearchTicketByPhoneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchTicketByPhoneResponseBody>(model1);
      }
    }
  }


  virtual ~SearchTicketByPhoneResponse() = default;
};
class CreateThirdSsoAgentRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> clientId{};
  shared_ptr<string> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> displayName{};
  shared_ptr<vector<long>> skillGroupIds{};
  shared_ptr<vector<long>> roleIds{};

  CreateThirdSsoAgentRequest() {}

  explicit CreateThirdSsoAgentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (skillGroupIds) {
      res["SkillGroupIds"] = boost::any(*skillGroupIds);
    }
    if (roleIds) {
      res["RoleIds"] = boost::any(*roleIds);
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
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("SkillGroupIds") != m.end() && !m["SkillGroupIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["SkillGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SkillGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      skillGroupIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("RoleIds") != m.end() && !m["RoleIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RoleIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RoleIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      roleIds = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~CreateThirdSsoAgentRequest() = default;
};
class CreateThirdSsoAgentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<long> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  CreateThirdSsoAgentResponseBody() {}

  explicit CreateThirdSsoAgentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateThirdSsoAgentResponseBody() = default;
};
class CreateThirdSsoAgentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateThirdSsoAgentResponseBody> body{};

  CreateThirdSsoAgentResponse() {}

  explicit CreateThirdSsoAgentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateThirdSsoAgentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateThirdSsoAgentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateThirdSsoAgentResponse() = default;
};
class CreateEntityIvrRouteRequest : public Darabonba::Model {
public:
  shared_ptr<string> entityId{};
  shared_ptr<string> entityName{};
  shared_ptr<string> entityBizCode{};
  shared_ptr<string> entityBizCodeType{};
  shared_ptr<string> entityRelationNumber{};
  shared_ptr<string> departmentId{};
  shared_ptr<long> groupId{};
  shared_ptr<long> serviceId{};
  shared_ptr<string> extInfo{};
  shared_ptr<string> instanceId{};

  CreateEntityIvrRouteRequest() {}

  explicit CreateEntityIvrRouteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    if (entityBizCode) {
      res["EntityBizCode"] = boost::any(*entityBizCode);
    }
    if (entityBizCodeType) {
      res["EntityBizCodeType"] = boost::any(*entityBizCodeType);
    }
    if (entityRelationNumber) {
      res["EntityRelationNumber"] = boost::any(*entityRelationNumber);
    }
    if (departmentId) {
      res["DepartmentId"] = boost::any(*departmentId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (extInfo) {
      res["ExtInfo"] = boost::any(*extInfo);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
    if (m.find("EntityBizCode") != m.end() && !m["EntityBizCode"].empty()) {
      entityBizCode = make_shared<string>(boost::any_cast<string>(m["EntityBizCode"]));
    }
    if (m.find("EntityBizCodeType") != m.end() && !m["EntityBizCodeType"].empty()) {
      entityBizCodeType = make_shared<string>(boost::any_cast<string>(m["EntityBizCodeType"]));
    }
    if (m.find("EntityRelationNumber") != m.end() && !m["EntityRelationNumber"].empty()) {
      entityRelationNumber = make_shared<string>(boost::any_cast<string>(m["EntityRelationNumber"]));
    }
    if (m.find("DepartmentId") != m.end() && !m["DepartmentId"].empty()) {
      departmentId = make_shared<string>(boost::any_cast<string>(m["DepartmentId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<long>(boost::any_cast<long>(m["GroupId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["ServiceId"]));
    }
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      extInfo = make_shared<string>(boost::any_cast<string>(m["ExtInfo"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~CreateEntityIvrRouteRequest() = default;
};
class CreateEntityIvrRouteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  CreateEntityIvrRouteResponseBody() {}

  explicit CreateEntityIvrRouteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateEntityIvrRouteResponseBody() = default;
};
class CreateEntityIvrRouteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateEntityIvrRouteResponseBody> body{};

  CreateEntityIvrRouteResponse() {}

  explicit CreateEntityIvrRouteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateEntityIvrRouteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEntityIvrRouteResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEntityIvrRouteResponse() = default;
};
class CloseTicketRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> ticketId{};
  shared_ptr<string> actionItems{};
  shared_ptr<long> operatorId{};

  CloseTicketRequest() {}

  explicit CloseTicketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ticketId) {
      res["TicketId"] = boost::any(*ticketId);
    }
    if (actionItems) {
      res["ActionItems"] = boost::any(*actionItems);
    }
    if (operatorId) {
      res["OperatorId"] = boost::any(*operatorId);
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
    if (m.find("TicketId") != m.end() && !m["TicketId"].empty()) {
      ticketId = make_shared<long>(boost::any_cast<long>(m["TicketId"]));
    }
    if (m.find("ActionItems") != m.end() && !m["ActionItems"].empty()) {
      actionItems = make_shared<string>(boost::any_cast<string>(m["ActionItems"]));
    }
    if (m.find("OperatorId") != m.end() && !m["OperatorId"].empty()) {
      operatorId = make_shared<long>(boost::any_cast<long>(m["OperatorId"]));
    }
  }


  virtual ~CloseTicketRequest() = default;
};
class CloseTicketResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  CloseTicketResponseBody() {}

  explicit CloseTicketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~CloseTicketResponseBody() = default;
};
class CloseTicketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CloseTicketResponseBody> body{};

  CloseTicketResponse() {}

  explicit CloseTicketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CloseTicketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloseTicketResponseBody>(model1);
      }
    }
  }


  virtual ~CloseTicketResponse() = default;
};
class HoldCallRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> callId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> connectionId{};

  HoldCallRequest() {}

  explicit HoldCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (connectionId) {
      res["ConnectionId"] = boost::any(*connectionId);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("ConnectionId") != m.end() && !m["ConnectionId"].empty()) {
      connectionId = make_shared<string>(boost::any_cast<string>(m["ConnectionId"]));
    }
  }


  virtual ~HoldCallRequest() = default;
};
class HoldCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  HoldCallResponseBody() {}

  explicit HoldCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~HoldCallResponseBody() = default;
};
class HoldCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<HoldCallResponseBody> body{};

  HoldCallResponse() {}

  explicit HoldCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        HoldCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HoldCallResponseBody>(model1);
      }
    }
  }


  virtual ~HoldCallResponse() = default;
};
class QueryRingDetailListRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<string> callOutStatus{};
  shared_ptr<string> extra{};
  shared_ptr<string> instanceId{};
  shared_ptr<map<string, boost::any>> fromPhoneNumList{};
  shared_ptr<map<string, boost::any>> toPhoneNumList{};

  QueryRingDetailListRequest() {}

  explicit QueryRingDetailListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (callOutStatus) {
      res["CallOutStatus"] = boost::any(*callOutStatus);
    }
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (fromPhoneNumList) {
      res["FromPhoneNumList"] = boost::any(*fromPhoneNumList);
    }
    if (toPhoneNumList) {
      res["ToPhoneNumList"] = boost::any(*toPhoneNumList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("CallOutStatus") != m.end() && !m["CallOutStatus"].empty()) {
      callOutStatus = make_shared<string>(boost::any_cast<string>(m["CallOutStatus"]));
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["Extra"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("FromPhoneNumList") != m.end() && !m["FromPhoneNumList"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["FromPhoneNumList"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      fromPhoneNumList = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ToPhoneNumList") != m.end() && !m["ToPhoneNumList"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ToPhoneNumList"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      toPhoneNumList = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~QueryRingDetailListRequest() = default;
};
class QueryRingDetailListShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<string> callOutStatus{};
  shared_ptr<string> extra{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> fromPhoneNumListShrink{};
  shared_ptr<string> toPhoneNumListShrink{};

  QueryRingDetailListShrinkRequest() {}

  explicit QueryRingDetailListShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (callOutStatus) {
      res["CallOutStatus"] = boost::any(*callOutStatus);
    }
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (fromPhoneNumListShrink) {
      res["FromPhoneNumList"] = boost::any(*fromPhoneNumListShrink);
    }
    if (toPhoneNumListShrink) {
      res["ToPhoneNumList"] = boost::any(*toPhoneNumListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("CallOutStatus") != m.end() && !m["CallOutStatus"].empty()) {
      callOutStatus = make_shared<string>(boost::any_cast<string>(m["CallOutStatus"]));
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["Extra"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("FromPhoneNumList") != m.end() && !m["FromPhoneNumList"].empty()) {
      fromPhoneNumListShrink = make_shared<string>(boost::any_cast<string>(m["FromPhoneNumList"]));
    }
    if (m.find("ToPhoneNumList") != m.end() && !m["ToPhoneNumList"].empty()) {
      toPhoneNumListShrink = make_shared<string>(boost::any_cast<string>(m["ToPhoneNumList"]));
    }
  }


  virtual ~QueryRingDetailListShrinkRequest() = default;
};
class QueryRingDetailListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  QueryRingDetailListResponseBody() {}

  explicit QueryRingDetailListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~QueryRingDetailListResponseBody() = default;
};
class QueryRingDetailListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryRingDetailListResponseBody> body{};

  QueryRingDetailListResponse() {}

  explicit QueryRingDetailListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryRingDetailListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRingDetailListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRingDetailListResponse() = default;
};
class SearchTicketByIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> ticketId{};
  shared_ptr<long> statusCode{};

  SearchTicketByIdRequest() {}

  explicit SearchTicketByIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ticketId) {
      res["TicketId"] = boost::any(*ticketId);
    }
    if (statusCode) {
      res["StatusCode"] = boost::any(*statusCode);
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
    if (m.find("TicketId") != m.end() && !m["TicketId"].empty()) {
      ticketId = make_shared<long>(boost::any_cast<long>(m["TicketId"]));
    }
    if (m.find("StatusCode") != m.end() && !m["StatusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["StatusCode"]));
    }
  }


  virtual ~SearchTicketByIdRequest() = default;
};
class SearchTicketByIdResponseBodyDataActivities : public Darabonba::Model {
public:
  shared_ptr<string> activityFormData{};
  shared_ptr<string> activityCode{};

  SearchTicketByIdResponseBodyDataActivities() {}

  explicit SearchTicketByIdResponseBodyDataActivities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activityFormData) {
      res["ActivityFormData"] = boost::any(*activityFormData);
    }
    if (activityCode) {
      res["ActivityCode"] = boost::any(*activityCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivityFormData") != m.end() && !m["ActivityFormData"].empty()) {
      activityFormData = make_shared<string>(boost::any_cast<string>(m["ActivityFormData"]));
    }
    if (m.find("ActivityCode") != m.end() && !m["ActivityCode"].empty()) {
      activityCode = make_shared<string>(boost::any_cast<string>(m["ActivityCode"]));
    }
  }


  virtual ~SearchTicketByIdResponseBodyDataActivities() = default;
};
class SearchTicketByIdResponseBodyDataActivityRecords : public Darabonba::Model {
public:
  shared_ptr<string> actionCode{};
  shared_ptr<string> actionCodeDesc{};
  shared_ptr<string> operatorName{};
  shared_ptr<string> memo{};
  shared_ptr<long> gmtCreate{};

  SearchTicketByIdResponseBodyDataActivityRecords() {}

  explicit SearchTicketByIdResponseBodyDataActivityRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionCode) {
      res["ActionCode"] = boost::any(*actionCode);
    }
    if (actionCodeDesc) {
      res["ActionCodeDesc"] = boost::any(*actionCodeDesc);
    }
    if (operatorName) {
      res["OperatorName"] = boost::any(*operatorName);
    }
    if (memo) {
      res["Memo"] = boost::any(*memo);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionCode") != m.end() && !m["ActionCode"].empty()) {
      actionCode = make_shared<string>(boost::any_cast<string>(m["ActionCode"]));
    }
    if (m.find("ActionCodeDesc") != m.end() && !m["ActionCodeDesc"].empty()) {
      actionCodeDesc = make_shared<string>(boost::any_cast<string>(m["ActionCodeDesc"]));
    }
    if (m.find("OperatorName") != m.end() && !m["OperatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["OperatorName"]));
    }
    if (m.find("Memo") != m.end() && !m["Memo"].empty()) {
      memo = make_shared<string>(boost::any_cast<string>(m["Memo"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
  }


  virtual ~SearchTicketByIdResponseBodyDataActivityRecords() = default;
};
class SearchTicketByIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> carbonCopy{};
  shared_ptr<string> memberName{};
  shared_ptr<long> createTime{};
  shared_ptr<long> serviceId{};
  shared_ptr<long> ticketId{};
  shared_ptr<long> priority{};
  shared_ptr<long> creatorId{};
  shared_ptr<string> formData{};
  shared_ptr<vector<SearchTicketByIdResponseBodyDataActivities>> activities{};
  shared_ptr<vector<SearchTicketByIdResponseBodyDataActivityRecords>> activityRecords{};
  shared_ptr<string> fromInfo{};
  shared_ptr<long> modifiedTime{};
  shared_ptr<string> creatorName{};
  shared_ptr<long> categoryId{};
  shared_ptr<long> creatorType{};
  shared_ptr<long> memberId{};
  shared_ptr<long> caseStatus{};
  shared_ptr<long> templateId{};
  shared_ptr<string> ticketName{};

  SearchTicketByIdResponseBodyData() {}

  explicit SearchTicketByIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carbonCopy) {
      res["CarbonCopy"] = boost::any(*carbonCopy);
    }
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (ticketId) {
      res["TicketId"] = boost::any(*ticketId);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (formData) {
      res["FormData"] = boost::any(*formData);
    }
    if (activities) {
      vector<boost::any> temp1;
      for(auto item1:*activities){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Activities"] = boost::any(temp1);
    }
    if (activityRecords) {
      vector<boost::any> temp1;
      for(auto item1:*activityRecords){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ActivityRecords"] = boost::any(temp1);
    }
    if (fromInfo) {
      res["FromInfo"] = boost::any(*fromInfo);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (creatorName) {
      res["CreatorName"] = boost::any(*creatorName);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (creatorType) {
      res["CreatorType"] = boost::any(*creatorType);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (caseStatus) {
      res["CaseStatus"] = boost::any(*caseStatus);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (ticketName) {
      res["TicketName"] = boost::any(*ticketName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CarbonCopy") != m.end() && !m["CarbonCopy"].empty()) {
      carbonCopy = make_shared<string>(boost::any_cast<string>(m["CarbonCopy"]));
    }
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["ServiceId"]));
    }
    if (m.find("TicketId") != m.end() && !m["TicketId"].empty()) {
      ticketId = make_shared<long>(boost::any_cast<long>(m["TicketId"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<long>(boost::any_cast<long>(m["CreatorId"]));
    }
    if (m.find("FormData") != m.end() && !m["FormData"].empty()) {
      formData = make_shared<string>(boost::any_cast<string>(m["FormData"]));
    }
    if (m.find("Activities") != m.end() && !m["Activities"].empty()) {
      if (typeid(vector<boost::any>) == m["Activities"].type()) {
        vector<SearchTicketByIdResponseBodyDataActivities> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Activities"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchTicketByIdResponseBodyDataActivities model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        activities = make_shared<vector<SearchTicketByIdResponseBodyDataActivities>>(expect1);
      }
    }
    if (m.find("ActivityRecords") != m.end() && !m["ActivityRecords"].empty()) {
      if (typeid(vector<boost::any>) == m["ActivityRecords"].type()) {
        vector<SearchTicketByIdResponseBodyDataActivityRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ActivityRecords"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchTicketByIdResponseBodyDataActivityRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        activityRecords = make_shared<vector<SearchTicketByIdResponseBodyDataActivityRecords>>(expect1);
      }
    }
    if (m.find("FromInfo") != m.end() && !m["FromInfo"].empty()) {
      fromInfo = make_shared<string>(boost::any_cast<string>(m["FromInfo"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<long>(boost::any_cast<long>(m["ModifiedTime"]));
    }
    if (m.find("CreatorName") != m.end() && !m["CreatorName"].empty()) {
      creatorName = make_shared<string>(boost::any_cast<string>(m["CreatorName"]));
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("CreatorType") != m.end() && !m["CreatorType"].empty()) {
      creatorType = make_shared<long>(boost::any_cast<long>(m["CreatorType"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<long>(boost::any_cast<long>(m["MemberId"]));
    }
    if (m.find("CaseStatus") != m.end() && !m["CaseStatus"].empty()) {
      caseStatus = make_shared<long>(boost::any_cast<long>(m["CaseStatus"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("TicketName") != m.end() && !m["TicketName"].empty()) {
      ticketName = make_shared<string>(boost::any_cast<string>(m["TicketName"]));
    }
  }


  virtual ~SearchTicketByIdResponseBodyData() = default;
};
class SearchTicketByIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<SearchTicketByIdResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  SearchTicketByIdResponseBody() {}

  explicit SearchTicketByIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SearchTicketByIdResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SearchTicketByIdResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~SearchTicketByIdResponseBody() = default;
};
class SearchTicketByIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SearchTicketByIdResponseBody> body{};

  SearchTicketByIdResponse() {}

  explicit SearchTicketByIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SearchTicketByIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchTicketByIdResponseBody>(model1);
      }
    }
  }


  virtual ~SearchTicketByIdResponse() = default;
};
class UpdateSkillGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> skillGroupId{};
  shared_ptr<string> skillGroupName{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> clientToken{};
  shared_ptr<long> channelType{};

  UpdateSkillGroupRequest() {}

  explicit UpdateSkillGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (skillGroupId) {
      res["SkillGroupId"] = boost::any(*skillGroupId);
    }
    if (skillGroupName) {
      res["SkillGroupName"] = boost::any(*skillGroupName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SkillGroupId") != m.end() && !m["SkillGroupId"].empty()) {
      skillGroupId = make_shared<long>(boost::any_cast<long>(m["SkillGroupId"]));
    }
    if (m.find("SkillGroupName") != m.end() && !m["SkillGroupName"].empty()) {
      skillGroupName = make_shared<string>(boost::any_cast<string>(m["SkillGroupName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<long>(boost::any_cast<long>(m["ChannelType"]));
    }
  }


  virtual ~UpdateSkillGroupRequest() = default;
};
class UpdateSkillGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  UpdateSkillGroupResponseBody() {}

  explicit UpdateSkillGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~UpdateSkillGroupResponseBody() = default;
};
class UpdateSkillGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateSkillGroupResponseBody> body{};

  UpdateSkillGroupResponse() {}

  explicit UpdateSkillGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateSkillGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSkillGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSkillGroupResponse() = default;
};
class QueryServiceConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> viewCode{};
  shared_ptr<string> parameters{};

  QueryServiceConfigRequest() {}

  explicit QueryServiceConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (viewCode) {
      res["ViewCode"] = boost::any(*viewCode);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ViewCode") != m.end() && !m["ViewCode"].empty()) {
      viewCode = make_shared<string>(boost::any_cast<string>(m["ViewCode"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
  }


  virtual ~QueryServiceConfigRequest() = default;
};
class QueryServiceConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  QueryServiceConfigResponseBody() {}

  explicit QueryServiceConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryServiceConfigResponseBody() = default;
};
class QueryServiceConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryServiceConfigResponseBody> body{};

  QueryServiceConfigResponse() {}

  explicit QueryServiceConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryServiceConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryServiceConfigResponseBody>(model1);
      }
    }
  }


  virtual ~QueryServiceConfigResponse() = default;
};
class DisableRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> roleId{};

  DisableRoleRequest() {}

  explicit DisableRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
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
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<long>(boost::any_cast<long>(m["RoleId"]));
    }
  }


  virtual ~DisableRoleRequest() = default;
};
class DisableRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  DisableRoleResponseBody() {}

  explicit DisableRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DisableRoleResponseBody() = default;
};
class DisableRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DisableRoleResponseBody> body{};

  DisableRoleResponse() {}

  explicit DisableRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DisableRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableRoleResponseBody>(model1);
      }
    }
  }


  virtual ~DisableRoleResponse() = default;
};
class GetEntityRouteListRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNo{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> entityRelationNumber{};
  shared_ptr<string> entityName{};

  GetEntityRouteListRequest() {}

  explicit GetEntityRouteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (entityRelationNumber) {
      res["EntityRelationNumber"] = boost::any(*entityRelationNumber);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("EntityRelationNumber") != m.end() && !m["EntityRelationNumber"].empty()) {
      entityRelationNumber = make_shared<string>(boost::any_cast<string>(m["EntityRelationNumber"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
  }


  virtual ~GetEntityRouteListRequest() = default;
};
class GetEntityRouteListResponseBodyDataEntityRouteList : public Darabonba::Model {
public:
  shared_ptr<string> entityBizCodeType{};
  shared_ptr<string> groupId{};
  shared_ptr<string> entityId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> departmentId{};
  shared_ptr<string> entityBizCode{};
  shared_ptr<long> uniqueId{};
  shared_ptr<string> entityName{};
  shared_ptr<string> extInfo{};
  shared_ptr<string> entityRelationNumber{};

  GetEntityRouteListResponseBodyDataEntityRouteList() {}

  explicit GetEntityRouteListResponseBodyDataEntityRouteList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityBizCodeType) {
      res["EntityBizCodeType"] = boost::any(*entityBizCodeType);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (departmentId) {
      res["DepartmentId"] = boost::any(*departmentId);
    }
    if (entityBizCode) {
      res["EntityBizCode"] = boost::any(*entityBizCode);
    }
    if (uniqueId) {
      res["UniqueId"] = boost::any(*uniqueId);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    if (extInfo) {
      res["ExtInfo"] = boost::any(*extInfo);
    }
    if (entityRelationNumber) {
      res["EntityRelationNumber"] = boost::any(*entityRelationNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityBizCodeType") != m.end() && !m["EntityBizCodeType"].empty()) {
      entityBizCodeType = make_shared<string>(boost::any_cast<string>(m["EntityBizCodeType"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("DepartmentId") != m.end() && !m["DepartmentId"].empty()) {
      departmentId = make_shared<string>(boost::any_cast<string>(m["DepartmentId"]));
    }
    if (m.find("EntityBizCode") != m.end() && !m["EntityBizCode"].empty()) {
      entityBizCode = make_shared<string>(boost::any_cast<string>(m["EntityBizCode"]));
    }
    if (m.find("UniqueId") != m.end() && !m["UniqueId"].empty()) {
      uniqueId = make_shared<long>(boost::any_cast<long>(m["UniqueId"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      extInfo = make_shared<string>(boost::any_cast<string>(m["ExtInfo"]));
    }
    if (m.find("EntityRelationNumber") != m.end() && !m["EntityRelationNumber"].empty()) {
      entityRelationNumber = make_shared<string>(boost::any_cast<string>(m["EntityRelationNumber"]));
    }
  }


  virtual ~GetEntityRouteListResponseBodyDataEntityRouteList() = default;
};
class GetEntityRouteListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetEntityRouteListResponseBodyDataEntityRouteList>> entityRouteList{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  GetEntityRouteListResponseBodyData() {}

  explicit GetEntityRouteListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityRouteList) {
      vector<boost::any> temp1;
      for(auto item1:*entityRouteList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EntityRouteList"] = boost::any(temp1);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityRouteList") != m.end() && !m["EntityRouteList"].empty()) {
      if (typeid(vector<boost::any>) == m["EntityRouteList"].type()) {
        vector<GetEntityRouteListResponseBodyDataEntityRouteList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EntityRouteList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEntityRouteListResponseBodyDataEntityRouteList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        entityRouteList = make_shared<vector<GetEntityRouteListResponseBodyDataEntityRouteList>>(expect1);
      }
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~GetEntityRouteListResponseBodyData() = default;
};
class GetEntityRouteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetEntityRouteListResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetEntityRouteListResponseBody() {}

  explicit GetEntityRouteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetEntityRouteListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetEntityRouteListResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetEntityRouteListResponseBody() = default;
};
class GetEntityRouteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetEntityRouteListResponseBody> body{};

  GetEntityRouteListResponse() {}

  explicit GetEntityRouteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetEntityRouteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEntityRouteListResponseBody>(model1);
      }
    }
  }


  virtual ~GetEntityRouteListResponse() = default;
};
class GetAuthInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> foreignId{};
  shared_ptr<string> appKey{};

  GetAuthInfoRequest() {}

  explicit GetAuthInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (foreignId) {
      res["ForeignId"] = boost::any(*foreignId);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ForeignId") != m.end() && !m["ForeignId"].empty()) {
      foreignId = make_shared<string>(boost::any_cast<string>(m["ForeignId"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
  }


  virtual ~GetAuthInfoRequest() = default;
};
class GetAuthInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<long> time{};
  shared_ptr<string> appKey{};
  shared_ptr<string> app{};
  shared_ptr<string> userId{};
  shared_ptr<string> code{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> userName{};
  shared_ptr<string> tenantId{};

  GetAuthInfoResponseBodyData() {}

  explicit GetAuthInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (app) {
      res["App"] = boost::any(*app);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["Time"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("App") != m.end() && !m["App"].empty()) {
      app = make_shared<string>(boost::any_cast<string>(m["App"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~GetAuthInfoResponseBodyData() = default;
};
class GetAuthInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetAuthInfoResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetAuthInfoResponseBody() {}

  explicit GetAuthInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetAuthInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAuthInfoResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetAuthInfoResponseBody() = default;
};
class GetAuthInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAuthInfoResponseBody> body{};

  GetAuthInfoResponse() {}

  explicit GetAuthInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetAuthInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAuthInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetAuthInfoResponse() = default;
};
class UpdateRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> roleId{};
  shared_ptr<string> roleName{};
  shared_ptr<string> operator_{};
  shared_ptr<vector<long>> permissionId{};

  UpdateRoleRequest() {}

  explicit UpdateRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (permissionId) {
      res["PermissionId"] = boost::any(*permissionId);
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
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<long>(boost::any_cast<long>(m["RoleId"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("PermissionId") != m.end() && !m["PermissionId"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["PermissionId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PermissionId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      permissionId = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~UpdateRoleRequest() = default;
};
class UpdateRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  UpdateRoleResponseBody() {}

  explicit UpdateRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~UpdateRoleResponseBody() = default;
};
class UpdateRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateRoleResponseBody> body{};

  UpdateRoleResponse() {}

  explicit UpdateRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRoleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRoleResponse() = default;
};
class GetTicketTemplateSchemaRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> templateId{};

  GetTicketTemplateSchemaRequest() {}

  explicit GetTicketTemplateSchemaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
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
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~GetTicketTemplateSchemaRequest() = default;
};
class GetTicketTemplateSchemaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetTicketTemplateSchemaResponseBody() {}

  explicit GetTicketTemplateSchemaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetTicketTemplateSchemaResponseBody() = default;
};
class GetTicketTemplateSchemaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetTicketTemplateSchemaResponseBody> body{};

  GetTicketTemplateSchemaResponse() {}

  explicit GetTicketTemplateSchemaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetTicketTemplateSchemaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTicketTemplateSchemaResponseBody>(model1);
      }
    }
  }


  virtual ~GetTicketTemplateSchemaResponse() = default;
};
class TransferCallToPhoneRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> caller{};
  shared_ptr<string> callee{};
  shared_ptr<string> callId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> connectionId{};
  shared_ptr<string> holdConnectionId{};
  shared_ptr<long> type{};
  shared_ptr<bool> isSingleTransfer{};
  shared_ptr<string> callerPhone{};
  shared_ptr<string> calleePhone{};

  TransferCallToPhoneRequest() {}

  explicit TransferCallToPhoneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (caller) {
      res["Caller"] = boost::any(*caller);
    }
    if (callee) {
      res["Callee"] = boost::any(*callee);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (connectionId) {
      res["ConnectionId"] = boost::any(*connectionId);
    }
    if (holdConnectionId) {
      res["HoldConnectionId"] = boost::any(*holdConnectionId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (isSingleTransfer) {
      res["IsSingleTransfer"] = boost::any(*isSingleTransfer);
    }
    if (callerPhone) {
      res["callerPhone"] = boost::any(*callerPhone);
    }
    if (calleePhone) {
      res["calleePhone"] = boost::any(*calleePhone);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("Caller") != m.end() && !m["Caller"].empty()) {
      caller = make_shared<string>(boost::any_cast<string>(m["Caller"]));
    }
    if (m.find("Callee") != m.end() && !m["Callee"].empty()) {
      callee = make_shared<string>(boost::any_cast<string>(m["Callee"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("ConnectionId") != m.end() && !m["ConnectionId"].empty()) {
      connectionId = make_shared<string>(boost::any_cast<string>(m["ConnectionId"]));
    }
    if (m.find("HoldConnectionId") != m.end() && !m["HoldConnectionId"].empty()) {
      holdConnectionId = make_shared<string>(boost::any_cast<string>(m["HoldConnectionId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("IsSingleTransfer") != m.end() && !m["IsSingleTransfer"].empty()) {
      isSingleTransfer = make_shared<bool>(boost::any_cast<bool>(m["IsSingleTransfer"]));
    }
    if (m.find("callerPhone") != m.end() && !m["callerPhone"].empty()) {
      callerPhone = make_shared<string>(boost::any_cast<string>(m["callerPhone"]));
    }
    if (m.find("calleePhone") != m.end() && !m["calleePhone"].empty()) {
      calleePhone = make_shared<string>(boost::any_cast<string>(m["calleePhone"]));
    }
  }


  virtual ~TransferCallToPhoneRequest() = default;
};
class TransferCallToPhoneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  TransferCallToPhoneResponseBody() {}

  explicit TransferCallToPhoneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~TransferCallToPhoneResponseBody() = default;
};
class TransferCallToPhoneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TransferCallToPhoneResponseBody> body{};

  TransferCallToPhoneResponse() {}

  explicit TransferCallToPhoneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TransferCallToPhoneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TransferCallToPhoneResponseBody>(model1);
      }
    }
  }


  virtual ~TransferCallToPhoneResponse() = default;
};
class QuerySkillGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> groupName{};
  shared_ptr<long> groupType{};
  shared_ptr<long> groupId{};

  QuerySkillGroupsRequest() {}

  explicit QuerySkillGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (groupType) {
      res["GroupType"] = boost::any(*groupType);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("GroupType") != m.end() && !m["GroupType"].empty()) {
      groupType = make_shared<long>(boost::any_cast<long>(m["GroupType"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<long>(boost::any_cast<long>(m["GroupId"]));
    }
  }


  virtual ~QuerySkillGroupsRequest() = default;
};
class QuerySkillGroupsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> description{};
  shared_ptr<long> channelType{};
  shared_ptr<string> skillGroupName{};
  shared_ptr<long> skillGroupId{};

  QuerySkillGroupsResponseBodyData() {}

  explicit QuerySkillGroupsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (skillGroupName) {
      res["SkillGroupName"] = boost::any(*skillGroupName);
    }
    if (skillGroupId) {
      res["SkillGroupId"] = boost::any(*skillGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<long>(boost::any_cast<long>(m["ChannelType"]));
    }
    if (m.find("SkillGroupName") != m.end() && !m["SkillGroupName"].empty()) {
      skillGroupName = make_shared<string>(boost::any_cast<string>(m["SkillGroupName"]));
    }
    if (m.find("SkillGroupId") != m.end() && !m["SkillGroupId"].empty()) {
      skillGroupId = make_shared<long>(boost::any_cast<long>(m["SkillGroupId"]));
    }
  }


  virtual ~QuerySkillGroupsResponseBodyData() = default;
};
class QuerySkillGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> onePageSize{};
  shared_ptr<long> totalPage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> totalResults{};
  shared_ptr<vector<QuerySkillGroupsResponseBodyData>> data{};

  QuerySkillGroupsResponseBody() {}

  explicit QuerySkillGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (onePageSize) {
      res["OnePageSize"] = boost::any(*onePageSize);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (totalResults) {
      res["TotalResults"] = boost::any(*totalResults);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OnePageSize") != m.end() && !m["OnePageSize"].empty()) {
      onePageSize = make_shared<long>(boost::any_cast<long>(m["OnePageSize"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("TotalResults") != m.end() && !m["TotalResults"].empty()) {
      totalResults = make_shared<long>(boost::any_cast<long>(m["TotalResults"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QuerySkillGroupsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuerySkillGroupsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QuerySkillGroupsResponseBodyData>>(expect1);
      }
    }
  }


  virtual ~QuerySkillGroupsResponseBody() = default;
};
class QuerySkillGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QuerySkillGroupsResponseBody> body{};

  QuerySkillGroupsResponse() {}

  explicit QuerySkillGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QuerySkillGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySkillGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySkillGroupsResponse() = default;
};
class GetEntityRouteRequest : public Darabonba::Model {
public:
  shared_ptr<string> entityId{};
  shared_ptr<long> uniqueId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> entityName{};
  shared_ptr<string> entityRelationNumber{};
  shared_ptr<string> entityBizCode{};

  GetEntityRouteRequest() {}

  explicit GetEntityRouteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (uniqueId) {
      res["UniqueId"] = boost::any(*uniqueId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    if (entityRelationNumber) {
      res["EntityRelationNumber"] = boost::any(*entityRelationNumber);
    }
    if (entityBizCode) {
      res["EntityBizCode"] = boost::any(*entityBizCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("UniqueId") != m.end() && !m["UniqueId"].empty()) {
      uniqueId = make_shared<long>(boost::any_cast<long>(m["UniqueId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
    if (m.find("EntityRelationNumber") != m.end() && !m["EntityRelationNumber"].empty()) {
      entityRelationNumber = make_shared<string>(boost::any_cast<string>(m["EntityRelationNumber"]));
    }
    if (m.find("EntityBizCode") != m.end() && !m["EntityBizCode"].empty()) {
      entityBizCode = make_shared<string>(boost::any_cast<string>(m["EntityBizCode"]));
    }
  }


  virtual ~GetEntityRouteRequest() = default;
};
class GetEntityRouteResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> entityBizCodeType{};
  shared_ptr<long> groupId{};
  shared_ptr<string> entityId{};
  shared_ptr<long> serviceId{};
  shared_ptr<string> entityBizCode{};
  shared_ptr<string> departmentId{};
  shared_ptr<long> uniqueId{};
  shared_ptr<string> entityName{};
  shared_ptr<string> extInfo{};
  shared_ptr<string> entityRelationNumber{};

  GetEntityRouteResponseBodyData() {}

  explicit GetEntityRouteResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityBizCodeType) {
      res["EntityBizCodeType"] = boost::any(*entityBizCodeType);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (entityBizCode) {
      res["EntityBizCode"] = boost::any(*entityBizCode);
    }
    if (departmentId) {
      res["DepartmentId"] = boost::any(*departmentId);
    }
    if (uniqueId) {
      res["UniqueId"] = boost::any(*uniqueId);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    if (extInfo) {
      res["ExtInfo"] = boost::any(*extInfo);
    }
    if (entityRelationNumber) {
      res["EntityRelationNumber"] = boost::any(*entityRelationNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityBizCodeType") != m.end() && !m["EntityBizCodeType"].empty()) {
      entityBizCodeType = make_shared<string>(boost::any_cast<string>(m["EntityBizCodeType"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<long>(boost::any_cast<long>(m["GroupId"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["ServiceId"]));
    }
    if (m.find("EntityBizCode") != m.end() && !m["EntityBizCode"].empty()) {
      entityBizCode = make_shared<string>(boost::any_cast<string>(m["EntityBizCode"]));
    }
    if (m.find("DepartmentId") != m.end() && !m["DepartmentId"].empty()) {
      departmentId = make_shared<string>(boost::any_cast<string>(m["DepartmentId"]));
    }
    if (m.find("UniqueId") != m.end() && !m["UniqueId"].empty()) {
      uniqueId = make_shared<long>(boost::any_cast<long>(m["UniqueId"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      extInfo = make_shared<string>(boost::any_cast<string>(m["ExtInfo"]));
    }
    if (m.find("EntityRelationNumber") != m.end() && !m["EntityRelationNumber"].empty()) {
      entityRelationNumber = make_shared<string>(boost::any_cast<string>(m["EntityRelationNumber"]));
    }
  }


  virtual ~GetEntityRouteResponseBodyData() = default;
};
class GetEntityRouteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetEntityRouteResponseBodyData> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  GetEntityRouteResponseBody() {}

  explicit GetEntityRouteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetEntityRouteResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetEntityRouteResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetEntityRouteResponseBody() = default;
};
class GetEntityRouteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetEntityRouteResponseBody> body{};

  GetEntityRouteResponse() {}

  explicit GetEntityRouteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetEntityRouteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEntityRouteResponseBody>(model1);
      }
    }
  }


  virtual ~GetEntityRouteResponse() = default;
};
class UpdateEntityTagRelationRequest : public Darabonba::Model {
public:
  shared_ptr<string> entityTagParam{};
  shared_ptr<string> instanceId{};

  UpdateEntityTagRelationRequest() {}

  explicit UpdateEntityTagRelationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityTagParam) {
      res["EntityTagParam"] = boost::any(*entityTagParam);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityTagParam") != m.end() && !m["EntityTagParam"].empty()) {
      entityTagParam = make_shared<string>(boost::any_cast<string>(m["EntityTagParam"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~UpdateEntityTagRelationRequest() = default;
};
class UpdateEntityTagRelationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  UpdateEntityTagRelationResponseBody() {}

  explicit UpdateEntityTagRelationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateEntityTagRelationResponseBody() = default;
};
class UpdateEntityTagRelationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateEntityTagRelationResponseBody> body{};

  UpdateEntityTagRelationResponse() {}

  explicit UpdateEntityTagRelationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateEntityTagRelationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEntityTagRelationResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEntityTagRelationResponse() = default;
};
class CreateOuterCallCenterDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> sessionId{};
  shared_ptr<string> interveneTime{};
  shared_ptr<string> callType{};
  shared_ptr<string> fromPhoneNum{};
  shared_ptr<string> toPhoneNum{};
  shared_ptr<string> endReason{};
  shared_ptr<string> userInfo{};
  shared_ptr<string> recordUrl{};
  shared_ptr<string> bizType{};
  shared_ptr<string> bizId{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> extInfo{};
  shared_ptr<string> instanceId{};

  CreateOuterCallCenterDataRequest() {}

  explicit CreateOuterCallCenterDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (interveneTime) {
      res["InterveneTime"] = boost::any(*interveneTime);
    }
    if (callType) {
      res["CallType"] = boost::any(*callType);
    }
    if (fromPhoneNum) {
      res["FromPhoneNum"] = boost::any(*fromPhoneNum);
    }
    if (toPhoneNum) {
      res["ToPhoneNum"] = boost::any(*toPhoneNum);
    }
    if (endReason) {
      res["EndReason"] = boost::any(*endReason);
    }
    if (userInfo) {
      res["UserInfo"] = boost::any(*userInfo);
    }
    if (recordUrl) {
      res["RecordUrl"] = boost::any(*recordUrl);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (extInfo) {
      res["ExtInfo"] = boost::any(*extInfo);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("InterveneTime") != m.end() && !m["InterveneTime"].empty()) {
      interveneTime = make_shared<string>(boost::any_cast<string>(m["InterveneTime"]));
    }
    if (m.find("CallType") != m.end() && !m["CallType"].empty()) {
      callType = make_shared<string>(boost::any_cast<string>(m["CallType"]));
    }
    if (m.find("FromPhoneNum") != m.end() && !m["FromPhoneNum"].empty()) {
      fromPhoneNum = make_shared<string>(boost::any_cast<string>(m["FromPhoneNum"]));
    }
    if (m.find("ToPhoneNum") != m.end() && !m["ToPhoneNum"].empty()) {
      toPhoneNum = make_shared<string>(boost::any_cast<string>(m["ToPhoneNum"]));
    }
    if (m.find("EndReason") != m.end() && !m["EndReason"].empty()) {
      endReason = make_shared<string>(boost::any_cast<string>(m["EndReason"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfo = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
    if (m.find("RecordUrl") != m.end() && !m["RecordUrl"].empty()) {
      recordUrl = make_shared<string>(boost::any_cast<string>(m["RecordUrl"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      extInfo = make_shared<string>(boost::any_cast<string>(m["ExtInfo"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~CreateOuterCallCenterDataRequest() = default;
};
class CreateOuterCallCenterDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  CreateOuterCallCenterDataResponseBody() {}

  explicit CreateOuterCallCenterDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~CreateOuterCallCenterDataResponseBody() = default;
};
class CreateOuterCallCenterDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateOuterCallCenterDataResponseBody> body{};

  CreateOuterCallCenterDataResponse() {}

  explicit CreateOuterCallCenterDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateOuterCallCenterDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateOuterCallCenterDataResponseBody>(model1);
      }
    }
  }


  virtual ~CreateOuterCallCenterDataResponse() = default;
};
class SendOutboundCommandRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> callingNumber{};
  shared_ptr<string> calledNumber{};
  shared_ptr<string> customerInfo{};

  SendOutboundCommandRequest() {}

  explicit SendOutboundCommandRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (callingNumber) {
      res["CallingNumber"] = boost::any(*callingNumber);
    }
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (customerInfo) {
      res["CustomerInfo"] = boost::any(*customerInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("CallingNumber") != m.end() && !m["CallingNumber"].empty()) {
      callingNumber = make_shared<string>(boost::any_cast<string>(m["CallingNumber"]));
    }
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("CustomerInfo") != m.end() && !m["CustomerInfo"].empty()) {
      customerInfo = make_shared<string>(boost::any_cast<string>(m["CustomerInfo"]));
    }
  }


  virtual ~SendOutboundCommandRequest() = default;
};
class SendOutboundCommandResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  SendOutboundCommandResponseBody() {}

  explicit SendOutboundCommandResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SendOutboundCommandResponseBody() = default;
};
class SendOutboundCommandResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SendOutboundCommandResponseBody> body{};

  SendOutboundCommandResponse() {}

  explicit SendOutboundCommandResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SendOutboundCommandResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendOutboundCommandResponseBody>(model1);
      }
    }
  }


  virtual ~SendOutboundCommandResponse() = default;
};
class CreateRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> roleName{};
  shared_ptr<string> operator_{};
  shared_ptr<vector<long>> permissionId{};

  CreateRoleRequest() {}

  explicit CreateRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (permissionId) {
      res["PermissionId"] = boost::any(*permissionId);
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
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("PermissionId") != m.end() && !m["PermissionId"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["PermissionId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PermissionId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      permissionId = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~CreateRoleRequest() = default;
};
class CreateRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  CreateRoleResponseBody() {}

  explicit CreateRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~CreateRoleResponseBody() = default;
};
class CreateRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateRoleResponseBody> body{};

  CreateRoleResponse() {}

  explicit CreateRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRoleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRoleResponse() = default;
};
class ListSkillGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> channelType{};

  ListSkillGroupRequest() {}

  explicit ListSkillGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
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
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<long>(boost::any_cast<long>(m["ChannelType"]));
    }
  }


  virtual ~ListSkillGroupRequest() = default;
};
class ListSkillGroupResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> description{};
  shared_ptr<long> channelType{};
  shared_ptr<long> skillGroupId{};
  shared_ptr<string> name{};

  ListSkillGroupResponseBodyData() {}

  explicit ListSkillGroupResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (skillGroupId) {
      res["SkillGroupId"] = boost::any(*skillGroupId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<long>(boost::any_cast<long>(m["ChannelType"]));
    }
    if (m.find("SkillGroupId") != m.end() && !m["SkillGroupId"].empty()) {
      skillGroupId = make_shared<long>(boost::any_cast<long>(m["SkillGroupId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListSkillGroupResponseBodyData() = default;
};
class ListSkillGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSkillGroupResponseBodyData>> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  ListSkillGroupResponseBody() {}

  explicit ListSkillGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListSkillGroupResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSkillGroupResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListSkillGroupResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListSkillGroupResponseBody() = default;
};
class ListSkillGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSkillGroupResponseBody> body{};

  ListSkillGroupResponse() {}

  explicit ListSkillGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSkillGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSkillGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ListSkillGroupResponse() = default;
};
class GrantRolesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> operator_{};
  shared_ptr<vector<long>> roleId{};

  GrantRolesRequest() {}

  explicit GrantRolesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RoleId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RoleId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      roleId = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~GrantRolesRequest() = default;
};
class GrantRolesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  GrantRolesResponseBody() {}

  explicit GrantRolesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~GrantRolesResponseBody() = default;
};
class GrantRolesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GrantRolesResponseBody> body{};

  GrantRolesResponse() {}

  explicit GrantRolesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GrantRolesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GrantRolesResponseBody>(model1);
      }
    }
  }


  virtual ~GrantRolesResponse() = default;
};
class GetOuterCallCenterDataListRequest : public Darabonba::Model {
public:
  shared_ptr<string> sessionId{};
  shared_ptr<string> fromPhoneNum{};
  shared_ptr<string> toPhoneNum{};
  shared_ptr<string> bizId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> queryStartTime{};
  shared_ptr<string> queryEndTime{};

  GetOuterCallCenterDataListRequest() {}

  explicit GetOuterCallCenterDataListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (fromPhoneNum) {
      res["FromPhoneNum"] = boost::any(*fromPhoneNum);
    }
    if (toPhoneNum) {
      res["ToPhoneNum"] = boost::any(*toPhoneNum);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (queryStartTime) {
      res["QueryStartTime"] = boost::any(*queryStartTime);
    }
    if (queryEndTime) {
      res["QueryEndTime"] = boost::any(*queryEndTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("FromPhoneNum") != m.end() && !m["FromPhoneNum"].empty()) {
      fromPhoneNum = make_shared<string>(boost::any_cast<string>(m["FromPhoneNum"]));
    }
    if (m.find("ToPhoneNum") != m.end() && !m["ToPhoneNum"].empty()) {
      toPhoneNum = make_shared<string>(boost::any_cast<string>(m["ToPhoneNum"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("QueryStartTime") != m.end() && !m["QueryStartTime"].empty()) {
      queryStartTime = make_shared<string>(boost::any_cast<string>(m["QueryStartTime"]));
    }
    if (m.find("QueryEndTime") != m.end() && !m["QueryEndTime"].empty()) {
      queryEndTime = make_shared<string>(boost::any_cast<string>(m["QueryEndTime"]));
    }
  }


  virtual ~GetOuterCallCenterDataListRequest() = default;
};
class GetOuterCallCenterDataListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> endReason{};
  shared_ptr<string> callType{};
  shared_ptr<string> acid{};
  shared_ptr<string> toPhoneNum{};
  shared_ptr<string> userInfo{};
  shared_ptr<string> interveneTime{};
  shared_ptr<string> bizId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> fromPhoneNum{};
  shared_ptr<string> extInfo{};
  shared_ptr<string> bizType{};

  GetOuterCallCenterDataListResponseBodyData() {}

  explicit GetOuterCallCenterDataListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endReason) {
      res["EndReason"] = boost::any(*endReason);
    }
    if (callType) {
      res["CallType"] = boost::any(*callType);
    }
    if (acid) {
      res["Acid"] = boost::any(*acid);
    }
    if (toPhoneNum) {
      res["ToPhoneNum"] = boost::any(*toPhoneNum);
    }
    if (userInfo) {
      res["UserInfo"] = boost::any(*userInfo);
    }
    if (interveneTime) {
      res["InterveneTime"] = boost::any(*interveneTime);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (fromPhoneNum) {
      res["FromPhoneNum"] = boost::any(*fromPhoneNum);
    }
    if (extInfo) {
      res["ExtInfo"] = boost::any(*extInfo);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndReason") != m.end() && !m["EndReason"].empty()) {
      endReason = make_shared<string>(boost::any_cast<string>(m["EndReason"]));
    }
    if (m.find("CallType") != m.end() && !m["CallType"].empty()) {
      callType = make_shared<string>(boost::any_cast<string>(m["CallType"]));
    }
    if (m.find("Acid") != m.end() && !m["Acid"].empty()) {
      acid = make_shared<string>(boost::any_cast<string>(m["Acid"]));
    }
    if (m.find("ToPhoneNum") != m.end() && !m["ToPhoneNum"].empty()) {
      toPhoneNum = make_shared<string>(boost::any_cast<string>(m["ToPhoneNum"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfo = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
    if (m.find("InterveneTime") != m.end() && !m["InterveneTime"].empty()) {
      interveneTime = make_shared<string>(boost::any_cast<string>(m["InterveneTime"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("FromPhoneNum") != m.end() && !m["FromPhoneNum"].empty()) {
      fromPhoneNum = make_shared<string>(boost::any_cast<string>(m["FromPhoneNum"]));
    }
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      extInfo = make_shared<string>(boost::any_cast<string>(m["ExtInfo"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
  }


  virtual ~GetOuterCallCenterDataListResponseBodyData() = default;
};
class GetOuterCallCenterDataListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetOuterCallCenterDataListResponseBodyData>> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  GetOuterCallCenterDataListResponseBody() {}

  explicit GetOuterCallCenterDataListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOuterCallCenterDataListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOuterCallCenterDataListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOuterCallCenterDataListResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~GetOuterCallCenterDataListResponseBody() = default;
};
class GetOuterCallCenterDataListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetOuterCallCenterDataListResponseBody> body{};

  GetOuterCallCenterDataListResponse() {}

  explicit GetOuterCallCenterDataListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetOuterCallCenterDataListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOuterCallCenterDataListResponseBody>(model1);
      }
    }
  }


  virtual ~GetOuterCallCenterDataListResponse() = default;
};
class QueryTicketsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> caseId{};
  shared_ptr<long> caseType{};
  shared_ptr<long> caseStatus{};
  shared_ptr<long> srType{};
  shared_ptr<long> taskStatus{};
  shared_ptr<string> channelId{};
  shared_ptr<long> channelType{};
  shared_ptr<long> touchId{};
  shared_ptr<long> dealId{};
  shared_ptr<map<string, boost::any>> extra{};
  shared_ptr<string> accountName{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};

  QueryTicketsRequest() {}

  explicit QueryTicketsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (caseId) {
      res["CaseId"] = boost::any(*caseId);
    }
    if (caseType) {
      res["CaseType"] = boost::any(*caseType);
    }
    if (caseStatus) {
      res["CaseStatus"] = boost::any(*caseStatus);
    }
    if (srType) {
      res["SrType"] = boost::any(*srType);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (touchId) {
      res["TouchId"] = boost::any(*touchId);
    }
    if (dealId) {
      res["DealId"] = boost::any(*dealId);
    }
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("CaseId") != m.end() && !m["CaseId"].empty()) {
      caseId = make_shared<long>(boost::any_cast<long>(m["CaseId"]));
    }
    if (m.find("CaseType") != m.end() && !m["CaseType"].empty()) {
      caseType = make_shared<long>(boost::any_cast<long>(m["CaseType"]));
    }
    if (m.find("CaseStatus") != m.end() && !m["CaseStatus"].empty()) {
      caseStatus = make_shared<long>(boost::any_cast<long>(m["CaseStatus"]));
    }
    if (m.find("SrType") != m.end() && !m["SrType"].empty()) {
      srType = make_shared<long>(boost::any_cast<long>(m["SrType"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<long>(boost::any_cast<long>(m["TaskStatus"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<long>(boost::any_cast<long>(m["ChannelType"]));
    }
    if (m.find("TouchId") != m.end() && !m["TouchId"].empty()) {
      touchId = make_shared<long>(boost::any_cast<long>(m["TouchId"]));
    }
    if (m.find("DealId") != m.end() && !m["DealId"].empty()) {
      dealId = make_shared<long>(boost::any_cast<long>(m["DealId"]));
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Extra"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extra = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
  }


  virtual ~QueryTicketsRequest() = default;
};
class QueryTicketsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> caseId{};
  shared_ptr<long> caseType{};
  shared_ptr<long> caseStatus{};
  shared_ptr<long> srType{};
  shared_ptr<long> taskStatus{};
  shared_ptr<string> channelId{};
  shared_ptr<long> channelType{};
  shared_ptr<long> touchId{};
  shared_ptr<long> dealId{};
  shared_ptr<string> extraShrink{};
  shared_ptr<string> accountName{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};

  QueryTicketsShrinkRequest() {}

  explicit QueryTicketsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (caseId) {
      res["CaseId"] = boost::any(*caseId);
    }
    if (caseType) {
      res["CaseType"] = boost::any(*caseType);
    }
    if (caseStatus) {
      res["CaseStatus"] = boost::any(*caseStatus);
    }
    if (srType) {
      res["SrType"] = boost::any(*srType);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (touchId) {
      res["TouchId"] = boost::any(*touchId);
    }
    if (dealId) {
      res["DealId"] = boost::any(*dealId);
    }
    if (extraShrink) {
      res["Extra"] = boost::any(*extraShrink);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("CaseId") != m.end() && !m["CaseId"].empty()) {
      caseId = make_shared<long>(boost::any_cast<long>(m["CaseId"]));
    }
    if (m.find("CaseType") != m.end() && !m["CaseType"].empty()) {
      caseType = make_shared<long>(boost::any_cast<long>(m["CaseType"]));
    }
    if (m.find("CaseStatus") != m.end() && !m["CaseStatus"].empty()) {
      caseStatus = make_shared<long>(boost::any_cast<long>(m["CaseStatus"]));
    }
    if (m.find("SrType") != m.end() && !m["SrType"].empty()) {
      srType = make_shared<long>(boost::any_cast<long>(m["SrType"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<long>(boost::any_cast<long>(m["TaskStatus"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<long>(boost::any_cast<long>(m["ChannelType"]));
    }
    if (m.find("TouchId") != m.end() && !m["TouchId"].empty()) {
      touchId = make_shared<long>(boost::any_cast<long>(m["TouchId"]));
    }
    if (m.find("DealId") != m.end() && !m["DealId"].empty()) {
      dealId = make_shared<long>(boost::any_cast<long>(m["DealId"]));
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      extraShrink = make_shared<string>(boost::any_cast<string>(m["Extra"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
  }


  virtual ~QueryTicketsShrinkRequest() = default;
};
class QueryTicketsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  QueryTicketsResponseBody() {}

  explicit QueryTicketsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryTicketsResponseBody() = default;
};
class QueryTicketsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryTicketsResponseBody> body{};

  QueryTicketsResponse() {}

  explicit QueryTicketsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryTicketsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTicketsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTicketsResponse() = default;
};
class QueryTicketActionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ticketId{};
  shared_ptr<vector<int>> actionCodeList{};

  QueryTicketActionsRequest() {}

  explicit QueryTicketActionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ticketId) {
      res["TicketId"] = boost::any(*ticketId);
    }
    if (actionCodeList) {
      res["ActionCodeList"] = boost::any(*actionCodeList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TicketId") != m.end() && !m["TicketId"].empty()) {
      ticketId = make_shared<string>(boost::any_cast<string>(m["TicketId"]));
    }
    if (m.find("ActionCodeList") != m.end() && !m["ActionCodeList"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["ActionCodeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ActionCodeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      actionCodeList = make_shared<vector<int>>(toVec1);
    }
  }


  virtual ~QueryTicketActionsRequest() = default;
};
class QueryTicketActionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  QueryTicketActionsResponseBody() {}

  explicit QueryTicketActionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryTicketActionsResponseBody() = default;
};
class QueryTicketActionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryTicketActionsResponseBody> body{};

  QueryTicketActionsResponse() {}

  explicit QueryTicketActionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryTicketActionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTicketActionsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTicketActionsResponse() = default;
};
class TransferCallToAgentRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> targetAccountName{};
  shared_ptr<string> callId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> connectionId{};
  shared_ptr<string> holdConnectionId{};
  shared_ptr<long> type{};
  shared_ptr<string> isSingleTransfer{};

  TransferCallToAgentRequest() {}

  explicit TransferCallToAgentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (targetAccountName) {
      res["TargetAccountName"] = boost::any(*targetAccountName);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (connectionId) {
      res["ConnectionId"] = boost::any(*connectionId);
    }
    if (holdConnectionId) {
      res["HoldConnectionId"] = boost::any(*holdConnectionId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (isSingleTransfer) {
      res["IsSingleTransfer"] = boost::any(*isSingleTransfer);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("TargetAccountName") != m.end() && !m["TargetAccountName"].empty()) {
      targetAccountName = make_shared<string>(boost::any_cast<string>(m["TargetAccountName"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("ConnectionId") != m.end() && !m["ConnectionId"].empty()) {
      connectionId = make_shared<string>(boost::any_cast<string>(m["ConnectionId"]));
    }
    if (m.find("HoldConnectionId") != m.end() && !m["HoldConnectionId"].empty()) {
      holdConnectionId = make_shared<string>(boost::any_cast<string>(m["HoldConnectionId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("IsSingleTransfer") != m.end() && !m["IsSingleTransfer"].empty()) {
      isSingleTransfer = make_shared<string>(boost::any_cast<string>(m["IsSingleTransfer"]));
    }
  }


  virtual ~TransferCallToAgentRequest() = default;
};
class TransferCallToAgentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  TransferCallToAgentResponseBody() {}

  explicit TransferCallToAgentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~TransferCallToAgentResponseBody() = default;
};
class TransferCallToAgentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TransferCallToAgentResponseBody> body{};

  TransferCallToAgentResponse() {}

  explicit TransferCallToAgentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TransferCallToAgentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TransferCallToAgentResponseBody>(model1);
      }
    }
  }


  virtual ~TransferCallToAgentResponse() = default;
};
class FinishHotlineServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};

  FinishHotlineServiceRequest() {}

  explicit FinishHotlineServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~FinishHotlineServiceRequest() = default;
};
class FinishHotlineServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  FinishHotlineServiceResponseBody() {}

  explicit FinishHotlineServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~FinishHotlineServiceResponseBody() = default;
};
class FinishHotlineServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<FinishHotlineServiceResponseBody> body{};

  FinishHotlineServiceResponse() {}

  explicit FinishHotlineServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        FinishHotlineServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FinishHotlineServiceResponseBody>(model1);
      }
    }
  }


  virtual ~FinishHotlineServiceResponse() = default;
};
class JoinThirdCallRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> callId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> connectionId{};
  shared_ptr<string> holdConnectionId{};

  JoinThirdCallRequest() {}

  explicit JoinThirdCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (connectionId) {
      res["ConnectionId"] = boost::any(*connectionId);
    }
    if (holdConnectionId) {
      res["HoldConnectionId"] = boost::any(*holdConnectionId);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("ConnectionId") != m.end() && !m["ConnectionId"].empty()) {
      connectionId = make_shared<string>(boost::any_cast<string>(m["ConnectionId"]));
    }
    if (m.find("HoldConnectionId") != m.end() && !m["HoldConnectionId"].empty()) {
      holdConnectionId = make_shared<string>(boost::any_cast<string>(m["HoldConnectionId"]));
    }
  }


  virtual ~JoinThirdCallRequest() = default;
};
class JoinThirdCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  JoinThirdCallResponseBody() {}

  explicit JoinThirdCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~JoinThirdCallResponseBody() = default;
};
class JoinThirdCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<JoinThirdCallResponseBody> body{};

  JoinThirdCallResponse() {}

  explicit JoinThirdCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        JoinThirdCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<JoinThirdCallResponseBody>(model1);
      }
    }
  }


  virtual ~JoinThirdCallResponse() = default;
};
class ExecuteActivityRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> ticketId{};
  shared_ptr<long> operatorId{};
  shared_ptr<string> activityCode{};
  shared_ptr<string> activityForm{};

  ExecuteActivityRequest() {}

  explicit ExecuteActivityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ticketId) {
      res["TicketId"] = boost::any(*ticketId);
    }
    if (operatorId) {
      res["OperatorId"] = boost::any(*operatorId);
    }
    if (activityCode) {
      res["ActivityCode"] = boost::any(*activityCode);
    }
    if (activityForm) {
      res["ActivityForm"] = boost::any(*activityForm);
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
    if (m.find("TicketId") != m.end() && !m["TicketId"].empty()) {
      ticketId = make_shared<long>(boost::any_cast<long>(m["TicketId"]));
    }
    if (m.find("OperatorId") != m.end() && !m["OperatorId"].empty()) {
      operatorId = make_shared<long>(boost::any_cast<long>(m["OperatorId"]));
    }
    if (m.find("ActivityCode") != m.end() && !m["ActivityCode"].empty()) {
      activityCode = make_shared<string>(boost::any_cast<string>(m["ActivityCode"]));
    }
    if (m.find("ActivityForm") != m.end() && !m["ActivityForm"].empty()) {
      activityForm = make_shared<string>(boost::any_cast<string>(m["ActivityForm"]));
    }
  }


  virtual ~ExecuteActivityRequest() = default;
};
class ExecuteActivityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  ExecuteActivityResponseBody() {}

  explicit ExecuteActivityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ExecuteActivityResponseBody() = default;
};
class ExecuteActivityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ExecuteActivityResponseBody> body{};

  ExecuteActivityResponse() {}

  explicit ExecuteActivityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ExecuteActivityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteActivityResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteActivityResponse() = default;
};
class GetGrantedRoleIdsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};

  GetGrantedRoleIdsRequest() {}

  explicit GetGrantedRoleIdsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~GetGrantedRoleIdsRequest() = default;
};
class GetGrantedRoleIdsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<long>> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  GetGrantedRoleIdsResponseBody() {}

  explicit GetGrantedRoleIdsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      data = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~GetGrantedRoleIdsResponseBody() = default;
};
class GetGrantedRoleIdsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetGrantedRoleIdsResponseBody> body{};

  GetGrantedRoleIdsResponse() {}

  explicit GetGrantedRoleIdsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetGrantedRoleIdsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGrantedRoleIdsResponseBody>(model1);
      }
    }
  }


  virtual ~GetGrantedRoleIdsResponse() = default;
};
class ListHotlineRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> callId{};

  ListHotlineRecordRequest() {}

  explicit ListHotlineRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (callId) {
      res["CallId"] = boost::any(*callId);
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
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
  }


  virtual ~ListHotlineRecordRequest() = default;
};
class ListHotlineRecordResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> endTime{};
  shared_ptr<bool> startTime{};
  shared_ptr<string> connectionId{};
  shared_ptr<string> callId{};
  shared_ptr<string> url{};

  ListHotlineRecordResponseBodyData() {}

  explicit ListHotlineRecordResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (connectionId) {
      res["ConnectionId"] = boost::any(*connectionId);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<bool>(boost::any_cast<bool>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<bool>(boost::any_cast<bool>(m["StartTime"]));
    }
    if (m.find("ConnectionId") != m.end() && !m["ConnectionId"].empty()) {
      connectionId = make_shared<string>(boost::any_cast<string>(m["ConnectionId"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~ListHotlineRecordResponseBodyData() = default;
};
class ListHotlineRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListHotlineRecordResponseBodyData>> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  ListHotlineRecordResponseBody() {}

  explicit ListHotlineRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListHotlineRecordResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHotlineRecordResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListHotlineRecordResponseBodyData>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~ListHotlineRecordResponseBody() = default;
};
class ListHotlineRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListHotlineRecordResponseBody> body{};

  ListHotlineRecordResponse() {}

  explicit ListHotlineRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListHotlineRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHotlineRecordResponseBody>(model1);
      }
    }
  }


  virtual ~ListHotlineRecordResponse() = default;
};
class GetNumLocationRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> phoneNum{};

  GetNumLocationRequest() {}

  explicit GetNumLocationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (phoneNum) {
      res["PhoneNum"] = boost::any(*phoneNum);
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
    if (m.find("PhoneNum") != m.end() && !m["PhoneNum"].empty()) {
      phoneNum = make_shared<string>(boost::any_cast<string>(m["PhoneNum"]));
    }
  }


  virtual ~GetNumLocationRequest() = default;
};
class GetNumLocationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};
  shared_ptr<long> httpStatusCode{};

  GetNumLocationResponseBody() {}

  explicit GetNumLocationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~GetNumLocationResponseBody() = default;
};
class GetNumLocationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetNumLocationResponseBody> body{};

  GetNumLocationResponse() {}

  explicit GetNumLocationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetNumLocationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNumLocationResponseBody>(model1);
      }
    }
  }


  virtual ~GetNumLocationResponse() = default;
};
class CreateSkillGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> skillGroupName{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<long> channelType{};
  shared_ptr<string> clientToken{};

  CreateSkillGroupRequest() {}

  explicit CreateSkillGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (skillGroupName) {
      res["SkillGroupName"] = boost::any(*skillGroupName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SkillGroupName") != m.end() && !m["SkillGroupName"].empty()) {
      skillGroupName = make_shared<string>(boost::any_cast<string>(m["SkillGroupName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<long>(boost::any_cast<long>(m["ChannelType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~CreateSkillGroupRequest() = default;
};
class CreateSkillGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  CreateSkillGroupResponseBody() {}

  explicit CreateSkillGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateSkillGroupResponseBody() = default;
};
class CreateSkillGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateSkillGroupResponseBody> body{};

  CreateSkillGroupResponse() {}

  explicit CreateSkillGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateSkillGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSkillGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSkillGroupResponse() = default;
};
class CreateCustomerRequest : public Darabonba::Model {
public:
  shared_ptr<long> prodLineId{};
  shared_ptr<string> bizType{};
  shared_ptr<string> name{};
  shared_ptr<string> typeCode{};
  shared_ptr<string> phone{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> managerName{};
  shared_ptr<string> contacter{};
  shared_ptr<string> industry{};
  shared_ptr<string> position{};
  shared_ptr<string> email{};
  shared_ptr<string> dingding{};
  shared_ptr<string> outerId{};
  shared_ptr<long> outerIdType{};

  CreateCustomerRequest() {}

  explicit CreateCustomerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (prodLineId) {
      res["ProdLineId"] = boost::any(*prodLineId);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (typeCode) {
      res["TypeCode"] = boost::any(*typeCode);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (managerName) {
      res["ManagerName"] = boost::any(*managerName);
    }
    if (contacter) {
      res["Contacter"] = boost::any(*contacter);
    }
    if (industry) {
      res["Industry"] = boost::any(*industry);
    }
    if (position) {
      res["Position"] = boost::any(*position);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (dingding) {
      res["Dingding"] = boost::any(*dingding);
    }
    if (outerId) {
      res["OuterId"] = boost::any(*outerId);
    }
    if (outerIdType) {
      res["OuterIdType"] = boost::any(*outerIdType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProdLineId") != m.end() && !m["ProdLineId"].empty()) {
      prodLineId = make_shared<long>(boost::any_cast<long>(m["ProdLineId"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TypeCode") != m.end() && !m["TypeCode"].empty()) {
      typeCode = make_shared<string>(boost::any_cast<string>(m["TypeCode"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ManagerName") != m.end() && !m["ManagerName"].empty()) {
      managerName = make_shared<string>(boost::any_cast<string>(m["ManagerName"]));
    }
    if (m.find("Contacter") != m.end() && !m["Contacter"].empty()) {
      contacter = make_shared<string>(boost::any_cast<string>(m["Contacter"]));
    }
    if (m.find("Industry") != m.end() && !m["Industry"].empty()) {
      industry = make_shared<string>(boost::any_cast<string>(m["Industry"]));
    }
    if (m.find("Position") != m.end() && !m["Position"].empty()) {
      position = make_shared<string>(boost::any_cast<string>(m["Position"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Dingding") != m.end() && !m["Dingding"].empty()) {
      dingding = make_shared<string>(boost::any_cast<string>(m["Dingding"]));
    }
    if (m.find("OuterId") != m.end() && !m["OuterId"].empty()) {
      outerId = make_shared<string>(boost::any_cast<string>(m["OuterId"]));
    }
    if (m.find("OuterIdType") != m.end() && !m["OuterIdType"].empty()) {
      outerIdType = make_shared<long>(boost::any_cast<long>(m["OuterIdType"]));
    }
  }


  virtual ~CreateCustomerRequest() = default;
};
class CreateCustomerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  CreateCustomerResponseBody() {}

  explicit CreateCustomerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateCustomerResponseBody() = default;
};
class CreateCustomerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateCustomerResponseBody> body{};

  CreateCustomerResponse() {}

  explicit CreateCustomerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateCustomerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCustomerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCustomerResponse() = default;
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
  GetUserTokenResponse getUserTokenWithOptions(shared_ptr<GetUserTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserTokenResponse getUserToken(shared_ptr<GetUserTokenRequest> request);
  SearchTicketListResponse searchTicketListWithOptions(shared_ptr<SearchTicketListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchTicketListResponse searchTicketList(shared_ptr<SearchTicketListRequest> request);
  SendHotlineHeartBeatResponse sendHotlineHeartBeatWithOptions(shared_ptr<SendHotlineHeartBeatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendHotlineHeartBeatResponse sendHotlineHeartBeat(shared_ptr<SendHotlineHeartBeatRequest> request);
  TransferCallToSkillGroupResponse transferCallToSkillGroupWithOptions(shared_ptr<TransferCallToSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TransferCallToSkillGroupResponse transferCallToSkillGroup(shared_ptr<TransferCallToSkillGroupRequest> request);
  EditEntityRouteResponse editEntityRouteWithOptions(shared_ptr<EditEntityRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EditEntityRouteResponse editEntityRoute(shared_ptr<EditEntityRouteRequest> request);
  GetTagListResponse getTagListWithOptions(shared_ptr<GetTagListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTagListResponse getTagList(shared_ptr<GetTagListRequest> request);
  UpdateTicketResponse updateTicketWithOptions(shared_ptr<UpdateTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTicketResponse updateTicket(shared_ptr<UpdateTicketRequest> request);
  ListOutboundPhoneNumberResponse listOutboundPhoneNumberWithOptions(shared_ptr<ListOutboundPhoneNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOutboundPhoneNumberResponse listOutboundPhoneNumber(shared_ptr<ListOutboundPhoneNumberRequest> request);
  RemoveSkillGroupResponse removeSkillGroupWithOptions(shared_ptr<RemoveSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveSkillGroupResponse removeSkillGroup(shared_ptr<RemoveSkillGroupRequest> request);
  ListAgentBySkillGroupIdResponse listAgentBySkillGroupIdWithOptions(shared_ptr<ListAgentBySkillGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAgentBySkillGroupIdResponse listAgentBySkillGroupId(shared_ptr<ListAgentBySkillGroupIdRequest> request);
  QueryHotlineSessionResponse queryHotlineSessionWithOptions(shared_ptr<QueryHotlineSessionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryHotlineSessionResponse queryHotlineSession(shared_ptr<QueryHotlineSessionRequest> request);
  StartChatWorkResponse startChatWorkWithOptions(shared_ptr<StartChatWorkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartChatWorkResponse startChatWork(shared_ptr<StartChatWorkRequest> request);
  HangupThirdCallResponse hangupThirdCallWithOptions(shared_ptr<HangupThirdCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HangupThirdCallResponse hangupThirdCall(shared_ptr<HangupThirdCallRequest> request);
  StartHotlineServiceResponse startHotlineServiceWithOptions(shared_ptr<StartHotlineServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartHotlineServiceResponse startHotlineService(shared_ptr<StartHotlineServiceRequest> request);
  StartCallV2Response startCallV2WithOptions(shared_ptr<StartCallV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartCallV2Response startCallV2(shared_ptr<StartCallV2Request> request);
  EnableRoleResponse enableRoleWithOptions(shared_ptr<EnableRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableRoleResponse enableRole(shared_ptr<EnableRoleRequest> request);
  GetAgentResponse getAgentWithOptions(shared_ptr<GetAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAgentResponse getAgent(shared_ptr<GetAgentRequest> request);
  GetCMSIdByForeignIdResponse getCMSIdByForeignIdWithOptions(shared_ptr<GetCMSIdByForeignIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCMSIdByForeignIdResponse getCMSIdByForeignId(shared_ptr<GetCMSIdByForeignIdRequest> request);
  TransferToThirdCallResponse transferToThirdCallWithOptions(shared_ptr<TransferToThirdCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TransferToThirdCallResponse transferToThirdCall(shared_ptr<TransferToThirdCallRequest> request);
  UpdateAgentResponse updateAgentWithOptions(shared_ptr<UpdateAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAgentResponse updateAgent(shared_ptr<UpdateAgentRequest> request);
  ChangeChatAgentStatusResponse changeChatAgentStatusWithOptions(shared_ptr<ChangeChatAgentStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeChatAgentStatusResponse changeChatAgentStatus(shared_ptr<ChangeChatAgentStatusRequest> request);
  GenerateWebSocketSignResponse generateWebSocketSignWithOptions(shared_ptr<GenerateWebSocketSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateWebSocketSignResponse generateWebSocketSign(shared_ptr<GenerateWebSocketSignRequest> request);
  UpdateRingStatusResponse updateRingStatusWithOptions(shared_ptr<UpdateRingStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRingStatusResponse updateRingStatus(shared_ptr<UpdateRingStatusRequest> request);
  CreateAgentResponse createAgentWithOptions(shared_ptr<CreateAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAgentResponse createAgent(shared_ptr<CreateAgentRequest> request);
  DeleteEntityRouteResponse deleteEntityRouteWithOptions(shared_ptr<DeleteEntityRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEntityRouteResponse deleteEntityRoute(shared_ptr<DeleteEntityRouteRequest> request);
  GetHotlineGroupDetailReportResponse getHotlineGroupDetailReportWithOptions(shared_ptr<GetHotlineGroupDetailReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHotlineGroupDetailReportResponse getHotlineGroupDetailReport(shared_ptr<GetHotlineGroupDetailReportRequest> request);
  CreateTicketResponse createTicketWithOptions(shared_ptr<CreateTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTicketResponse createTicket(shared_ptr<CreateTicketRequest> request);
  UpdateCustomerResponse updateCustomerWithOptions(shared_ptr<UpdateCustomerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCustomerResponse updateCustomer(shared_ptr<UpdateCustomerRequest> request);
  AnswerCallResponse answerCallWithOptions(shared_ptr<AnswerCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AnswerCallResponse answerCall(shared_ptr<AnswerCallRequest> request);
  DeleteAgentResponse deleteAgentWithOptions(shared_ptr<DeleteAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAgentResponse deleteAgent(shared_ptr<DeleteAgentRequest> request);
  GetEntityTagRelationResponse getEntityTagRelationWithOptions(shared_ptr<GetEntityTagRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEntityTagRelationResponse getEntityTagRelation(shared_ptr<GetEntityTagRelationRequest> request);
  GetHotlineAgentDetailResponse getHotlineAgentDetailWithOptions(shared_ptr<GetHotlineAgentDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHotlineAgentDetailResponse getHotlineAgentDetail(shared_ptr<GetHotlineAgentDetailRequest> request);
  SuspendHotlineServiceResponse suspendHotlineServiceWithOptions(shared_ptr<SuspendHotlineServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SuspendHotlineServiceResponse suspendHotlineService(shared_ptr<SuspendHotlineServiceRequest> request);
  GetCallsPerDayResponse getCallsPerDayWithOptions(shared_ptr<GetCallsPerDayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCallsPerDayResponse getCallsPerDay(shared_ptr<GetCallsPerDayRequest> request);
  FetchCallResponse fetchCallWithOptions(shared_ptr<FetchCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FetchCallResponse fetchCall(shared_ptr<FetchCallRequest> request);
  GetHotlineAgentDetailReportResponse getHotlineAgentDetailReportWithOptions(shared_ptr<GetHotlineAgentDetailReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHotlineAgentDetailReportResponse getHotlineAgentDetailReport(shared_ptr<GetHotlineAgentDetailReportRequest> request);
  QueryTicketCountResponse queryTicketCountWithOptions(shared_ptr<QueryTicketCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTicketCountResponse queryTicketCount(shared_ptr<QueryTicketCountRequest> request);
  AppMessagePushResponse appMessagePushWithOptions(shared_ptr<AppMessagePushRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AppMessagePushResponse appMessagePush(shared_ptr<AppMessagePushRequest> request);
  GetHotlineAgentStatusResponse getHotlineAgentStatusWithOptions(shared_ptr<GetHotlineAgentStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHotlineAgentStatusResponse getHotlineAgentStatus(shared_ptr<GetHotlineAgentStatusRequest> request);
  GetHotlineWaitingNumberResponse getHotlineWaitingNumberWithOptions(shared_ptr<GetHotlineWaitingNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHotlineWaitingNumberResponse getHotlineWaitingNumber(shared_ptr<GetHotlineWaitingNumberRequest> request);
  StartCallResponse startCallWithOptions(shared_ptr<StartCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartCallResponse startCall(shared_ptr<StartCallRequest> request);
  AssignTicketResponse assignTicketWithOptions(shared_ptr<AssignTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssignTicketResponse assignTicket(shared_ptr<AssignTicketRequest> request);
  HangupCallResponse hangupCallWithOptions(shared_ptr<HangupCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HangupCallResponse hangupCall(shared_ptr<HangupCallRequest> request);
  GetOutbounNumListResponse getOutbounNumListWithOptions(shared_ptr<GetOutbounNumListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOutbounNumListResponse getOutbounNumList(shared_ptr<GetOutbounNumListRequest> request);
  CreateTicketWithBizDataResponse createTicketWithBizDataWithOptions(shared_ptr<CreateTicketWithBizDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTicketWithBizDataResponse createTicketWithBizData(shared_ptr<CreateTicketWithBizDataRequest> request);
  SearchTicketByPhoneResponse searchTicketByPhoneWithOptions(shared_ptr<SearchTicketByPhoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchTicketByPhoneResponse searchTicketByPhone(shared_ptr<SearchTicketByPhoneRequest> request);
  CreateThirdSsoAgentResponse createThirdSsoAgentWithOptions(shared_ptr<CreateThirdSsoAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateThirdSsoAgentResponse createThirdSsoAgent(shared_ptr<CreateThirdSsoAgentRequest> request);
  CreateEntityIvrRouteResponse createEntityIvrRouteWithOptions(shared_ptr<CreateEntityIvrRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEntityIvrRouteResponse createEntityIvrRoute(shared_ptr<CreateEntityIvrRouteRequest> request);
  CloseTicketResponse closeTicketWithOptions(shared_ptr<CloseTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloseTicketResponse closeTicket(shared_ptr<CloseTicketRequest> request);
  HoldCallResponse holdCallWithOptions(shared_ptr<HoldCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HoldCallResponse holdCall(shared_ptr<HoldCallRequest> request);
  QueryRingDetailListResponse queryRingDetailListWithOptions(shared_ptr<QueryRingDetailListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRingDetailListResponse queryRingDetailList(shared_ptr<QueryRingDetailListRequest> request);
  SearchTicketByIdResponse searchTicketByIdWithOptions(shared_ptr<SearchTicketByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchTicketByIdResponse searchTicketById(shared_ptr<SearchTicketByIdRequest> request);
  UpdateSkillGroupResponse updateSkillGroupWithOptions(shared_ptr<UpdateSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSkillGroupResponse updateSkillGroup(shared_ptr<UpdateSkillGroupRequest> request);
  QueryServiceConfigResponse queryServiceConfigWithOptions(shared_ptr<QueryServiceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryServiceConfigResponse queryServiceConfig(shared_ptr<QueryServiceConfigRequest> request);
  DisableRoleResponse disableRoleWithOptions(shared_ptr<DisableRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableRoleResponse disableRole(shared_ptr<DisableRoleRequest> request);
  GetEntityRouteListResponse getEntityRouteListWithOptions(shared_ptr<GetEntityRouteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEntityRouteListResponse getEntityRouteList(shared_ptr<GetEntityRouteListRequest> request);
  GetAuthInfoResponse getAuthInfoWithOptions(shared_ptr<GetAuthInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAuthInfoResponse getAuthInfo(shared_ptr<GetAuthInfoRequest> request);
  UpdateRoleResponse updateRoleWithOptions(shared_ptr<UpdateRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRoleResponse updateRole(shared_ptr<UpdateRoleRequest> request);
  GetTicketTemplateSchemaResponse getTicketTemplateSchemaWithOptions(shared_ptr<GetTicketTemplateSchemaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTicketTemplateSchemaResponse getTicketTemplateSchema(shared_ptr<GetTicketTemplateSchemaRequest> request);
  TransferCallToPhoneResponse transferCallToPhoneWithOptions(shared_ptr<TransferCallToPhoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TransferCallToPhoneResponse transferCallToPhone(shared_ptr<TransferCallToPhoneRequest> request);
  QuerySkillGroupsResponse querySkillGroupsWithOptions(shared_ptr<QuerySkillGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySkillGroupsResponse querySkillGroups(shared_ptr<QuerySkillGroupsRequest> request);
  GetEntityRouteResponse getEntityRouteWithOptions(shared_ptr<GetEntityRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEntityRouteResponse getEntityRoute(shared_ptr<GetEntityRouteRequest> request);
  UpdateEntityTagRelationResponse updateEntityTagRelationWithOptions(shared_ptr<UpdateEntityTagRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEntityTagRelationResponse updateEntityTagRelation(shared_ptr<UpdateEntityTagRelationRequest> request);
  CreateOuterCallCenterDataResponse createOuterCallCenterDataWithOptions(shared_ptr<CreateOuterCallCenterDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateOuterCallCenterDataResponse createOuterCallCenterData(shared_ptr<CreateOuterCallCenterDataRequest> request);
  SendOutboundCommandResponse sendOutboundCommandWithOptions(shared_ptr<SendOutboundCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendOutboundCommandResponse sendOutboundCommand(shared_ptr<SendOutboundCommandRequest> request);
  CreateRoleResponse createRoleWithOptions(shared_ptr<CreateRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRoleResponse createRole(shared_ptr<CreateRoleRequest> request);
  ListSkillGroupResponse listSkillGroupWithOptions(shared_ptr<ListSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSkillGroupResponse listSkillGroup(shared_ptr<ListSkillGroupRequest> request);
  GrantRolesResponse grantRolesWithOptions(shared_ptr<GrantRolesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GrantRolesResponse grantRoles(shared_ptr<GrantRolesRequest> request);
  GetOuterCallCenterDataListResponse getOuterCallCenterDataListWithOptions(shared_ptr<GetOuterCallCenterDataListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOuterCallCenterDataListResponse getOuterCallCenterDataList(shared_ptr<GetOuterCallCenterDataListRequest> request);
  QueryTicketsResponse queryTicketsWithOptions(shared_ptr<QueryTicketsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTicketsResponse queryTickets(shared_ptr<QueryTicketsRequest> request);
  QueryTicketActionsResponse queryTicketActionsWithOptions(shared_ptr<QueryTicketActionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTicketActionsResponse queryTicketActions(shared_ptr<QueryTicketActionsRequest> request);
  TransferCallToAgentResponse transferCallToAgentWithOptions(shared_ptr<TransferCallToAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TransferCallToAgentResponse transferCallToAgent(shared_ptr<TransferCallToAgentRequest> request);
  FinishHotlineServiceResponse finishHotlineServiceWithOptions(shared_ptr<FinishHotlineServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FinishHotlineServiceResponse finishHotlineService(shared_ptr<FinishHotlineServiceRequest> request);
  JoinThirdCallResponse joinThirdCallWithOptions(shared_ptr<JoinThirdCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  JoinThirdCallResponse joinThirdCall(shared_ptr<JoinThirdCallRequest> request);
  ExecuteActivityResponse executeActivityWithOptions(shared_ptr<ExecuteActivityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteActivityResponse executeActivity(shared_ptr<ExecuteActivityRequest> request);
  GetGrantedRoleIdsResponse getGrantedRoleIdsWithOptions(shared_ptr<GetGrantedRoleIdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGrantedRoleIdsResponse getGrantedRoleIds(shared_ptr<GetGrantedRoleIdsRequest> request);
  ListHotlineRecordResponse listHotlineRecordWithOptions(shared_ptr<ListHotlineRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHotlineRecordResponse listHotlineRecord(shared_ptr<ListHotlineRecordRequest> request);
  GetNumLocationResponse getNumLocationWithOptions(shared_ptr<GetNumLocationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNumLocationResponse getNumLocation(shared_ptr<GetNumLocationRequest> request);
  CreateSkillGroupResponse createSkillGroupWithOptions(shared_ptr<CreateSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSkillGroupResponse createSkillGroup(shared_ptr<CreateSkillGroupRequest> request);
  CreateCustomerResponse createCustomerWithOptions(shared_ptr<CreateCustomerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCustomerResponse createCustomer(shared_ptr<CreateCustomerRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Scsp20200702

#endif
