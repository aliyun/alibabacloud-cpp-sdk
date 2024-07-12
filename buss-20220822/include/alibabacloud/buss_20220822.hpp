// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_BUSS20220822_H_
#define ALIBABACLOUD_BUSS20220822_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Buss20220822 {
class BusinessResultServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> actionCode{};
  shared_ptr<string> bussinessCode{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};
  shared_ptr<bool> success{};

  BusinessResultServiceRequest() {}

  explicit BusinessResultServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionCode) {
      res["ActionCode"] = boost::any(*actionCode);
    }
    if (bussinessCode) {
      res["BussinessCode"] = boost::any(*bussinessCode);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionCode") != m.end() && !m["ActionCode"].empty()) {
      actionCode = make_shared<string>(boost::any_cast<string>(m["ActionCode"]));
    }
    if (m.find("BussinessCode") != m.end() && !m["BussinessCode"].empty()) {
      bussinessCode = make_shared<string>(boost::any_cast<string>(m["BussinessCode"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~BusinessResultServiceRequest() = default;
};
class BusinessResultServiceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> actionCode{};
  shared_ptr<string> bussinessCode{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resultShrink{};
  shared_ptr<bool> success{};

  BusinessResultServiceShrinkRequest() {}

  explicit BusinessResultServiceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionCode) {
      res["ActionCode"] = boost::any(*actionCode);
    }
    if (bussinessCode) {
      res["BussinessCode"] = boost::any(*bussinessCode);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultShrink) {
      res["Result"] = boost::any(*resultShrink);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionCode") != m.end() && !m["ActionCode"].empty()) {
      actionCode = make_shared<string>(boost::any_cast<string>(m["ActionCode"]));
    }
    if (m.find("BussinessCode") != m.end() && !m["BussinessCode"].empty()) {
      bussinessCode = make_shared<string>(boost::any_cast<string>(m["BussinessCode"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      resultShrink = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~BusinessResultServiceShrinkRequest() = default;
};
class BusinessResultServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> count{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  BusinessResultServiceResponseBody() {}

  explicit BusinessResultServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~BusinessResultServiceResponseBody() = default;
};
class BusinessResultServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BusinessResultServiceResponseBody> body{};

  BusinessResultServiceResponse() {}

  explicit BusinessResultServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BusinessResultServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BusinessResultServiceResponseBody>(model1);
      }
    }
  }


  virtual ~BusinessResultServiceResponse() = default;
};
class CreateUserInvestigationInfoQueryTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataType{};
  shared_ptr<string> employeeId{};
  shared_ptr<long> endTime{};
  shared_ptr<string> ossFileName{};
  shared_ptr<long> startTime{};
  shared_ptr<string> userId{};

  CreateUserInvestigationInfoQueryTaskRequest() {}

  explicit CreateUserInvestigationInfoQueryTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (employeeId) {
      res["employeeId"] = boost::any(*employeeId);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (ossFileName) {
      res["ossFileName"] = boost::any(*ossFileName);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("employeeId") != m.end() && !m["employeeId"].empty()) {
      employeeId = make_shared<string>(boost::any_cast<string>(m["employeeId"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("ossFileName") != m.end() && !m["ossFileName"].empty()) {
      ossFileName = make_shared<string>(boost::any_cast<string>(m["ossFileName"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~CreateUserInvestigationInfoQueryTaskRequest() = default;
};
class CreateUserInvestigationInfoQueryTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  CreateUserInvestigationInfoQueryTaskResponseBodyData() {}

  explicit CreateUserInvestigationInfoQueryTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~CreateUserInvestigationInfoQueryTaskResponseBodyData() = default;
};
class CreateUserInvestigationInfoQueryTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateUserInvestigationInfoQueryTaskResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  CreateUserInvestigationInfoQueryTaskResponseBody() {}

  explicit CreateUserInvestigationInfoQueryTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateUserInvestigationInfoQueryTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateUserInvestigationInfoQueryTaskResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateUserInvestigationInfoQueryTaskResponseBody() = default;
};
class CreateUserInvestigationInfoQueryTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateUserInvestigationInfoQueryTaskResponseBody> body{};

  CreateUserInvestigationInfoQueryTaskResponse() {}

  explicit CreateUserInvestigationInfoQueryTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateUserInvestigationInfoQueryTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateUserInvestigationInfoQueryTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateUserInvestigationInfoQueryTaskResponse() = default;
};
class FindInstanceInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> bussinessCode{};
  shared_ptr<string> domain{};
  shared_ptr<long> endTime{};
  shared_ptr<map<string, boost::any>> extras{};
  shared_ptr<string> ip{};
  shared_ptr<bool> needDNS{};
  shared_ptr<long> startTime{};
  shared_ptr<string> url{};
  shared_ptr<string> userId{};

  FindInstanceInfoRequest() {}

  explicit FindInstanceInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bussinessCode) {
      res["bussinessCode"] = boost::any(*bussinessCode);
    }
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (extras) {
      res["extras"] = boost::any(*extras);
    }
    if (ip) {
      res["ip"] = boost::any(*ip);
    }
    if (needDNS) {
      res["needDNS"] = boost::any(*needDNS);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bussinessCode") != m.end() && !m["bussinessCode"].empty()) {
      bussinessCode = make_shared<string>(boost::any_cast<string>(m["bussinessCode"]));
    }
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("extras") != m.end() && !m["extras"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["extras"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extras = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ip") != m.end() && !m["ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["ip"]));
    }
    if (m.find("needDNS") != m.end() && !m["needDNS"].empty()) {
      needDNS = make_shared<bool>(boost::any_cast<bool>(m["needDNS"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~FindInstanceInfoRequest() = default;
};
class FindInstanceInfoShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bussinessCode{};
  shared_ptr<string> domain{};
  shared_ptr<long> endTime{};
  shared_ptr<string> extrasShrink{};
  shared_ptr<string> ip{};
  shared_ptr<bool> needDNS{};
  shared_ptr<long> startTime{};
  shared_ptr<string> url{};
  shared_ptr<string> userId{};

  FindInstanceInfoShrinkRequest() {}

  explicit FindInstanceInfoShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bussinessCode) {
      res["bussinessCode"] = boost::any(*bussinessCode);
    }
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (extrasShrink) {
      res["extras"] = boost::any(*extrasShrink);
    }
    if (ip) {
      res["ip"] = boost::any(*ip);
    }
    if (needDNS) {
      res["needDNS"] = boost::any(*needDNS);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bussinessCode") != m.end() && !m["bussinessCode"].empty()) {
      bussinessCode = make_shared<string>(boost::any_cast<string>(m["bussinessCode"]));
    }
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("extras") != m.end() && !m["extras"].empty()) {
      extrasShrink = make_shared<string>(boost::any_cast<string>(m["extras"]));
    }
    if (m.find("ip") != m.end() && !m["ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["ip"]));
    }
    if (m.find("needDNS") != m.end() && !m["needDNS"].empty()) {
      needDNS = make_shared<bool>(boost::any_cast<bool>(m["needDNS"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~FindInstanceInfoShrinkRequest() = default;
};
class FindInstanceInfoResponseBodyDataPegInstanceInfoListUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> gcLevel{};
  shared_ptr<string> hitWhiteReason{};
  shared_ptr<string> userId{};
  shared_ptr<string> userSite{};
  shared_ptr<bool> whiteUser{};

  FindInstanceInfoResponseBodyDataPegInstanceInfoListUserInfo() {}

  explicit FindInstanceInfoResponseBodyDataPegInstanceInfoListUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gcLevel) {
      res["GcLevel"] = boost::any(*gcLevel);
    }
    if (hitWhiteReason) {
      res["HitWhiteReason"] = boost::any(*hitWhiteReason);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userSite) {
      res["UserSite"] = boost::any(*userSite);
    }
    if (whiteUser) {
      res["WhiteUser"] = boost::any(*whiteUser);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GcLevel") != m.end() && !m["GcLevel"].empty()) {
      gcLevel = make_shared<string>(boost::any_cast<string>(m["GcLevel"]));
    }
    if (m.find("HitWhiteReason") != m.end() && !m["HitWhiteReason"].empty()) {
      hitWhiteReason = make_shared<string>(boost::any_cast<string>(m["HitWhiteReason"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserSite") != m.end() && !m["UserSite"].empty()) {
      userSite = make_shared<string>(boost::any_cast<string>(m["UserSite"]));
    }
    if (m.find("WhiteUser") != m.end() && !m["WhiteUser"].empty()) {
      whiteUser = make_shared<bool>(boost::any_cast<bool>(m["WhiteUser"]));
    }
  }


  virtual ~FindInstanceInfoResponseBodyDataPegInstanceInfoListUserInfo() = default;
};
class FindInstanceInfoResponseBodyDataPegInstanceInfoList : public Darabonba::Model {
public:
  shared_ptr<string> bussinessCode{};
  shared_ptr<map<string, boost::any>> coordinate{};
  shared_ptr<string> idType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> serviceCreatedTime{};
  shared_ptr<string> userId{};
  shared_ptr<FindInstanceInfoResponseBodyDataPegInstanceInfoListUserInfo> userInfo{};

  FindInstanceInfoResponseBodyDataPegInstanceInfoList() {}

  explicit FindInstanceInfoResponseBodyDataPegInstanceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bussinessCode) {
      res["BussinessCode"] = boost::any(*bussinessCode);
    }
    if (coordinate) {
      res["Coordinate"] = boost::any(*coordinate);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (serviceCreatedTime) {
      res["ServiceCreatedTime"] = boost::any(*serviceCreatedTime);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BussinessCode") != m.end() && !m["BussinessCode"].empty()) {
      bussinessCode = make_shared<string>(boost::any_cast<string>(m["BussinessCode"]));
    }
    if (m.find("Coordinate") != m.end() && !m["Coordinate"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Coordinate"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      coordinate = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ServiceCreatedTime") != m.end() && !m["ServiceCreatedTime"].empty()) {
      serviceCreatedTime = make_shared<string>(boost::any_cast<string>(m["ServiceCreatedTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        FindInstanceInfoResponseBodyDataPegInstanceInfoListUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<FindInstanceInfoResponseBodyDataPegInstanceInfoListUserInfo>(model1);
      }
    }
  }


  virtual ~FindInstanceInfoResponseBodyDataPegInstanceInfoList() = default;
};
class FindInstanceInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<FindInstanceInfoResponseBodyDataPegInstanceInfoList>> pegInstanceInfoList{};

  FindInstanceInfoResponseBodyData() {}

  explicit FindInstanceInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pegInstanceInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*pegInstanceInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PegInstanceInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PegInstanceInfoList") != m.end() && !m["PegInstanceInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["PegInstanceInfoList"].type()) {
        vector<FindInstanceInfoResponseBodyDataPegInstanceInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PegInstanceInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FindInstanceInfoResponseBodyDataPegInstanceInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pegInstanceInfoList = make_shared<vector<FindInstanceInfoResponseBodyDataPegInstanceInfoList>>(expect1);
      }
    }
  }


  virtual ~FindInstanceInfoResponseBodyData() = default;
};
class FindInstanceInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> count{};
  shared_ptr<FindInstanceInfoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  FindInstanceInfoResponseBody() {}

  explicit FindInstanceInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (count) {
      res["Count"] = boost::any(*count);
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
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        FindInstanceInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<FindInstanceInfoResponseBodyData>(model1);
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


  virtual ~FindInstanceInfoResponseBody() = default;
};
class FindInstanceInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FindInstanceInfoResponseBody> body{};

  FindInstanceInfoResponse() {}

  explicit FindInstanceInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FindInstanceInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FindInstanceInfoResponseBody>(model1);
      }
    }
  }


  virtual ~FindInstanceInfoResponse() = default;
};
class FindUserAvailbleResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> bussinessCode{};
  shared_ptr<long> currPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> userId{};

  FindUserAvailbleResourcesRequest() {}

  explicit FindUserAvailbleResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bussinessCode) {
      res["bussinessCode"] = boost::any(*bussinessCode);
    }
    if (currPage) {
      res["currPage"] = boost::any(*currPage);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bussinessCode") != m.end() && !m["bussinessCode"].empty()) {
      bussinessCode = make_shared<string>(boost::any_cast<string>(m["bussinessCode"]));
    }
    if (m.find("currPage") != m.end() && !m["currPage"].empty()) {
      currPage = make_shared<long>(boost::any_cast<long>(m["currPage"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~FindUserAvailbleResourcesRequest() = default;
};
class FindUserAvailbleResourcesResponseBodyDataPegCoordinates : public Darabonba::Model {
public:
  shared_ptr<string> bussinessCode{};
  shared_ptr<string> chargeType{};
  shared_ptr<map<string, boost::any>> coordinate{};
  shared_ptr<string> idType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};
  shared_ptr<string> releaseTime{};
  shared_ptr<string> resCreateTime{};
  shared_ptr<string> resourceStatus{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> serviceCreatedTime{};
  shared_ptr<string> userId{};

  FindUserAvailbleResourcesResponseBodyDataPegCoordinates() {}

  explicit FindUserAvailbleResourcesResponseBodyDataPegCoordinates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bussinessCode) {
      res["BussinessCode"] = boost::any(*bussinessCode);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (coordinate) {
      res["Coordinate"] = boost::any(*coordinate);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (releaseTime) {
      res["ReleaseTime"] = boost::any(*releaseTime);
    }
    if (resCreateTime) {
      res["ResCreateTime"] = boost::any(*resCreateTime);
    }
    if (resourceStatus) {
      res["ResourceStatus"] = boost::any(*resourceStatus);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (serviceCreatedTime) {
      res["ServiceCreatedTime"] = boost::any(*serviceCreatedTime);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BussinessCode") != m.end() && !m["BussinessCode"].empty()) {
      bussinessCode = make_shared<string>(boost::any_cast<string>(m["BussinessCode"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("Coordinate") != m.end() && !m["Coordinate"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Coordinate"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      coordinate = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ReleaseTime") != m.end() && !m["ReleaseTime"].empty()) {
      releaseTime = make_shared<string>(boost::any_cast<string>(m["ReleaseTime"]));
    }
    if (m.find("ResCreateTime") != m.end() && !m["ResCreateTime"].empty()) {
      resCreateTime = make_shared<string>(boost::any_cast<string>(m["ResCreateTime"]));
    }
    if (m.find("ResourceStatus") != m.end() && !m["ResourceStatus"].empty()) {
      resourceStatus = make_shared<string>(boost::any_cast<string>(m["ResourceStatus"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ServiceCreatedTime") != m.end() && !m["ServiceCreatedTime"].empty()) {
      serviceCreatedTime = make_shared<string>(boost::any_cast<string>(m["ServiceCreatedTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~FindUserAvailbleResourcesResponseBodyDataPegCoordinates() = default;
};
class FindUserAvailbleResourcesResponseBodyDataUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> gcLevel{};
  shared_ptr<string> hitWhiteReason{};
  shared_ptr<string> userId{};
  shared_ptr<string> userSite{};
  shared_ptr<bool> whiteUser{};

  FindUserAvailbleResourcesResponseBodyDataUserInfo() {}

  explicit FindUserAvailbleResourcesResponseBodyDataUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gcLevel) {
      res["GcLevel"] = boost::any(*gcLevel);
    }
    if (hitWhiteReason) {
      res["HitWhiteReason"] = boost::any(*hitWhiteReason);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userSite) {
      res["UserSite"] = boost::any(*userSite);
    }
    if (whiteUser) {
      res["WhiteUser"] = boost::any(*whiteUser);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GcLevel") != m.end() && !m["GcLevel"].empty()) {
      gcLevel = make_shared<string>(boost::any_cast<string>(m["GcLevel"]));
    }
    if (m.find("HitWhiteReason") != m.end() && !m["HitWhiteReason"].empty()) {
      hitWhiteReason = make_shared<string>(boost::any_cast<string>(m["HitWhiteReason"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserSite") != m.end() && !m["UserSite"].empty()) {
      userSite = make_shared<string>(boost::any_cast<string>(m["UserSite"]));
    }
    if (m.find("WhiteUser") != m.end() && !m["WhiteUser"].empty()) {
      whiteUser = make_shared<bool>(boost::any_cast<bool>(m["WhiteUser"]));
    }
  }


  virtual ~FindUserAvailbleResourcesResponseBodyDataUserInfo() = default;
};
class FindUserAvailbleResourcesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<FindUserAvailbleResourcesResponseBodyDataPegCoordinates>> pegCoordinates{};
  shared_ptr<FindUserAvailbleResourcesResponseBodyDataUserInfo> userInfo{};

  FindUserAvailbleResourcesResponseBodyData() {}

  explicit FindUserAvailbleResourcesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pegCoordinates) {
      vector<boost::any> temp1;
      for(auto item1:*pegCoordinates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PegCoordinates"] = boost::any(temp1);
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PegCoordinates") != m.end() && !m["PegCoordinates"].empty()) {
      if (typeid(vector<boost::any>) == m["PegCoordinates"].type()) {
        vector<FindUserAvailbleResourcesResponseBodyDataPegCoordinates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PegCoordinates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FindUserAvailbleResourcesResponseBodyDataPegCoordinates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pegCoordinates = make_shared<vector<FindUserAvailbleResourcesResponseBodyDataPegCoordinates>>(expect1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        FindUserAvailbleResourcesResponseBodyDataUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<FindUserAvailbleResourcesResponseBodyDataUserInfo>(model1);
      }
    }
  }


  virtual ~FindUserAvailbleResourcesResponseBodyData() = default;
};
class FindUserAvailbleResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> count{};
  shared_ptr<FindUserAvailbleResourcesResponseBodyData> data{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> message{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  FindUserAvailbleResourcesResponseBody() {}

  explicit FindUserAvailbleResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        FindUserAvailbleResourcesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<FindUserAvailbleResourcesResponseBodyData>(model1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~FindUserAvailbleResourcesResponseBody() = default;
};
class FindUserAvailbleResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FindUserAvailbleResourcesResponseBody> body{};

  FindUserAvailbleResourcesResponse() {}

  explicit FindUserAvailbleResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FindUserAvailbleResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FindUserAvailbleResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~FindUserAvailbleResourcesResponse() = default;
};
class PunishResourceSearchRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actionCodes{};
  shared_ptr<vector<string>> bussinessCodes{};
  shared_ptr<string> class_{};
  shared_ptr<string> domain{};
  shared_ptr<long> endDate{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ip{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> sourceCodes{};
  shared_ptr<long> startDate{};
  shared_ptr<string> status{};
  shared_ptr<string> url{};
  shared_ptr<vector<string>> userIds{};

  PunishResourceSearchRequest() {}

  explicit PunishResourceSearchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionCodes) {
      res["ActionCodes"] = boost::any(*actionCodes);
    }
    if (bussinessCodes) {
      res["BussinessCodes"] = boost::any(*bussinessCodes);
    }
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sourceCodes) {
      res["SourceCodes"] = boost::any(*sourceCodes);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (userIds) {
      res["UserIds"] = boost::any(*userIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionCodes") != m.end() && !m["ActionCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ActionCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ActionCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actionCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("BussinessCodes") != m.end() && !m["BussinessCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BussinessCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BussinessCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      bussinessCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SourceCodes") != m.end() && !m["SourceCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
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


  virtual ~PunishResourceSearchRequest() = default;
};
class PunishResourceSearchShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> actionCodesShrink{};
  shared_ptr<string> bussinessCodesShrink{};
  shared_ptr<string> class_{};
  shared_ptr<string> domain{};
  shared_ptr<long> endDate{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ip{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sourceCodesShrink{};
  shared_ptr<long> startDate{};
  shared_ptr<string> status{};
  shared_ptr<string> url{};
  shared_ptr<string> userIdsShrink{};

  PunishResourceSearchShrinkRequest() {}

  explicit PunishResourceSearchShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionCodesShrink) {
      res["ActionCodes"] = boost::any(*actionCodesShrink);
    }
    if (bussinessCodesShrink) {
      res["BussinessCodes"] = boost::any(*bussinessCodesShrink);
    }
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sourceCodesShrink) {
      res["SourceCodes"] = boost::any(*sourceCodesShrink);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (userIdsShrink) {
      res["UserIds"] = boost::any(*userIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionCodes") != m.end() && !m["ActionCodes"].empty()) {
      actionCodesShrink = make_shared<string>(boost::any_cast<string>(m["ActionCodes"]));
    }
    if (m.find("BussinessCodes") != m.end() && !m["BussinessCodes"].empty()) {
      bussinessCodesShrink = make_shared<string>(boost::any_cast<string>(m["BussinessCodes"]));
    }
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SourceCodes") != m.end() && !m["SourceCodes"].empty()) {
      sourceCodesShrink = make_shared<string>(boost::any_cast<string>(m["SourceCodes"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("UserIds") != m.end() && !m["UserIds"].empty()) {
      userIdsShrink = make_shared<string>(boost::any_cast<string>(m["UserIds"]));
    }
  }


  virtual ~PunishResourceSearchShrinkRequest() = default;
};
class PunishResourceSearchResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> actionCode{};
  shared_ptr<string> bussinessCode{};
  shared_ptr<string> class_{};
  shared_ptr<string> coordinate{};
  shared_ptr<string> creator{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> domain{};
  shared_ptr<string> extras{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ip{};
  shared_ptr<string> modifier{};
  shared_ptr<string> objectId{};
  shared_ptr<string> objectType{};
  shared_ptr<string> objectValue{};
  shared_ptr<string> punishFrom{};
  shared_ptr<string> reason{};
  shared_ptr<long> requestId{};
  shared_ptr<string> sourceCode{};
  shared_ptr<string> status{};
  shared_ptr<string> url{};
  shared_ptr<string> userId{};

  PunishResourceSearchResponseBodyDataList() {}

  explicit PunishResourceSearchResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionCode) {
      res["ActionCode"] = boost::any(*actionCode);
    }
    if (bussinessCode) {
      res["BussinessCode"] = boost::any(*bussinessCode);
    }
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    if (coordinate) {
      res["Coordinate"] = boost::any(*coordinate);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (extras) {
      res["Extras"] = boost::any(*extras);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (modifier) {
      res["Modifier"] = boost::any(*modifier);
    }
    if (objectId) {
      res["ObjectId"] = boost::any(*objectId);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (objectValue) {
      res["ObjectValue"] = boost::any(*objectValue);
    }
    if (punishFrom) {
      res["PunishFrom"] = boost::any(*punishFrom);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sourceCode) {
      res["SourceCode"] = boost::any(*sourceCode);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionCode") != m.end() && !m["ActionCode"].empty()) {
      actionCode = make_shared<string>(boost::any_cast<string>(m["ActionCode"]));
    }
    if (m.find("BussinessCode") != m.end() && !m["BussinessCode"].empty()) {
      bussinessCode = make_shared<string>(boost::any_cast<string>(m["BussinessCode"]));
    }
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
    if (m.find("Coordinate") != m.end() && !m["Coordinate"].empty()) {
      coordinate = make_shared<string>(boost::any_cast<string>(m["Coordinate"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Extras") != m.end() && !m["Extras"].empty()) {
      extras = make_shared<string>(boost::any_cast<string>(m["Extras"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Modifier") != m.end() && !m["Modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["Modifier"]));
    }
    if (m.find("ObjectId") != m.end() && !m["ObjectId"].empty()) {
      objectId = make_shared<string>(boost::any_cast<string>(m["ObjectId"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("ObjectValue") != m.end() && !m["ObjectValue"].empty()) {
      objectValue = make_shared<string>(boost::any_cast<string>(m["ObjectValue"]));
    }
    if (m.find("PunishFrom") != m.end() && !m["PunishFrom"].empty()) {
      punishFrom = make_shared<string>(boost::any_cast<string>(m["PunishFrom"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<long>(boost::any_cast<long>(m["RequestId"]));
    }
    if (m.find("SourceCode") != m.end() && !m["SourceCode"].empty()) {
      sourceCode = make_shared<string>(boost::any_cast<string>(m["SourceCode"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~PunishResourceSearchResponseBodyDataList() = default;
};
class PunishResourceSearchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<PunishResourceSearchResponseBodyDataList>> dataList{};
  shared_ptr<string> message{};
  shared_ptr<string> success{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> viewCount{};

  PunishResourceSearchResponseBody() {}

  explicit PunishResourceSearchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataList"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (viewCount) {
      res["ViewCount"] = boost::any(*viewCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DataList") != m.end() && !m["DataList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataList"].type()) {
        vector<PunishResourceSearchResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PunishResourceSearchResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<PunishResourceSearchResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("ViewCount") != m.end() && !m["ViewCount"].empty()) {
      viewCount = make_shared<long>(boost::any_cast<long>(m["ViewCount"]));
    }
  }


  virtual ~PunishResourceSearchResponseBody() = default;
};
class PunishResourceSearchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PunishResourceSearchResponseBody> body{};

  PunishResourceSearchResponse() {}

  explicit PunishResourceSearchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PunishResourceSearchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PunishResourceSearchResponseBody>(model1);
      }
    }
  }


  virtual ~PunishResourceSearchResponse() = default;
};
class RiskEventSyncRequest : public Darabonba::Model {
public:
  shared_ptr<bool> deleted{};
  shared_ptr<long> discoveryTime{};
  shared_ptr<string> eventName{};
  shared_ptr<string> eventNumber{};
  shared_ptr<string> relevanceBu{};
  shared_ptr<string> riskDetail{};
  shared_ptr<string> riskEffectType{};
  shared_ptr<string> riskLevel{};
  shared_ptr<string> riskType{};
  shared_ptr<string> source{};
  shared_ptr<string> submitter{};

  RiskEventSyncRequest() {}

  explicit RiskEventSyncRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (discoveryTime) {
      res["DiscoveryTime"] = boost::any(*discoveryTime);
    }
    if (eventName) {
      res["EventName"] = boost::any(*eventName);
    }
    if (eventNumber) {
      res["EventNumber"] = boost::any(*eventNumber);
    }
    if (relevanceBu) {
      res["RelevanceBu"] = boost::any(*relevanceBu);
    }
    if (riskDetail) {
      res["RiskDetail"] = boost::any(*riskDetail);
    }
    if (riskEffectType) {
      res["RiskEffectType"] = boost::any(*riskEffectType);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (riskType) {
      res["RiskType"] = boost::any(*riskType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (submitter) {
      res["Submitter"] = boost::any(*submitter);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("DiscoveryTime") != m.end() && !m["DiscoveryTime"].empty()) {
      discoveryTime = make_shared<long>(boost::any_cast<long>(m["DiscoveryTime"]));
    }
    if (m.find("EventName") != m.end() && !m["EventName"].empty()) {
      eventName = make_shared<string>(boost::any_cast<string>(m["EventName"]));
    }
    if (m.find("EventNumber") != m.end() && !m["EventNumber"].empty()) {
      eventNumber = make_shared<string>(boost::any_cast<string>(m["EventNumber"]));
    }
    if (m.find("RelevanceBu") != m.end() && !m["RelevanceBu"].empty()) {
      relevanceBu = make_shared<string>(boost::any_cast<string>(m["RelevanceBu"]));
    }
    if (m.find("RiskDetail") != m.end() && !m["RiskDetail"].empty()) {
      riskDetail = make_shared<string>(boost::any_cast<string>(m["RiskDetail"]));
    }
    if (m.find("RiskEffectType") != m.end() && !m["RiskEffectType"].empty()) {
      riskEffectType = make_shared<string>(boost::any_cast<string>(m["RiskEffectType"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<string>(boost::any_cast<string>(m["RiskLevel"]));
    }
    if (m.find("RiskType") != m.end() && !m["RiskType"].empty()) {
      riskType = make_shared<string>(boost::any_cast<string>(m["RiskType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Submitter") != m.end() && !m["Submitter"].empty()) {
      submitter = make_shared<string>(boost::any_cast<string>(m["Submitter"]));
    }
  }


  virtual ~RiskEventSyncRequest() = default;
};
class RiskEventSyncResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> count{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  RiskEventSyncResponseBody() {}

  explicit RiskEventSyncResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RiskEventSyncResponseBody() = default;
};
class RiskEventSyncResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RiskEventSyncResponseBody> body{};

  RiskEventSyncResponse() {}

  explicit RiskEventSyncResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RiskEventSyncResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RiskEventSyncResponseBody>(model1);
      }
    }
  }


  virtual ~RiskEventSyncResponse() = default;
};
class SearchPunishEventsRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliUid{};
  shared_ptr<vector<string>> bussinessCodes{};
  shared_ptr<vector<string>> caseCodes{};
  shared_ptr<vector<string>> eventCodes{};
  shared_ptr<string> resourceId{};

  SearchPunishEventsRequest() {}

  explicit SearchPunishEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (bussinessCodes) {
      res["BussinessCodes"] = boost::any(*bussinessCodes);
    }
    if (caseCodes) {
      res["CaseCodes"] = boost::any(*caseCodes);
    }
    if (eventCodes) {
      res["EventCodes"] = boost::any(*eventCodes);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("BussinessCodes") != m.end() && !m["BussinessCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BussinessCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BussinessCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      bussinessCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CaseCodes") != m.end() && !m["CaseCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CaseCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CaseCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      caseCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EventCodes") != m.end() && !m["EventCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EventCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EventCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      eventCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
  }


  virtual ~SearchPunishEventsRequest() = default;
};
class SearchPunishEventsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliUid{};
  shared_ptr<string> bussinessCodesShrink{};
  shared_ptr<string> caseCodesShrink{};
  shared_ptr<string> eventCodesShrink{};
  shared_ptr<string> resourceId{};

  SearchPunishEventsShrinkRequest() {}

  explicit SearchPunishEventsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (bussinessCodesShrink) {
      res["BussinessCodes"] = boost::any(*bussinessCodesShrink);
    }
    if (caseCodesShrink) {
      res["CaseCodes"] = boost::any(*caseCodesShrink);
    }
    if (eventCodesShrink) {
      res["EventCodes"] = boost::any(*eventCodesShrink);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("BussinessCodes") != m.end() && !m["BussinessCodes"].empty()) {
      bussinessCodesShrink = make_shared<string>(boost::any_cast<string>(m["BussinessCodes"]));
    }
    if (m.find("CaseCodes") != m.end() && !m["CaseCodes"].empty()) {
      caseCodesShrink = make_shared<string>(boost::any_cast<string>(m["CaseCodes"]));
    }
    if (m.find("EventCodes") != m.end() && !m["EventCodes"].empty()) {
      eventCodesShrink = make_shared<string>(boost::any_cast<string>(m["EventCodes"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
  }


  virtual ~SearchPunishEventsShrinkRequest() = default;
};
class SearchPunishEventsResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> bussinessCode{};
  shared_ptr<string> caseCode{};
  shared_ptr<long> recordsCount{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> tipsCode{};
  shared_ptr<string> userId{};

  SearchPunishEventsResponseBodyDataList() {}

  explicit SearchPunishEventsResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bussinessCode) {
      res["BussinessCode"] = boost::any(*bussinessCode);
    }
    if (caseCode) {
      res["CaseCode"] = boost::any(*caseCode);
    }
    if (recordsCount) {
      res["RecordsCount"] = boost::any(*recordsCount);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tipsCode) {
      res["TipsCode"] = boost::any(*tipsCode);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BussinessCode") != m.end() && !m["BussinessCode"].empty()) {
      bussinessCode = make_shared<string>(boost::any_cast<string>(m["BussinessCode"]));
    }
    if (m.find("CaseCode") != m.end() && !m["CaseCode"].empty()) {
      caseCode = make_shared<string>(boost::any_cast<string>(m["CaseCode"]));
    }
    if (m.find("RecordsCount") != m.end() && !m["RecordsCount"].empty()) {
      recordsCount = make_shared<long>(boost::any_cast<long>(m["RecordsCount"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("TipsCode") != m.end() && !m["TipsCode"].empty()) {
      tipsCode = make_shared<string>(boost::any_cast<string>(m["TipsCode"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~SearchPunishEventsResponseBodyDataList() = default;
};
class SearchPunishEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<SearchPunishEventsResponseBodyDataList>> dataList{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  SearchPunishEventsResponseBody() {}

  explicit SearchPunishEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataList"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DataList") != m.end() && !m["DataList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataList"].type()) {
        vector<SearchPunishEventsResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchPunishEventsResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<SearchPunishEventsResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~SearchPunishEventsResponseBody() = default;
};
class SearchPunishEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchPunishEventsResponseBody> body{};

  SearchPunishEventsResponse() {}

  explicit SearchPunishEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchPunishEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchPunishEventsResponseBody>(model1);
      }
    }
  }


  virtual ~SearchPunishEventsResponse() = default;
};
class SearchPunishRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actionCodes{};
  shared_ptr<string> aliUid{};
  shared_ptr<string> bussinessCodes{};
  shared_ptr<vector<string>> caseCodes{};
  shared_ptr<string> domain{};
  shared_ptr<long> endTime{};
  shared_ptr<vector<string>> eventCodes{};
  shared_ptr<string> ip{};
  shared_ptr<string> page{};
  shared_ptr<string> pageSize{};
  shared_ptr<vector<string>> punishStatus{};
  shared_ptr<string> resourceId{};
  shared_ptr<vector<string>> sourceCodes{};
  shared_ptr<long> startTime{};
  shared_ptr<string> url{};
  shared_ptr<string> urlFuzzy{};

  SearchPunishRecordsRequest() {}

  explicit SearchPunishRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionCodes) {
      res["ActionCodes"] = boost::any(*actionCodes);
    }
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (bussinessCodes) {
      res["BussinessCodes"] = boost::any(*bussinessCodes);
    }
    if (caseCodes) {
      res["CaseCodes"] = boost::any(*caseCodes);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (eventCodes) {
      res["EventCodes"] = boost::any(*eventCodes);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (punishStatus) {
      res["PunishStatus"] = boost::any(*punishStatus);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (sourceCodes) {
      res["SourceCodes"] = boost::any(*sourceCodes);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (urlFuzzy) {
      res["UrlFuzzy"] = boost::any(*urlFuzzy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionCodes") != m.end() && !m["ActionCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ActionCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ActionCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actionCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("BussinessCodes") != m.end() && !m["BussinessCodes"].empty()) {
      bussinessCodes = make_shared<string>(boost::any_cast<string>(m["BussinessCodes"]));
    }
    if (m.find("CaseCodes") != m.end() && !m["CaseCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CaseCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CaseCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      caseCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("EventCodes") != m.end() && !m["EventCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EventCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EventCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      eventCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<string>(boost::any_cast<string>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("PunishStatus") != m.end() && !m["PunishStatus"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PunishStatus"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PunishStatus"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      punishStatus = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("SourceCodes") != m.end() && !m["SourceCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("UrlFuzzy") != m.end() && !m["UrlFuzzy"].empty()) {
      urlFuzzy = make_shared<string>(boost::any_cast<string>(m["UrlFuzzy"]));
    }
  }


  virtual ~SearchPunishRecordsRequest() = default;
};
class SearchPunishRecordsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> actionCodesShrink{};
  shared_ptr<string> aliUid{};
  shared_ptr<string> bussinessCodes{};
  shared_ptr<string> caseCodesShrink{};
  shared_ptr<string> domain{};
  shared_ptr<long> endTime{};
  shared_ptr<string> eventCodesShrink{};
  shared_ptr<string> ip{};
  shared_ptr<string> page{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> punishStatusShrink{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> sourceCodesShrink{};
  shared_ptr<long> startTime{};
  shared_ptr<string> url{};
  shared_ptr<string> urlFuzzy{};

  SearchPunishRecordsShrinkRequest() {}

  explicit SearchPunishRecordsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionCodesShrink) {
      res["ActionCodes"] = boost::any(*actionCodesShrink);
    }
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (bussinessCodes) {
      res["BussinessCodes"] = boost::any(*bussinessCodes);
    }
    if (caseCodesShrink) {
      res["CaseCodes"] = boost::any(*caseCodesShrink);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (eventCodesShrink) {
      res["EventCodes"] = boost::any(*eventCodesShrink);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (punishStatusShrink) {
      res["PunishStatus"] = boost::any(*punishStatusShrink);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (sourceCodesShrink) {
      res["SourceCodes"] = boost::any(*sourceCodesShrink);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (urlFuzzy) {
      res["UrlFuzzy"] = boost::any(*urlFuzzy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionCodes") != m.end() && !m["ActionCodes"].empty()) {
      actionCodesShrink = make_shared<string>(boost::any_cast<string>(m["ActionCodes"]));
    }
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("BussinessCodes") != m.end() && !m["BussinessCodes"].empty()) {
      bussinessCodes = make_shared<string>(boost::any_cast<string>(m["BussinessCodes"]));
    }
    if (m.find("CaseCodes") != m.end() && !m["CaseCodes"].empty()) {
      caseCodesShrink = make_shared<string>(boost::any_cast<string>(m["CaseCodes"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("EventCodes") != m.end() && !m["EventCodes"].empty()) {
      eventCodesShrink = make_shared<string>(boost::any_cast<string>(m["EventCodes"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<string>(boost::any_cast<string>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("PunishStatus") != m.end() && !m["PunishStatus"].empty()) {
      punishStatusShrink = make_shared<string>(boost::any_cast<string>(m["PunishStatus"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("SourceCodes") != m.end() && !m["SourceCodes"].empty()) {
      sourceCodesShrink = make_shared<string>(boost::any_cast<string>(m["SourceCodes"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("UrlFuzzy") != m.end() && !m["UrlFuzzy"].empty()) {
      urlFuzzy = make_shared<string>(boost::any_cast<string>(m["UrlFuzzy"]));
    }
  }


  virtual ~SearchPunishRecordsShrinkRequest() = default;
};
class SearchPunishRecordsResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> actionCode{};
  shared_ptr<string> antiStatus{};
  shared_ptr<string> bussinessCode{};
  shared_ptr<string> caseCode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> domain{};
  shared_ptr<string> eventCode{};
  shared_ptr<string> ip{};
  shared_ptr<string> punishStatus{};
  shared_ptr<string> reason{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> tipsCode{};
  shared_ptr<string> url{};

  SearchPunishRecordsResponseBodyDataList() {}

  explicit SearchPunishRecordsResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionCode) {
      res["ActionCode"] = boost::any(*actionCode);
    }
    if (antiStatus) {
      res["AntiStatus"] = boost::any(*antiStatus);
    }
    if (bussinessCode) {
      res["BussinessCode"] = boost::any(*bussinessCode);
    }
    if (caseCode) {
      res["CaseCode"] = boost::any(*caseCode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (eventCode) {
      res["EventCode"] = boost::any(*eventCode);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (punishStatus) {
      res["PunishStatus"] = boost::any(*punishStatus);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tipsCode) {
      res["TipsCode"] = boost::any(*tipsCode);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionCode") != m.end() && !m["ActionCode"].empty()) {
      actionCode = make_shared<string>(boost::any_cast<string>(m["ActionCode"]));
    }
    if (m.find("AntiStatus") != m.end() && !m["AntiStatus"].empty()) {
      antiStatus = make_shared<string>(boost::any_cast<string>(m["AntiStatus"]));
    }
    if (m.find("BussinessCode") != m.end() && !m["BussinessCode"].empty()) {
      bussinessCode = make_shared<string>(boost::any_cast<string>(m["BussinessCode"]));
    }
    if (m.find("CaseCode") != m.end() && !m["CaseCode"].empty()) {
      caseCode = make_shared<string>(boost::any_cast<string>(m["CaseCode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("EventCode") != m.end() && !m["EventCode"].empty()) {
      eventCode = make_shared<string>(boost::any_cast<string>(m["EventCode"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("PunishStatus") != m.end() && !m["PunishStatus"].empty()) {
      punishStatus = make_shared<string>(boost::any_cast<string>(m["PunishStatus"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("TipsCode") != m.end() && !m["TipsCode"].empty()) {
      tipsCode = make_shared<string>(boost::any_cast<string>(m["TipsCode"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~SearchPunishRecordsResponseBodyDataList() = default;
};
class SearchPunishRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<SearchPunishRecordsResponseBodyDataList>> dataList{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  SearchPunishRecordsResponseBody() {}

  explicit SearchPunishRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataList"] = boost::any(temp1);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DataList") != m.end() && !m["DataList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataList"].type()) {
        vector<SearchPunishRecordsResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchPunishRecordsResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<SearchPunishRecordsResponseBodyDataList>>(expect1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~SearchPunishRecordsResponseBody() = default;
};
class SearchPunishRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchPunishRecordsResponseBody> body{};

  SearchPunishRecordsResponse() {}

  explicit SearchPunishRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchPunishRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchPunishRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~SearchPunishRecordsResponse() = default;
};
class SearchPunishRequestRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> antiStatuses{};
  shared_ptr<vector<string>> bussinessCodes{};
  shared_ptr<string> class_{};
  shared_ptr<long> endDate{};
  shared_ptr<vector<string>> eventCodes{};
  shared_ptr<string> extRequestId{};
  shared_ptr<long> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> punishDomain{};
  shared_ptr<string> punishIp{};
  shared_ptr<vector<string>> punishStatuses{};
  shared_ptr<string> punishUrl{};
  shared_ptr<string> punishUrlFull{};
  shared_ptr<vector<string>> sourceCodes{};
  shared_ptr<long> startDate{};
  shared_ptr<vector<string>> userIds{};

  SearchPunishRequestRequest() {}

  explicit SearchPunishRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (antiStatuses) {
      res["AntiStatuses"] = boost::any(*antiStatuses);
    }
    if (bussinessCodes) {
      res["BussinessCodes"] = boost::any(*bussinessCodes);
    }
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (eventCodes) {
      res["EventCodes"] = boost::any(*eventCodes);
    }
    if (extRequestId) {
      res["ExtRequestId"] = boost::any(*extRequestId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (punishDomain) {
      res["PunishDomain"] = boost::any(*punishDomain);
    }
    if (punishIp) {
      res["PunishIp"] = boost::any(*punishIp);
    }
    if (punishStatuses) {
      res["PunishStatuses"] = boost::any(*punishStatuses);
    }
    if (punishUrl) {
      res["PunishUrl"] = boost::any(*punishUrl);
    }
    if (punishUrlFull) {
      res["PunishUrlFull"] = boost::any(*punishUrlFull);
    }
    if (sourceCodes) {
      res["SourceCodes"] = boost::any(*sourceCodes);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (userIds) {
      res["UserIds"] = boost::any(*userIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AntiStatuses") != m.end() && !m["AntiStatuses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AntiStatuses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AntiStatuses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      antiStatuses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("BussinessCodes") != m.end() && !m["BussinessCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BussinessCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BussinessCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      bussinessCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("EventCodes") != m.end() && !m["EventCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EventCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EventCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      eventCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ExtRequestId") != m.end() && !m["ExtRequestId"].empty()) {
      extRequestId = make_shared<string>(boost::any_cast<string>(m["ExtRequestId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PunishDomain") != m.end() && !m["PunishDomain"].empty()) {
      punishDomain = make_shared<string>(boost::any_cast<string>(m["PunishDomain"]));
    }
    if (m.find("PunishIp") != m.end() && !m["PunishIp"].empty()) {
      punishIp = make_shared<string>(boost::any_cast<string>(m["PunishIp"]));
    }
    if (m.find("PunishStatuses") != m.end() && !m["PunishStatuses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PunishStatuses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PunishStatuses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      punishStatuses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PunishUrl") != m.end() && !m["PunishUrl"].empty()) {
      punishUrl = make_shared<string>(boost::any_cast<string>(m["PunishUrl"]));
    }
    if (m.find("PunishUrlFull") != m.end() && !m["PunishUrlFull"].empty()) {
      punishUrlFull = make_shared<string>(boost::any_cast<string>(m["PunishUrlFull"]));
    }
    if (m.find("SourceCodes") != m.end() && !m["SourceCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
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


  virtual ~SearchPunishRequestRequest() = default;
};
class SearchPunishRequestShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> antiStatusesShrink{};
  shared_ptr<string> bussinessCodesShrink{};
  shared_ptr<string> class_{};
  shared_ptr<long> endDate{};
  shared_ptr<string> eventCodesShrink{};
  shared_ptr<string> extRequestId{};
  shared_ptr<long> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> punishDomain{};
  shared_ptr<string> punishIp{};
  shared_ptr<string> punishStatusesShrink{};
  shared_ptr<string> punishUrl{};
  shared_ptr<string> punishUrlFull{};
  shared_ptr<string> sourceCodesShrink{};
  shared_ptr<long> startDate{};
  shared_ptr<string> userIdsShrink{};

  SearchPunishRequestShrinkRequest() {}

  explicit SearchPunishRequestShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (antiStatusesShrink) {
      res["AntiStatuses"] = boost::any(*antiStatusesShrink);
    }
    if (bussinessCodesShrink) {
      res["BussinessCodes"] = boost::any(*bussinessCodesShrink);
    }
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (eventCodesShrink) {
      res["EventCodes"] = boost::any(*eventCodesShrink);
    }
    if (extRequestId) {
      res["ExtRequestId"] = boost::any(*extRequestId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (punishDomain) {
      res["PunishDomain"] = boost::any(*punishDomain);
    }
    if (punishIp) {
      res["PunishIp"] = boost::any(*punishIp);
    }
    if (punishStatusesShrink) {
      res["PunishStatuses"] = boost::any(*punishStatusesShrink);
    }
    if (punishUrl) {
      res["PunishUrl"] = boost::any(*punishUrl);
    }
    if (punishUrlFull) {
      res["PunishUrlFull"] = boost::any(*punishUrlFull);
    }
    if (sourceCodesShrink) {
      res["SourceCodes"] = boost::any(*sourceCodesShrink);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (userIdsShrink) {
      res["UserIds"] = boost::any(*userIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AntiStatuses") != m.end() && !m["AntiStatuses"].empty()) {
      antiStatusesShrink = make_shared<string>(boost::any_cast<string>(m["AntiStatuses"]));
    }
    if (m.find("BussinessCodes") != m.end() && !m["BussinessCodes"].empty()) {
      bussinessCodesShrink = make_shared<string>(boost::any_cast<string>(m["BussinessCodes"]));
    }
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("EventCodes") != m.end() && !m["EventCodes"].empty()) {
      eventCodesShrink = make_shared<string>(boost::any_cast<string>(m["EventCodes"]));
    }
    if (m.find("ExtRequestId") != m.end() && !m["ExtRequestId"].empty()) {
      extRequestId = make_shared<string>(boost::any_cast<string>(m["ExtRequestId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PunishDomain") != m.end() && !m["PunishDomain"].empty()) {
      punishDomain = make_shared<string>(boost::any_cast<string>(m["PunishDomain"]));
    }
    if (m.find("PunishIp") != m.end() && !m["PunishIp"].empty()) {
      punishIp = make_shared<string>(boost::any_cast<string>(m["PunishIp"]));
    }
    if (m.find("PunishStatuses") != m.end() && !m["PunishStatuses"].empty()) {
      punishStatusesShrink = make_shared<string>(boost::any_cast<string>(m["PunishStatuses"]));
    }
    if (m.find("PunishUrl") != m.end() && !m["PunishUrl"].empty()) {
      punishUrl = make_shared<string>(boost::any_cast<string>(m["PunishUrl"]));
    }
    if (m.find("PunishUrlFull") != m.end() && !m["PunishUrlFull"].empty()) {
      punishUrlFull = make_shared<string>(boost::any_cast<string>(m["PunishUrlFull"]));
    }
    if (m.find("SourceCodes") != m.end() && !m["SourceCodes"].empty()) {
      sourceCodesShrink = make_shared<string>(boost::any_cast<string>(m["SourceCodes"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("UserIds") != m.end() && !m["UserIds"].empty()) {
      userIdsShrink = make_shared<string>(boost::any_cast<string>(m["UserIds"]));
    }
  }


  virtual ~SearchPunishRequestShrinkRequest() = default;
};
class SearchPunishRequestResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> antiPunishRespTime{};
  shared_ptr<string> antiPunishTime{};
  shared_ptr<string> antiResult{};
  shared_ptr<string> antiStatus{};
  shared_ptr<string> bussinessCode{};
  shared_ptr<string> caseCode{};
  shared_ptr<string> caseExtendCode{};
  shared_ptr<string> caseSubCode{};
  shared_ptr<string> class_{};
  shared_ptr<string> creator{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> eventCode{};
  shared_ptr<string> expectedRemoveTime{};
  shared_ptr<string> extRequestId{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ipString{};
  shared_ptr<string> modifier{};
  shared_ptr<string> punishDomain{};
  shared_ptr<string> punishIp{};
  shared_ptr<string> punishRequest{};
  shared_ptr<string> punishRespTime{};
  shared_ptr<string> punishResult{};
  shared_ptr<string> punishStatus{};
  shared_ptr<string> punishTime{};
  shared_ptr<string> punishUrl{};
  shared_ptr<string> reason{};
  shared_ptr<string> sourceCode{};
  shared_ptr<string> userId{};

  SearchPunishRequestResponseBodyDataList() {}

  explicit SearchPunishRequestResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (antiPunishRespTime) {
      res["AntiPunishRespTime"] = boost::any(*antiPunishRespTime);
    }
    if (antiPunishTime) {
      res["AntiPunishTime"] = boost::any(*antiPunishTime);
    }
    if (antiResult) {
      res["AntiResult"] = boost::any(*antiResult);
    }
    if (antiStatus) {
      res["AntiStatus"] = boost::any(*antiStatus);
    }
    if (bussinessCode) {
      res["BussinessCode"] = boost::any(*bussinessCode);
    }
    if (caseCode) {
      res["CaseCode"] = boost::any(*caseCode);
    }
    if (caseExtendCode) {
      res["CaseExtendCode"] = boost::any(*caseExtendCode);
    }
    if (caseSubCode) {
      res["CaseSubCode"] = boost::any(*caseSubCode);
    }
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (eventCode) {
      res["EventCode"] = boost::any(*eventCode);
    }
    if (expectedRemoveTime) {
      res["ExpectedRemoveTime"] = boost::any(*expectedRemoveTime);
    }
    if (extRequestId) {
      res["ExtRequestId"] = boost::any(*extRequestId);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ipString) {
      res["IpString"] = boost::any(*ipString);
    }
    if (modifier) {
      res["Modifier"] = boost::any(*modifier);
    }
    if (punishDomain) {
      res["PunishDomain"] = boost::any(*punishDomain);
    }
    if (punishIp) {
      res["PunishIp"] = boost::any(*punishIp);
    }
    if (punishRequest) {
      res["PunishRequest"] = boost::any(*punishRequest);
    }
    if (punishRespTime) {
      res["PunishRespTime"] = boost::any(*punishRespTime);
    }
    if (punishResult) {
      res["PunishResult"] = boost::any(*punishResult);
    }
    if (punishStatus) {
      res["PunishStatus"] = boost::any(*punishStatus);
    }
    if (punishTime) {
      res["PunishTime"] = boost::any(*punishTime);
    }
    if (punishUrl) {
      res["PunishUrl"] = boost::any(*punishUrl);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (sourceCode) {
      res["SourceCode"] = boost::any(*sourceCode);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AntiPunishRespTime") != m.end() && !m["AntiPunishRespTime"].empty()) {
      antiPunishRespTime = make_shared<string>(boost::any_cast<string>(m["AntiPunishRespTime"]));
    }
    if (m.find("AntiPunishTime") != m.end() && !m["AntiPunishTime"].empty()) {
      antiPunishTime = make_shared<string>(boost::any_cast<string>(m["AntiPunishTime"]));
    }
    if (m.find("AntiResult") != m.end() && !m["AntiResult"].empty()) {
      antiResult = make_shared<string>(boost::any_cast<string>(m["AntiResult"]));
    }
    if (m.find("AntiStatus") != m.end() && !m["AntiStatus"].empty()) {
      antiStatus = make_shared<string>(boost::any_cast<string>(m["AntiStatus"]));
    }
    if (m.find("BussinessCode") != m.end() && !m["BussinessCode"].empty()) {
      bussinessCode = make_shared<string>(boost::any_cast<string>(m["BussinessCode"]));
    }
    if (m.find("CaseCode") != m.end() && !m["CaseCode"].empty()) {
      caseCode = make_shared<string>(boost::any_cast<string>(m["CaseCode"]));
    }
    if (m.find("CaseExtendCode") != m.end() && !m["CaseExtendCode"].empty()) {
      caseExtendCode = make_shared<string>(boost::any_cast<string>(m["CaseExtendCode"]));
    }
    if (m.find("CaseSubCode") != m.end() && !m["CaseSubCode"].empty()) {
      caseSubCode = make_shared<string>(boost::any_cast<string>(m["CaseSubCode"]));
    }
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("EventCode") != m.end() && !m["EventCode"].empty()) {
      eventCode = make_shared<string>(boost::any_cast<string>(m["EventCode"]));
    }
    if (m.find("ExpectedRemoveTime") != m.end() && !m["ExpectedRemoveTime"].empty()) {
      expectedRemoveTime = make_shared<string>(boost::any_cast<string>(m["ExpectedRemoveTime"]));
    }
    if (m.find("ExtRequestId") != m.end() && !m["ExtRequestId"].empty()) {
      extRequestId = make_shared<string>(boost::any_cast<string>(m["ExtRequestId"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IpString") != m.end() && !m["IpString"].empty()) {
      ipString = make_shared<string>(boost::any_cast<string>(m["IpString"]));
    }
    if (m.find("Modifier") != m.end() && !m["Modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["Modifier"]));
    }
    if (m.find("PunishDomain") != m.end() && !m["PunishDomain"].empty()) {
      punishDomain = make_shared<string>(boost::any_cast<string>(m["PunishDomain"]));
    }
    if (m.find("PunishIp") != m.end() && !m["PunishIp"].empty()) {
      punishIp = make_shared<string>(boost::any_cast<string>(m["PunishIp"]));
    }
    if (m.find("PunishRequest") != m.end() && !m["PunishRequest"].empty()) {
      punishRequest = make_shared<string>(boost::any_cast<string>(m["PunishRequest"]));
    }
    if (m.find("PunishRespTime") != m.end() && !m["PunishRespTime"].empty()) {
      punishRespTime = make_shared<string>(boost::any_cast<string>(m["PunishRespTime"]));
    }
    if (m.find("PunishResult") != m.end() && !m["PunishResult"].empty()) {
      punishResult = make_shared<string>(boost::any_cast<string>(m["PunishResult"]));
    }
    if (m.find("PunishStatus") != m.end() && !m["PunishStatus"].empty()) {
      punishStatus = make_shared<string>(boost::any_cast<string>(m["PunishStatus"]));
    }
    if (m.find("PunishTime") != m.end() && !m["PunishTime"].empty()) {
      punishTime = make_shared<string>(boost::any_cast<string>(m["PunishTime"]));
    }
    if (m.find("PunishUrl") != m.end() && !m["PunishUrl"].empty()) {
      punishUrl = make_shared<string>(boost::any_cast<string>(m["PunishUrl"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("SourceCode") != m.end() && !m["SourceCode"].empty()) {
      sourceCode = make_shared<string>(boost::any_cast<string>(m["SourceCode"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~SearchPunishRequestResponseBodyDataList() = default;
};
class SearchPunishRequestResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> class_{};
  shared_ptr<string> code{};
  shared_ptr<long> count{};
  shared_ptr<vector<SearchPunishRequestResponseBodyDataList>> dataList{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> viewCount{};

  SearchPunishRequestResponseBody() {}

  explicit SearchPunishRequestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataList"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (viewCount) {
      res["ViewCount"] = boost::any(*viewCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("DataList") != m.end() && !m["DataList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataList"].type()) {
        vector<SearchPunishRequestResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchPunishRequestResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<SearchPunishRequestResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("ViewCount") != m.end() && !m["ViewCount"].empty()) {
      viewCount = make_shared<long>(boost::any_cast<long>(m["ViewCount"]));
    }
  }


  virtual ~SearchPunishRequestResponseBody() = default;
};
class SearchPunishRequestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchPunishRequestResponseBody> body{};

  SearchPunishRequestResponse() {}

  explicit SearchPunishRequestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchPunishRequestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchPunishRequestResponseBody>(model1);
      }
    }
  }


  virtual ~SearchPunishRequestResponse() = default;
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
  BusinessResultServiceResponse businessResultServiceWithOptions(shared_ptr<BusinessResultServiceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BusinessResultServiceResponse businessResultService(shared_ptr<BusinessResultServiceRequest> request);
  CreateUserInvestigationInfoQueryTaskResponse createUserInvestigationInfoQueryTaskWithOptions(shared_ptr<CreateUserInvestigationInfoQueryTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUserInvestigationInfoQueryTaskResponse createUserInvestigationInfoQueryTask(shared_ptr<CreateUserInvestigationInfoQueryTaskRequest> request);
  FindInstanceInfoResponse findInstanceInfoWithOptions(shared_ptr<FindInstanceInfoRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FindInstanceInfoResponse findInstanceInfo(shared_ptr<FindInstanceInfoRequest> request);
  FindUserAvailbleResourcesResponse findUserAvailbleResourcesWithOptions(shared_ptr<FindUserAvailbleResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FindUserAvailbleResourcesResponse findUserAvailbleResources(shared_ptr<FindUserAvailbleResourcesRequest> request);
  PunishResourceSearchResponse punishResourceSearchWithOptions(shared_ptr<PunishResourceSearchRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PunishResourceSearchResponse punishResourceSearch(shared_ptr<PunishResourceSearchRequest> request);
  RiskEventSyncResponse riskEventSyncWithOptions(shared_ptr<RiskEventSyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RiskEventSyncResponse riskEventSync(shared_ptr<RiskEventSyncRequest> request);
  SearchPunishEventsResponse searchPunishEventsWithOptions(shared_ptr<SearchPunishEventsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchPunishEventsResponse searchPunishEvents(shared_ptr<SearchPunishEventsRequest> request);
  SearchPunishRecordsResponse searchPunishRecordsWithOptions(shared_ptr<SearchPunishRecordsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchPunishRecordsResponse searchPunishRecords(shared_ptr<SearchPunishRecordsRequest> request);
  SearchPunishRequestResponse searchPunishRequestWithOptions(shared_ptr<SearchPunishRequestRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchPunishRequestResponse searchPunishRequest(shared_ptr<SearchPunishRequestRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Buss20220822

#endif
